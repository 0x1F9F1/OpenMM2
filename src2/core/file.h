/*
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

#pragma once

/*
    core:file

    0x4CA1B0 | int __cdecl coreRawOpenFile(char const *,bool) | ?coreRawOpenFile@@YAHPBD_N@Z
    0x4CA1F0 | int __cdecl coreRawCreateFile(char const *) | ?coreRawCreateFile@@YAHPBD@Z
    0x4CA220 | int __cdecl coreRawSeekFile(int,int,enum seekWhence) | ?coreRawSeekFile@@YAHHHW4seekWhence@@@Z
    0x4CA240 | int __cdecl coreRawWriteFile(int,void const *,int) | ?coreRawWriteFile@@YAHHPBXH@Z
    0x4CA270 | int __cdecl coreRawReadFile(int,void *,int) | ?coreRawReadFile@@YAHHPAXH@Z
    0x4CA2A0 | int __cdecl coreRawCloseFile(int) | ?coreRawCloseFile@@YAHH@Z
    0x4CA2C0 | int __cdecl coreRawEnumFiles(char const *,void (__cdecl*)(char const *,bool,void *),void *) | ?coreRawEnumFiles@@YAHPBDP6AX0_NPAX@Z2@Z
    0x5CEE28 | struct coreFileMethods coreFileStandard | ?coreFileStandard@@3UcoreFileMethods@@A
*/

// 0x4CA1B0 | ?coreRawOpenFile@@YAHPBD_N@Z
inline int32_t coreRawOpenFile(char const* arg1, bool arg2)
{
    return stub<cdecl_t<int32_t, char const*, bool>>(0x4CA1B0, arg1, arg2);
}

// 0x4CA1F0 | ?coreRawCreateFile@@YAHPBD@Z
inline int32_t coreRawCreateFile(char const* arg1)
{
    return stub<cdecl_t<int32_t, char const*>>(0x4CA1F0, arg1);
}

// 0x4CA220 | ?coreRawSeekFile@@YAHHHW4seekWhence@@@Z
inline int32_t coreRawSeekFile(int32_t arg1, int32_t arg2, enum seekWhence arg3)
{
    return stub<cdecl_t<int32_t, int32_t, int32_t, enum seekWhence>>(0x4CA220, arg1, arg2, arg3);
}

// 0x4CA240 | ?coreRawWriteFile@@YAHHPBXH@Z
inline int32_t coreRawWriteFile(int32_t arg1, void const* arg2, int32_t arg3)
{
    return stub<cdecl_t<int32_t, int32_t, void const*, int32_t>>(0x4CA240, arg1, arg2, arg3);
}

// 0x4CA270 | ?coreRawReadFile@@YAHHPAXH@Z
inline int32_t coreRawReadFile(int32_t arg1, void* arg2, int32_t arg3)
{
    return stub<cdecl_t<int32_t, int32_t, void*, int32_t>>(0x4CA270, arg1, arg2, arg3);
}

// 0x4CA2A0 | ?coreRawCloseFile@@YAHH@Z
inline int32_t coreRawCloseFile(int32_t arg1)
{
    return stub<cdecl_t<int32_t, int32_t>>(0x4CA2A0, arg1);
}

// 0x4CA2C0 | ?coreRawEnumFiles@@YAHPBDP6AX0_NPAX@Z2@Z
inline int32_t coreRawEnumFiles(char const* arg1, void(__cdecl* arg2)(char const*, bool, void*), void* arg3)
{
    return stub<cdecl_t<int32_t, char const*, void(__cdecl*)(char const*, bool, void*), void*>>(
        0x4CA2C0, arg1, arg2, arg3);
}

// 0x5CEE28 | ?coreFileStandard@@3UcoreFileMethods@@A
inline extern_var(0x5CEE28, struct coreFileMethods, coreFileStandard);
