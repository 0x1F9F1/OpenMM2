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

#include "racehost.h"

HostRaceMenu::HostRaceMenu(i32 arg1)
{
    unimplemented();
}

HostRaceMenu::~HostRaceMenu()
{
    unimplemented();
}

void HostRaceMenu::DecodeCRData(i32 arg1)
{
    return stub<thiscall_t<void, HostRaceMenu*, i32>>(0x501530, this, arg1);
}

i32 HostRaceMenu::EncodeCRData()
{
    return stub<thiscall_t<i32, HostRaceMenu*>>(0x5014E0, this);
}

i32 HostRaceMenu::GetGoldMass()
{
    return stub<thiscall_t<i32, HostRaceMenu*>>(0x5016A0, this);
}

i32 HostRaceMenu::GetGoldMassVal()
{
    return stub<thiscall_t<i32, HostRaceMenu*>>(0x501700, this);
}

void HostRaceMenu::GetLimit(i32& arg1, i32& arg2)
{
    return stub<thiscall_t<void, HostRaceMenu*, i32&, i32&>>(0x5015A0, this, arg1, arg2);
}

i32 HostRaceMenu::GetLimitVal(i32& arg1)
{
    return stub<thiscall_t<i32, HostRaceMenu*, i32&>>(0x5016B0, this, arg1);
}

void HostRaceMenu::InitCRWidgets()
{
    return stub<thiscall_t<void, HostRaceMenu*>>(0x500890, this);
}

void HostRaceMenu::LimitDec()
{
    return stub<thiscall_t<void, HostRaceMenu*>>(0x501770, this);
}

void HostRaceMenu::LimitInc()
{
    return stub<thiscall_t<void, HostRaceMenu*>>(0x501720, this);
}

void HostRaceMenu::MassDec()
{
    return stub<thiscall_t<void, HostRaceMenu*>>(0x5017F0, this);
}

void HostRaceMenu::MassInc()
{
    return stub<thiscall_t<void, HostRaceMenu*>>(0x5017C0, this);
}

void HostRaceMenu::PreSetup()
{
    return stub<thiscall_t<void, HostRaceMenu*>>(0x500870, this);
}

void HostRaceMenu::SetCRWidgets(i32 arg1)
{
    return stub<thiscall_t<void, HostRaceMenu*, i32>>(0x501230, this, arg1);
}

void HostRaceMenu::SetGameClassCallback()
{
    return stub<thiscall_t<void, HostRaceMenu*>>(0x501710, this);
}

void HostRaceMenu::SetGoldMass(i32 arg1)
{
    return stub<thiscall_t<void, HostRaceMenu*, i32>>(0x501670, this, arg1);
}

void HostRaceMenu::SetLimit(i32& arg1, i32& arg2)
{
    return stub<thiscall_t<void, HostRaceMenu*, i32&, i32&>>(0x5015F0, this, arg1, arg2);
}

void HostRaceMenu::SetLimitControl()
{
    return stub<thiscall_t<void, HostRaceMenu*>>(0x501330, this);
}

define_dummy_symbol(mmui_racehost);
