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

#include "multicircuit.h"

mmMultiCircuit::mmMultiCircuit()
{
    unimplemented();
}

mmMultiCircuit::~mmMultiCircuit()
{
    unimplemented();
}

void mmMultiCircuit::GameMessage(struct NET_RCXHEAD* arg1)
{
    return stub<thiscall_t<void, mmMultiCircuit*, struct NET_RCXHEAD*>>(0x422EC0, this, arg1);
}

class mmWaypoints* mmMultiCircuit::GetWaypoints()
{
    return stub<thiscall_t<class mmWaypoints*, mmMultiCircuit*>>(0x4236A0, this);
}

i32 mmMultiCircuit::Init()
{
    return stub<thiscall_t<i32, mmMultiCircuit*>>(0x421C60, this);
}

void mmMultiCircuit::InitGameObjects()
{
    return stub<thiscall_t<void, mmMultiCircuit*>>(0x421E90, this);
}

void mmMultiCircuit::InitHUD()
{
    return stub<thiscall_t<void, mmMultiCircuit*>>(0x421E40, this);
}

void mmMultiCircuit::InitMyPlayer()
{
    return stub<thiscall_t<void, mmMultiCircuit*>>(0x421DD0, this);
}

void mmMultiCircuit::InitNetworkPlayers()
{
    return stub<thiscall_t<void, mmMultiCircuit*>>(0x4220A0, this);
}

void mmMultiCircuit::Reset()
{
    return stub<thiscall_t<void, mmMultiCircuit*>>(0x422470, this);
}

void mmMultiCircuit::SwitchState(i32 arg1)
{
    return stub<thiscall_t<void, mmMultiCircuit*, i32>>(0x422D90, this, arg1);
}

void mmMultiCircuit::SystemMessage(struct NETSYS_MSG* arg1)
{
    return stub<thiscall_t<void, mmMultiCircuit*, struct NETSYS_MSG*>>(0x422DB0, this, arg1);
}

void mmMultiCircuit::UpdateDebugKeyInput(i32 arg1)
{
    return stub<thiscall_t<void, mmMultiCircuit*, i32>>(0x422DA0, this, arg1);
}

void mmMultiCircuit::UpdateGame()
{
    return stub<thiscall_t<void, mmMultiCircuit*>>(0x422570, this);
}

void mmMultiCircuit::UpdateGameInput(i32 arg1)
{
    return stub<thiscall_t<void, mmMultiCircuit*, i32>>(0x422530, this, arg1);
}

define_dummy_symbol(mmgame_multicircuit);
