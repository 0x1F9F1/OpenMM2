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

#include "singlerace.h"

mmSingleRace::mmSingleRace()
{
    unimplemented();
}

mmSingleRace::~mmSingleRace()
{
    unimplemented();
}

class mmWaypoints* mmSingleRace::GetWaypoints()
{
    return stub<thiscall_t<class mmWaypoints*, mmSingleRace*>>(0x41F980, this);
}

void mmSingleRace::HitWaterHandler()
{
    return stub<thiscall_t<void, mmSingleRace*>>(0x41E530, this);
}

i32 mmSingleRace::Init()
{
    return stub<thiscall_t<i32, mmSingleRace*>>(0x41E010, this);
}

void mmSingleRace::InitGameObjects()
{
    return stub<thiscall_t<void, mmSingleRace*>>(0x41E200, this);
}

void mmSingleRace::InitHUD()
{
    return stub<thiscall_t<void, mmSingleRace*>>(0x41E1A0, this);
}

void mmSingleRace::InitMyPlayer()
{
    return stub<thiscall_t<void, mmSingleRace*>>(0x41E130, this);
}

void mmSingleRace::InitOtherPlayers()
{
    return stub<thiscall_t<void, mmSingleRace*>>(0x41E4E0, this);
}

void mmSingleRace::NextRace()
{
    return stub<thiscall_t<void, mmSingleRace*>>(0x41F600, this);
}

void mmSingleRace::Reset()
{
    return stub<thiscall_t<void, mmSingleRace*>>(0x41E4F0, this);
}

void mmSingleRace::SwitchState(i32 arg1)
{
    return stub<thiscall_t<void, mmSingleRace*, i32>>(0x41EDB0, this, arg1);
}

void mmSingleRace::Update()
{
    return stub<thiscall_t<void, mmSingleRace*>>(0x41E5A0, this);
}

void mmSingleRace::UpdateDebugKeyInput(i32 arg1)
{
    return stub<thiscall_t<void, mmSingleRace*, i32>>(0x41F970, this, arg1);
}

void mmSingleRace::UpdateGame()
{
    return stub<thiscall_t<void, mmSingleRace*>>(0x41E5F0, this);
}

void mmSingleRace::UpdateGameInput(i32 arg1)
{
    return stub<thiscall_t<void, mmSingleRace*, i32>>(0x41E5B0, this, arg1);
}

void mmSingleRace::UpdateOpponentStatus()
{
    return stub<thiscall_t<void, mmSingleRace*>>(0x41EBA0, this);
}

void mmSingleRace::UpdateScore()
{
    return stub<thiscall_t<void, mmSingleRace*>>(0x41EDC0, this);
}

void mmSingleRace::FinishMessage(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, mmSingleRace*, i32, i32>>(0x41F170, this, arg1, arg2);
}

i32 mmSingleRace::NextRaceAvailable()
{
    return stub<thiscall_t<i32, mmSingleRace*>>(0x41F100, this);
}

i32 mmSingleRace::ProgressCheck(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<i32, mmSingleRace*, i32, i32>>(0x41F590, this, arg1, arg2);
}

i32 mmSingleRace::RegisterFinish()
{
    return stub<thiscall_t<i32, mmSingleRace*>>(0x41F310, this);
}

define_dummy_symbol(mmgame_singlerace);
