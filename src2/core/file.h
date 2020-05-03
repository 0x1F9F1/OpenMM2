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

// 0x4CA2A0 | ?coreRawCloseFile@@YAHH@Z
i32 coreRawCloseFile(i32 arg1);

// 0x4CA1F0 | ?coreRawCreateFile@@YAHPBD@Z
i32 coreRawCreateFile(char const* arg1);

// 0x4CA2C0 | ?coreRawEnumFiles@@YAHPBDP6AX0_NPAX@Z2@Z
i32 coreRawEnumFiles(char const* arg1, void (*arg2)(char const*, bool, void*), void* arg3);

// 0x4CA1B0 | ?coreRawOpenFile@@YAHPBD_N@Z
i32 coreRawOpenFile(char const* arg1, bool arg2);

// 0x4CA270 | ?coreRawReadFile@@YAHHPAXH@Z
i32 coreRawReadFile(i32 arg1, void* arg2, i32 arg3);

// 0x4CA220 | ?coreRawSeekFile@@YAHHHW4seekWhence@@@Z
i32 coreRawSeekFile(i32 arg1, i32 arg2, enum seekWhence arg3);

// 0x4CA240 | ?coreRawWriteFile@@YAHHPBXH@Z
i32 coreRawWriteFile(i32 arg1, void const* arg2, i32 arg3);

// 0x5CEE28 | ?coreFileStandard@@3UcoreFileMethods@@A
inline extern_var(0x5CEE28, struct coreFileMethods, coreFileStandard);
