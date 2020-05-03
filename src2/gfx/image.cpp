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

#include "image.h"

void gfxImage::Flip()
{
    return stub<thiscall_t<void, gfxImage*>>(0x4AF470, this);
}

void gfxImage::GenerateMipmaps()
{
    return stub<thiscall_t<void, gfxImage*>>(0x4AEC90, this);
}

u32 gfxImage::GetDominantColor()
{
    return stub<thiscall_t<u32, gfxImage*>>(0x4AF2D0, this);
}

void gfxImage::Halve()
{
    return stub<thiscall_t<void, gfxImage*>>(0x4AEBA0, this);
}

void gfxImage::Reformat(enum gfxImage::gfxImageFormat arg1, enum gfxImage::gfxImageFormat arg2)
{
    return stub<thiscall_t<void, gfxImage*, enum gfxImage::gfxImageFormat, enum gfxImage::gfxImageFormat>>(
        0x4AF1A0, this, arg1, arg2);
}

void gfxImage::Scale(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, gfxImage*, i32, i32>>(0x4AEDC0, this, arg1, arg2);
}

class gfxImage* gfxImage::Create(
    i32 arg1, i32 arg2, enum gfxImage::gfxImageFormat arg3, enum gfxImage::gfxImageFormat arg4, i32 arg5)
{
    return stub<cdecl_t<class gfxImage*, i32, i32, enum gfxImage::gfxImageFormat, enum gfxImage::gfxImageFormat, i32>>(
        0x4AE920, arg1, arg2, arg3, arg4, arg5);
}

void gfxImage::FreeFont()
{
    return stub<cdecl_t<void>>(0x4AEB60);
}

class gfxImage* gfxImage::GetFont(i32& arg1, i32& arg2)
{
    return stub<cdecl_t<class gfxImage*, i32&, i32&>>(0x4AEA30, arg1, arg2);
}

gfxImage::~gfxImage()
{
    unimplemented();
}

define_dummy_symbol(gfx_image);
