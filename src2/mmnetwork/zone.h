/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

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

// 0x5B5CA8 | _ZONEPROPERTY_LobbyGuid3

// 0x5B5CB8 | _ZONEPROPERTY_GameOptions

// 0x5B5CC8 | _ZONEPROPERTY_GameState

// 0x5B5CD8 | _ZONEPROPERTY_GameNewHost

// 0x5B5CE8 | _IID_IZoneScore

// 0x5B5CF8 | _LIBID_ZONESCORECLIENTLib

// 0x5B5D08 | _CLSID_ZoneScore

struct netZoneScore
{
public:
    // 0x5729B0 | ??0netZoneScore@@QAE@XZ
    netZoneScore()
    {
        stub<member_func_t<void, netZoneScore>>(0x5729B0, this);
    }

    // 0x5729C0 | ??1netZoneScore@@QAE@XZ
    ~netZoneScore()
    {
        stub<member_func_t<void, netZoneScore>>(0x5729C0, this);
    }

    // 0x5729D0 | ?Init@netZoneScore@@QAE_NU_GUID@@PAUIDirectPlayLobby3@@@Z
    bool Init(struct _GUID arg1, struct IDirectPlayLobby3* arg2)
    {
        return stub<member_func_t<bool, netZoneScore, struct _GUID, struct IDirectPlayLobby3*>>(
            0x5729D0, this, arg1, arg2);
    }

    // 0x572A30 | ?SendGameSettings@netZoneScore@@QAEXPAD@Z
    void SendGameSettings(char* arg1)
    {
        return stub<member_func_t<void, netZoneScore, char*>>(0x572A30, this, arg1);
    }

    // 0x572AA0 | ?SendGameStart@netZoneScore@@QAEXXZ
    void SendGameStart()
    {
        return stub<member_func_t<void, netZoneScore>>(0x572AA0, this);
    }

    // 0x572AD0 | ?SendGameStartStaging@netZoneScore@@QAEXXZ
    void SendGameStartStaging()
    {
        return stub<member_func_t<void, netZoneScore>>(0x572AD0, this);
    }

    // 0x572B00 | ?SendGameEnd@netZoneScore@@QAEXXZ
    void SendGameEnd()
    {
        return stub<member_func_t<void, netZoneScore>>(0x572B00, this);
    }

    // 0x572B50 | ?InitResults@netZoneScore@@QAEXH_N@Z
    void InitResults(i32 arg1, bool arg2)
    {
        return stub<member_func_t<void, netZoneScore, i32, bool>>(0x572B50, this, arg1, arg2);
    }
};
