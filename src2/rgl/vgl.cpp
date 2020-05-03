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

#include "vgl.h"

u32 mkfrgba(f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
    return stub<cdecl_t<u32, f32, f32, f32, f32>>(0x4A7880, arg1, arg2, arg3, arg4);
}

void rglBindTexture2(class gfxTexture const* arg1)
{
    return stub<cdecl_t<void, class gfxTexture const*>>(0x4A6160, arg1);
}

void rglCard(class Vector3 const& arg1)
{
    return stub<cdecl_t<void, class Vector3 const&>>(0x4A6140, arg1);
}

bool rglEnableDisable(enum rglToken arg1, bool arg2)
{
    return stub<cdecl_t<bool, enum rglToken, bool>>(0x4A5F00, arg1, arg2);
}

bool rglIsEnabled(enum rglToken arg1)
{
    return stub<cdecl_t<bool, enum rglToken>>(0x4A6000, arg1);
}

void rglWorldIdentity()
{
    return stub<cdecl_t<void>>(0x4A6110);
}

void rglWorldMatrix(class Matrix34 const& arg1)
{
    return stub<cdecl_t<void, class Matrix34 const&>>(0x4A6060, arg1);
}

void tglDrawParticle(class Vector3 const& arg1, f32 arg2, class Vector4 const& arg3)
{
    return stub<cdecl_t<void, class Vector3 const&, f32, class Vector4 const&>>(0x4A6190, arg1, arg2, arg3);
}

void tglDrawRotatedParticle(class Vector3 const& arg1, f32 arg2, f32 arg3, class Vector4 const& arg4)
{
    return stub<cdecl_t<void, class Vector3 const&, f32, f32, class Vector4 const&>>(0x4A6550, arg1, arg2, arg3, arg4);
}

void vglBegin(enum gfxDrawMode arg1, i32 arg2)
{
    return stub<cdecl_t<void, enum gfxDrawMode, i32>>(0x4A5500, arg1, arg2);
}

void vglBeginBatch()
{
    return stub<cdecl_t<void>>(0x4A5B10);
}

void vglBindTexture(class gfxTexture* arg1)
{
    return stub<cdecl_t<void, class gfxTexture*>>(0x4A5BA0, arg1);
}

void vglDrawLabel(class Vector3 const& arg1, char const* arg2)
{
    return stub<cdecl_t<void, class Vector3 const&, char const*>>(0x4A5C50, arg1, arg2);
}

void vglDrawLabelf(class Vector3 const& arg1, char const* arg2, ...)
{
    unimplemented();
}

void vglEnd()
{
    return stub<cdecl_t<void>>(0x4A5A90);
}

void vglEndBatch()
{
    return stub<cdecl_t<void>>(0x4A5B80);
}

void vglSetCloudMap(char const* arg1)
{
    return stub<cdecl_t<void, char const*>>(0x4A5D30, arg1);
}

void vglSetFormat(u32 arg1, u32 arg2, u32 arg3, u32 arg4)
{
    return stub<cdecl_t<void, u32, u32, u32, u32>>(0x4A5490, arg1, arg2, arg3, arg4);
}

void vglSetOffset(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<cdecl_t<void, f32, f32, f32>>(0x4A5DE0, arg1, arg2, arg3);
}

void vgl_VERTEX_VCT1(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<cdecl_t<void, f32, f32, f32>>(0x4A5370, arg1, arg2, arg3);
}

void vgl_VERTEX_VNT1(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<cdecl_t<void, f32, f32, f32>>(0x4A5400, arg1, arg2, arg3);
}

define_dummy_symbol(rgl_vgl);
