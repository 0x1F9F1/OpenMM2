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

#include "pu_results.h"

PUResults::PUResults(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, char* arg6, i32 arg7, i32 arg8)
{
    unimplemented();
}

PUResults::~PUResults()
{
    unimplemented();
}

void PUResults::AddLoser(i32 arg1, char const* arg2)
{
    return stub<thiscall_t<void, PUResults*, i32, char const*>>(0x509E10, this, arg1, arg2);
}

void PUResults::AddName(i32 arg1, char const* arg2, char const* arg3)
{
    return stub<thiscall_t<void, PUResults*, i32, char const*, char const*>>(0x509CA0, this, arg1, arg2, arg3);
}

void PUResults::AddName(i32 arg1, char const* arg2, f32 arg3)
{
    return stub<thiscall_t<void, PUResults*, i32, char const*, f32>>(0x509BE0, this, arg1, arg2, arg3);
}

void PUResults::AddName(i32 arg1, char const* arg2, i32 arg3)
{
    return stub<thiscall_t<void, PUResults*, i32, char const*, i32>>(0x509D40, this, arg1, arg2, arg3);
}

void PUResults::AddTitle(struct LocString* arg1, struct LocString* arg2)
{
    return stub<thiscall_t<void, PUResults*, struct LocString*, struct LocString*>>(0x509B20, this, arg1, arg2);
}

void PUResults::ClearNames()
{
    return stub<thiscall_t<void, PUResults*>>(0x509E70, this);
}

void PUResults::DisableNextRace()
{
    return stub<thiscall_t<void, PUResults*>>(0x509EE0, this);
}

void PUResults::EnableNextRace()
{
    return stub<thiscall_t<void, PUResults*>>(0x509EF0, this);
}

void PUResults::Init320()
{
    return stub<thiscall_t<void, PUResults*>>(0x509120, this);
}

void PUResults::Init640()
{
    return stub<thiscall_t<void, PUResults*>>(0x509600, this);
}

i32 PUResults::IsRaceMenuReadOnly()
{
    return stub<thiscall_t<i32, PUResults*>>(0x509BB0, this);
}

i32 PUResults::IsRosterReadOnly()
{
    return stub<thiscall_t<i32, PUResults*>>(0x509BA0, this);
}

void PUResults::RaceMenuRO(i32 arg1)
{
    return stub<thiscall_t<void, PUResults*, i32>>(0x509BC0, this, arg1);
}

void PUResults::Reset()
{
    return stub<thiscall_t<void, PUResults*>>(0x509B50, this);
}

void PUResults::RestartRO(i32 arg1)
{
    return stub<thiscall_t<void, PUResults*, i32>>(0x509B80, this, arg1);
}

void PUResults::RosterRO(i32 arg1)
{
    return stub<thiscall_t<void, PUResults*, i32>>(0x509B60, this, arg1);
}

void PUResults::SetMessage(struct LocString* arg1)
{
    return stub<thiscall_t<void, PUResults*, struct LocString*>>(0x509F00, this, arg1);
}

define_dummy_symbol(mmui_pu_results);
