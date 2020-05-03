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

#include "citylist.h"

mmCityList::mmCityList()
{
    unimplemented();
}

mmCityList::~mmCityList()
{
    unimplemented();
}

i32 mmCityList::GetCityID(char* arg1)
{
    return stub<thiscall_t<i32, mmCityList*, char*>>(0x524270, this, arg1);
}

class mmCityInfo* mmCityList::GetCityInfo(char* arg1)
{
    return stub<thiscall_t<class mmCityInfo*, mmCityList*, char*>>(0x524220, this, arg1);
}

class mmCityInfo* mmCityList::GetCityInfo(i32 arg1)
{
    return stub<thiscall_t<class mmCityInfo*, mmCityList*, i32>>(0x5241F0, this, arg1);
}

class mmCityInfo* mmCityList::GetCurrentCity()
{
    return stub<thiscall_t<class mmCityInfo*, mmCityList*>>(0x524320, this);
}

void mmCityList::Init(i32 arg1)
{
    return stub<thiscall_t<void, mmCityList*, i32>>(0x5241E0, this, arg1);
}

void mmCityList::Load(char* arg1)
{
    return stub<thiscall_t<void, mmCityList*, char*>>(0x524330, this, arg1);
}

void mmCityList::LoadAll()
{
    return stub<thiscall_t<void, mmCityList*>>(0x5244F0, this);
}

void mmCityList::Print()
{
    return stub<thiscall_t<void, mmCityList*>>(0x524420, this);
}

void mmCityList::SetCurrentCity(char* arg1)
{
    return stub<thiscall_t<void, mmCityList*, char*>>(0x5242C0, this, arg1);
}

void mmCityList::SetCurrentCity(i32 arg1)
{
    return stub<thiscall_t<void, mmCityList*, i32>>(0x5242F0, this, arg1);
}

bool isCityInfoFile(char const* arg1)
{
    return stub<cdecl_t<bool, char const*>>(0x524460, arg1);
}

define_dummy_symbol(mmcityinfo_citylist);
