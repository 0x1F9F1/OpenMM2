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

#include "wpinst.h"

mmWaypointInstance::mmWaypointInstance()
{
    unimplemented();
}

mmWaypointInstance::~mmWaypointInstance()
{
    unimplemented();
}

class Matrix34 const& mmWaypointInstance::GetMatrix(class Matrix34& arg1)
{
    return stub<thiscall_t<class Matrix34 const&, mmWaypointInstance*, class Matrix34&>>(0x43F530, this, arg1);
}

class Vector3 const& mmWaypointInstance::GetPosition()
{
    return stub<thiscall_t<class Vector3 const&, mmWaypointInstance*>>(0x43F520, this);
}

void mmWaypointInstance::MakeInvisible()
{
    return stub<thiscall_t<void, mmWaypointInstance*>>(0x43F580, this);
}

void mmWaypointInstance::MakeVisible()
{
    return stub<thiscall_t<void, mmWaypointInstance*>>(0x43F570, this);
}

void mmWaypointInstance::SetMatrix(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, mmWaypointInstance*, class Matrix34 const&>>(0x43F550, this, arg1);
}

void mmWaypointInstance::SetVariant(i32 arg1)
{
    return stub<thiscall_t<void, mmWaypointInstance*, i32>>(0x43FC60, this, arg1);
}

void mmWaypointInstance::Init(char* arg1, class Vector3 arg2)
{
    return stub<thiscall_t<void, mmWaypointInstance*, char*, class Vector3>>(0x0, this, arg1, arg2);
}

mmCheckpointInstance::mmCheckpointInstance()
{
    unimplemented();
}

mmCheckpointInstance::~mmCheckpointInstance()
{
    unimplemented();
}

void mmCheckpointInstance::Draw(i32 arg1)
{
    return stub<thiscall_t<void, mmCheckpointInstance*, i32>>(0x43F650, this, arg1);
}

void mmCheckpointInstance::Init(char* arg1, class Vector3 arg2)
{
    return stub<thiscall_t<void, mmCheckpointInstance*, char*, class Vector3>>(0x43F600, this, arg1, arg2);
}

u32 mmCheckpointInstance::SizeOf()
{
    return stub<thiscall_t<u32, mmCheckpointInstance*>>(0x43F7A0, this);
}

mmBillInstance::mmBillInstance()
{
    unimplemented();
}

mmBillInstance::~mmBillInstance()
{
    unimplemented();
}

void mmBillInstance::Draw(i32 arg1)
{
    return stub<thiscall_t<void, mmBillInstance*, i32>>(0x43F860, this, arg1);
}

void mmBillInstance::Init(char* arg1, class Vector3 arg2)
{
    return stub<thiscall_t<void, mmBillInstance*, char*, class Vector3>>(0x43F820, this, arg1, arg2);
}

u32 mmBillInstance::SizeOf()
{
    return stub<thiscall_t<u32, mmBillInstance*>>(0x43FA10, this);
}

mmPowerupInstance::mmPowerupInstance()
{
    unimplemented();
}

mmPowerupInstance::~mmPowerupInstance()
{
    unimplemented();
}

void mmPowerupInstance::Draw(i32 arg1)
{
    return stub<thiscall_t<void, mmPowerupInstance*, i32>>(0x43FAD0, this, arg1);
}

void mmPowerupInstance::Init(char* arg1, class Vector3 arg2)
{
    return stub<thiscall_t<void, mmPowerupInstance*, char*, class Vector3>>(0x43FA90, this, arg1, arg2);
}

u32 mmPowerupInstance::SizeOf()
{
    return stub<thiscall_t<u32, mmPowerupInstance*>>(0x43FC20, this);
}

define_dummy_symbol(mmgame_wpinst);
