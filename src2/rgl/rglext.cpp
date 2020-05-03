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

#include "rglext.h"

i32 rglAlive()
{
    return stub<cdecl_t<i32>>(0x4A6A70);
}

void rglBeginFrame(u32 arg1)
{
    return stub<cdecl_t<void, u32>>(0x4A6A10, arg1);
}

void rglCameraMatrix(class Matrix34 const& arg1)
{
    return stub<cdecl_t<void, class Matrix34 const&>>(0x4A6A50, arg1);
}

void rglClosePipe()
{
    return stub<cdecl_t<void>>(0x4A6A00);
}

void rglDrawAxis(f32 arg1, class Matrix34 const& arg2)
{
    return stub<cdecl_t<void, f32, class Matrix34 const&>>(0x4A7050, arg1, arg2);
}

void rglDrawBox(class Vector3 const& arg1, class Matrix34 const& arg2)
{
    return stub<cdecl_t<void, class Vector3 const&, class Matrix34 const&>>(0x4A6AB0, arg1, arg2);
}

void rglDrawEllipsoid(class Vector3 const& arg1, class Matrix34 const& arg2, i32 arg3)
{
    return stub<cdecl_t<void, class Vector3 const&, class Matrix34 const&, i32>>(0x4A7230, arg1, arg2, arg3);
}

void rglDrawParticle(class Vector3 const& arg1, f32 arg2, class Vector4 const& arg3)
{
    return stub<cdecl_t<void, class Vector3 const&, f32, class Vector4 const&>>(0x4A7310, arg1, arg2, arg3);
}

void rglDrawSolidBox(class Vector3 const& arg1, class Matrix34 const& arg2, class Vector3 const& arg3)
{
    return stub<cdecl_t<void, class Vector3 const&, class Matrix34 const&, class Vector3 const&>>(
        0x4A6D30, arg1, arg2, arg3);
}

void rglDrawSphere(f32 arg1, i32 arg2)
{
    return stub<cdecl_t<void, f32, i32>>(0x4A70F0, arg1, arg2);
}

void rglDrawSphere(f32 arg1, class Matrix34 const& arg2, i32 arg3)
{
    return stub<cdecl_t<void, f32, class Matrix34 const&, i32>>(0x4A7200, arg1, arg2, arg3);
}

void rglDrawTexture(class gfxTexture* arg1)
{
    return stub<cdecl_t<void, class gfxTexture*>>(0x4A7560, arg1);
}

void rglEndFrame()
{
    return stub<cdecl_t<void>>(0x4A6A40);
}

void rglMultMatrix(class Matrix34& arg1)
{
    return stub<cdecl_t<void, class Matrix34&>>(0x4A77D0, arg1);
}

void rglOpenPipe(i32 arg1, i32 arg2, bool arg3)
{
    return stub<cdecl_t<void, i32, i32, bool>>(0x4A6970, arg1, arg2, arg3);
}

void rglPopMatrix()
{
    return stub<cdecl_t<void>>(0x4A7790);
}

void rglPushMatrix()
{
    return stub<cdecl_t<void>>(0x4A7750);
}

void rglResetDrawTexture()
{
    return stub<cdecl_t<void>>(0x4A7540);
}

define_dummy_symbol(rgl_rglext);
