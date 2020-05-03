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

#include "viewport.h"

f32 gfxViewport::ComputeVFOV(f32 arg1)
{
    return stub<thiscall_t<f32, gfxViewport*, f32>>(0x4B19B0, this, arg1);
}

enum gfxCullStatus gfxViewport::IsSphereVisible(f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32* arg5)
{
    return stub<thiscall_t<enum gfxCullStatus, gfxViewport*, f32, f32, f32, f32, f32*>>(
        0x4B19D0, this, arg1, arg2, arg3, arg4, arg5);
}

void gfxViewport::Ortho(f32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6)
{
    return stub<thiscall_t<void, gfxViewport*, f32, f32, f32, f32, f32, f32>>(
        0x4B1800, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

void gfxViewport::Perspective(f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
    return stub<thiscall_t<void, gfxViewport*, f32, f32, f32, f32>>(0x4B1640, this, arg1, arg2, arg3, arg4);
}

void gfxViewport::Project(class Vector4& arg1, class Vector4& arg2)
{
    return stub<thiscall_t<void, gfxViewport*, class Vector4&, class Vector4&>>(0x4B1960, this, arg1, arg2);
}

void gfxViewport::ResetWindow()
{
    return stub<thiscall_t<void, gfxViewport*>>(0x4B14A0, this);
}

void gfxViewport::SetWindow(i32 arg1, i32 arg2, i32 arg3, i32 arg4, f32 arg5, f32 arg6)
{
    return stub<thiscall_t<void, gfxViewport*, i32, i32, i32, i32, f32, f32>>(
        0x4B14C0, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

gfxViewport::gfxViewport()
{
    unimplemented();
}

void gfxViewport::DoFlush()
{
    return stub<thiscall_t<void, gfxViewport*>>(0x4B18D0, this);
}

define_dummy_symbol(gfx_viewport);
