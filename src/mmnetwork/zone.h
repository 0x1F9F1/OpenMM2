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
    mmnetwork:zone

    0x572990 | public: __thiscall netScoreInfo::netScoreInfo(void) | ??0netScoreInfo@@QAE@XZ
    0x5729B0 | public: __thiscall netZoneScore::netZoneScore(void) | ??0netZoneScore@@QAE@XZ
    0x5729C0 | public: __thiscall netZoneScore::~netZoneScore(void) | ??1netZoneScore@@QAE@XZ
    0x5729D0 | public: bool __thiscall netZoneScore::Init(struct _GUID,struct IDirectPlayLobby3 *) | ?Init@netZoneScore@@QAE_NU_GUID@@PAUIDirectPlayLobby3@@@Z
    0x572A30 | public: void __thiscall netZoneScore::SendGameSettings(char *) | ?SendGameSettings@netZoneScore@@QAEXPAD@Z
    0x572AA0 | public: void __thiscall netZoneScore::SendGameStart(void) | ?SendGameStart@netZoneScore@@QAEXXZ
    0x572AD0 | public: void __thiscall netZoneScore::SendGameStartStaging(void) | ?SendGameStartStaging@netZoneScore@@QAEXXZ
    0x572B00 | public: void __thiscall netZoneScore::SendGameEnd(void) | ?SendGameEnd@netZoneScore@@QAEXXZ
    0x572B50 | public: void __thiscall netZoneScore::InitResults(int,bool) | ?InitResults@netZoneScore@@QAEXH_N@Z
    public: void __thiscall netZoneScore::SendPlayerResults(class netScoreInfo *) | ?SendPlayerResults@netZoneScore@@QAEXPAVnetScoreInfo@@@Z
    public: void __thiscall netZoneScore::Deallocate(void) | ?Deallocate@netZoneScore@@QAEXXZ
    0x5B5CA8 | _ZONEPROPERTY_LobbyGuid3
    0x5B5CB8 | _ZONEPROPERTY_GameOptions
    0x5B5CC8 | _ZONEPROPERTY_GameState
    0x5B5CD8 | _ZONEPROPERTY_GameNewHost
    0x5B5CE8 | _IID_IZoneScore
    0x5B5CF8 | _LIBID_ZONESCORECLIENTLib
    0x5B5D08 | _CLSID_ZoneScore
*/

#include "hooking.h"

#include "dplayx/dplobby.h"

// Since MSN Zone is dead and IZoneScore never saw the light of day, this class is completely useless as is.
// However, it could be used for other presence systems (such as discord).
class netZoneScore
{
public:
    IDirectPlayLobby3 *pLobby {nullptr};
    GUID GUID {};
    IUnknown* pZoneScore {nullptr}; // IZoneScore

    netZoneScore() = default;

    ~netZoneScore();
};
