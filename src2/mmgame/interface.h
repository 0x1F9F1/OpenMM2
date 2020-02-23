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
    mmgame:interface

    void __cdecl ReportTimeAlloc(float) | ?ReportTimeAlloc@@YAXM@Z
    0x407B50 | int __cdecl IsStock(char *) | ?IsStock@@YAHPAD@Z
    0x407B80 | void __cdecl GetHostCars(class string &) | ?GetHostCars@@YAXAAVstring@@@Z
    0x407C80 | public: __thiscall mmInterface::mmInterface(void) | ??0mmInterface@@QAE@XZ
    0x409030 | public: void __thiscall mmInterface::InitPlayerInfo(void) | ?InitPlayerInfo@mmInterface@@QAEXXZ
    0x4094C0 | public: virtual __thiscall mmInterface::~mmInterface(void) | ??1mmInterface@@UAE@XZ
    0x4095E0 | public: void __thiscall mmInterface::MessageCallback(void *,void *) | ?MessageCallback@mmInterface@@QAEXPAX0@Z
    0x409D30 | public: void __thiscall mmInterface::MessageCallback2(void *,void *) | ?MessageCallback2@mmInterface@@QAEXPAX0@Z
    0x40A130 | public: virtual void __thiscall mmInterface::Reset(void) | ?Reset@mmInterface@@UAEXXZ
    0x40A140 | public: void __thiscall mmInterface::ShowMain(int) | ?ShowMain@mmInterface@@QAEXH@Z
    0x40A4D0 | private: void __thiscall mmInterface::GetReplayDescCB(void) | ?GetReplayDescCB@mmInterface@@AAEXXZ
    0x40A590 | public: void __thiscall mmInterface::ShowLockedVehicleMessage(void) | ?ShowLockedVehicleMessage@mmInterface@@QAEXXZ
    0x40A5B0 | public: void __thiscall mmInterface::BeDone(void) | ?BeDone@mmInterface@@QAEXXZ
    0x40A6C0 | public: virtual void __thiscall mmInterface::Update(void) | ?Update@mmInterface@@UAEXXZ
    0x40C0E0 | private: void __thiscall mmInterface::NetJoinCB(void) | ?NetJoinCB@mmInterface@@AAEXXZ
    0x40C140 | private: void __thiscall mmInterface::NetNameCB(void) | ?NetNameCB@mmInterface@@AAEXXZ
    0x40C170 | private: void __thiscall mmInterface::JoinGame(void) | ?JoinGame@mmInterface@@AAEXXZ
    0x40C1B0 | private: void __thiscall mmInterface::JoinLobbyGame(void) | ?JoinLobbyGame@mmInterface@@AAEXXZ
    0x40C1D0 | private: void __thiscall mmInterface::JoinLAN(void) | ?JoinLAN@mmInterface@@AAEXXZ
    0x40C260 | private: int __thiscall mmInterface::JoinSerial(void) | ?JoinSerial@mmInterface@@AAEHXZ
    0x40C320 | private: int __thiscall mmInterface::JoinModem(void) | ?JoinModem@mmInterface@@AAEHXZ
    0x40C430 | public: void __thiscall mmInterface::UpdateLobby(void) | ?UpdateLobby@mmInterface@@QAEXXZ
    0x40CF90 | public: void __thiscall mmInterface::Switch(int,int) | ?Switch@mmInterface@@QAEXHH@Z
    0x40D460 | public: void __thiscall mmInterface::LobbySwitch(int,int) | ?LobbySwitch@mmInterface@@QAEXHH@Z
    0x40D7E0 | private: void __thiscall mmInterface::GetUnlockedCar(void) | ?GetUnlockedCar@mmInterface@@AAEXXZ
    0x40D830 | private: void __thiscall mmInterface::GetUnlockedColor(void) | ?GetUnlockedColor@mmInterface@@AAEXXZ
    0x40D840 | private: void __thiscall mmInterface::RequestProverb(void) | ?RequestProverb@mmInterface@@AAEXXZ
    0x40D990 | private: void __thiscall mmInterface::LimitToHostCars(class string) | ?LimitToHostCars@mmInterface@@AAEXVstring@@@Z
    0x40DAE0 | private: void __thiscall mmInterface::PlayerRemoveCB(void) | ?PlayerRemoveCB@mmInterface@@AAEXXZ
    0x40DB10 | private: void __thiscall mmInterface::PlayerRemove(char *) | ?PlayerRemove@mmInterface@@AAEXPAD@Z
    0x40DD00 | private: void __thiscall mmInterface::PlayerCreateCB(void) | ?PlayerCreateCB@mmInterface@@AAEXXZ
    0x40DD50 | private: int __thiscall mmInterface::PlayerCreate(char *) | ?PlayerCreate@mmInterface@@AAEHPAD@Z
    0x40DF30 | private: void __thiscall mmInterface::PlayerLoadCB(void) | ?PlayerLoadCB@mmInterface@@AAEXXZ
    0x40DF60 | private: void __thiscall mmInterface::PlayerGraphicsCB(void) | ?PlayerGraphicsCB@mmInterface@@AAEXXZ
    0x40DFE0 | private: void __thiscall mmInterface::PlayerLoad(char *) | ?PlayerLoad@mmInterface@@AAEXPAD@Z
    0x40E120 | private: void __thiscall mmInterface::PlayerSwitchCityCB(void) | ?PlayerSwitchCityCB@mmInterface@@AAEXXZ
    0x40E150 | private: void __thiscall mmInterface::PlayerSetState(void) | ?PlayerSetState@mmInterface@@AAEXXZ
    0x40E380 | private: void __thiscall mmInterface::CitySetupCB(void) | ?CitySetupCB@mmInterface@@AAEXXZ
    0x40E580 | private: void __thiscall mmInterface::GetTimeString(float,char *) | ?GetTimeString@mmInterface@@AAEXMPAD@Z
    0x40E5E0 | private: void __thiscall mmInterface::GetScoreString(int,char *) | ?GetScoreString@mmInterface@@AAEXHPAD@Z
    0x40E620 | private: void __thiscall mmInterface::GetRaceString(int,char *) | ?GetRaceString@mmInterface@@AAEXHPAD@Z
    0x40E680 | private: char * __thiscall mmInterface::GetRaceName(enum dgGameMode,int,char *) | ?GetRaceName@mmInterface@@AAEPADW4dgGameMode@@HPAD@Z
    private: void __thiscall mmInterface::HOFInitRecords(int,char *) | ?HOFInitRecords@mmInterface@@AAEXHPAD@Z
    0x40E8F0 | private: void __thiscall mmInterface::HOFCB(void) | ?HOFCB@mmInterface@@AAEXXZ
    0x40E920 | private: void __thiscall mmInterface::HOFFillRecords(char *) | ?HOFFillRecords@mmInterface@@AAEXPAD@Z
    0x40F3B0 | private: void __thiscall mmInterface::PlayerInitStats(char *) | ?PlayerInitStats@mmInterface@@AAEXPAD@Z
    0x40F460 | private: void __thiscall mmInterface::PlayerFillStats(void) | ?PlayerFillStats@mmInterface@@AAEXXZ
    0x40F620 | private: void __thiscall mmInterface::PlayerFillRecords(char *) | ?PlayerFillRecords@mmInterface@@AAEXPAD@Z
    0x40FAD0 | private: void __thiscall mmInterface::PlayerFillCrashRecords(char *) | ?PlayerFillCrashRecords@mmInterface@@AAEXPAD@Z
    0x40FBA0 | private: void __thiscall mmInterface::PlayerResolveScore(void) | ?PlayerResolveScore@mmInterface@@AAEXXZ
    0x40FE20 | private: void __thiscall mmInterface::PlayerResolveCars(void) | ?PlayerResolveCars@mmInterface@@AAEXXZ
    0x40FE80 | private: void __thiscall mmInterface::PlayerReadState(void) | ?PlayerReadState@mmInterface@@AAEXXZ
    0x40FEA0 | private: void __thiscall mmInterface::RefreshDriverList(void) | ?RefreshDriverList@mmInterface@@AAEXXZ
    0x40FF50 | private: void __thiscall mmInterface::SetStateRace(int) | ?SetStateRace@mmInterface@@AAEXH@Z
    0x40FF60 | private: void __thiscall mmInterface::SetStateDefaults(void) | ?SetStateDefaults@mmInterface@@AAEXXZ
    0x40FF80 | private: void __thiscall mmInterface::InitNetwork(void) | ?InitNetwork@mmInterface@@AAEXXZ
    0x410090 | public: void __thiscall mmInterface::InitLobby(void) | ?InitLobby@mmInterface@@QAEXXZ
    0x4101B0 | private: void __thiscall mmInterface::InitProtocols(void) | ?InitProtocols@mmInterface@@AAEXXZ
    0x4101D0 | private: void __thiscall mmInterface::ShowSessions(void) | ?ShowSessions@mmInterface@@AAEXXZ
    0x4103A0 | private: void __thiscall mmInterface::ClearSessions(void) | ?ClearSessions@mmInterface@@AAEXXZ
    0x4103C0 | private: void __thiscall mmInterface::RefreshSessions(void) | ?RefreshSessions@mmInterface@@AAEXXZ
    0x4103F0 | private: int __thiscall mmInterface::JoinSession(int) | ?JoinSession@mmInterface@@AAEHH@Z
    0x4105D0 | private: int __thiscall mmInterface::JoinPasswordSession(int) | ?JoinPasswordSession@mmInterface@@AAEHH@Z
    0x410750 | private: bool __thiscall mmInterface::MultiAllReady(void) | ?MultiAllReady@mmInterface@@AAE_NXZ
    0x4107B0 | private: void __thiscall mmInterface::MultiStartGame(void) | ?MultiStartGame@mmInterface@@AAEXXZ
    0x4108B0 | private: void __thiscall mmInterface::MultiFillRoster(void) | ?MultiFillRoster@mmInterface@@AAEXXZ
    0x410930 | private: void __thiscall mmInterface::SetHostProtocol(void) | ?SetHostProtocol@mmInterface@@AAEXXZ
    0x4109D0 | private: void __thiscall mmInterface::SetProtocol(void) | ?SetProtocol@mmInterface@@AAEXXZ
    0x410A90 | private: int __thiscall mmInterface::SetProtocol2(void) | ?SetProtocol2@mmInterface@@AAEHXZ
    0x410AE0 | private: int __thiscall mmInterface::CreatePlayer(int) | ?CreatePlayer@mmInterface@@AAEHH@Z
    0x410D60 | private: int __thiscall mmInterface::GetHostPlayerData(struct mmPlayerInfo &) | ?GetHostPlayerData@mmInterface@@AAEHAAUmmPlayerInfo@@@Z
    0x410DB0 | private: void __thiscall mmInterface::GetUniquePlayerName(void) | ?GetUniquePlayerName@mmInterface@@AAEXXZ
    0x410E90 | private: void __thiscall mmInterface::ChangePlayerData(int) | ?ChangePlayerData@mmInterface@@AAEXH@Z
    0x411160 | private: void __thiscall mmInterface::RefreshPlayers(void) | ?RefreshPlayers@mmInterface@@AAEXXZ
    0x411420 | private: void __thiscall mmInterface::GetSessionData(struct NETSESSION_DESC) | ?GetSessionData@mmInterface@@AAEXUNETSESSION_DESC@@@Z
    0x411670 | private: int __thiscall mmInterface::CreateSession(void) | ?CreateSession@mmInterface@@AAEHXZ
    0x4117F0 | private: void __thiscall mmInterface::SetSessionData(struct NETSESSION_DESC *) | ?SetSessionData@mmInterface@@AAEXPAUNETSESSION_DESC@@@Z
    0x4119A0 | private: void __thiscall mmInterface::SetCRStateData(void) | ?SetCRStateData@mmInterface@@AAEXXZ
    0x411A10 | private: int __thiscall mmInterface::LobbyCreate(void) | ?LobbyCreate@mmInterface@@AAEHXZ
    0x411D80 | private: void __thiscall mmInterface::SendChatMessage(void *) | ?SendChatMessage@mmInterface@@AAEXPAX@Z
    0x411E60 | private: void __thiscall mmInterface::SendMsg(int,int) | ?SendMsg@mmInterface@@AAEXHH@Z
    0x411E80 | private: void __thiscall mmInterface::SendStartMsg(void) | ?SendStartMsg@mmInterface@@AAEXXZ
    0x411EF0 | private: void __thiscall mmInterface::BootPlayerCB(void *,void *) | ?BootPlayerCB@mmInterface@@AAEXPAX0@Z
    0x411F20 | private: void __thiscall mmInterface::SendBootMsg(unsigned long) | ?SendBootMsg@mmInterface@@AAEXK@Z
    0x411F40 | private: void __thiscall mmInterface::SendReadyStatus(void) | ?SendReadyStatus@mmInterface@@AAEXXZ
    0x411F70 | private: void __thiscall mmInterface::SendReadyReq(void) | ?SendReadyReq@mmInterface@@AAEXXZ
    0x411F90 | private: void __thiscall mmInterface::SendHostCars(unsigned long) | ?SendHostCars@mmInterface@@AAEXK@Z
    0x412010 | public: void __thiscall mmInterface::SetupArchiveTest(int &) | ?SetupArchiveTest@mmInterface@@QAEXAAH@Z
    0x412280 | private: void __thiscall mmInterface::PlayUIMusic(void) | ?PlayUIMusic@mmInterface@@AAEXXZ
    0x412340 | private: void __thiscall mmInterface::RefreshMe(void) | ?RefreshMe@mmInterface@@AAEXXZ
    public: __thiscall string::~string(void) | ??1string@@QAE@XZ
    public: virtual void * __thiscall mmInterface::`scalar deleting destructor'(unsigned int) | ??_GmmInterface@@UAEPAXI@Z
    0x4124D0 | public: virtual void * __thiscall mmInterface::`vector deleting destructor'(unsigned int) | ??_EmmInterface@@UAEPAXI@Z
    0x412500 | public: void __thiscall string::Init(int) | ?Init@string@@QAEXH@Z
    0x5B04B0 | const mmInterface::`vftable' | ??_7mmInterface@@6B@
    char * szSearchPath | ?szSearchPath@@3PADA
    char * defcarname | ?defcarname@@3PADA
*/

// 0x407B50 | ?IsStock@@YAHPAD@Z
inline i32 IsStock(char* arg1)
{
    return stub<cdecl_t<i32, char*>>(0x407B50, arg1);
}

// 0x407B80 | ?GetHostCars@@YAXAAVstring@@@Z
inline void GetHostCars(class string& arg1)
{
    return stub<cdecl_t<void, class string&>>(0x407B80, arg1);
}

struct mmInterface : asNode
{
public:
    // mmInterface::`vftable' @ 0x5B04B0

    // 0x407C80 | ??0mmInterface@@QAE@XZ
    inline mmInterface()
    {
        stub<member_func_t<void, mmInterface>>(0x407C80, this);
    }

    // 0x409030 | ?InitPlayerInfo@mmInterface@@QAEXXZ
    inline void InitPlayerInfo()
    {
        return stub<member_func_t<void, mmInterface>>(0x409030, this);
    }

    // 0x4095E0 | ?MessageCallback@mmInterface@@QAEXPAX0@Z
    inline void MessageCallback(void* arg1, void* arg2)
    {
        return stub<member_func_t<void, mmInterface, void*, void*>>(0x4095E0, this, arg1, arg2);
    }

    // 0x409D30 | ?MessageCallback2@mmInterface@@QAEXPAX0@Z
    inline void MessageCallback2(void* arg1, void* arg2)
    {
        return stub<member_func_t<void, mmInterface, void*, void*>>(0x409D30, this, arg1, arg2);
    }

    // 0x40A140 | ?ShowMain@mmInterface@@QAEXH@Z
    inline void ShowMain(i32 arg1)
    {
        return stub<member_func_t<void, mmInterface, i32>>(0x40A140, this, arg1);
    }

    // 0x40A4D0 | ?GetReplayDescCB@mmInterface@@AAEXXZ
    inline void GetReplayDescCB()
    {
        return stub<member_func_t<void, mmInterface>>(0x40A4D0, this);
    }

    // 0x40A590 | ?ShowLockedVehicleMessage@mmInterface@@QAEXXZ
    inline void ShowLockedVehicleMessage()
    {
        return stub<member_func_t<void, mmInterface>>(0x40A590, this);
    }

    // 0x40A5B0 | ?BeDone@mmInterface@@QAEXXZ
    inline void BeDone()
    {
        return stub<member_func_t<void, mmInterface>>(0x40A5B0, this);
    }

    // 0x40C0E0 | ?NetJoinCB@mmInterface@@AAEXXZ
    inline void NetJoinCB()
    {
        return stub<member_func_t<void, mmInterface>>(0x40C0E0, this);
    }

    // 0x40C140 | ?NetNameCB@mmInterface@@AAEXXZ
    inline void NetNameCB()
    {
        return stub<member_func_t<void, mmInterface>>(0x40C140, this);
    }

    // 0x40C170 | ?JoinGame@mmInterface@@AAEXXZ
    inline void JoinGame()
    {
        return stub<member_func_t<void, mmInterface>>(0x40C170, this);
    }

    // 0x40C1B0 | ?JoinLobbyGame@mmInterface@@AAEXXZ
    inline void JoinLobbyGame()
    {
        return stub<member_func_t<void, mmInterface>>(0x40C1B0, this);
    }

    // 0x40C1D0 | ?JoinLAN@mmInterface@@AAEXXZ
    inline void JoinLAN()
    {
        return stub<member_func_t<void, mmInterface>>(0x40C1D0, this);
    }

    // 0x40C260 | ?JoinSerial@mmInterface@@AAEHXZ
    inline i32 JoinSerial()
    {
        return stub<member_func_t<i32, mmInterface>>(0x40C260, this);
    }

    // 0x40C320 | ?JoinModem@mmInterface@@AAEHXZ
    inline i32 JoinModem()
    {
        return stub<member_func_t<i32, mmInterface>>(0x40C320, this);
    }

    // 0x40C430 | ?UpdateLobby@mmInterface@@QAEXXZ
    inline void UpdateLobby()
    {
        return stub<member_func_t<void, mmInterface>>(0x40C430, this);
    }

    // 0x40CF90 | ?Switch@mmInterface@@QAEXHH@Z
    inline void Switch(i32 arg1, i32 arg2)
    {
        return stub<member_func_t<void, mmInterface, i32, i32>>(0x40CF90, this, arg1, arg2);
    }

    // 0x40D460 | ?LobbySwitch@mmInterface@@QAEXHH@Z
    inline void LobbySwitch(i32 arg1, i32 arg2)
    {
        return stub<member_func_t<void, mmInterface, i32, i32>>(0x40D460, this, arg1, arg2);
    }

    // 0x40D7E0 | ?GetUnlockedCar@mmInterface@@AAEXXZ
    inline void GetUnlockedCar()
    {
        return stub<member_func_t<void, mmInterface>>(0x40D7E0, this);
    }

    // 0x40D830 | ?GetUnlockedColor@mmInterface@@AAEXXZ
    inline void GetUnlockedColor()
    {
        return stub<member_func_t<void, mmInterface>>(0x40D830, this);
    }

    // 0x40D840 | ?RequestProverb@mmInterface@@AAEXXZ
    inline void RequestProverb()
    {
        return stub<member_func_t<void, mmInterface>>(0x40D840, this);
    }

    // 0x40D990 | ?LimitToHostCars@mmInterface@@AAEXVstring@@@Z
    inline void LimitToHostCars(class string arg1)
    {
        return stub<member_func_t<void, mmInterface, class string>>(0x40D990, this, arg1);
    }

    // 0x40DAE0 | ?PlayerRemoveCB@mmInterface@@AAEXXZ
    inline void PlayerRemoveCB()
    {
        return stub<member_func_t<void, mmInterface>>(0x40DAE0, this);
    }

    // 0x40DB10 | ?PlayerRemove@mmInterface@@AAEXPAD@Z
    inline void PlayerRemove(char* arg1)
    {
        return stub<member_func_t<void, mmInterface, char*>>(0x40DB10, this, arg1);
    }

    // 0x40DD00 | ?PlayerCreateCB@mmInterface@@AAEXXZ
    inline void PlayerCreateCB()
    {
        return stub<member_func_t<void, mmInterface>>(0x40DD00, this);
    }

    // 0x40DD50 | ?PlayerCreate@mmInterface@@AAEHPAD@Z
    inline i32 PlayerCreate(char* arg1)
    {
        return stub<member_func_t<i32, mmInterface, char*>>(0x40DD50, this, arg1);
    }

    // 0x40DF30 | ?PlayerLoadCB@mmInterface@@AAEXXZ
    inline void PlayerLoadCB()
    {
        return stub<member_func_t<void, mmInterface>>(0x40DF30, this);
    }

    // 0x40DF60 | ?PlayerGraphicsCB@mmInterface@@AAEXXZ
    inline void PlayerGraphicsCB()
    {
        return stub<member_func_t<void, mmInterface>>(0x40DF60, this);
    }

    // 0x40DFE0 | ?PlayerLoad@mmInterface@@AAEXPAD@Z
    inline void PlayerLoad(char* arg1)
    {
        return stub<member_func_t<void, mmInterface, char*>>(0x40DFE0, this, arg1);
    }

    // 0x40E120 | ?PlayerSwitchCityCB@mmInterface@@AAEXXZ
    inline void PlayerSwitchCityCB()
    {
        return stub<member_func_t<void, mmInterface>>(0x40E120, this);
    }

    // 0x40E150 | ?PlayerSetState@mmInterface@@AAEXXZ
    inline void PlayerSetState()
    {
        return stub<member_func_t<void, mmInterface>>(0x40E150, this);
    }

    // 0x40E380 | ?CitySetupCB@mmInterface@@AAEXXZ
    inline void CitySetupCB()
    {
        return stub<member_func_t<void, mmInterface>>(0x40E380, this);
    }

    // 0x40E580 | ?GetTimeString@mmInterface@@AAEXMPAD@Z
    inline void GetTimeString(f32 arg1, char* arg2)
    {
        return stub<member_func_t<void, mmInterface, f32, char*>>(0x40E580, this, arg1, arg2);
    }

    // 0x40E5E0 | ?GetScoreString@mmInterface@@AAEXHPAD@Z
    inline void GetScoreString(i32 arg1, char* arg2)
    {
        return stub<member_func_t<void, mmInterface, i32, char*>>(0x40E5E0, this, arg1, arg2);
    }

    // 0x40E620 | ?GetRaceString@mmInterface@@AAEXHPAD@Z
    inline void GetRaceString(i32 arg1, char* arg2)
    {
        return stub<member_func_t<void, mmInterface, i32, char*>>(0x40E620, this, arg1, arg2);
    }

    // 0x40E680 | ?GetRaceName@mmInterface@@AAEPADW4dgGameMode@@HPAD@Z
    inline char* GetRaceName(enum dgGameMode arg1, i32 arg2, char* arg3)
    {
        return stub<member_func_t<char*, mmInterface, enum dgGameMode, i32, char*>>(0x40E680, this, arg1, arg2, arg3);
    }

    // 0x40E8F0 | ?HOFCB@mmInterface@@AAEXXZ
    inline void HOFCB()
    {
        return stub<member_func_t<void, mmInterface>>(0x40E8F0, this);
    }

    // 0x40E920 | ?HOFFillRecords@mmInterface@@AAEXPAD@Z
    inline void HOFFillRecords(char* arg1)
    {
        return stub<member_func_t<void, mmInterface, char*>>(0x40E920, this, arg1);
    }

    // 0x40F3B0 | ?PlayerInitStats@mmInterface@@AAEXPAD@Z
    inline void PlayerInitStats(char* arg1)
    {
        return stub<member_func_t<void, mmInterface, char*>>(0x40F3B0, this, arg1);
    }

    // 0x40F460 | ?PlayerFillStats@mmInterface@@AAEXXZ
    inline void PlayerFillStats()
    {
        return stub<member_func_t<void, mmInterface>>(0x40F460, this);
    }

    // 0x40F620 | ?PlayerFillRecords@mmInterface@@AAEXPAD@Z
    inline void PlayerFillRecords(char* arg1)
    {
        return stub<member_func_t<void, mmInterface, char*>>(0x40F620, this, arg1);
    }

    // 0x40FAD0 | ?PlayerFillCrashRecords@mmInterface@@AAEXPAD@Z
    inline void PlayerFillCrashRecords(char* arg1)
    {
        return stub<member_func_t<void, mmInterface, char*>>(0x40FAD0, this, arg1);
    }

    // 0x40FBA0 | ?PlayerResolveScore@mmInterface@@AAEXXZ
    inline void PlayerResolveScore()
    {
        return stub<member_func_t<void, mmInterface>>(0x40FBA0, this);
    }

    // 0x40FE20 | ?PlayerResolveCars@mmInterface@@AAEXXZ
    inline void PlayerResolveCars()
    {
        return stub<member_func_t<void, mmInterface>>(0x40FE20, this);
    }

    // 0x40FE80 | ?PlayerReadState@mmInterface@@AAEXXZ
    inline void PlayerReadState()
    {
        return stub<member_func_t<void, mmInterface>>(0x40FE80, this);
    }

    // 0x40FEA0 | ?RefreshDriverList@mmInterface@@AAEXXZ
    inline void RefreshDriverList()
    {
        return stub<member_func_t<void, mmInterface>>(0x40FEA0, this);
    }

    // 0x40FF50 | ?SetStateRace@mmInterface@@AAEXH@Z
    inline void SetStateRace(i32 arg1)
    {
        return stub<member_func_t<void, mmInterface, i32>>(0x40FF50, this, arg1);
    }

    // 0x40FF60 | ?SetStateDefaults@mmInterface@@AAEXXZ
    inline void SetStateDefaults()
    {
        return stub<member_func_t<void, mmInterface>>(0x40FF60, this);
    }

    // 0x40FF80 | ?InitNetwork@mmInterface@@AAEXXZ
    inline void InitNetwork()
    {
        return stub<member_func_t<void, mmInterface>>(0x40FF80, this);
    }

    // 0x410090 | ?InitLobby@mmInterface@@QAEXXZ
    inline void InitLobby()
    {
        return stub<member_func_t<void, mmInterface>>(0x410090, this);
    }

    // 0x4101B0 | ?InitProtocols@mmInterface@@AAEXXZ
    inline void InitProtocols()
    {
        return stub<member_func_t<void, mmInterface>>(0x4101B0, this);
    }

    // 0x4101D0 | ?ShowSessions@mmInterface@@AAEXXZ
    inline void ShowSessions()
    {
        return stub<member_func_t<void, mmInterface>>(0x4101D0, this);
    }

    // 0x4103A0 | ?ClearSessions@mmInterface@@AAEXXZ
    inline void ClearSessions()
    {
        return stub<member_func_t<void, mmInterface>>(0x4103A0, this);
    }

    // 0x4103C0 | ?RefreshSessions@mmInterface@@AAEXXZ
    inline void RefreshSessions()
    {
        return stub<member_func_t<void, mmInterface>>(0x4103C0, this);
    }

    // 0x4103F0 | ?JoinSession@mmInterface@@AAEHH@Z
    inline i32 JoinSession(i32 arg1)
    {
        return stub<member_func_t<i32, mmInterface, i32>>(0x4103F0, this, arg1);
    }

    // 0x4105D0 | ?JoinPasswordSession@mmInterface@@AAEHH@Z
    inline i32 JoinPasswordSession(i32 arg1)
    {
        return stub<member_func_t<i32, mmInterface, i32>>(0x4105D0, this, arg1);
    }

    // 0x410750 | ?MultiAllReady@mmInterface@@AAE_NXZ
    inline bool MultiAllReady()
    {
        return stub<member_func_t<bool, mmInterface>>(0x410750, this);
    }

    // 0x4107B0 | ?MultiStartGame@mmInterface@@AAEXXZ
    inline void MultiStartGame()
    {
        return stub<member_func_t<void, mmInterface>>(0x4107B0, this);
    }

    // 0x4108B0 | ?MultiFillRoster@mmInterface@@AAEXXZ
    inline void MultiFillRoster()
    {
        return stub<member_func_t<void, mmInterface>>(0x4108B0, this);
    }

    // 0x410930 | ?SetHostProtocol@mmInterface@@AAEXXZ
    inline void SetHostProtocol()
    {
        return stub<member_func_t<void, mmInterface>>(0x410930, this);
    }

    // 0x4109D0 | ?SetProtocol@mmInterface@@AAEXXZ
    inline void SetProtocol()
    {
        return stub<member_func_t<void, mmInterface>>(0x4109D0, this);
    }

    // 0x410A90 | ?SetProtocol2@mmInterface@@AAEHXZ
    inline i32 SetProtocol2()
    {
        return stub<member_func_t<i32, mmInterface>>(0x410A90, this);
    }

    // 0x410AE0 | ?CreatePlayer@mmInterface@@AAEHH@Z
    inline i32 CreatePlayer(i32 arg1)
    {
        return stub<member_func_t<i32, mmInterface, i32>>(0x410AE0, this, arg1);
    }

    // 0x410D60 | ?GetHostPlayerData@mmInterface@@AAEHAAUmmPlayerInfo@@@Z
    inline i32 GetHostPlayerData(struct mmPlayerInfo& arg1)
    {
        return stub<member_func_t<i32, mmInterface, struct mmPlayerInfo&>>(0x410D60, this, arg1);
    }

    // 0x410DB0 | ?GetUniquePlayerName@mmInterface@@AAEXXZ
    inline void GetUniquePlayerName()
    {
        return stub<member_func_t<void, mmInterface>>(0x410DB0, this);
    }

    // 0x410E90 | ?ChangePlayerData@mmInterface@@AAEXH@Z
    inline void ChangePlayerData(i32 arg1)
    {
        return stub<member_func_t<void, mmInterface, i32>>(0x410E90, this, arg1);
    }

    // 0x411160 | ?RefreshPlayers@mmInterface@@AAEXXZ
    inline void RefreshPlayers()
    {
        return stub<member_func_t<void, mmInterface>>(0x411160, this);
    }

    // 0x411420 | ?GetSessionData@mmInterface@@AAEXUNETSESSION_DESC@@@Z
    inline void GetSessionData(struct NETSESSION_DESC arg1)
    {
        return stub<member_func_t<void, mmInterface, struct NETSESSION_DESC>>(0x411420, this, arg1);
    }

    // 0x411670 | ?CreateSession@mmInterface@@AAEHXZ
    inline i32 CreateSession()
    {
        return stub<member_func_t<i32, mmInterface>>(0x411670, this);
    }

    // 0x4117F0 | ?SetSessionData@mmInterface@@AAEXPAUNETSESSION_DESC@@@Z
    inline void SetSessionData(struct NETSESSION_DESC* arg1)
    {
        return stub<member_func_t<void, mmInterface, struct NETSESSION_DESC*>>(0x4117F0, this, arg1);
    }

    // 0x4119A0 | ?SetCRStateData@mmInterface@@AAEXXZ
    inline void SetCRStateData()
    {
        return stub<member_func_t<void, mmInterface>>(0x4119A0, this);
    }

    // 0x411A10 | ?LobbyCreate@mmInterface@@AAEHXZ
    inline i32 LobbyCreate()
    {
        return stub<member_func_t<i32, mmInterface>>(0x411A10, this);
    }

    // 0x411D80 | ?SendChatMessage@mmInterface@@AAEXPAX@Z
    inline void SendChatMessage(void* arg1)
    {
        return stub<member_func_t<void, mmInterface, void*>>(0x411D80, this, arg1);
    }

    // 0x411E60 | ?SendMsg@mmInterface@@AAEXHH@Z
    inline void SendMsg(i32 arg1, i32 arg2)
    {
        return stub<member_func_t<void, mmInterface, i32, i32>>(0x411E60, this, arg1, arg2);
    }

    // 0x411E80 | ?SendStartMsg@mmInterface@@AAEXXZ
    inline void SendStartMsg()
    {
        return stub<member_func_t<void, mmInterface>>(0x411E80, this);
    }

    // 0x411EF0 | ?BootPlayerCB@mmInterface@@AAEXPAX0@Z
    inline void BootPlayerCB(void* arg1, void* arg2)
    {
        return stub<member_func_t<void, mmInterface, void*, void*>>(0x411EF0, this, arg1, arg2);
    }

    // 0x411F20 | ?SendBootMsg@mmInterface@@AAEXK@Z
    inline void SendBootMsg(u32 arg1)
    {
        return stub<member_func_t<void, mmInterface, u32>>(0x411F20, this, arg1);
    }

    // 0x411F40 | ?SendReadyStatus@mmInterface@@AAEXXZ
    inline void SendReadyStatus()
    {
        return stub<member_func_t<void, mmInterface>>(0x411F40, this);
    }

    // 0x411F70 | ?SendReadyReq@mmInterface@@AAEXXZ
    inline void SendReadyReq()
    {
        return stub<member_func_t<void, mmInterface>>(0x411F70, this);
    }

    // 0x411F90 | ?SendHostCars@mmInterface@@AAEXK@Z
    inline void SendHostCars(u32 arg1)
    {
        return stub<member_func_t<void, mmInterface, u32>>(0x411F90, this, arg1);
    }

    // 0x412010 | ?SetupArchiveTest@mmInterface@@QAEXAAH@Z
    inline void SetupArchiveTest(i32& arg1)
    {
        return stub<member_func_t<void, mmInterface, i32&>>(0x412010, this, arg1);
    }

    // 0x412280 | ?PlayUIMusic@mmInterface@@AAEXXZ
    inline void PlayUIMusic()
    {
        return stub<member_func_t<void, mmInterface>>(0x412280, this);
    }

    // 0x412340 | ?RefreshMe@mmInterface@@AAEXXZ
    inline void RefreshMe()
    {
        return stub<member_func_t<void, mmInterface>>(0x412340, this);
    }

    // 0x4094C0 | ??1mmInterface@@UAE@XZ
    inline ~mmInterface() override
    {
        stub<member_func_t<void, mmInterface>>(0x4094C0, this);
    }

    // 0x40A6C0 | ?Update@mmInterface@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmInterface>>(0x40A6C0, this);
    }

    // 0x40A130 | ?Reset@mmInterface@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmInterface>>(0x40A130, this);
    }
};
