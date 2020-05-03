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

#include "gamesingle.h"

mmGameSingle::mmGameSingle()
{
    unimplemented();
}

mmGameSingle::~mmGameSingle()
{
    unimplemented();
}

class mmWaypoints* mmGameSingle::GetWaypoints()
{
    return stub<thiscall_t<class mmWaypoints*, mmGameSingle*>>(0x41ABA0, this);
}

void mmGameSingle::HitWaterHandler()
{
    return stub<thiscall_t<void, mmGameSingle*>>(0x433C70, this);
}

i32 mmGameSingle::Init()
{
    return stub<thiscall_t<i32, mmGameSingle*>>(0x433AA0, this);
}

void mmGameSingle::InitOtherPlayers()
{
    return stub<thiscall_t<void, mmGameSingle*>>(0x433AB0, this);
}

void mmGameSingle::Reset()
{
    return stub<thiscall_t<void, mmGameSingle*>>(0x433AC0, this);
}

void mmGameSingle::Update()
{
    return stub<thiscall_t<void, mmGameSingle*>>(0x433C80, this);
}

void mmGameSingle::UpdateDebugKeyInput(i32 arg1)
{
    return stub<thiscall_t<void, mmGameSingle*, i32>>(0x433F20, this, arg1);
}

void mmGameSingle::UpdateGame()
{
    return stub<thiscall_t<void, mmGameSingle*>>(0x433CA0, this);
}

void mmGameSingle::UpdateGameInput(i32 arg1)
{
    return stub<thiscall_t<void, mmGameSingle*, i32>>(0x433C90, this, arg1);
}

void mmGameSingle::DisableRacers()
{
    return stub<thiscall_t<void, mmGameSingle*>>(0x433C00, this);
}

void mmGameSingle::EnableRacers()
{
    return stub<thiscall_t<void, mmGameSingle*>>(0x433B50, this);
}

bool mmGameSingle::UpdateRewards()
{
    return stub<thiscall_t<bool, mmGameSingle*>>(0x433CB0, this);
}

define_dummy_symbol(mmgame_gamesingle);
