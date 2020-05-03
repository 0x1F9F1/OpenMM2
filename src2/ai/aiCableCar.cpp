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

#include "aiCableCar.h"

aiCableCar::aiCableCar()
{
    unimplemented();
}

aiCableCar::~aiCableCar()
{
    unimplemented();
}

f32 aiCableCar::BackBumperDistance()
{
    return stub<thiscall_t<f32, aiCableCar*>>(0x541810, this);
}

i32 aiCableCar::CurrentLane()
{
    return stub<thiscall_t<i32, aiCableCar*>>(0x5417F0, this);
}

i32 aiCableCar::CurrentRdVert()
{
    return stub<thiscall_t<i32, aiCableCar*>>(0x5411F0, this);
}

i32 aiCableCar::CurrentRoadId()
{
    return stub<thiscall_t<i32, aiCableCar*>>(0x541870, this);
}

i32 aiCableCar::CurrentRoadIdx(class aiPath** arg1, bool* const arg2, i32* arg3)
{
    return stub<thiscall_t<i32, aiCableCar*, class aiPath**, bool* const, i32*>>(0x5410E0, this, arg1, arg2, arg3);
}

void aiCableCar::DetermineSister()
{
    return stub<thiscall_t<void, aiCableCar*>>(0x5414D0, this);
}

void aiCableCar::DrawId()
{
    return stub<thiscall_t<void, aiCableCar*>>(0x5415A0, this);
}

f32 aiCableCar::FrontBumperDistance()
{
    return stub<thiscall_t<f32, aiCableCar*>>(0x541800, this);
}

class Matrix34& aiCableCar::GetMatrix()
{
    return stub<thiscall_t<class Matrix34&, aiCableCar*>>(0x541860, this);
}

void aiCableCar::Init(char* arg1, i32 arg2, i32 arg3, i16 arg4)
{
    return stub<thiscall_t<void, aiCableCar*, char*, i32, i32, i16>>(0x53F7E0, this, arg1, arg2, arg3, arg4);
}

f32 aiCableCar::LSideDistance()
{
    return stub<thiscall_t<f32, aiCableCar*>>(0x541820, this);
}

void aiCableCar::Position(class Vector3& arg1)
{
    return stub<thiscall_t<void, aiCableCar*, class Vector3&>>(0x541840, this, arg1);
}

f32 aiCableCar::RSideDistance()
{
    return stub<thiscall_t<f32, aiCableCar*>>(0x541830, this);
}

void aiCableCar::Reset()
{
    return stub<thiscall_t<void, aiCableCar*>>(0x53F990, this);
}

f32 aiCableCar::Speed()
{
    return stub<thiscall_t<f32, aiCableCar*>>(0x5417E0, this);
}

i32 aiCableCar::Type()
{
    return stub<thiscall_t<i32, aiCableCar*>>(0x5417D0, this);
}

void aiCableCar::Update()
{
    return stub<thiscall_t<void, aiCableCar*>>(0x53FBD0, this);
}

bool aiCableCar::CheckForObstacles(f32* arg1)
{
    return stub<thiscall_t<bool, aiCableCar*, f32*>>(0x5407B0, this, arg1);
}

bool aiCableCar::DetermineNextLink(class aiPath* arg1, class aiPath** arg2, i16 arg3, i16* arg4)
{
    return stub<thiscall_t<bool, aiCableCar*, class aiPath*, class aiPath**, i16, i16*>>(
        0x53FCD0, this, arg1, arg2, arg3, arg4);
}

f32 aiCableCar::DistanceToIntersection()
{
    return stub<thiscall_t<f32, aiCableCar*>>(0x540B90, this);
}

bool aiCableCar::OkayToEnterIntersection(f32 arg1)
{
    return stub<thiscall_t<bool, aiCableCar*, f32>>(0x540A20, this, arg1);
}

void aiCableCar::SolvePositionAndOrientation()
{
    return stub<thiscall_t<void, aiCableCar*>>(0x53FF50, this);
}

void aiCableCar::SolveRailType()
{
    return stub<thiscall_t<void, aiCableCar*>>(0x540BF0, this);
}

void aiCableCar::SolveVelocity()
{
    return stub<thiscall_t<void, aiCableCar*>>(0x540580, this);
}

void aiCableCar::UpdateObstacleMap()
{
    return stub<thiscall_t<void, aiCableCar*>>(0x541210, this);
}

void aiCableCarInstance::Draw(i32 arg1)
{
    return stub<thiscall_t<void, aiCableCarInstance*, i32>>(0x541680, this, arg1);
}

class Matrix34 const& aiCableCarInstance::GetMatrix(class Matrix34& arg1)
{
    return stub<thiscall_t<class Matrix34 const&, aiCableCarInstance*, class Matrix34&>>(0x5415B0, this, arg1);
}

class Vector3 const& aiCableCarInstance::GetPosition()
{
    return stub<thiscall_t<class Vector3 const&, aiCableCarInstance*>>(0x541650, this);
}

class Vector3 const& aiCableCarInstance::GetVelocity()
{
    return stub<thiscall_t<class Vector3 const&, aiCableCarInstance*>>(0x5415E0, this);
}

void aiCableCarInstance::ImpactCB(class dgHitBangerInstance* arg1)
{
    return stub<thiscall_t<void, aiCableCarInstance*, class dgHitBangerInstance*>>(0x541670, this, arg1);
}

void aiCableCarInstance::SetMatrix(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, aiCableCarInstance*, class Matrix34 const&>>(0x5415C0, this, arg1);
}

u32 aiCableCarInstance::SizeOf()
{
    return stub<thiscall_t<u32, aiCableCarInstance*>>(0x541660, this);
}

define_dummy_symbol(ai_aiCableCar);
