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

#include "camera.h"

asUnderlay::asUnderlay()
{
    unimplemented();
}

asUnderlay::~asUnderlay()
{
    unimplemented();
}

void asUnderlay::AddRef()
{
    return stub<thiscall_t<void, asUnderlay*>>(0x4A22A0, this);
}

void asUnderlay::Cull()
{
    return stub<thiscall_t<void, asUnderlay*>>(0x4A22B0, this);
}

void asUnderlay::SetBitmap(class gfxBitmap* arg1)
{
    return stub<thiscall_t<void, asUnderlay*, class gfxBitmap*>>(0x4A2290, this, arg1);
}

asCamera::asCamera()
{
    unimplemented();
}

asCamera::~asCamera()
{
    unimplemented();
}

void asCamera::DrawBegin()
{
    return stub<thiscall_t<void, asCamera*>>(0x4A2D60, this);
}

void asCamera::DrawEnd()
{
    return stub<thiscall_t<void, asCamera*>>(0x4A2D70, this);
}

void asCamera::FadeIn(f32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, asCamera*, f32, i32>>(0x4A2FE0, this, arg1, arg2);
}

void asCamera::FadeOut(f32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, asCamera*, f32, i32>>(0x4A2F80, this, arg1, arg2);
}

void asCamera::GetNearClip(class Vector3* arg1, class Matrix34& arg2, enum asCamera::kNearClip arg3)
{
    return stub<thiscall_t<void, asCamera*, class Vector3*, class Matrix34&, enum asCamera::kNearClip>>(
        0x4A27F0, this, arg1, arg2, arg3);
}

i32 asCamera::GetViewportHeight()
{
    return stub<thiscall_t<i32, asCamera*>>(0x4A2F70, this);
}

i32 asCamera::GetViewportWidth()
{
    return stub<thiscall_t<i32, asCamera*>>(0x4A2F60, this);
}

void asCamera::SetAmbient(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, asCamera*, class Vector3 const&>>(0x4A3210, this, arg1);
}

void asCamera::SetClipArea(f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
    return stub<thiscall_t<void, asCamera*, f32, f32, f32, f32>>(0x4A2650, this, arg1, arg2, arg3, arg4);
}

void asCamera::SetFog(f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
    return stub<thiscall_t<void, asCamera*, f32, f32, f32, f32>>(0x4A2EC0, this, arg1, arg2, arg3, arg4);
}

void asCamera::SetLighting(i32 arg1)
{
    return stub<thiscall_t<void, asCamera*, i32>>(0x4A2790, this, arg1);
}

void asCamera::SetMonochrome(i32 arg1)
{
    return stub<thiscall_t<void, asCamera*, i32>>(0x4A3220, this, arg1);
}

void asCamera::SetUnderlay(char* arg1)
{
    return stub<thiscall_t<void, asCamera*, char*>>(0x4A2EF0, this, arg1);
}

void asCamera::SetUnderlayCB(class gfxBitmap* arg1, class datCallback* arg2)
{
    return stub<thiscall_t<void, asCamera*, class gfxBitmap*, class datCallback*>>(0x4A2F30, this, arg1, arg2);
}

void asCamera::SetView(f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
    return stub<thiscall_t<void, asCamera*, f32, f32, f32, f32>>(0x4A2E50, this, arg1, arg2, arg3, arg4);
}

void asCamera::SetViewport(f32 arg1, f32 arg2, f32 arg3, f32 arg4, i32 arg5)
{
    return stub<thiscall_t<void, asCamera*, f32, f32, f32, f32, i32>>(0x4A2DD0, this, arg1, arg2, arg3, arg4, arg5);
}

void asCamera::SetWorld(class Matrix34& arg1)
{
    return stub<thiscall_t<void, asCamera*, class Matrix34&>>(0x4A27E0, this, arg1);
}

f32 asCamera::SphereVisible(class Vector3 const& arg1, f32 arg2, f32* arg3)
{
    return stub<thiscall_t<f32, asCamera*, class Vector3 const&, f32, f32*>>(0x4A3040, this, arg1, arg2, arg3);
}

void asCamera::Update()
{
    return stub<thiscall_t<void, asCamera*>>(0x4A24A0, this);
}

void asCamera::Regen()
{
    return stub<thiscall_t<void, asCamera*>>(0x4A3230, this);
}

define_dummy_symbol(node_camera);
