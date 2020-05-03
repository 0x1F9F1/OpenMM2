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

#include "netarena.h"

NetArena::NetArena(i32 arg1)
{
    unimplemented();
}

NetArena::~NetArena()
{
    unimplemented();
}

void NetArena::AddGameChatLine(char* arg1)
{
    return stub<thiscall_t<void, NetArena*, char*>>(0x4FF320, this, arg1);
}

void NetArena::AddRosterName(char* arg1)
{
    return stub<thiscall_t<void, NetArena*, char*>>(0x4FF620, this, arg1);
}

void NetArena::AddRosterName(
    struct LocString* arg1, struct LocString* arg2, struct LocString* arg3, u32 arg4, i32 arg5, i32 arg6)
{
    return stub<thiscall_t<void, NetArena*, struct LocString*, struct LocString*, struct LocString*, u32, i32, i32>>(
        0x4FF640, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

void NetArena::ChangeRosterData(struct LocString* arg1, u32 arg2, i32 arg3, i32 arg4)
{
    return stub<thiscall_t<void, NetArena*, struct LocString*, u32, i32, i32>>(0x500570, this, arg1, arg2, arg3, arg4);
}

void NetArena::ChatEntry()
{
    return stub<thiscall_t<void, NetArena*>>(0x4FF490, this);
}

void NetArena::DisablePlayButton()
{
    return stub<thiscall_t<void, NetArena*>>(0x4FF250, this);
}

void NetArena::EnablePlayButton()
{
    return stub<thiscall_t<void, NetArena*>>(0x4FF240, this);
}

i32 NetArena::FindRosterName(char* arg1)
{
    return stub<thiscall_t<i32, NetArena*, char*>>(0x4FF5B0, this, arg1);
}

char* NetArena::GetRaceName()
{
    return stub<thiscall_t<char*, NetArena*>>(0x4FFA90, this);
}

bool NetArena::GetStatus(u32 arg1)
{
    return stub<thiscall_t<bool, NetArena*, u32>>(0x4FFA40, this, arg1);
}

void NetArena::LateJoin()
{
    return stub<thiscall_t<void, NetArena*>>(0x500380, this);
}

void NetArena::LoadRaceMap()
{
    return stub<thiscall_t<void, NetArena*>>(0x5004E0, this);
}

void NetArena::PostChatMessages()
{
    return stub<thiscall_t<void, NetArena*>>(0x4FF3C0, this);
}

void NetArena::PostHostSettings(i32 arg1)
{
    return stub<thiscall_t<void, NetArena*, i32>>(0x4FFD00, this, arg1);
}

void NetArena::PostPlayerInfo(struct LocString* arg1, struct LocString* arg2, struct LocString* arg3)
{
    return stub<thiscall_t<void, NetArena*, struct LocString*, struct LocString*, struct LocString*>>(
        0x5002B0, this, arg1, arg2, arg3);
}

void NetArena::PreSetup()
{
    return stub<thiscall_t<void, NetArena*>>(0x4FF230, this);
}

void NetArena::RemoveRosterEntry(i32 arg1)
{
    return stub<thiscall_t<void, NetArena*, i32>>(0x4FF840, this, arg1);
}

void NetArena::RemoveRosterName(char* arg1)
{
    return stub<thiscall_t<void, NetArena*, char*>>(0x4FF9A0, this, arg1);
}

void NetArena::ResetGameChat()
{
    return stub<thiscall_t<void, NetArena*>>(0x4FF260, this);
}

void NetArena::ResetRoster()
{
    return stub<thiscall_t<void, NetArena*>>(0x4FF910, this);
}

i32 NetArena::RetrieveChatLine(char* arg1)
{
    return stub<thiscall_t<i32, NetArena*, char*>>(0x4FF560, this, arg1);
}

void NetArena::SetHost(i32 arg1)
{
    return stub<thiscall_t<void, NetArena*, i32>>(0x5003A0, this, arg1);
}

void NetArena::SetMyStatus(i32 arg1)
{
    return stub<thiscall_t<void, NetArena*, i32>>(0x500620, this, arg1);
}

void NetArena::SetStatus(u32 arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, NetArena*, u32, i32, i32>>(0x4FF9E0, this, arg1, arg2, arg3);
}

void NetArena::SetTeamWidgets()
{
    return stub<thiscall_t<void, NetArena*>>(0x500440, this);
}

void NetArena::ShowRosterTeam(i32 arg1)
{
    return stub<thiscall_t<void, NetArena*, i32>>(0x5005E0, this, arg1);
}

void NetArena::SyncJoin()
{
    return stub<thiscall_t<void, NetArena*>>(0x500360, this);
}

void NetArena::TeamCallback()
{
    return stub<thiscall_t<void, NetArena*>>(0x500430, this);
}

define_dummy_symbol(mmui_netarena);
