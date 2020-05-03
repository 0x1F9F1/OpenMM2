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
    djpeg:loadimg

    0x497B70 | void __cdecl InstallJPEGSupport(void) | ?InstallJPEGSupport@@YAXXZ
    0x497BC0 | void __cdecl UnInstallJPEGSupport(void) | ?UnInstallJPEGSupport@@YAXXZ
    0x497BE0 | class gfxImage * __cdecl gfxLoadJPEGImage(char const *,bool) | ?gfxLoadJPEGImage@@YAPAVgfxImage@@PBD_N@Z
*/

// 0x497B70 | ?InstallJPEGSupport@@YAXXZ
void InstallJPEGSupport();

// 0x497BC0 | ?UnInstallJPEGSupport@@YAXXZ
void UnInstallJPEGSupport();

// 0x497BE0 | ?gfxLoadJPEGImage@@YAPAVgfxImage@@PBD_N@Z
class gfxImage* gfxLoadJPEGImage(char const* arg1, bool arg2);
