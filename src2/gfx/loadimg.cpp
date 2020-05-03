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

#include "loadimg.h"

void gfxCloseRawBmpStream(class Stream* arg1)
{
    return stub<cdecl_t<void, class Stream*>>(0x4AFA90, arg1);
}

class gfxImage* gfxLoadBmpImage(char const* arg1, bool arg2)
{
    return stub<cdecl_t<class gfxImage*, char const*, bool>>(0x4B0D50, arg1, arg2);
}

class gfxImage* gfxLoadImageAll(char const* arg1, bool arg2)
{
    return stub<cdecl_t<class gfxImage*, char const*, bool>>(0x4B1040, arg1, arg2);
}

class gfxImage* gfxLoadRawImage(char const* arg1, bool arg2)
{
    return stub<cdecl_t<class gfxImage*, char const*, bool>>(0x4B0BD0, arg1, arg2);
}

class gfxImage* gfxLoadTargaImage(char const* arg1, bool arg2)
{
    return stub<cdecl_t<class gfxImage*, char const*, bool>>(0x4AFDE0, arg1, arg2);
}

class gfxImage* gfxLoadTexImage(char const* arg1, bool arg2)
{
    return stub<cdecl_t<class gfxImage*, char const*, bool>>(0x4AFFC0, arg1, arg2);
}

class Stream* gfxOpenRawBmpStream(char const* arg1, i32 arg2, i32 arg3)
{
    return stub<cdecl_t<class Stream*, char const*, i32, i32>>(0x4AF8F0, arg1, arg2, arg3);
}

bool gfxSaveBmpImage(char const* arg1, class gfxImage* arg2)
{
    return stub<cdecl_t<bool, char const*, class gfxImage*>>(0x4AFAB0, arg1, arg2);
}

bool gfxSaveTargaImage(char const* arg1, class gfxImage* arg2)
{
    return stub<cdecl_t<bool, char const*, class gfxImage*>>(0x4AF4E0, arg1, arg2);
}

void gfxWriteRawBmpStream(class Stream* arg1, void* arg2, i32 arg3)
{
    return stub<cdecl_t<void, class Stream*, void*, i32>>(0x4AFA60, arg1, arg2, arg3);
}

define_dummy_symbol(gfx_loadimg);
