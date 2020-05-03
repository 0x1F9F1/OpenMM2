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

#include "singleroam.h"

mmSingleRoam::mmSingleRoam()
{
    unimplemented();
}

mmSingleRoam::~mmSingleRoam()
{
    unimplemented();
}

void mmSingleRoam::HitWaterHandler()
{
    return stub<thiscall_t<void, mmSingleRoam*>>(0x41FCD0, this);
}

i32 mmSingleRoam::Init()
{
    return stub<thiscall_t<i32, mmSingleRoam*>>(0x41FA30, this);
}

void mmSingleRoam::InitGameObjects()
{
    return stub<thiscall_t<void, mmSingleRoam*>>(0x41FB40, this);
}

void mmSingleRoam::InitHUD()
{
    return stub<thiscall_t<void, mmSingleRoam*>>(0x41FB10, this);
}

void mmSingleRoam::InitMyPlayer()
{
    return stub<thiscall_t<void, mmSingleRoam*>>(0x41FAA0, this);
}

void mmSingleRoam::InitOtherPlayers()
{
    return stub<thiscall_t<void, mmSingleRoam*>>(0x41FC40, this);
}

void mmSingleRoam::NextRace()
{
    return stub<thiscall_t<void, mmSingleRoam*>>(0x41FDA0, this);
}

void mmSingleRoam::Reset()
{
    return stub<thiscall_t<void, mmSingleRoam*>>(0x41FC90, this);
}

void mmSingleRoam::SwitchState(i32 arg1)
{
    return stub<thiscall_t<void, mmSingleRoam*, i32>>(0x41FD90, this, arg1);
}

void mmSingleRoam::Update()
{
    return stub<thiscall_t<void, mmSingleRoam*>>(0x41FCE0, this);
}

void mmSingleRoam::UpdateDebugKeyInput(i32 arg1)
{
    return stub<thiscall_t<void, mmSingleRoam*, i32>>(0x41FF20, this, arg1);
}

void mmSingleRoam::UpdateGame()
{
    return stub<thiscall_t<void, mmSingleRoam*>>(0x41FD00, this);
}

void mmSingleRoam::UpdateGameInput(i32 arg1)
{
    return stub<thiscall_t<void, mmSingleRoam*, i32>>(0x41FCF0, this, arg1);
}

bool mmSingleRoamMusicData::LoadMusic(char* arg1)
{
    return stub<thiscall_t<bool, mmSingleRoamMusicData*, char*>>(0x438980, this, arg1);
}

bool mmSingleRoamMusicData::LoadMusicSegments(class Stream* arg1, i16 arg2)
{
    return stub<thiscall_t<bool, mmSingleRoamMusicData*, class Stream*, i16>>(0x438B00, this, arg1, arg2);
}

define_dummy_symbol(mmgame_singleroam);
