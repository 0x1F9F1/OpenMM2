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

#include "banger.h"

dgBangerInstance::dgBangerInstance()
{
    unimplemented();
}

class dgPhysEntity* dgBangerInstance::AttachEntity()
{
    return stub<thiscall_t<class dgPhysEntity*, dgBangerInstance*>>(0x441AE0, this);
}

void dgBangerInstance::Draw(i32 arg1)
{
    return stub<thiscall_t<void, dgBangerInstance*, i32>>(0x4415E0, this, arg1);
}

void dgBangerInstance::DrawGlow()
{
    return stub<thiscall_t<void, dgBangerInstance*>>(0x441840, this);
}

void dgBangerInstance::DrawReflected(f32 arg1)
{
    return stub<thiscall_t<void, dgBangerInstance*, f32>>(0x4417B0, this, arg1);
}

void dgBangerInstance::DrawShadow()
{
    return stub<thiscall_t<void, dgBangerInstance*>>(0x441990, this);
}

void dgBangerInstance::DrawShadowMap()
{
    return stub<thiscall_t<void, dgBangerInstance*>>(0x4419A0, this);
}

void dgBangerInstance::DrawTree(i32 arg1)
{
    return stub<thiscall_t<void, dgBangerInstance*, i32>>(0x4417C0, this, arg1);
}

class phBound const* dgBangerInstance::GetBound(i32 arg1)
{
    return stub<thiscall_t<class phBound const*, dgBangerInstance*, i32>>(0x442580, this, arg1);
}

class dgBangerData* dgBangerInstance::GetData()
{
    return stub<thiscall_t<class dgBangerData*, dgBangerInstance*>>(0x441AB0, this);
}

class dgPhysEntity* dgBangerInstance::GetEntity()
{
    return stub<thiscall_t<class dgPhysEntity*, dgBangerInstance*>>(0x441AD0, this);
}

class Vector3 const& dgBangerInstance::GetVelocity()
{
    return stub<thiscall_t<class Vector3 const&, dgBangerInstance*>>(0x441B20, this);
}

void dgBangerInstance::SetVariant(i32 arg1)
{
    return stub<thiscall_t<void, dgBangerInstance*, i32>>(0x442A10, this, arg1);
}

i32 dgBangerInstance::ComputeLod(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<i32, dgBangerInstance*, f32, f32>>(0x4415C0, this, arg1, arg2);
}

i32 dgBangerInstance::SetupGfxLights(class Matrix34 const& arg1)
{
    return stub<thiscall_t<i32, dgBangerInstance*, class Matrix34 const&>>(0x442910, this, arg1);
}

dgHitBangerInstance::dgHitBangerInstance()
{
    unimplemented();
}

dgHitBangerInstance::~dgHitBangerInstance()
{
    unimplemented();
}

void dgHitBangerInstance::Detach()
{
    return stub<thiscall_t<void, dgHitBangerInstance*>>(0x442680, this);
}

class Matrix34 const& dgHitBangerInstance::GetMatrix(class Matrix34& arg1)
{
    return stub<thiscall_t<class Matrix34 const&, dgHitBangerInstance*, class Matrix34&>>(0x441B60, this, arg1);
}

class Vector3 const& dgHitBangerInstance::GetPosition()
{
    return stub<thiscall_t<class Vector3 const&, dgHitBangerInstance*>>(0x441B70, this);
}

void dgHitBangerInstance::SetMatrix(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, dgHitBangerInstance*, class Matrix34 const&>>(0x441B40, this, arg1);
}

u32 dgHitBangerInstance::SizeOf()
{
    return stub<thiscall_t<u32, dgHitBangerInstance*>>(0x442AB0, this);
}

i32 dgUnhitBangerInstance::Init(char const* arg1, class Matrix34 const& arg2, i32 arg3)
{
    return stub<thiscall_t<i32, dgUnhitBangerInstance*, char const*, class Matrix34 const&, i32>>(
        0x441C30, this, arg1, arg2, arg3);
}

bool dgUnhitBangerInstance::InitBound(char const* arg1, char const* arg2, class dgBangerData* arg3, i32 arg4)
{
    return stub<thiscall_t<bool, dgUnhitBangerInstance*, char const*, char const*, class dgBangerData*, i32>>(
        0x442570, this, arg1, arg2, arg3, arg4);
}

void dgUnhitBangerInstance::InitBreakables(char const* arg1, class dgBangerData* arg2)
{
    return stub<thiscall_t<void, dgUnhitBangerInstance*, char const*, class dgBangerData*>>(0x441B80, this, arg1, arg2);
}

void dgUnhitBangerInstance::Reset()
{
    return stub<thiscall_t<void, dgUnhitBangerInstance*>>(0x441EE0, this);
}

i32 dgUnhitBangerInstance::ComputeLod(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<i32, dgUnhitBangerInstance*, f32, f32>>(0x0, this, arg1, arg2);
}

i32 dgUnhitBangerInstance::SetupGfxLights(class Matrix34 const& arg1)
{
    return stub<thiscall_t<i32, dgUnhitBangerInstance*, class Matrix34 const&>>(0x0, this, arg1);
}

void dgUnhitBangerInstance::Impact(class lvlInstance* arg1, class Vector3* arg2)
{
    return stub<thiscall_t<void, dgUnhitBangerInstance*, class lvlInstance*, class Vector3*>>(
        0x442010, this, arg1, arg2);
}

void dgUnhitBangerInstance::ImpactCB(class dgHitBangerInstance* arg1)
{
    return stub<thiscall_t<void, dgUnhitBangerInstance*, class dgHitBangerInstance*>>(0x442AD0, this, arg1);
}

class dgUnhitBangerInstance* dgUnhitBangerInstance::RequestBanger(char const* arg1, i32 arg2)
{
    return stub<cdecl_t<class dgUnhitBangerInstance*, char const*, i32>>(0x441D80, arg1, arg2);
}

dgUnhitYBangerInstance::~dgUnhitYBangerInstance()
{
    unimplemented();
}

class Matrix34 const& dgUnhitYBangerInstance::GetMatrix(class Matrix34& arg1)
{
    return stub<thiscall_t<class Matrix34 const&, dgUnhitYBangerInstance*, class Matrix34&>>(0x441F70, this, arg1);
}

class Vector3 const& dgUnhitYBangerInstance::GetPosition()
{
    return stub<thiscall_t<class Vector3 const&, dgUnhitYBangerInstance*>>(0x441FC0, this);
}

void dgUnhitYBangerInstance::SetMatrix(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, dgUnhitYBangerInstance*, class Matrix34 const&>>(0x441F40, this, arg1);
}

u32 dgUnhitYBangerInstance::SizeOf()
{
    return stub<thiscall_t<u32, dgUnhitYBangerInstance*>>(0x442AE0, this);
}

class Matrix34 const& dgUnhitMtxBangerInstance::GetMatrix(class Matrix34& arg1)
{
    return stub<thiscall_t<class Matrix34 const&, dgUnhitMtxBangerInstance*, class Matrix34&>>(0x441FF0, this, arg1);
}

class Vector3 const& dgUnhitMtxBangerInstance::GetPosition()
{
    return stub<thiscall_t<class Vector3 const&, dgUnhitMtxBangerInstance*>>(0x442000, this);
}

void dgUnhitMtxBangerInstance::SetMatrix(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, dgUnhitMtxBangerInstance*, class Matrix34 const&>>(0x441FD0, this, arg1);
}

u32 dgUnhitMtxBangerInstance::SizeOf()
{
    return stub<thiscall_t<u32, dgUnhitMtxBangerInstance*>>(0x442AF0, this);
}

dgBangerManager::dgBangerManager()
{
    unimplemented();
}

dgBangerManager::~dgBangerManager()
{
    unimplemented();
}

class dgHitBangerInstance* dgBangerManager::GetBanger()
{
    return stub<thiscall_t<class dgHitBangerInstance*, dgBangerManager*>>(0x442780, this);
}

void dgBangerManager::Init(i32 arg1)
{
    return stub<thiscall_t<void, dgBangerManager*, i32>>(0x4427E0, this, arg1);
}

void dgBangerManager::InitGlow(char const* arg1)
{
    return stub<thiscall_t<void, dgBangerManager*, char const*>>(0x442870, this, arg1);
}

void dgBangerManager::Reset()
{
    return stub<thiscall_t<void, dgBangerManager*>>(0x4428A0, this);
}

define_dummy_symbol(banger_banger);
