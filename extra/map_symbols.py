# WARNING: This code is slow and messy. It is not meant to be re-used.

import re
import json
import os
import ctypes
from recordclass import recordclass
from collections import defaultdict, OrderedDict

from binaryninja.binaryview import *
from binaryninja.architecture import *
from binaryninja.demangle import *
from binaryninja.enums import *
from binaryninja.types import *

UnDecorateSymbolName = ctypes.windll.dbghelp.UnDecorateSymbolName
UnDecorateSymbolName.argtypes = [ctypes.c_char_p, ctypes.c_char_p, ctypes.c_uint, ctypes.c_uint]

MapSymbol = recordclass('MapSymbol', 'address lib path name type parts attribs raw_name')

def demangle(symbol):
    result = ctypes.create_string_buffer(1024)

    if not UnDecorateSymbolName(symbol.encode('ascii'), result, ctypes.sizeof(result), 0):
        return None

    result = result.value.decode('ascii')

    if symbol == result:
        return None

    result = result.replace(')const ', ') const')

    return result


type_class_to_str = {
    NamedTypeReferenceClass.ClassNamedTypeClass: 'class',
    NamedTypeReferenceClass.StructNamedTypeClass: 'struct',
    NamedTypeReferenceClass.EnumNamedTypeClass: 'enum',
    NamedTypeReferenceClass.UnionNamedTypeClass: 'union',
}

type_str_to_class = {
    'class': NamedTypeReferenceClass.ClassNamedTypeClass,
    'struct': NamedTypeReferenceClass.StructNamedTypeClass,
    'enum': NamedTypeReferenceClass.EnumNamedTypeClass,
    'union': NamedTypeReferenceClass.UnionNamedTypeClass,
}

def process_msvc_attribs(raw_type):
    tokens_before = [str(v) for v in raw_type.get_tokens_before_name()]

    attribs = set()

    if 'static' in tokens_before:
        attribs.add('static')

    if 'virtual' in tokens_before:
        attribs.add('virtual')

    if 'public' in tokens_before:
        attribs.add('public')
    elif 'protected' in tokens_before:
        attribs.add('protected')
    elif 'private' in tokens_before:
        attribs.add('private')

    return attribs

def process_msvc_func(symbol, name_to_type):
    raw_type = symbol.type
    name_parts = symbol.parts

    arch = Architecture['x86']

    parameters = [v.type for v in raw_type.parameters if v.type.type_class != TypeClass.VoidTypeClass]
    return_type = raw_type.return_value

    tokens_before = [str(v) for v in raw_type.get_tokens_before_name()]

    convention = 'cdecl'

    attribs = symbol.attribs

    if '__cdecl' in tokens_before:
        convention = 'cdecl'
    elif '__stdcall' in tokens_before:
        convention = 'stdcall'
    elif '__thiscall' in tokens_before:
        convention = 'thiscall'

    if (convention == 'thiscall') and len(name_parts) >= 2:
        type_name = '::'.join(name_parts[:-1])

        if type_name not in name_to_type:
            name_to_type[type_name] = 'struct'

        type_class = type_str_to_class[name_to_type[type_name]]
        this_type = Type.pointer(arch, Type.named_type(NamedTypeReference(type_class, name = type_name)))

        # TODO: Yes? No?
        # parameters.insert(0, this_type)

        if 'static' not in attribs:
            attribs.add('member')

            if name_parts[-1] == name_parts[-2]:
                attribs.add('ctor')
                return_type = Type.void()
            elif name_parts[-1] in ['`vector deleting destructor\'', '`scalar deleting destructor\'']:
                attribs.add('dtor')
                symbol.name = '~' + name_parts[-2]
                symbol.parts[-1] = symbol.name
                return_type = Type.void()
            elif name_parts[-1] == ('~' + name_parts[-2]):
                attribs.add('dtor')

    symbol.type = Type.function(return_type, parameters, arch.calling_conventions[convention], raw_type.has_variable_arguments)

BAD_LIB_PREFIXES = [
    'LIBCMTD',
    'LIBCD',
    'dinput',
    'dxguid',
    'uuid',
    '__imp__',
    '<common>'
]

IDC_REGEX = re.compile(r'set_name\t\(0X([0-9A-F]+),\t"(.+)"\);')

def idc_to_symbols(idc_lines):
    results = { }

    for line in idc_lines:
        result = IDC_REGEX.match(line.strip())

        if result is None:
            continue

        addr = result[1]
        name = result[2]

        results[name] = int(addr, 16)

    return results

MAP_REGEX = re.compile(r'[0-9a-fA-F]+:[0-9a-fA-F]+\s+(\S+)\s+([0-9a-fA-F]+).* (\S+)')

def map_to_symbols(map_lines, sym_addrs = None):
    results = { }

    for line in map_lines:
        result = MAP_REGEX.match(line.strip())

        if result is None:
            continue

        sym_name = result[1]
        sym_addr = result[2]
        lib_name = result[3]

        sym_addr = int(sym_addr, 16)

        if sym_name not in ['__purecall']:
            if any(prefix for prefix in BAD_LIB_PREFIXES if lib_name.startswith(prefix)):
                continue

            if lib_name.endswith('.dll') \
            or sym_name.startswith('__') \
            or sym_name.startswith('??_C@') \
            or sym_name.startswith('_$E'):
                continue

        if lib_name.endswith('.obj'):
            lib_name = lib_name[:-4]

        if sym_addrs is not None:
            sym_addr = sym_addrs[sym_name] if sym_name in sym_addrs else None

        if lib_name not in results:
            results[lib_name] = [ ]

        results[lib_name].append((sym_name, sym_addr))

    return results


def collect_symbols(view, libs):
    all_symbols = {}

    # Collect all the symbols
    for lib, symbols in libs.items():
        for sym_name, sym_addr in symbols:
            if sym_name.startswith('??_7') and not sym_name.endswith('@@6B@'): # Skip buggy vtables
                continue

            sym_type, name_parts = demangle_ms(view.arch, sym_name)

            if sym_type is None:
                sym_type = Type.void()

            if isinstance(name_parts, str):
                name_parts = [name_parts]

            all_symbols[sym_addr] = MapSymbol(sym_addr, lib, '::'.join(name_parts[:-1]), name_parts[-1], sym_type, name_parts, None, sym_name)

    return all_symbols


def collect_types(symbols):
    pending_types = [v.type for v in symbols.values() if v.type is not None]

    name_to_type = dict()

    while pending_types:
        current_type = pending_types.pop()
        type_class = current_type.type_class

        if type_class == TypeClass.FunctionTypeClass:
            pending_types.append(current_type.return_value)
            pending_types.extend((v.type for v in current_type.parameters))
        elif type_class == TypeClass.PointerTypeClass:
            pending_types.append(current_type.target)
        elif type_class == TypeClass.NamedTypeReferenceClass:
            named_type = current_type.named_type_reference
            named_type_class = named_type.type_class

            if named_type_class in type_class_to_str:
                name_to_type[named_type.name] = type_class_to_str[named_type_class]

    return name_to_type

def collect_types_2(name_to_type, symbols):
    name_to_type = dict()

    for symbol in symbols.values():
        if symbol.path in name_to_type:
            continue

        if ('ctor' in symbol.attribs) or ('dtor' in symbol.attribs) or ('member' in symbol.attribs):
            name_to_type[symbol.path] = 'struct'

def process_types(symbols, name_to_type):
    for symbol in symbols.values():
        symbol.attribs = process_msvc_attribs(symbol.type)

        if symbol.type.type_class == TypeClass.FunctionTypeClass:
            try:
                process_msvc_func(symbol, name_to_type)
            except:
                raise
                print('Invalid Symbol: {} ({})'.format(symbol.raw_name, demangle(symbol.raw_name)))
                continue

def group_stray_symbols(symbols):
    path_libs = defaultdict(lambda: defaultdict(lambda: 0))

    for symbol in symbols.values():
        if 'purevirt' not in symbol.lib:
            path_libs[symbol.path][symbol.lib] += 1

    path_libs = dict((k, max(v.items(), key = lambda x: x[1])[0]) for k, v in path_libs.items())

    # Group Stray Symbols
    for symbol in symbols.values():
        if symbol.path != '':
            symbol.lib = path_libs[symbol.path]

    return path_libs


def collect_vtables(view, symbols):
    vtable_symbols = [x for x in symbols.values() if x.name == '`vftable\'']
    reader = BinaryReader(view)

    vtables = dict()

    for vtable in vtable_symbols:
        reader.seek(vtable.address)

        funcs = []

        while len(funcs) < 128:
            if funcs and (view.get_code_refs(reader.offset) or view.get_data_refs(reader.offset)):
                break

            vfunc = reader.read32()

            if not view.is_offset_executable(vfunc):
                break

            assert (vfunc in symbols), 'Invalid Symbol: 0x{:X}'.format(vfunc)

            vfunc = symbols[vfunc]
            vfunc.attribs.add('virtual')

            if ('dtor' in vfunc.attribs) and vfunc.type.parameters:
                real_dtor = next((v for v in symbols.values() if (v.parts == vfunc.parts) and not v.type.parameters), None)

                if real_dtor is not None:
                    vfunc = real_dtor

            funcs.append(vfunc)

        if funcs:
            vtables[vtable.path] = funcs
        else:
            print('Bad vtable: {}'.format(vtable))

    return vtables

def collect_vtable_hierarchy(class_hier, vtables):
    for v, funcs in vtables.items():
        class_hier[v].update(set(a.path for a in funcs if a.path))

def collect_constructor_hierarchy(class_hier, view, symbols):
    for symbol in symbols.values():
        if ('ctor' not in symbol.attribs) and ('dtor' not in symbol.attribs):
            continue

        func = view.get_function_at(symbol.address)

        if func is None:
            print('No Func for {}'.format(symbol))
            continue

        mlil = func.medium_level_il

        for block in mlil:
            for insn in block:
                if insn.operation == MediumLevelILOperation.MLIL_CALL:
                    params = insn.params

                    if not params:
                        continue

                    this_param = params[0].value

                    if this_param.type != RegisterValueType.EntryValue:
                        continue

                    if this_param.reg != 'ecx':
                        continue

                    call_dest = insn.dest.value.value

                    if call_dest not in symbols:
                        continue

                    call_symbol = symbols[call_dest]

                    if 'ctor' in symbol.attribs:
                        if 'ctor' not in call_symbol.attribs:
                            continue
                    elif 'dtor' in symbol.attribs:
                        if 'dtor' not in call_symbol.attribs:
                            continue
                    else:
                        continue # ???

                    class_hier[symbol.path].add(call_symbol.path)
                elif insn.operation == MediumLevelILOperation.MLIL_STORE:
                    store_dest = insn.dest.value

                    if store_dest.type != RegisterValueType.EntryValue:
                        continue

                    if store_dest.reg != 'ecx':
                        continue

                    store_src = insn.src

                    if store_src.operation not in [MediumLevelILOperation.MLIL_CONST, MediumLevelILOperation.MLIL_CONST_PTR]:
                        continue

                    store_src = store_src.value.value

                    if store_src not in symbols:
                        continue

                    store_src_sym = symbols[store_src]

                    if store_src_sym.name != '`vftable\'':
                        continue

                    class_hier[symbol.path].add(store_src_sym.path)

def compute_hierarchy(raw_hierarchy, extra, ignored):
    raw_hierarchy = dict((a, set(v for v in b if v not in ignored)) for a, b in raw_hierarchy.items())

    done = OrderedDict({'': set()})
    pending = list(raw_hierarchy.keys())

    while pending:
        class_name = pending.pop()

        if class_name in done:
            continue

        parents = raw_hierarchy[class_name]

        uniques = set(v for v in parents if (v != class_name) and (v not in done))

        if uniques:
            pending.append(class_name)
            pending.extend(list(uniques))
            continue

        uniques = set(v for v in parents if (v != class_name) and (v not in ignored))
        uniques.update(set(r for v in uniques for r in done[v]))

        if class_name in extra:
            uniques.update(set(extra[class_name]))

        done[class_name] = uniques

    for key, vvv in reversed(done.items()):
        new_parents = list(v for v in vvv if all(v not in done[q] for q in vvv))
        # assert len(new_parents) <= 1
        done[key] = new_parents

    return dict(done)

def backport_vtable_purecalls(vtables, hiers):
    changed = True

    for hier in hiers:
        if hier not in vtables:
            vtables[hier] = []

    while changed:
        changed = False

        for name, funcs in vtables.items():
            hier = hiers[name]

            if len(hier) != 1:
                continue

            hier = hier[0]
            hier_parts = hier.split('::')

            if hier not in vtables:
                vtables[hier] = []

            hier_funcs = vtables[hier]

            # assert len(funcs) >= len(hier_funcs)

            for i in range(len(hier_funcs)):
                if hier_funcs[i].name != '__purecall':
                    continue

                if funcs[i].name == '__purecall':
                    continue

                # MapSymbol = recordclass('MapSymbol', 'address lib path name type parts attribs raw_name')

                hier_func = hier_funcs[i]
                hier_funcs[i] = MapSymbol(hier_func.address, hier_func.lib, hier, funcs[i].name, funcs[i].type, hier_parts + [funcs[i].name], set(funcs[i].attribs), '__purecall')
                hier_funcs[i].attribs.add('virtual')

                changed = True

    for class_name, vfuncs in vtables.items():
        hier = hiers[class_name]

        if len(hier) != 1:
            continue

        hier = hier[0]
        hier_funcs = vtables[hier]

        for i, vfunc in enumerate(vfuncs):
            if (not vfunc.path) or (vfunc.path == class_name):
                if i >= len(hier_funcs):
                    if vfunc.name == '__purecall':
                        vfunc.name = 'VirtualFunc{}'.format(i)
                        vfunc.parts[-1] = vfunc.name
                else:
                    vfunc.attribs.add('override')

MapClass = recordclass('MapClass', 'lib path name funcs vfuncs smembers')

def sym_str(sym_name, sym_type):
    return (sym_type.get_string_before_name() + ' ' + sym_name + ' ' + sym_type.get_string_after_name()).strip()

def params_to_str(params):
    return ', '.join(sym_str('arg{}'.format(i + 1), v.type) for i, v in enumerate(params))

def type_to_str(ty):
    return str(ty).replace('public: ', '').replace('protected: ', '').replace('private: ', '').replace('static ', '')

def sym_to_str(symbol):
    prefix = []
    suffix = []

    if 'static' in symbol.attribs:
        prefix.append('static')

    if 'override' in symbol.attribs:
        suffix.append('override')
    elif 'virtual' in symbol.attribs:
        prefix.append('virtual')

    prefix.append('inline')

    if prefix:
        prefix = ' '.join(prefix) + ' '
    else:
        prefix = ''

    if suffix:
        suffix = ' ' + ' '.join(suffix)
    else:
        suffix = ''

    type_string = 'INVALID'

    if 'ctor' in symbol.attribs:
        type_string = '{}({})'.format(symbol.parts[-2], params_to_str(symbol.type.parameters))
    elif 'dtor' in symbol.attribs:
        type_string = '~{}()'.format(symbol.parts[-2])
    elif symbol.type.type_class == TypeClass.FunctionTypeClass:
        cc_name = symbol.type.calling_convention.name

        if cc_name in ['thiscall', 'cdecl']:
            cc_name = ''
        else:
            cc_name = '__' + cc_name + ' '

        type_string = '{} {}{}({})'.format(symbol.type.return_value, cc_name, symbol.name, params_to_str(symbol.type.parameters))
    else:
        type_string = '{} {}'.format(symbol.type, symbol.name)

    type_string = type_string.replace('public: ', '').replace('protected: ', '').replace('private: ', '').replace('static ', '')

    return prefix + type_string + suffix

def sym_to_stub(symbol):
    params = []
    param_ts = []

    params.append('0x{:X}'.format(symbol.address))

    param_ts.append(str(symbol.type.return_value))

    if 'member' in symbol.attribs:
        sym_cc = 'member_func_t'
        params.append('this')
        param_ts.append(symbol.parts[-2])

    else:
        sym_cc = symbol.type.calling_convention.name + '_t'

    parameters = symbol.type.parameters

    if 'dtor' not in symbol.attribs:
        for i, v in enumerate(parameters):
            params.append('arg{}'.format(i + 1))
            param_ts.append(str(v))

    return 'stub<{}<{}>>({})'.format(sym_cc, ', '.join(param_ts), ', '.join(params))

def sym_to_extern_var(symbol):
    prefix = ''

    if 'static' in symbol.attribs:
        prefix += 'static '

    prefix += 'inline '

    return prefix + 'extern_var(0x{:X}, {}, {});'.format(symbol.address or 0, type_to_str(symbol.type), symbol.name)

'''
def collect_class_syms(class_name, all_symbols, vtables):
    class_syms = []

    class_vtable = vtables.get(class_name, [])

    if class_vtable:
        for vfunc in class_vtable:
            if (not vfunc.path) or (vfunc.path == class_name):
                class_syms.append(vfunc)

    for sym in all_symbols.values():
        if (sym.path == class_name):
            if not any((v.raw_name == sym.raw_name for v in class_syms)):
                class_syms.append(sym)

    return class_syms
'''

def collect_class_syms(class_name, all_symbols, vtables):
    class_syms = [v for v in all_symbols.values() if (v.path == class_name) and ('virtual' not in v.attribs)]

    class_vtable = vtables.get(class_name, [])

    if class_vtable:
        for vfunc in class_vtable:
            if (not vfunc.path) or (vfunc.path == class_name):
                class_syms.append(vfunc)

    return class_syms

def collect_classes(all_symbols, name_to_type, vtables, class_hiers, path_libs, function_libs):
    all_paths = dict()

    for class_name, class_type in name_to_type.items():
        all_paths[class_name] = class_type

    for lib in function_libs:
        if lib not in all_paths:
            all_paths[lib] = 'namespace'

    results = defaultdict(str)

    for class_name, class_type in all_paths.items():
        is_class = class_name and class_type in ['class', 'struct']

        class_syms = collect_class_syms(class_name, all_symbols, vtables)

        if not class_syms:
            # print('{} {};'.format(class_type, class_name))
            continue

        class_vtable = vtables.get(class_name, [])
        class_hier = class_hiers.get(class_name, [])

        class_string = ''

        class_string += '{} {}\n'.format(class_type, class_name)

        if class_hier:
            class_string += ': {}\n'.format(', '.join(class_hier))

        class_string += '{\n'

        if class_syms:
            class_string += 'public:\n'

        vtable_addr = next((v for v in class_syms if v.name == '`vftable\''), None)

        if vtable_addr is not None:
            class_string += '// {} @ 0x{:X}\n'.format('::'.join(vtable_addr.parts[-2:]), vtable_addr.address)
            class_string += '\n'

        for symbol in class_syms:

            symbol_string = ''

            if is_class:
                if 'static' not in symbol.attribs:
                    symbol.attribs.add('member')

            if symbol.name in ['`vftable\'', '`default constructor closure\'', '`vector constructor iterator\'']:
                continue

            if ('override' in symbol.attribs and symbol.raw_name == '__purecall'):
                continue

            symbol_string += '// 0x{:X} | {}\n'.format(symbol.address or 0, symbol.raw_name)

            sym_type = symbol.type

            if sym_type.type_class == TypeClass.FunctionTypeClass:
                if sym_type.has_variable_arguments:
                    symbol_string += '// Skipped (Variable Arguments)\n'
                elif ('dtor' in symbol.attribs) and sym_type.parameters:
                    symbol_string += '// Skipped (scalar/vector destructor)\n'
                else:
                    # if 'virtual' in symbol.attribs:
                    #     if not any(v for v in class_vtable if v.raw_name == symbol.raw_name):
                    #         symbol_string += '// Warning: Unordered virtual function\n'

                    should_return = True

                    if ('ctor' in symbol.attribs) or ('dtor' in symbol.attribs):
                        should_return = False

                    symbol_string += '{}\n'.format(sym_to_str(symbol))
                    symbol_string += '{\n'
                    symbol_string += '    {} {};\n'.format('return' if should_return else '', sym_to_stub(symbol))
                    symbol_string += '}\n'

                    for a, b in [
                        ('int8_t', 'i8'),
                        ('int16_t', 'i16'),
                        ('int32_t', 'i32'),
                        ('int64_t', 'i64'),

                        ('uint8_t', 'u8'),
                        ('uint16_t', 'u16'),
                        ('uint32_t', 'u32'),
                        ('uint64_t', 'u64'),

                        ('float', 'f32'),
                        ('double', 'f64'),
                    ]:
                        symbol_string = re.sub('\\b' + a + '\\b', b, symbol_string)
            elif sym_type.type_class != TypeClass.VoidTypeClass:
                symbol_string += '{}\n'.format(sym_to_extern_var(symbol))
            else:
                print('Void Symbol: {}'.format(symbol))

            if is_class:
                class_string += symbol_string + '\n'
            else:
                results[symbol.lib] += symbol_string + '\n'

        class_string += '};\n'

        if is_class:
            results[path_libs[class_name]] += class_string + '\n'

    return results

'''
TODO:
    Classify paths as enum/class/struct/namespace based on demangling and attribs
    Map paths to libs based based on largest count
    Process vtables and sort virtual functions for each class
    Collect calls from constructors/destructors
    Backport vtable funcs/types where base type is a purecall
'''


map_lines = open('MM3366.MAP', 'r').readlines()
idc_lines = open('midtown2.idc', 'r', errors='replace').readlines()
only_update = True

function_libs = map_to_symbols(map_lines, idc_to_symbols(idc_lines))

function_libs['gizmo:bridge'].append(('?Draw@gizBridge@@UAEXH@Z', 0x578240))
function_libs['gizmo:bridge'].append(('?Cull@gizBridgeMgr@@UAEXXZ', 0x577FF0))

view = BinaryViewType.get_view_of_file('midtown2.bndb')
print('Got View', view)

all_symbols = collect_symbols(view, function_libs)
name_to_type = collect_types(all_symbols)

process_types(all_symbols, name_to_type)
path_libs = group_stray_symbols(all_symbols)

vtables = collect_vtables(view, all_symbols)

class_hiers = defaultdict(lambda: set())

collect_constructor_hierarchy(class_hiers, view, all_symbols)
collect_vtable_hierarchy(class_hiers, vtables)

class_hiers.update({
    'dgStatePack': [],
    'AudSpeech': [],
    'DMusicManager': [],
    'asCullable': ['Base'],
    'dgBangerInstance': ['asNode'],
    'lvlLevelBound': ['phBound'],
    'dgPhysEntity': ['Base'],
})

class_hiers = dict(class_hiers)

class_hiers = compute_hierarchy(class_hiers, {
}, {
    'Timer',
    'datCallback'
})

backport_vtable_purecalls(vtables, class_hiers)

collect_types_2(name_to_type, all_symbols)

all_files = {}

LICENSE_TXT = '''/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.
*/
'''

SOURCE_DIR = os.path.normpath(os.path.realpath('../src2'))

if True:
    libs_data = collect_classes(all_symbols, name_to_type, vtables, class_hiers, path_libs, function_libs)

    for lib, symbols in function_libs.items():
        if 'purevirt' in lib:
            continue

        lib_data = libs_data.get(lib, '')

        if not lib:
            lib = 'other'

        lib_path = lib.replace(':', '\\')
        output_dir = os.path.normpath(SOURCE_DIR + '\\' + lib_path)
        parent_dir = os.path.dirname(output_dir)

        if parent_dir not in all_files:
            lib_name = parent_dir[len(SOURCE_DIR) + 1:].replace(':', '/')
            all_files[parent_dir] = (lib_name, [ ])

        all_files[parent_dir][1].append(output_dir + '.cpp')
        all_files[parent_dir][1].append(output_dir + '.h')

        base_name = os.path.basename(output_dir)

        if lib in ['data7:printer', 'arts7:node', 'arts7:cullable']:
            continue

        if not os.path.exists(parent_dir):
            try:
                os.makedirs(parent_dir)
            except:
                pass

        with open(output_dir + '.h', 'w') as f:
            f.write(LICENSE_TXT)
            f.write('\n')
            f.write('#pragma once\n\n')

            sym_comment = ''

            sym_comment += '/*\n'
            sym_comment += '    ' + lib + '\n\n'

            for sym_name, sym_addr in symbols:
                sym_comment += '    '

                if sym_addr is not None:
                    sym_comment += '0x%06X | ' % (sym_addr)

                demangled = demangle(sym_name)

                if demangled is not None:
                    sym_comment += demangled + ' | '

                sym_comment += sym_name
                sym_comment += '\n'

            sym_comment += '*/\n\n'

            f.write(sym_comment)

            # f.write('#include "hooking.h"\n\n')
            f.write(lib_data)

        with open(output_dir + '.cpp', 'w') as f:
            f.write(LICENSE_TXT)
            f.write('\n')
            f.write('#include "{}.h"\n'.format(base_name))

    if False:
        for lib_dir, (lib_name, files) in all_files.items():
            with open(lib_dir + '\\CMakeLists.txt', 'w') as f:
                if lib_dir == SOURCE_DIR:
                    lib_name = 'midtown'

                    f.write('cmake_minimum_required(VERSION 3.10 FATAL_ERROR)\n\n')

                    for sub_dir, _ in sorted(all_files.items()):
                        if sub_dir != SOURCE_DIR:
                            f.write('# add_subdirectory(' + sub_dir[len(SOURCE_DIR) + 1:] + ')\n')
                    f.write('\n')

                    f.write('''add_library(hooking STATIC
        hooking.cpp
        hooking.h
    )
    target_link_libraries(hooking mem)
    ''')
                    f.write('\n')

                f.write('add_library(' + lib_name + ' OBJECT\n')

                for file in sorted(files):
                    file = file[len(lib_dir) + 1:].replace('\\', '/')

                    f.write('    # ' + file + '\n')

                if lib_dir == SOURCE_DIR:
                    f.write('\n')
                    for _, (obj_name, _) in sorted(all_files.items()):
                        if obj_name != '':
                            f.write('    # $<TARGET_OBJECTS:' + obj_name + '>\n')

                f.write(')\n')
                f.write('\n')
                f.write('target_link_libraries(' + lib_name + ' hooking)\n')
else:
    print('All Symbols')
    for symbol in all_symbols.values():
        print(symbol)

    print('Type Types')
    for a, b in name_to_type.items():
        print(b, a)

    print('Vtables')
    for a, b in vtables.items():
        print('class {}'.format(a))

        for v in class_hiers[a]:
            print(' : {}'.format(v))

        for c in b:
            # if class_hiers[a] and (c.raw_name == '__purecall'):
            #     continue

            # if (not c.path) or (c.path == a):
            print('0x{:X} | {}'.format(c.address, '::'.join(c.parts)))

        print('')

    print('Hierarchy')
    for a, b in class_hiers.items():
        print('{}: {}'.format(a, b))
