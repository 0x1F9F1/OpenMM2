/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 Brick

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

#include "file.h"

i32 coreRawCloseFile(i32 arg1)
{
    return stub<cdecl_t<i32, i32>>(0x4CA2A0, arg1);
}

i32 coreRawCreateFile(char const* arg1)
{
    return stub<cdecl_t<i32, char const*>>(0x4CA1F0, arg1);
}

i32 coreRawEnumFiles(char const* arg1, void (*arg2)(char const*, bool, void*), void* arg3)
{
    return stub<cdecl_t<i32, char const*, void (*)(char const*, bool, void*), void*>>(0x4CA2C0, arg1, arg2, arg3);
}

i32 coreRawOpenFile(char const* arg1, bool arg2)
{
    return stub<cdecl_t<i32, char const*, bool>>(0x4CA1B0, arg1, arg2);
}

i32 coreRawReadFile(i32 arg1, void* arg2, i32 arg3)
{
    return stub<cdecl_t<i32, i32, void*, i32>>(0x4CA270, arg1, arg2, arg3);
}

i32 coreRawSeekFile(i32 arg1, i32 arg2, enum seekWhence arg3)
{
    return stub<cdecl_t<i32, i32, i32, enum seekWhence>>(0x4CA220, arg1, arg2, arg3);
}

i32 coreRawWriteFile(i32 arg1, void const* arg2, i32 arg3)
{
    return stub<cdecl_t<i32, i32, void const*, i32>>(0x4CA240, arg1, arg2, arg3);
}

define_dummy_symbol(core_file);
