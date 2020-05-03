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

#include "singlecircuit.h"

mmSingleCircuit::mmSingleCircuit()
{
    unimplemented();
}

mmSingleCircuit::~mmSingleCircuit()
{
    unimplemented();
}

class mmWaypoints* mmSingleCircuit::GetWaypoints()
{
    return stub<thiscall_t<class mmWaypoints*, mmSingleCircuit*>>(0x41DF20, this);
}

void mmSingleCircuit::HitWaterHandler()
{
    return stub<thiscall_t<void, mmSingleCircuit*>>(0x41CAA0, this);
}

i32 mmSingleCircuit::Init()
{
    return stub<thiscall_t<i32, mmSingleCircuit*>>(0x41C590, this);
}

void mmSingleCircuit::InitGameObjects()
{
    return stub<thiscall_t<void, mmSingleCircuit*>>(0x41C770, this);
}

void mmSingleCircuit::InitHUD()
{
    return stub<thiscall_t<void, mmSingleCircuit*>>(0x41C720, this);
}

void mmSingleCircuit::InitMyPlayer()
{
    return stub<thiscall_t<void, mmSingleCircuit*>>(0x41C6B0, this);
}

void mmSingleCircuit::InitOtherPlayers()
{
    return stub<thiscall_t<void, mmSingleCircuit*>>(0x41CA40, this);
}

void mmSingleCircuit::NextRace()
{
    return stub<thiscall_t<void, mmSingleCircuit*>>(0x41DBC0, this);
}

void mmSingleCircuit::Reset()
{
    return stub<thiscall_t<void, mmSingleCircuit*>>(0x41CA50, this);
}

void mmSingleCircuit::SwitchState(i32 arg1)
{
    return stub<thiscall_t<void, mmSingleCircuit*, i32>>(0x41D690, this, arg1);
}

void mmSingleCircuit::Update()
{
    return stub<thiscall_t<void, mmSingleCircuit*>>(0x41CB80, this);
}

void mmSingleCircuit::UpdateDebugKeyInput(i32 arg1)
{
    return stub<thiscall_t<void, mmSingleCircuit*, i32>>(0x41DF10, this, arg1);
}

void mmSingleCircuit::UpdateGame()
{
    return stub<thiscall_t<void, mmSingleCircuit*>>(0x41CEE0, this);
}

void mmSingleCircuit::UpdateGameInput(i32 arg1)
{
    return stub<thiscall_t<void, mmSingleCircuit*, i32>>(0x41CB90, this, arg1);
}

void mmSingleCircuit::UpdateOpponentStatus()
{
    return stub<thiscall_t<void, mmSingleCircuit*>>(0x41D480, this);
}

void mmSingleCircuit::UpdateScore()
{
    return stub<thiscall_t<void, mmSingleCircuit*>>(0x41CBA0, this);
}

void mmSingleCircuit::FinishMessage(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, mmSingleCircuit*, i32, i32>>(0x41D6A0, this, arg1, arg2);
}

i32 mmSingleCircuit::ProgressCheck(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<i32, mmSingleCircuit*, i32, i32>>(0x41DB80, this, arg1, arg2);
}

i32 mmSingleCircuit::RegisterFinish()
{
    return stub<thiscall_t<i32, mmSingleCircuit*>>(0x41D8A0, this);
}

i32 mmSingleCircuit::RegisterLap()
{
    return stub<thiscall_t<i32, mmSingleCircuit*>>(0x41D840, this);
}

define_dummy_symbol(mmgame_singlecircuit);
