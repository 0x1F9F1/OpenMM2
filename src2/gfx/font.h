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
    gfx:font

    0x4B1090 | void __cdecl gfxDrawFont(class Vector4 const &,char const *,struct gfxFontInfo const &) | ?gfxDrawFont@@YAXABVVector4@@PBDABUgfxFontInfo@@@Z
    0x4B11C0 | void __cdecl gfxDrawFont(int,int,char const *,struct gfxFontInfo const &) | ?gfxDrawFont@@YAXHHPBDABUgfxFontInfo@@@Z
    0x4B1200 | void __cdecl gfxCreateFont(void) | ?gfxCreateFont@@YAXXZ
    0x4B1260 | int __cdecl gfxFontGetWidth(void) | ?gfxFontGetWidth@@YAHXZ
    0x4B1270 | int __cdecl gfxFontGetHeight(void) | ?gfxFontGetHeight@@YAHXZ
    0x4B1280 | void __cdecl gfxDrawFont(int,int,char const *) | ?gfxDrawFont@@YAXHHPBD@Z
    0x4B12D0 | void __cdecl gfxReleaseFont(void) | ?gfxReleaseFont@@YAXXZ
    0x4B1330 | void __cdecl gfxComputeFontExtents(int &,int &,char const *,struct gfxFontInfo const &) | ?gfxComputeFontExtents@@YAXAAH0PBDABUgfxFontInfo@@@Z
    0x5CD530 | struct gfxFontInfo SYSFONT | ?SYSFONT@@3UgfxFontInfo@@A
*/

// 0x4B1090 | ?gfxDrawFont@@YAXABVVector4@@PBDABUgfxFontInfo@@@Z
inline void gfxDrawFont(class Vector4 const& arg1, char const* arg2, struct gfxFontInfo const& arg3)
{
    return stub<cdecl_t<void, class Vector4 const&, char const*, struct gfxFontInfo const&>>(
        0x4B1090, arg1, arg2, arg3);
}

// 0x4B11C0 | ?gfxDrawFont@@YAXHHPBDABUgfxFontInfo@@@Z
inline void gfxDrawFont(i32 arg1, i32 arg2, char const* arg3, struct gfxFontInfo const& arg4)
{
    return stub<cdecl_t<void, i32, i32, char const*, struct gfxFontInfo const&>>(0x4B11C0, arg1, arg2, arg3, arg4);
}

// 0x4B1200 | ?gfxCreateFont@@YAXXZ
inline void gfxCreateFont()
{
    return stub<cdecl_t<void>>(0x4B1200);
}

// 0x4B1260 | ?gfxFontGetWidth@@YAHXZ
inline i32 gfxFontGetWidth()
{
    return stub<cdecl_t<i32>>(0x4B1260);
}

// 0x4B1270 | ?gfxFontGetHeight@@YAHXZ
inline i32 gfxFontGetHeight()
{
    return stub<cdecl_t<i32>>(0x4B1270);
}

// 0x4B1280 | ?gfxDrawFont@@YAXHHPBD@Z
inline void gfxDrawFont(i32 arg1, i32 arg2, char const* arg3)
{
    return stub<cdecl_t<void, i32, i32, char const*>>(0x4B1280, arg1, arg2, arg3);
}

// 0x4B12D0 | ?gfxReleaseFont@@YAXXZ
inline void gfxReleaseFont()
{
    return stub<cdecl_t<void>>(0x4B12D0);
}

// 0x4B1330 | ?gfxComputeFontExtents@@YAXAAH0PBDABUgfxFontInfo@@@Z
inline void gfxComputeFontExtents(i32& arg1, i32& arg2, char const* arg3, struct gfxFontInfo const& arg4)
{
    return stub<cdecl_t<void, i32&, i32&, char const*, struct gfxFontInfo const&>>(0x4B1330, arg1, arg2, arg3, arg4);
}

// 0x5CD530 | ?SYSFONT@@3UgfxFontInfo@@A
inline extern_var(0x5CD530, struct gfxFontInfo, SYSFONT);
