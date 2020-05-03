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

#include "zone.h"

netZoneScore::netZoneScore()
{
    unimplemented();
}

netZoneScore::~netZoneScore()
{
    unimplemented();
}

bool netZoneScore::Init(struct _GUID arg1, struct IDirectPlayLobby3* arg2)
{
    return stub<thiscall_t<bool, netZoneScore*, struct _GUID, struct IDirectPlayLobby3*>>(0x5729D0, this, arg1, arg2);
}

void netZoneScore::InitResults(i32 arg1, bool arg2)
{
    return stub<thiscall_t<void, netZoneScore*, i32, bool>>(0x572B50, this, arg1, arg2);
}

void netZoneScore::SendGameEnd()
{
    return stub<thiscall_t<void, netZoneScore*>>(0x572B00, this);
}

void netZoneScore::SendGameSettings(char* arg1)
{
    return stub<thiscall_t<void, netZoneScore*, char*>>(0x572A30, this, arg1);
}

void netZoneScore::SendGameStart()
{
    return stub<thiscall_t<void, netZoneScore*>>(0x572AA0, this);
}

void netZoneScore::SendGameStartStaging()
{
    return stub<thiscall_t<void, netZoneScore*>>(0x572AD0, this);
}

define_dummy_symbol(mmnetwork_zone);
