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

#include "racebase.h"

RaceMenuBase::RaceMenuBase(i32 arg1)
{
    unimplemented();
}

RaceMenuBase::~RaceMenuBase()
{
    unimplemented();
}

void RaceMenuBase::AICallback()
{
    return stub<thiscall_t<void, RaceMenuBase*>>(0x5085D0, this);
}

void RaceMenuBase::AnotherCityChangeCB()
{
    return stub<thiscall_t<void, RaceMenuBase*>>(0x5084C0, this);
}

void RaceMenuBase::ChangeLocalVals()
{
    return stub<thiscall_t<void, RaceMenuBase*>>(0x508620, this);
}

void RaceMenuBase::CheatCallback()
{
    return stub<thiscall_t<void, RaceMenuBase*>>(0x5082C0, this);
}

void RaceMenuBase::CityChange()
{
    return stub<thiscall_t<void, RaceMenuBase*>>(0x508350, this);
}

void RaceMenuBase::DecLocale()
{
    return stub<thiscall_t<void, RaceMenuBase*>>(0x508EB0, this);
}

void RaceMenuBase::DecRaceName()
{
    return stub<thiscall_t<void, RaceMenuBase*>>(0x508D20, this);
}

void RaceMenuBase::DecTime()
{
    return stub<thiscall_t<void, RaceMenuBase*>>(0x508F00, this);
}

void RaceMenuBase::DecWeather()
{
    return stub<thiscall_t<void, RaceMenuBase*>>(0x508F60, this);
}

void RaceMenuBase::FocusDescription(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, RaceMenuBase*, i32, i32>>(0x507DF0, this, arg1, arg2);
}

void RaceMenuBase::GameCallback()
{
    return stub<thiscall_t<void, RaceMenuBase*>>(0x508540, this);
}

void RaceMenuBase::IncLocale()
{
    return stub<thiscall_t<void, RaceMenuBase*>>(0x508E80, this);
}

void RaceMenuBase::IncRaceName()
{
    return stub<thiscall_t<void, RaceMenuBase*>>(0x508DD0, this);
}

void RaceMenuBase::IncTime()
{
    return stub<thiscall_t<void, RaceMenuBase*>>(0x508ED0, this);
}

void RaceMenuBase::IncWeather()
{
    return stub<thiscall_t<void, RaceMenuBase*>>(0x508F30, this);
}

void RaceMenuBase::Init(i32 arg1)
{
    return stub<thiscall_t<void, RaceMenuBase*, i32>>(0x506CC0, this, arg1);
}

void RaceMenuBase::LapsCallback()
{
    return stub<thiscall_t<void, RaceMenuBase*>>(0x5085C0, this);
}

void RaceMenuBase::LoadRaceMap()
{
    return stub<thiscall_t<void, RaceMenuBase*>>(0x508C90, this);
}

void RaceMenuBase::PreSetup()
{
    return stub<thiscall_t<void, RaceMenuBase*>>(0x507DC0, this);
}

void RaceMenuBase::SetRW()
{
    return stub<thiscall_t<void, RaceMenuBase*>>(0x507EB0, this);
}

void RaceMenuBase::SetStateRace()
{
    return stub<thiscall_t<void, RaceMenuBase*>>(0x5088C0, this);
}

void RaceMenuBase::SyncRaceState()
{
    return stub<thiscall_t<void, RaceMenuBase*>>(0x5082D0, this);
}

void RaceMenuBase::WidgetOnOff(i32 arg1, class uiWidget* arg2)
{
    return stub<thiscall_t<void, RaceMenuBase*, i32, class uiWidget*>>(0x507E40, this, arg1, arg2);
}

void RaceMenuBase::SetCRWidgets(i32 arg1)
{
    return stub<thiscall_t<void, RaceMenuBase*, i32>>(0x505450, this, arg1);
}

void RaceMenuBase::InitCRWidgets()
{
    return stub<thiscall_t<void, RaceMenuBase*>>(0x505460, this);
}

define_dummy_symbol(mmui_racebase);
