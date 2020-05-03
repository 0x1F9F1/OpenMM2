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

#include "data.h"

dgBangerData::dgBangerData()
{
    unimplemented();
}

dgBangerData::~dgBangerData()
{
    unimplemented();
}

void dgBangerData::AdjustBound()
{
    return stub<thiscall_t<void, dgBangerData*>>(0x441170, this);
}

void dgBangerData::AdjustPrim()
{
    return stub<thiscall_t<void, dgBangerData*>>(0x440610, this);
}

char* dgBangerData::GetClassName()
{
    return stub<thiscall_t<char*, dgBangerData*>>(0x441520, this);
}

char const* dgBangerData::GetDirName()
{
    return stub<thiscall_t<char const*, dgBangerData*>>(0x440600, this);
}

void dgBangerData::InitBound()
{
    return stub<thiscall_t<void, dgBangerData*>>(0x4411C0, this);
}

bool dgBangerData::Load()
{
    return stub<thiscall_t<bool, dgBangerData*>>(0x440A90, this);
}

i32 dgBangerData::LoadEntry(char* arg1)
{
    return stub<thiscall_t<i32, dgBangerData*, char*>>(0x4405D0, this, arg1);
}

bool dgBangerData::Save()
{
    return stub<thiscall_t<bool, dgBangerData*>>(0x440DB0, this);
}

dgBangerDataManager::dgBangerDataManager()
{
    unimplemented();
}

dgBangerDataManager::~dgBangerDataManager()
{
    unimplemented();
}

i32 dgBangerDataManager::AddBangerDataEntry(char const* arg1, char const* arg2)
{
    return stub<thiscall_t<i32, dgBangerDataManager*, char const*, char const*>>(0x440940, this, arg1, arg2);
}

void dgBangerDataManager::ChangeData()
{
    return stub<thiscall_t<void, dgBangerDataManager*>>(0x440A60, this);
}

char* dgBangerDataManager::GetClassName()
{
    return stub<thiscall_t<char*, dgBangerDataManager*>>(0x4415B0, this);
}

ptxGlassBirthRules::~ptxGlassBirthRules()
{
    unimplemented();
}

void ptxGlassBirthRules::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, ptxGlassBirthRules*, class datParser&>>(0x462D90, this, arg1);
}

char* ptxGlassBirthRules::GetClassName()
{
    return stub<thiscall_t<char*, ptxGlassBirthRules*>>(0x441440, this);
}

define_dummy_symbol(banger_data);
