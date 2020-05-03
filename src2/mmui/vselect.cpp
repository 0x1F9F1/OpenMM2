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

#include "vselect.h"

VehicleSelectBase::VehicleSelectBase(i32 arg1)
{
    unimplemented();
}

VehicleSelectBase::~VehicleSelectBase()
{
    unimplemented();
}

void VehicleSelectBase::AllSetCar(char* arg1, i32 arg2)
{
    return stub<thiscall_t<void, VehicleSelectBase*, char*, i32>>(0x4F6AF0, this, arg1, arg2);
}

void VehicleSelectBase::AssignVehicleStats(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5)
{
    return stub<thiscall_t<void, VehicleSelectBase*, i32, f32, f32, f32, f32>>(
        0x4F7420, this, arg1, arg2, arg3, arg4, arg5);
}

void VehicleSelectBase::CarMod(i32& arg1)
{
    return stub<thiscall_t<void, VehicleSelectBase*, i32&>>(0x4F6DF0, this, arg1);
}

void VehicleSelectBase::ColorCB()
{
    return stub<thiscall_t<void, VehicleSelectBase*>>(0x4F57A0, this);
}

i32 VehicleSelectBase::CurrentVehicleIsLocked()
{
    return stub<thiscall_t<i32, VehicleSelectBase*>>(0x4F6D30, this);
}

void VehicleSelectBase::DecCar()
{
    return stub<thiscall_t<void, VehicleSelectBase*>>(0x4F7A60, this);
}

void VehicleSelectBase::DecColor()
{
    return stub<thiscall_t<void, VehicleSelectBase*>>(0x4F56B0, this);
}

void VehicleSelectBase::DecTrans()
{
    return stub<thiscall_t<void, VehicleSelectBase*>>(0x4F5790, this);
}

void VehicleSelectBase::FillStats()
{
    return stub<thiscall_t<void, VehicleSelectBase*>>(0x4F7590, this);
}

void VehicleSelectBase::FocusDescription(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, VehicleSelectBase*, i32, i32>>(0x4F77F0, this, arg1, arg2);
}

char* VehicleSelectBase::GetCarTitle(i32 arg1, char* arg2, i16 arg3, class string* arg4)
{
    return stub<thiscall_t<char*, VehicleSelectBase*, i32, char*, i16, class string*>>(
        0x4F6C00, this, arg1, arg2, arg3, arg4);
}

void VehicleSelectBase::IncCar()
{
    return stub<thiscall_t<void, VehicleSelectBase*>>(0x4F7A70, this);
}

void VehicleSelectBase::IncColor()
{
    return stub<thiscall_t<void, VehicleSelectBase*>>(0x4F55F0, this);
}

void VehicleSelectBase::IncTrans()
{
    return stub<thiscall_t<void, VehicleSelectBase*>>(0x4F5780, this);
}

void VehicleSelectBase::InitCarSelection(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5)
{
    return stub<thiscall_t<void, VehicleSelectBase*, i32, f32, f32, f32, f32>>(
        0x4F57C0, this, arg1, arg2, arg3, arg4, arg5);
}

i32 VehicleSelectBase::LoadStats(char* arg1)
{
    return stub<thiscall_t<i32, VehicleSelectBase*, char*>>(0x4F7340, this, arg1);
}

void VehicleSelectBase::LockColor()
{
    return stub<thiscall_t<void, VehicleSelectBase*>>(0x4F7770, this);
}

void VehicleSelectBase::PostSetup()
{
    return stub<thiscall_t<void, VehicleSelectBase*>>(0x4F6AD0, this);
}

void VehicleSelectBase::PreSetup()
{
    return stub<thiscall_t<void, VehicleSelectBase*>>(0x4F6A00, this);
}

void VehicleSelectBase::Reset()
{
    return stub<thiscall_t<void, VehicleSelectBase*>>(0x4F6B50, this);
}

void VehicleSelectBase::SetLastUnlockedVehicle()
{
    return stub<thiscall_t<void, VehicleSelectBase*>>(0x4F6D90, this);
}

void VehicleSelectBase::SetLockedLabel()
{
    return stub<thiscall_t<void, VehicleSelectBase*>>(0x4F75E0, this);
}

void VehicleSelectBase::SetPick(i32 arg1, i16 arg2)
{
    return stub<thiscall_t<void, VehicleSelectBase*, i32, i16>>(0x4F6E20, this, arg1, arg2);
}

void VehicleSelectBase::SetShowcaseFlag()
{
    return stub<thiscall_t<void, VehicleSelectBase*>>(0x4F7A80, this);
}

void VehicleSelectBase::ShowCarDesc()
{
    return stub<thiscall_t<void, VehicleSelectBase*>>(0x4F7120, this);
}

void VehicleSelectBase::TDPickCB()
{
    return stub<thiscall_t<void, VehicleSelectBase*>>(0x4F6B40, this);
}

void VehicleSelectBase::Update()
{
    return stub<thiscall_t<void, VehicleSelectBase*>>(0x4F6B60, this);
}

f32 max(f32 arg1, f32 arg2)
{
    return stub<cdecl_t<f32, f32, f32>>(0x4F73E0, arg1, arg2);
}

f32 min(f32 arg1, f32 arg2)
{
    return stub<cdecl_t<f32, f32, f32>>(0x4F7400, arg1, arg2);
}

define_dummy_symbol(mmui_vselect);
