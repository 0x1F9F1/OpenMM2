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

#include "trailer.h"

vehTrailer::vehTrailer()
{
    unimplemented();
}

vehTrailer::~vehTrailer()
{
    unimplemented();
}

i32 vehTrailer::BottomedOut()
{
    return stub<thiscall_t<i32, vehTrailer*>>(0x4D7980, this);
}

void vehTrailer::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, vehTrailer*, class datParser&>>(0x4D7CB0, this, arg1);
}

char* vehTrailer::GetClassName()
{
    return stub<thiscall_t<char*, vehTrailer*>>(0x4D8510, this);
}

char const* vehTrailer::GetDirName()
{
    return stub<thiscall_t<char const*, vehTrailer*>>(0x4D72E0, this);
}

class phInertialCS* vehTrailer::GetICS()
{
    return stub<thiscall_t<class phInertialCS*, vehTrailer*>>(0x4D8520, this);
}

class lvlInstance* vehTrailer::GetInst()
{
    return stub<thiscall_t<class lvlInstance*, vehTrailer*>>(0x4D7860, this);
}

void vehTrailer::Init(char const* arg1, class Vector3 const& arg2, class vehCarSim* arg3, i32 arg4)
{
    return stub<thiscall_t<void, vehTrailer*, char const*, class Vector3 const&, class vehCarSim*, i32>>(
        0x4D72F0, this, arg1, arg2, arg3, arg4);
}

bool vehTrailer::Load()
{
    return stub<thiscall_t<bool, vehTrailer*>>(0x4D7DC0, this);
}

void vehTrailer::PostUpdate()
{
    return stub<thiscall_t<void, vehTrailer*>>(0x4D7C40, this);
}

bool vehTrailer::RequiresTerrainCollision()
{
    return stub<thiscall_t<bool, vehTrailer*>>(0x4D7870, this);
}

void vehTrailer::Reset()
{
    return stub<thiscall_t<void, vehTrailer*>>(0x4D79C0, this);
}

bool vehTrailer::Save()
{
    return stub<thiscall_t<bool, vehTrailer*>>(0x4D7D90, this);
}

void vehTrailer::SetCarHitchOffset()
{
    return stub<thiscall_t<void, vehTrailer*>>(0x4D7C50, this);
}

void vehTrailer::SetTrailerHitchOffset()
{
    return stub<thiscall_t<void, vehTrailer*>>(0x4D7C80, this);
}

void vehTrailer::Update()
{
    return stub<thiscall_t<void, vehTrailer*>>(0x4D7B00, this);
}

class dgPhysEntity* vehTrailerInstance::AttachEntity()
{
    return stub<thiscall_t<class dgPhysEntity*, vehTrailerInstance*>>(0x4D7830, this);
}

void vehTrailerInstance::Draw(i32 arg1)
{
    return stub<thiscall_t<void, vehTrailerInstance*, i32>>(0x4D7F20, this, arg1);
}

void vehTrailerInstance::DrawShadow()
{
    return stub<thiscall_t<void, vehTrailerInstance*>>(0x4D81F0, this);
}

void vehTrailerInstance::DrawShadowMap()
{
    return stub<thiscall_t<void, vehTrailerInstance*>>(0x4D8320, this);
}

class dgPhysEntity* vehTrailerInstance::GetEntity()
{
    return stub<thiscall_t<class dgPhysEntity*, vehTrailerInstance*>>(0x4D7820, this);
}

class Matrix34 const& vehTrailerInstance::GetMatrix(class Matrix34& arg1)
{
    return stub<thiscall_t<class Matrix34 const&, vehTrailerInstance*, class Matrix34&>>(0x4D77F0, this, arg1);
}

class Vector3 const& vehTrailerInstance::GetPosition()
{
    return stub<thiscall_t<class Vector3 const&, vehTrailerInstance*>>(0x4D7810, this);
}

bool vehTrailerInstance::GetTrailerHitch(class Vector3* arg1)
{
    return stub<thiscall_t<bool, vehTrailerInstance*, class Vector3*>>(0x4D8420, this, arg1);
}

class Vector3 const& vehTrailerInstance::GetVelocity()
{
    return stub<thiscall_t<class Vector3 const&, vehTrailerInstance*>>(0x4D7840, this);
}

void vehTrailerInstance::Init(char const* arg1, class Vector3 const& arg2, i32 arg3)
{
    return stub<thiscall_t<void, vehTrailerInstance*, char const*, class Vector3 const&, i32>>(
        0x4D7DF0, this, arg1, arg2, arg3);
}

void vehTrailerInstance::SetMatrix(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, vehTrailerInstance*, class Matrix34 const&>>(0x4D77D0, this, arg1);
}

u32 vehTrailerInstance::SizeOf()
{
    return stub<thiscall_t<u32, vehTrailerInstance*>>(0x4D7850, this);
}

define_dummy_symbol(vehicle_trailer);
