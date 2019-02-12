/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2019 Brick

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

#pragma once

/*
    mmui:netarena

    0x4FE880 | public: __thiscall NetArena::NetArena(int) | ??0NetArena@@QAE@H@Z
    0x4FF140 | public: virtual __thiscall NetArena::~NetArena(void) | ??1NetArena@@UAE@XZ
    0x4FF230 | public: virtual void __thiscall NetArena::PreSetup(void) | ?PreSetup@NetArena@@UAEXXZ
    0x4FF240 | public: void __thiscall NetArena::EnablePlayButton(void) | ?EnablePlayButton@NetArena@@QAEXXZ
    0x4FF250 | public: void __thiscall NetArena::DisablePlayButton(void) | ?DisablePlayButton@NetArena@@QAEXXZ
    0x4FF260 | public: void __thiscall NetArena::ResetGameChat(void) | ?ResetGameChat@NetArena@@QAEXXZ
    0x4FF320 | public: void __thiscall NetArena::AddGameChatLine(char *) | ?AddGameChatLine@NetArena@@QAEXPAD@Z
    0x4FF3C0 | public: void __thiscall NetArena::PostChatMessages(void) | ?PostChatMessages@NetArena@@QAEXXZ
    0x4FF490 | public: void __thiscall NetArena::ChatEntry(void) | ?ChatEntry@NetArena@@QAEXXZ
    0x4FF560 | public: int __thiscall NetArena::RetrieveChatLine(char *) | ?RetrieveChatLine@NetArena@@QAEHPAD@Z
    0x4FF5B0 | public: int __thiscall NetArena::FindRosterName(char *) | ?FindRosterName@NetArena@@QAEHPAD@Z
    0x4FF620 | public: void __thiscall NetArena::AddRosterName(char *) | ?AddRosterName@NetArena@@QAEXPAD@Z
    0x4FF640 | public: void __thiscall NetArena::AddRosterName(struct LocString *,struct LocString *,struct LocString *,unsigned long,int,int) | ?AddRosterName@NetArena@@QAEXPAULocString@@00KHH@Z
    0x4FF840 | public: void __thiscall NetArena::RemoveRosterEntry(int) | ?RemoveRosterEntry@NetArena@@QAEXH@Z
    0x4FF910 | public: void __thiscall NetArena::ResetRoster(void) | ?ResetRoster@NetArena@@QAEXXZ
    0x4FF9A0 | public: void __thiscall NetArena::RemoveRosterName(char *) | ?RemoveRosterName@NetArena@@QAEXPAD@Z
    0x4FF9E0 | public: void __thiscall NetArena::SetStatus(unsigned long,int,int) | ?SetStatus@NetArena@@QAEXKHH@Z
    0x4FFA40 | public: bool __thiscall NetArena::GetStatus(unsigned long) | ?GetStatus@NetArena@@QAE_NK@Z
    0x4FFA90 | public: char * __thiscall NetArena::GetRaceName(void) | ?GetRaceName@NetArena@@QAEPADXZ
    0x4FFD00 | public: void __thiscall NetArena::PostHostSettings(int) | ?PostHostSettings@NetArena@@QAEXH@Z
    0x5002B0 | public: void __thiscall NetArena::PostPlayerInfo(struct LocString *,struct LocString *,struct LocString *) | ?PostPlayerInfo@NetArena@@QAEXPAULocString@@00@Z
    0x500360 | public: void __thiscall NetArena::SyncJoin(void) | ?SyncJoin@NetArena@@QAEXXZ
    0x500380 | public: void __thiscall NetArena::LateJoin(void) | ?LateJoin@NetArena@@QAEXXZ
    0x5003A0 | public: void __thiscall NetArena::SetHost(int) | ?SetHost@NetArena@@QAEXH@Z
    0x500430 | public: void __thiscall NetArena::TeamCallback(void) | ?TeamCallback@NetArena@@QAEXXZ
    0x500440 | public: void __thiscall NetArena::SetTeamWidgets(void) | ?SetTeamWidgets@NetArena@@QAEXXZ
    0x5004E0 | public: void __thiscall NetArena::LoadRaceMap(void) | ?LoadRaceMap@NetArena@@QAEXXZ
    0x500570 | public: void __thiscall NetArena::ChangeRosterData(struct LocString *,unsigned long,int,int) | ?ChangeRosterData@NetArena@@QAEXPAULocString@@KHH@Z
    0x5005E0 | public: void __thiscall NetArena::ShowRosterTeam(int) | ?ShowRosterTeam@NetArena@@QAEXH@Z
    0x500620 | public: void __thiscall NetArena::SetMyStatus(int) | ?SetMyStatus@NetArena@@QAEXH@Z
    0x500670 | public: virtual void * __thiscall NetArena::`scalar deleting destructor'(unsigned int) | ??_GNetArena@@UAEPAXI@Z
    public: virtual void * __thiscall NetArena::`vector deleting destructor'(unsigned int) | ??_ENetArena@@UAEPAXI@Z
    0x5B4200 | const NetArena::`vftable' | ??_7NetArena@@6B@
*/

// #include "hooking.h"
