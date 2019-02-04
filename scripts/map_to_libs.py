import re
import json
import os
import ctypes

SOURCE_DIR = os.path.normpath(os.path.realpath('../src'))

UnDecorateSymbolName = ctypes.windll.dbghelp.UnDecorateSymbolName
UnDecorateSymbolName.argtypes = [ctypes.c_char_p, ctypes.c_char_p, ctypes.c_uint, ctypes.c_uint]

def demangle(symbol):
    result = ctypes.create_string_buffer(1024)

    if not UnDecorateSymbolName(symbol.encode('ascii'), result, ctypes.sizeof(result), 0):
        return None

    result = result.value.decode('ascii')

    if symbol == result:
        return None

    result = result.replace(')const ', ') const')

    return result

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

BAD_LIB_PREFIXES = [
    'LIBCMTD',
    'LIBCD',
    'dinput',
    'dxguid',
    'uuid',
    '__imp__',
    '<common>'
]

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

all_files = { }

LICENSE_TXT = '''/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2019 Brick

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

def process_lib(lib, symbols, only_update):
    lib_path = lib.replace(':', '\\')
    output_dir = os.path.normpath(SOURCE_DIR + '\\' + lib_path)
    parent_dir = os.path.dirname(output_dir)

    base_name = os.path.basename(output_dir)

    if not os.path.exists(parent_dir):
        try:
            os.makedirs(parent_dir)
        except:
            pass

    sym_comment = ''

    if len(symbols):
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

        sym_comment += '*/'

    if only_update:
        if sym_comment:
            try:
                with open(output_dir + '.h', 'r') as f:
                    old_data = f.read()

                new_data = re.sub(r'\/\*\n    %s.+?\*\/' % (lib), sym_comment, old_data, count = 1, flags = re.DOTALL)

                if old_data != new_data:
                    with open(output_dir + '.h', 'w') as f:
                        f.write(new_data)
            except:
                print('Skipping ' + lib)
    else:
        with open(output_dir + '.h', 'w') as f:
            f.write(LICENSE_TXT)
            f.write('\n')
            f.write('#pragma once\n\n')

            if sym_comment:
                f.write(sym_comment)
                f.write('\n')

            f.write('\n')

            f.write('#include "hooking.h"\n')

            # f.write('namespace age\n{\n\n}\n')

        with open(output_dir + '.cpp', 'w') as f:
            f.write(LICENSE_TXT)
            f.write('\n')
            f.write('#include "' + base_name + '.h"\n')

    if parent_dir not in all_files:
        lib_name = parent_dir[len(SOURCE_DIR) + 1:].replace(':', '/')
        all_files[parent_dir] = (lib_name, [ ])

    all_files[parent_dir][1].append(output_dir + '.cpp')
    all_files[parent_dir][1].append(output_dir + '.h')

map_lines = open('../extra/MM3366.MAP', 'r').readlines()
idc_lines = open('midtown2.idc', 'r', errors='replace').readlines()
only_update = True

function_libs = map_to_symbols(map_lines, idc_to_symbols(idc_lines))

for lib, symbols in function_libs.items():
    print(lib, '-', len(symbols))
    process_lib(lib, symbols, only_update)

if not only_update:
    for lib_dir, (lib_name, files) in all_files.items():
        with open(lib_dir + '\\CMakeLists.txt', 'w') as f:
            if lib_dir == SOURCE_DIR:
                lib_name = 'testgame'

                f.write('cmake_minimum_required(VERSION 3.10 FATAL_ERROR)\n\n')

                for sub_dir, _ in sorted(all_files.items()):
                    if sub_dir != SOURCE_DIR:
                        f.write('add_subdirectory(' + sub_dir[len(SOURCE_DIR) + 1:] + ')\n')
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

                f.write('    ' + file + '\n')

            if lib_dir == SOURCE_DIR:
                f.write('\n')
                for _, (obj_name, _) in sorted(all_files.items()):
                    if obj_name != '':
                        f.write('    $<TARGET_OBJECTS:' + obj_name + '>\n')

            f.write(')\n')

            f.write('\n')

            f.write('target_link_libraries(' + lib_name  + ' hooking)\n')
