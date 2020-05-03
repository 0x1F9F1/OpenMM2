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

#include "font.h"

void gfxComputeFontExtents(i32& arg1, i32& arg2, char const* arg3, struct gfxFontInfo const& arg4)
{
    return stub<cdecl_t<void, i32&, i32&, char const*, struct gfxFontInfo const&>>(0x4B1330, arg1, arg2, arg3, arg4);
}

void gfxCreateFont()
{
    return stub<cdecl_t<void>>(0x4B1200);
}

void gfxDrawFont(class Vector4 const& arg1, char const* arg2, struct gfxFontInfo const& arg3)
{
    return stub<cdecl_t<void, class Vector4 const&, char const*, struct gfxFontInfo const&>>(
        0x4B1090, arg1, arg2, arg3);
}

void gfxDrawFont(i32 arg1, i32 arg2, char const* arg3)
{
    return stub<cdecl_t<void, i32, i32, char const*>>(0x4B1280, arg1, arg2, arg3);
}

void gfxDrawFont(i32 arg1, i32 arg2, char const* arg3, struct gfxFontInfo const& arg4)
{
    return stub<cdecl_t<void, i32, i32, char const*, struct gfxFontInfo const&>>(0x4B11C0, arg1, arg2, arg3, arg4);
}

i32 gfxFontGetHeight()
{
    return stub<cdecl_t<i32>>(0x4B1270);
}

i32 gfxFontGetWidth()
{
    return stub<cdecl_t<i32>>(0x4B1260);
}

void gfxReleaseFont()
{
    return stub<cdecl_t<void>>(0x4B12D0);
}

define_dummy_symbol(gfx_font);
