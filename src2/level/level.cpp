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

#include "level.h"

lvlLevel::lvlLevel()
{
    unimplemented();
}

lvlLevel::~lvlLevel()
{
    unimplemented();
}

void lvlLevel::MoveToRoom(class lvlInstance* arg1, i32 arg2)
{
    return stub<thiscall_t<void, lvlLevel*, class lvlInstance*, i32>>(0x465480, this, arg1, arg2);
}

void lvlLevel::RegisterDrawable(i32 arg1, class datCallback arg2)
{
    return stub<thiscall_t<void, lvlLevel*, i32, class datCallback>>(0x4655E0, this, arg1, arg2);
}

void lvlLevel::ResetCallbacks()
{
    return stub<thiscall_t<void, lvlLevel*>>(0x465680, this);
}

void lvlLevel::ResetInstances()
{
    return stub<thiscall_t<void, lvlLevel*>>(0x465E50, this);
}

void lvlLevel::Load(char const* arg1)
{
    return stub<thiscall_t<void, lvlLevel*, char const*>>(0x0, this, arg1);
}

void lvlLevel::Update()
{
    return stub<thiscall_t<void, lvlLevel*>>(0x465460, this);
}

void lvlLevel::PreDraw()
{
    return stub<thiscall_t<void, lvlLevel*>>(0x0, this);
}

void lvlLevel::PostDraw()
{
    return stub<thiscall_t<void, lvlLevel*>>(0x0, this);
}

void lvlLevel::Draw(class gfxViewport const& arg1, u32 arg2)
{
    return stub<thiscall_t<void, lvlLevel*, class gfxViewport const&, u32>>(0x0, this, arg1, arg2);
}

i32 lvlLevel::FindRoomId(class Vector3 const& arg1, i32 arg2)
{
    return stub<thiscall_t<i32, lvlLevel*, class Vector3 const&, i32>>(0x0, this, arg1, arg2);
}

i32 lvlLevel::GetNeighborCount(i32 arg1)
{
    return stub<thiscall_t<i32, lvlLevel*, i32>>(0x0, this, arg1);
}

i32 lvlLevel::GetNeighbors(i32* arg1, i32 arg2)
{
    return stub<thiscall_t<i32, lvlLevel*, i32*, i32>>(0x0, this, arg1, arg2);
}

i32 lvlLevel::GetTouchedNeighbors(i32* arg1, i32 arg2, i32 arg3, class Vector4 const& arg4)
{
    return stub<thiscall_t<i32, lvlLevel*, i32*, i32, i32, class Vector4 const&>>(0x0, this, arg1, arg2, arg3, arg4);
}

i32 lvlLevel::GetRoomPerimeter(i32 arg1, class Vector3* const arg2, i32 arg3)
{
    return stub<thiscall_t<i32, lvlLevel*, i32, class Vector3* const, i32>>(0x0, this, arg1, arg2, arg3);
}

i32 lvlLevel::GetVisitList(
    i32* arg1, i32 arg2, class Vector3 const& arg3, class Vector3 const& arg4, i32 arg5, i32 arg6)
{
    return stub<thiscall_t<i32, lvlLevel*, i32*, i32, class Vector3 const&, class Vector3 const&, i32, i32>>(
        0x4655D0, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

bool lvlLevel::Collide(i32 arg1, class lvlSegment& arg2, class lvlIntersection* arg3)
{
    return stub<thiscall_t<bool, lvlLevel*, i32, class lvlSegment&, class lvlIntersection*>>(
        0x4655B0, this, arg1, arg2, arg3);
}

bool lvlLevel::GetBoundSphere(class Vector4& arg1, i32 arg2)
{
    return stub<thiscall_t<bool, lvlLevel*, class Vector4&, i32>>(0x4655C0, this, arg1, arg2);
}

class lvlLevelBound const* lvlLevel::GetBound()
{
    return stub<thiscall_t<class lvlLevelBound const*, lvlLevel*>>(0x0, this);
}

void lvlLevel::SetObjectDetail(i32 arg1)
{
    return stub<thiscall_t<void, lvlLevel*, i32>>(0x465470, this, arg1);
}

f32 lvlLevel::GetWaterLevel(i32 arg1)
{
    return stub<thiscall_t<f32, lvlLevel*, i32>>(0x0, this, arg1);
}

f32 lvlLevel::GetLightingIntensity(class Vector3 const& arg1)
{
    return stub<thiscall_t<f32, lvlLevel*, class Vector3 const&>>(0x0, this, arg1);
}

void lvlLevel::SetPtxHeight(class asParticles& arg1)
{
    return stub<thiscall_t<void, lvlLevel*, class asParticles&>>(0x0, this, arg1);
}

bool lvlLevel::ClampToWorld(class Vector3& arg1)
{
    return stub<thiscall_t<bool, lvlLevel*, class Vector3&>>(0x4472F0, this, arg1);
}

bool lvlLevel::LoadInstances(char const* arg1, char const* arg2)
{
    return stub<thiscall_t<bool, lvlLevel*, char const*, char const*>>(0x4656F0, this, arg1, arg2);
}

class gfxTexture* lvlLevel::GetEnvMap(i32 arg1, class Vector3 const& arg2, f32& arg3)
{
    return stub<thiscall_t<class gfxTexture*, lvlLevel*, i32, class Vector3 const&, f32&>>(
        0x465690, this, arg1, arg2, arg3);
}

void lvlLevel::CallCallbacks(i32 arg1)
{
    return stub<thiscall_t<void, lvlLevel*, i32>>(0x465630, this, arg1);
}

define_dummy_symbol(level_level);
