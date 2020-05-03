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

#include "multiblitz.h"

mmMultiBlitz::mmMultiBlitz()
{
    unimplemented();
}

mmMultiBlitz::~mmMultiBlitz()
{
    unimplemented();
}

void mmMultiBlitz::GameMessage(struct NET_RCXHEAD* arg1)
{
    return stub<thiscall_t<void, mmMultiBlitz*, struct NET_RCXHEAD*>>(0x421370, this, arg1);
}

class mmWaypoints* mmMultiBlitz::GetWaypoints()
{
    return stub<thiscall_t<class mmWaypoints*, mmMultiBlitz*>>(0x421B80, this);
}

i32 mmMultiBlitz::Init()
{
    return stub<thiscall_t<i32, mmMultiBlitz*>>(0x420000, this);
}

void mmMultiBlitz::InitGameObjects()
{
    return stub<thiscall_t<void, mmMultiBlitz*>>(0x420220, this);
}

void mmMultiBlitz::InitHUD()
{
    return stub<thiscall_t<void, mmMultiBlitz*>>(0x4201A0, this);
}

void mmMultiBlitz::InitMyPlayer()
{
    return stub<thiscall_t<void, mmMultiBlitz*>>(0x420130, this);
}

void mmMultiBlitz::InitNetworkPlayers()
{
    return stub<thiscall_t<void, mmMultiBlitz*>>(0x4204B0, this);
}

void mmMultiBlitz::PlayTimerWarning(f32 arg1)
{
    return stub<thiscall_t<void, mmMultiBlitz*, f32>>(0x421930, this, arg1);
}

void mmMultiBlitz::Reset()
{
    return stub<thiscall_t<void, mmMultiBlitz*>>(0x420880, this);
}

void mmMultiBlitz::SwitchState(i32 arg1)
{
    return stub<thiscall_t<void, mmMultiBlitz*, i32>>(0x421250, this, arg1);
}

void mmMultiBlitz::SystemMessage(struct NETSYS_MSG* arg1)
{
    return stub<thiscall_t<void, mmMultiBlitz*, struct NETSYS_MSG*>>(0x421260, this, arg1);
}

void mmMultiBlitz::UpdateGame()
{
    return stub<thiscall_t<void, mmMultiBlitz*>>(0x420980, this);
}

void mmMultiBlitz::UpdateGameInput(i32 arg1)
{
    return stub<thiscall_t<void, mmMultiBlitz*, i32>>(0x420940, this, arg1);
}

define_dummy_symbol(mmgame_multiblitz);
