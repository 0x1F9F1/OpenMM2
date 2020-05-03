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

#include "pedinst.h"

aiPedestrianInstance::aiPedestrianInstance(class aiPedestrian* arg1)
{
    unimplemented();
}

class dgPhysEntity* aiPedestrianInstance::AttachEntity()
{
    return stub<thiscall_t<class dgPhysEntity*, aiPedestrianInstance*>>(0x57B730, this);
}

void aiPedestrianInstance::Detach()
{
    return stub<thiscall_t<void, aiPedestrianInstance*>>(0x57B760, this);
}

void aiPedestrianInstance::Draw(i32 arg1)
{
    return stub<thiscall_t<void, aiPedestrianInstance*, i32>>(0x57B5F0, this, arg1);
}

void aiPedestrianInstance::DrawShadow()
{
    return stub<thiscall_t<void, aiPedestrianInstance*>>(0x57B700, this);
}

void aiPedestrianInstance::DrawShadowMap()
{
    return stub<thiscall_t<void, aiPedestrianInstance*>>(0x57B710, this);
}

class phBound const* aiPedestrianInstance::GetBound(i32 arg1)
{
    return stub<thiscall_t<class phBound const*, aiPedestrianInstance*, i32>>(0x57B770, this, arg1);
}

class dgPhysEntity* aiPedestrianInstance::GetEntity()
{
    return stub<thiscall_t<class dgPhysEntity*, aiPedestrianInstance*>>(0x57B720, this);
}

class Matrix34 const& aiPedestrianInstance::GetMatrix(class Matrix34& arg1)
{
    return stub<thiscall_t<class Matrix34 const&, aiPedestrianInstance*, class Matrix34&>>(0x57B5A0, this, arg1);
}

class Vector3 const& aiPedestrianInstance::GetPosition()
{
    return stub<thiscall_t<class Vector3 const&, aiPedestrianInstance*>>(0x57B5C0, this);
}

class Vector3 const& aiPedestrianInstance::GetVelocity()
{
    return stub<thiscall_t<class Vector3 const&, aiPedestrianInstance*>>(0x57B750, this);
}

bool aiPedestrianInstance::IsCollidable()
{
    return stub<thiscall_t<bool, aiPedestrianInstance*>>(0x57B780, this);
}

void aiPedestrianInstance::SetMatrix(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, aiPedestrianInstance*, class Matrix34 const&>>(0x57B5B0, this, arg1);
}

u32 aiPedestrianInstance::SizeOf()
{
    return stub<thiscall_t<u32, aiPedestrianInstance*>>(0x57B5E0, this);
}

i32 aiPedestrianInstance::ComputeLod(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<i32, aiPedestrianInstance*, f32, f32>>(0x57B5D0, this, arg1, arg2);
}

define_dummy_symbol(ped_pedinst);
