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

#include "hudmap.h"

mmHudMap::mmHudMap()
{
    unimplemented();
}

mmHudMap::~mmHudMap()
{
    unimplemented();
}

void mmHudMap::Activate()
{
    return stub<thiscall_t<void, mmHudMap*>>(0x42EEE0, this);
}

void mmHudMap::Cull()
{
    return stub<thiscall_t<void, mmHudMap*>>(0x42F1B0, this);
}

void mmHudMap::Deactivate()
{
    return stub<thiscall_t<void, mmHudMap*>>(0x42EEF0, this);
}

void mmHudMap::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, mmHudMap*, class datParser&>>(0x42FA60, this, arg1);
}

char* mmHudMap::GetClassName()
{
    return stub<thiscall_t<char*, mmHudMap*>>(0x42FD60, this);
}

bool mmHudMap::GetOrient()
{
    return stub<thiscall_t<bool, mmHudMap*>>(0x42FA50, this);
}

bool mmHudMap::GetZoomIn()
{
    return stub<thiscall_t<bool, mmHudMap*>>(0x42FA30, this);
}

void mmHudMap::Init(class Matrix34* arg1, class mmGame* arg2, char* arg3)
{
    return stub<thiscall_t<void, mmHudMap*, class Matrix34*, class mmGame*, char*>>(0x42EC80, this, arg1, arg2, arg3);
}

void mmHudMap::RegisterCopsnRobbers(class Vector3** arg1)
{
    return stub<thiscall_t<void, mmHudMap*, class Vector3**>>(0x42EEC0, this, arg1);
}

void mmHudMap::RegisterOpponents(struct OppIconInfo* arg1, i32 arg2)
{
    return stub<thiscall_t<void, mmHudMap*, struct OppIconInfo*, i32>>(0x42EEA0, this, arg1, arg2);
}

void mmHudMap::Reset()
{
    return stub<thiscall_t<void, mmHudMap*>>(0x42EE90, this);
}

void mmHudMap::SetOrient(bool arg1)
{
    return stub<thiscall_t<void, mmHudMap*, bool>>(0x42FA40, this, arg1);
}

void mmHudMap::SetZoomIn(bool arg1)
{
    return stub<thiscall_t<void, mmHudMap*, bool>>(0x42FA20, this, arg1);
}

void mmHudMap::ToggleMapOrient()
{
    return stub<thiscall_t<void, mmHudMap*>>(0x42FA10, this);
}

void mmHudMap::ToggleMapRes()
{
    return stub<thiscall_t<void, mmHudMap*>>(0x42FA00, this);
}

void mmHudMap::Update()
{
    return stub<thiscall_t<void, mmHudMap*>>(0x42F1A0, this);
}

i32 mmHudMap::GetCurrentMapMode()
{
    return stub<thiscall_t<i32, mmHudMap*>>(0x42EF20, this);
}

i32 mmHudMap::GetNextMapMode()
{
    return stub<thiscall_t<i32, mmHudMap*>>(0x42EF00, this);
}

void mmHudMap::SetMapMode(i32 arg1)
{
    return stub<thiscall_t<void, mmHudMap*, i32>>(0x42EF30, this, arg1);
}

void mmHudMap::DrawCops()
{
    return stub<thiscall_t<void, mmHudMap*>>(0x42F7D0, this);
}

void mmHudMap::DrawCopsnRobbers()
{
    return stub<thiscall_t<void, mmHudMap*>>(0x42F890, this);
}

void mmHudMap::DrawIcon(enum mmHudMap::IconType arg1, class Matrix34 const& arg2)
{
    return stub<thiscall_t<void, mmHudMap*, enum mmHudMap::IconType, class Matrix34 const&>>(
        0x42F580, this, arg1, arg2);
}

void mmHudMap::DrawIndicator(enum mmHudMap::IndicatorType arg1, class Vector3 const& arg2)
{
    return stub<thiscall_t<void, mmHudMap*, enum mmHudMap::IndicatorType, class Vector3 const&>>(
        0x42F690, this, arg1, arg2);
}

void mmHudMap::DrawOpponents()
{
    return stub<thiscall_t<void, mmHudMap*>>(0x42F6F0, this);
}

void mmHudMap::DrawPlayer()
{
    return stub<thiscall_t<void, mmHudMap*>>(0x42F600, this);
}

void mmHudMap::DrawWaypoints()
{
    return stub<thiscall_t<void, mmHudMap*>>(0x42F830, this);
}

class Matrix44& Convert(class Matrix44& arg1, class Matrix34 const& arg2)
{
    return stub<cdecl_t<class Matrix44&, class Matrix44&, class Matrix34 const&>>(0x42FCF0, arg1, arg2);
}

define_dummy_symbol(mmgame_hudmap);
