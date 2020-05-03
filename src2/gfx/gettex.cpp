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

#include "gettex.h"

void gfxAnnotateImage(class gfxImage* arg1, char const* arg2)
{
    return stub<cdecl_t<void, class gfxImage*, char const*>>(0x4B30A0, arg1, arg2);
}

class gfxImage* gfxDefaultPrepareImage(class gfxImage* arg1, char const* arg2, bool arg3)
{
    return stub<cdecl_t<class gfxImage*, class gfxImage*, char const*, bool>>(0x4B3040, arg1, arg2, arg3);
}

void gfxFreeBitmap(class gfxBitmap* arg1)
{
    return stub<cdecl_t<void, class gfxBitmap*>>(0x4B32D0, arg1);
}

void gfxFreeTexture(class gfxTexture* arg1)
{
    return stub<cdecl_t<void, class gfxTexture*>>(0x4B31D0, arg1);
}

class gfxBitmap* gfxGetBitmap(char const* arg1, bool arg2, bool arg3)
{
    return stub<cdecl_t<class gfxBitmap*, char const*, bool, bool>>(0x4B3210, arg1, arg2, arg3);
}

class gfxTexture* gfxGetTexture(char const* arg1, bool arg2)
{
    return stub<cdecl_t<class gfxTexture*, char const*, bool>>(0x4B30F0, arg1, arg2);
}

i32 gfxSetTexReduceSize(i32 arg1)
{
    return stub<cdecl_t<i32, i32>>(0x4B3020, arg1);
}

define_dummy_symbol(gfx_gettex);
