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

#include "singleblitz.h"

mmSingleBlitz::mmSingleBlitz()
{
    unimplemented();
}

mmSingleBlitz::~mmSingleBlitz()
{
    unimplemented();
}

class mmWaypoints* mmSingleBlitz::GetWaypoints()
{
    return stub<thiscall_t<class mmWaypoints*, mmSingleBlitz*>>(0x41C490, this);
}

void mmSingleBlitz::HitWaterHandler()
{
    return stub<thiscall_t<void, mmSingleBlitz*>>(0x41B400, this);
}

i32 mmSingleBlitz::Init()
{
    return stub<thiscall_t<i32, mmSingleBlitz*>>(0x41AD30, this);
}

void mmSingleBlitz::InitGameObjects()
{
    return stub<thiscall_t<void, mmSingleBlitz*>>(0x41B0D0, this);
}

void mmSingleBlitz::InitHUD()
{
    return stub<thiscall_t<void, mmSingleBlitz*>>(0x41AEC0, this);
}

void mmSingleBlitz::InitMyPlayer()
{
    return stub<thiscall_t<void, mmSingleBlitz*>>(0x41AE50, this);
}

void mmSingleBlitz::InitOtherPlayers()
{
    return stub<thiscall_t<void, mmSingleBlitz*>>(0x41B360, this);
}

void mmSingleBlitz::NextRace()
{
    return stub<thiscall_t<void, mmSingleBlitz*>>(0x41C080, this);
}

void mmSingleBlitz::PlayTimerWarning(f32 arg1)
{
    return stub<thiscall_t<void, mmSingleBlitz*, f32>>(0x41C260, this, arg1);
}

void mmSingleBlitz::Reset()
{
    return stub<thiscall_t<void, mmSingleBlitz*>>(0x41B370, this);
}

void mmSingleBlitz::SwitchState(i32 arg1)
{
    return stub<thiscall_t<void, mmSingleBlitz*, i32>>(0x41BDB0, this, arg1);
}

void mmSingleBlitz::Update()
{
    return stub<thiscall_t<void, mmSingleBlitz*>>(0x41B460, this);
}

void mmSingleBlitz::UpdateDebugKeyInput(i32 arg1)
{
    return stub<thiscall_t<void, mmSingleBlitz*, i32>>(0x41C480, this, arg1);
}

void mmSingleBlitz::UpdateGame()
{
    return stub<thiscall_t<void, mmSingleBlitz*>>(0x41B5D0, this);
}

void mmSingleBlitz::UpdateGameInput(i32 arg1)
{
    return stub<thiscall_t<void, mmSingleBlitz*, i32>>(0x41B590, this, arg1);
}

void mmSingleBlitz::FinishMessage(i32 arg1)
{
    return stub<thiscall_t<void, mmSingleBlitz*, i32>>(0x41BFA0, this, arg1);
}

i32 mmSingleBlitz::ProgressCheck(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<i32, mmSingleBlitz*, i32, i32>>(0x41BFD0, this, arg1, arg2);
}

i32 mmSingleBlitz::RegisterFinish()
{
    return stub<thiscall_t<i32, mmSingleBlitz*>>(0x41BDC0, this);
}

define_dummy_symbol(mmgame_singleblitz);
