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

#include "multirace.h"

mmMultiRace::mmMultiRace()
{
    unimplemented();
}

mmMultiRace::~mmMultiRace()
{
    unimplemented();
}

void mmMultiRace::GameMessage(struct NET_RCXHEAD* arg1)
{
    return stub<thiscall_t<void, mmMultiRace*, struct NET_RCXHEAD*>>(0x429560, this, arg1);
}

class mmWaypoints* mmMultiRace::GetWaypoints()
{
    return stub<thiscall_t<class mmWaypoints*, mmMultiRace*>>(0x429D80, this);
}

i32 mmMultiRace::Init()
{
    return stub<thiscall_t<i32, mmMultiRace*>>(0x428340, this);
}

void mmMultiRace::InitGameObjects()
{
    return stub<thiscall_t<void, mmMultiRace*>>(0x4284F0, this);
}

void mmMultiRace::InitHUD()
{
    return stub<thiscall_t<void, mmMultiRace*>>(0x4284A0, this);
}

void mmMultiRace::InitMyPlayer()
{
    return stub<thiscall_t<void, mmMultiRace*>>(0x428430, this);
}

void mmMultiRace::InitNetworkPlayers()
{
    return stub<thiscall_t<void, mmMultiRace*>>(0x428700, this);
}

void mmMultiRace::Reset()
{
    return stub<thiscall_t<void, mmMultiRace*>>(0x428AD0, this);
}

void mmMultiRace::SetTimeoutOff()
{
    return stub<thiscall_t<void, mmMultiRace*>>(0x429C10, this);
}

void mmMultiRace::SetTimeoutOn()
{
    return stub<thiscall_t<void, mmMultiRace*>>(0x429BE0, this);
}

void mmMultiRace::SwitchState(i32 arg1)
{
    return stub<thiscall_t<void, mmMultiRace*, i32>>(0x429440, this, arg1);
}

void mmMultiRace::SystemMessage(struct NETSYS_MSG* arg1)
{
    return stub<thiscall_t<void, mmMultiRace*, struct NETSYS_MSG*>>(0x429450, this, arg1);
}

void mmMultiRace::UpdateGame()
{
    return stub<thiscall_t<void, mmMultiRace*>>(0x428BE0, this);
}

void mmMultiRace::UpdateGameInput(i32 arg1)
{
    return stub<thiscall_t<void, mmMultiRace*, i32>>(0x428BA0, this, arg1);
}

define_dummy_symbol(mmgame_multirace);
