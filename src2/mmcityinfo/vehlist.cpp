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

#include "vehlist.h"

mmVehList::mmVehList()
{
    unimplemented();
}

mmVehList::~mmVehList()
{
    unimplemented();
}

i32 mmVehList::GetVehicleID(char* arg1)
{
    return stub<thiscall_t<i32, mmVehList*, char*>>(0x5246B0, this, arg1);
}

class mmVehInfo* mmVehList::GetVehicleInfo(char* arg1)
{
    return stub<thiscall_t<class mmVehInfo*, mmVehList*, char*>>(0x524610, this, arg1);
}

class mmVehInfo* mmVehList::GetVehicleInfo(i32 arg1)
{
    return stub<thiscall_t<class mmVehInfo*, mmVehList*, i32>>(0x5245E0, this, arg1);
}

void mmVehList::Init(i32 arg1)
{
    return stub<thiscall_t<void, mmVehList*, i32>>(0x5245D0, this, arg1);
}

void mmVehList::Load(char* arg1)
{
    return stub<thiscall_t<void, mmVehList*, char*>>(0x524720, this, arg1);
}

void mmVehList::LoadAll()
{
    return stub<thiscall_t<void, mmVehList*>>(0x524950, this);
}

void mmVehList::Print()
{
    return stub<thiscall_t<void, mmVehList*>>(0x524810, this);
}

void mmVehList::SetDefaultVehicle(char* arg1)
{
    return stub<thiscall_t<void, mmVehList*, char*>>(0x524690, this, arg1);
}

bool isVehInfoFile(char const* arg1)
{
    return stub<cdecl_t<bool, char const*>>(0x524860, arg1);
}

define_dummy_symbol(mmcityinfo_vehlist);
