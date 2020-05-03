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

#include "multiroam.h"

mmMultiRoam::mmMultiRoam()
{
    unimplemented();
}

mmMultiRoam::~mmMultiRoam()
{
    unimplemented();
}

void mmMultiRoam::GameMessage(struct NET_RCXHEAD* arg1)
{
    return stub<thiscall_t<void, mmMultiRoam*, struct NET_RCXHEAD*>>(0x428050, this, arg1);
}

class mmWaypoints* mmMultiRoam::GetWaypoints()
{
    return stub<thiscall_t<class mmWaypoints*, mmMultiRoam*>>(0x428250, this);
}

i32 mmMultiRoam::Init()
{
    return stub<thiscall_t<i32, mmMultiRoam*>>(0x427600, this);
}

void mmMultiRoam::InitGameObjects()
{
    return stub<thiscall_t<void, mmMultiRoam*>>(0x4277A0, this);
}

void mmMultiRoam::InitHUD()
{
    return stub<thiscall_t<void, mmMultiRoam*>>(0x427770, this);
}

void mmMultiRoam::InitMyPlayer()
{
    return stub<thiscall_t<void, mmMultiRoam*>>(0x427700, this);
}

void mmMultiRoam::InitNetworkPlayers()
{
    return stub<thiscall_t<void, mmMultiRoam*>>(0x427880, this);
}

void mmMultiRoam::Reset()
{
    return stub<thiscall_t<void, mmMultiRoam*>>(0x427C50, this);
}

void mmMultiRoam::SwitchState(i32 arg1)
{
    return stub<thiscall_t<void, mmMultiRoam*, i32>>(0x427EB0, this, arg1);
}

void mmMultiRoam::SystemMessage(struct NETSYS_MSG* arg1)
{
    return stub<thiscall_t<void, mmMultiRoam*, struct NETSYS_MSG*>>(0x427EC0, this, arg1);
}

void mmMultiRoam::UpdateGame()
{
    return stub<thiscall_t<void, mmMultiRoam*>>(0x427CD0, this);
}

void mmMultiRoam::UpdateGameInput(i32 arg1)
{
    return stub<thiscall_t<void, mmMultiRoam*, i32>>(0x427CC0, this, arg1);
}

define_dummy_symbol(mmgame_multiroam);
