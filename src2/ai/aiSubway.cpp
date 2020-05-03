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

#include "aiSubway.h"

aiSubway::aiSubway()
{
    unimplemented();
}

aiSubway::~aiSubway()
{
    unimplemented();
}

f32 aiSubway::BackBumperDistance()
{
    return stub<thiscall_t<f32, aiSubway*>>(0x543CD0, this);
}

i32 aiSubway::CurrentLane()
{
    return stub<thiscall_t<i32, aiSubway*>>(0x543CB0, this);
}

i32 aiSubway::CurrentRdVert()
{
    return stub<thiscall_t<i32, aiSubway*>>(0x543600, this);
}

i32 aiSubway::CurrentRoadId()
{
    return stub<thiscall_t<i32, aiSubway*>>(0x543D30, this);
}

i32 aiSubway::CurrentRoadIdx(class aiPath** arg1, bool* const arg2, i32* arg3)
{
    return stub<thiscall_t<i32, aiSubway*, class aiPath**, bool* const, i32*>>(0x5434F0, this, arg1, arg2, arg3);
}

void aiSubway::DrawId()
{
    return stub<thiscall_t<void, aiSubway*>>(0x543AD0, this);
}

f32 aiSubway::FrontBumperDistance()
{
    return stub<thiscall_t<f32, aiSubway*>>(0x543CC0, this);
}

class Matrix34& aiSubway::GetMatrix()
{
    return stub<thiscall_t<class Matrix34&, aiSubway*>>(0x543D20, this);
}

void aiSubway::Init(
    char* arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5, i32 arg6, class aiSubway* arg7, class aiSubway* arg8)
{
    return stub<thiscall_t<void, aiSubway*, char*, i32, i32, i32, i32, i32, class aiSubway*, class aiSubway*>>(
        0x541A80, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

f32 aiSubway::LSideDistance()
{
    return stub<thiscall_t<f32, aiSubway*>>(0x543CE0, this);
}

void aiSubway::Position(class Vector3& arg1)
{
    return stub<thiscall_t<void, aiSubway*, class Vector3&>>(0x543D00, this, arg1);
}

f32 aiSubway::RSideDistance()
{
    return stub<thiscall_t<f32, aiSubway*>>(0x543CF0, this);
}

void aiSubway::Reset()
{
    return stub<thiscall_t<void, aiSubway*>>(0x541C50, this);
}

f32 aiSubway::Speed()
{
    return stub<thiscall_t<f32, aiSubway*>>(0x543CA0, this);
}

i32 aiSubway::Type()
{
    return stub<thiscall_t<i32, aiSubway*>>(0x543C90, this);
}

void aiSubway::Update()
{
    return stub<thiscall_t<void, aiSubway*>>(0x541F60, this);
}

void aiSubway::ComputeXZCurve(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4)
{
    return stub<thiscall_t<void, aiSubway*, class Vector3&, class Vector3&, class Vector3&, class Vector3&>>(
        0x543850, this, arg1, arg2, arg3, arg4);
}

bool aiSubway::DetermineNextLink(class aiPath* arg1, class aiPath** arg2)
{
    return stub<thiscall_t<bool, aiSubway*, class aiPath*, class aiPath**>>(0x542060, this, arg1, arg2);
}

f32 aiSubway::DistanceToIntersection()
{
    return stub<thiscall_t<f32, aiSubway*>>(0x542AF0, this);
}

bool aiSubway::OkayToEnterIntersection(f32 arg1)
{
    return stub<thiscall_t<bool, aiSubway*, f32>>(0x542A20, this, arg1);
}

void aiSubway::ReverseDirection()
{
    return stub<thiscall_t<void, aiSubway*>>(0x5429A0, this);
}

void aiSubway::SolvePositionAndOrientation()
{
    return stub<thiscall_t<void, aiSubway*>>(0x542160, this);
}

void aiSubway::SolveRailType()
{
    return stub<thiscall_t<void, aiSubway*>>(0x542B90, this);
}

void aiSubway::SolveVelocity()
{
    return stub<thiscall_t<void, aiSubway*>>(0x5427B0, this);
}

void aiSubway::SolveXZCurve(class Vector3& arg1, class Vector3& arg2, f32 arg3)
{
    return stub<thiscall_t<void, aiSubway*, class Vector3&, class Vector3&, f32>>(0x543A20, this, arg1, arg2, arg3);
}

void aiSubway::UpdateObstacleMap()
{
    return stub<thiscall_t<void, aiSubway*>>(0x543620, this);
}

void aiSubwayInstance::Draw(i32 arg1)
{
    return stub<thiscall_t<void, aiSubwayInstance*, i32>>(0x543BA0, this, arg1);
}

class Matrix34 const& aiSubwayInstance::GetMatrix(class Matrix34& arg1)
{
    return stub<thiscall_t<class Matrix34 const&, aiSubwayInstance*, class Matrix34&>>(0x543AE0, this, arg1);
}

class Vector3 const& aiSubwayInstance::GetPosition()
{
    return stub<thiscall_t<class Vector3 const&, aiSubwayInstance*>>(0x543B70, this);
}

class Vector3 const& aiSubwayInstance::GetVelocity()
{
    return stub<thiscall_t<class Vector3 const&, aiSubwayInstance*>>(0x543B10, this);
}

void aiSubwayInstance::ImpactCB(class dgHitBangerInstance* arg1)
{
    return stub<thiscall_t<void, aiSubwayInstance*, class dgHitBangerInstance*>>(0x543B90, this, arg1);
}

void aiSubwayInstance::SetMatrix(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, aiSubwayInstance*, class Matrix34 const&>>(0x543AF0, this, arg1);
}

u32 aiSubwayInstance::SizeOf()
{
    return stub<thiscall_t<u32, aiSubwayInstance*>>(0x543B80, this);
}

define_dummy_symbol(ai_aiSubway);
