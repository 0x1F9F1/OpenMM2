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

#include "pedactive.h"

pedActiveData::pedActiveData()
{
    unimplemented();
}

pedActiveData::~pedActiveData()
{
    unimplemented();
}

void pedActiveData::Init(char const* arg1)
{
    return stub<thiscall_t<void, pedActiveData*, char const*>>(0x57BEA0, this, arg1);
}

pedActive::pedActive()
{
    unimplemented();
}

pedActive::~pedActive()
{
    unimplemented();
}

void pedActive::FirstImpactCallback()
{
    return stub<thiscall_t<void, pedActive*>>(0x57C2E0, this);
}

class phInertialCS* pedActive::GetICS()
{
    return stub<thiscall_t<class phInertialCS*, pedActive*>>(0x57C290, this);
}

class lvlInstance* pedActive::GetInst()
{
    return stub<thiscall_t<class lvlInstance*, pedActive*>>(0x57C2A0, this);
}

i32 pedActive::IsAsleep()
{
    return stub<thiscall_t<i32, pedActive*>>(0x57C090, this);
}

void pedActive::PostUpdate()
{
    return stub<thiscall_t<void, pedActive*>>(0x57C500, this);
}

void pedActive::SetRagdollBlend(f32 arg1)
{
    return stub<thiscall_t<void, pedActive*, f32>>(0x57C2B0, this, arg1);
}

void pedActive::StartRagdoll()
{
    return stub<thiscall_t<void, pedActive*>>(0x57C2C0, this);
}

void pedActive::StopRagdoll()
{
    return stub<thiscall_t<void, pedActive*>>(0x57C2D0, this);
}

void pedActive::Update()
{
    return stub<thiscall_t<void, pedActive*>>(0x57C0F0, this);
}

void pedActive::Reset()
{
    return stub<thiscall_t<void, pedActive*>>(0x57C0C0, this);
}

void pedActive::Activate(class aiPedestrianInstance* arg1, class pedActiveData* arg2)
{
    return stub<thiscall_t<void, pedActive*, class aiPedestrianInstance*, class pedActiveData*>>(
        0x57C170, this, arg1, arg2);
}

void pedActive::Deactivate()
{
    return stub<thiscall_t<void, pedActive*>>(0x57C260, this);
}

define_dummy_symbol(ped_pedactive);
