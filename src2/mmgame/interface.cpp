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

#include "interface.h"

void GetHostCars(class string& arg1)
{
    return stub<cdecl_t<void, class string&>>(0x407B80, arg1);
}

i32 IsStock(char* arg1)
{
    return stub<cdecl_t<i32, char*>>(0x407B50, arg1);
}

mmInterface::mmInterface()
{
    unimplemented();
}

mmInterface::~mmInterface()
{
    unimplemented();
}

void mmInterface::BeDone()
{
    return stub<thiscall_t<void, mmInterface*>>(0x40A5B0, this);
}

void mmInterface::InitLobby()
{
    return stub<thiscall_t<void, mmInterface*>>(0x410090, this);
}

void mmInterface::InitPlayerInfo()
{
    return stub<thiscall_t<void, mmInterface*>>(0x409030, this);
}

void mmInterface::LobbySwitch(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, mmInterface*, i32, i32>>(0x40D460, this, arg1, arg2);
}

void mmInterface::MessageCallback(void* arg1, void* arg2)
{
    return stub<thiscall_t<void, mmInterface*, void*, void*>>(0x4095E0, this, arg1, arg2);
}

void mmInterface::MessageCallback2(void* arg1, void* arg2)
{
    return stub<thiscall_t<void, mmInterface*, void*, void*>>(0x409D30, this, arg1, arg2);
}

void mmInterface::Reset()
{
    return stub<thiscall_t<void, mmInterface*>>(0x40A130, this);
}

void mmInterface::SetupArchiveTest(i32& arg1)
{
    return stub<thiscall_t<void, mmInterface*, i32&>>(0x412010, this, arg1);
}

void mmInterface::ShowLockedVehicleMessage()
{
    return stub<thiscall_t<void, mmInterface*>>(0x40A590, this);
}

void mmInterface::ShowMain(i32 arg1)
{
    return stub<thiscall_t<void, mmInterface*, i32>>(0x40A140, this, arg1);
}

void mmInterface::Switch(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, mmInterface*, i32, i32>>(0x40CF90, this, arg1, arg2);
}

void mmInterface::Update()
{
    return stub<thiscall_t<void, mmInterface*>>(0x40A6C0, this);
}

void mmInterface::UpdateLobby()
{
    return stub<thiscall_t<void, mmInterface*>>(0x40C430, this);
}

void mmInterface::BootPlayerCB(void* arg1, void* arg2)
{
    return stub<thiscall_t<void, mmInterface*, void*, void*>>(0x411EF0, this, arg1, arg2);
}

void mmInterface::ChangePlayerData(i32 arg1)
{
    return stub<thiscall_t<void, mmInterface*, i32>>(0x410E90, this, arg1);
}

void mmInterface::CitySetupCB()
{
    return stub<thiscall_t<void, mmInterface*>>(0x40E380, this);
}

void mmInterface::ClearSessions()
{
    return stub<thiscall_t<void, mmInterface*>>(0x4103A0, this);
}

i32 mmInterface::CreatePlayer(i32 arg1)
{
    return stub<thiscall_t<i32, mmInterface*, i32>>(0x410AE0, this, arg1);
}

i32 mmInterface::CreateSession()
{
    return stub<thiscall_t<i32, mmInterface*>>(0x411670, this);
}

i32 mmInterface::GetHostPlayerData(struct mmPlayerInfo& arg1)
{
    return stub<thiscall_t<i32, mmInterface*, struct mmPlayerInfo&>>(0x410D60, this, arg1);
}

char* mmInterface::GetRaceName(enum dgGameMode arg1, i32 arg2, char* arg3)
{
    return stub<thiscall_t<char*, mmInterface*, enum dgGameMode, i32, char*>>(0x40E680, this, arg1, arg2, arg3);
}

void mmInterface::GetRaceString(i32 arg1, char* arg2)
{
    return stub<thiscall_t<void, mmInterface*, i32, char*>>(0x40E620, this, arg1, arg2);
}

void mmInterface::GetReplayDescCB()
{
    return stub<thiscall_t<void, mmInterface*>>(0x40A4D0, this);
}

void mmInterface::GetScoreString(i32 arg1, char* arg2)
{
    return stub<thiscall_t<void, mmInterface*, i32, char*>>(0x40E5E0, this, arg1, arg2);
}

void mmInterface::GetSessionData(struct NETSESSION_DESC arg1)
{
    return stub<thiscall_t<void, mmInterface*, struct NETSESSION_DESC>>(0x411420, this, arg1);
}

void mmInterface::GetTimeString(f32 arg1, char* arg2)
{
    return stub<thiscall_t<void, mmInterface*, f32, char*>>(0x40E580, this, arg1, arg2);
}

void mmInterface::GetUniquePlayerName()
{
    return stub<thiscall_t<void, mmInterface*>>(0x410DB0, this);
}

void mmInterface::GetUnlockedCar()
{
    return stub<thiscall_t<void, mmInterface*>>(0x40D7E0, this);
}

void mmInterface::GetUnlockedColor()
{
    return stub<thiscall_t<void, mmInterface*>>(0x40D830, this);
}

void mmInterface::HOFCB()
{
    return stub<thiscall_t<void, mmInterface*>>(0x40E8F0, this);
}

void mmInterface::HOFFillRecords(char* arg1)
{
    return stub<thiscall_t<void, mmInterface*, char*>>(0x40E920, this, arg1);
}

void mmInterface::HOFInitRecords(i32 arg1, char* arg2)
{
    return stub<thiscall_t<void, mmInterface*, i32, char*>>(0x40E820, this, arg1, arg2);
}

void mmInterface::InitNetwork()
{
    return stub<thiscall_t<void, mmInterface*>>(0x40FF80, this);
}

void mmInterface::InitProtocols()
{
    return stub<thiscall_t<void, mmInterface*>>(0x4101B0, this);
}

void mmInterface::JoinGame()
{
    return stub<thiscall_t<void, mmInterface*>>(0x40C170, this);
}

void mmInterface::JoinLAN()
{
    return stub<thiscall_t<void, mmInterface*>>(0x40C1D0, this);
}

void mmInterface::JoinLobbyGame()
{
    return stub<thiscall_t<void, mmInterface*>>(0x40C1B0, this);
}

i32 mmInterface::JoinModem()
{
    return stub<thiscall_t<i32, mmInterface*>>(0x40C320, this);
}

i32 mmInterface::JoinPasswordSession(i32 arg1)
{
    return stub<thiscall_t<i32, mmInterface*, i32>>(0x4105D0, this, arg1);
}

i32 mmInterface::JoinSerial()
{
    return stub<thiscall_t<i32, mmInterface*>>(0x40C260, this);
}

i32 mmInterface::JoinSession(i32 arg1)
{
    return stub<thiscall_t<i32, mmInterface*, i32>>(0x4103F0, this, arg1);
}

void mmInterface::LimitToHostCars(class string arg1)
{
    return stub<thiscall_t<void, mmInterface*, class string>>(0x40D990, this, arg1);
}

i32 mmInterface::LobbyCreate()
{
    return stub<thiscall_t<i32, mmInterface*>>(0x411A10, this);
}

bool mmInterface::MultiAllReady()
{
    return stub<thiscall_t<bool, mmInterface*>>(0x410750, this);
}

void mmInterface::MultiFillRoster()
{
    return stub<thiscall_t<void, mmInterface*>>(0x4108B0, this);
}

void mmInterface::MultiStartGame()
{
    return stub<thiscall_t<void, mmInterface*>>(0x4107B0, this);
}

void mmInterface::NetJoinCB()
{
    return stub<thiscall_t<void, mmInterface*>>(0x40C0E0, this);
}

void mmInterface::NetNameCB()
{
    return stub<thiscall_t<void, mmInterface*>>(0x40C140, this);
}

void mmInterface::PlayUIMusic()
{
    return stub<thiscall_t<void, mmInterface*>>(0x412280, this);
}

i32 mmInterface::PlayerCreate(char* arg1)
{
    return stub<thiscall_t<i32, mmInterface*, char*>>(0x40DD50, this, arg1);
}

void mmInterface::PlayerCreateCB()
{
    return stub<thiscall_t<void, mmInterface*>>(0x40DD00, this);
}

void mmInterface::PlayerFillCrashRecords(char* arg1)
{
    return stub<thiscall_t<void, mmInterface*, char*>>(0x40FAD0, this, arg1);
}

void mmInterface::PlayerFillRecords(char* arg1)
{
    return stub<thiscall_t<void, mmInterface*, char*>>(0x40F620, this, arg1);
}

void mmInterface::PlayerFillStats()
{
    return stub<thiscall_t<void, mmInterface*>>(0x40F460, this);
}

void mmInterface::PlayerGraphicsCB()
{
    return stub<thiscall_t<void, mmInterface*>>(0x40DF60, this);
}

void mmInterface::PlayerInitStats(char* arg1)
{
    return stub<thiscall_t<void, mmInterface*, char*>>(0x40F3B0, this, arg1);
}

void mmInterface::PlayerLoad(char* arg1)
{
    return stub<thiscall_t<void, mmInterface*, char*>>(0x40DFE0, this, arg1);
}

void mmInterface::PlayerLoadCB()
{
    return stub<thiscall_t<void, mmInterface*>>(0x40DF30, this);
}

void mmInterface::PlayerReadState()
{
    return stub<thiscall_t<void, mmInterface*>>(0x40FE80, this);
}

void mmInterface::PlayerRemove(char* arg1)
{
    return stub<thiscall_t<void, mmInterface*, char*>>(0x40DB10, this, arg1);
}

void mmInterface::PlayerRemoveCB()
{
    return stub<thiscall_t<void, mmInterface*>>(0x40DAE0, this);
}

void mmInterface::PlayerResolveCars()
{
    return stub<thiscall_t<void, mmInterface*>>(0x40FE20, this);
}

void mmInterface::PlayerResolveScore()
{
    return stub<thiscall_t<void, mmInterface*>>(0x40FBA0, this);
}

void mmInterface::PlayerSetState()
{
    return stub<thiscall_t<void, mmInterface*>>(0x40E150, this);
}

void mmInterface::PlayerSwitchCityCB()
{
    return stub<thiscall_t<void, mmInterface*>>(0x40E120, this);
}

void mmInterface::RefreshDriverList()
{
    return stub<thiscall_t<void, mmInterface*>>(0x40FEA0, this);
}

void mmInterface::RefreshMe()
{
    return stub<thiscall_t<void, mmInterface*>>(0x412340, this);
}

void mmInterface::RefreshPlayers()
{
    return stub<thiscall_t<void, mmInterface*>>(0x411160, this);
}

void mmInterface::RefreshSessions()
{
    return stub<thiscall_t<void, mmInterface*>>(0x4103C0, this);
}

void mmInterface::RequestProverb()
{
    return stub<thiscall_t<void, mmInterface*>>(0x40D840, this);
}

void mmInterface::SendBootMsg(u32 arg1)
{
    return stub<thiscall_t<void, mmInterface*, u32>>(0x411F20, this, arg1);
}

void mmInterface::SendChatMessage(void* arg1)
{
    return stub<thiscall_t<void, mmInterface*, void*>>(0x411D80, this, arg1);
}

void mmInterface::SendHostCars(u32 arg1)
{
    return stub<thiscall_t<void, mmInterface*, u32>>(0x411F90, this, arg1);
}

void mmInterface::SendMsg(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, mmInterface*, i32, i32>>(0x411E60, this, arg1, arg2);
}

void mmInterface::SendReadyReq()
{
    return stub<thiscall_t<void, mmInterface*>>(0x411F70, this);
}

void mmInterface::SendReadyStatus()
{
    return stub<thiscall_t<void, mmInterface*>>(0x411F40, this);
}

void mmInterface::SendStartMsg()
{
    return stub<thiscall_t<void, mmInterface*>>(0x411E80, this);
}

void mmInterface::SetCRStateData()
{
    return stub<thiscall_t<void, mmInterface*>>(0x4119A0, this);
}

void mmInterface::SetHostProtocol()
{
    return stub<thiscall_t<void, mmInterface*>>(0x410930, this);
}

void mmInterface::SetProtocol()
{
    return stub<thiscall_t<void, mmInterface*>>(0x4109D0, this);
}

i32 mmInterface::SetProtocol2()
{
    return stub<thiscall_t<i32, mmInterface*>>(0x410A90, this);
}

void mmInterface::SetSessionData(struct NETSESSION_DESC* arg1)
{
    return stub<thiscall_t<void, mmInterface*, struct NETSESSION_DESC*>>(0x4117F0, this, arg1);
}

void mmInterface::SetStateDefaults()
{
    return stub<thiscall_t<void, mmInterface*>>(0x40FF60, this);
}

void mmInterface::SetStateRace(i32 arg1)
{
    return stub<thiscall_t<void, mmInterface*, i32>>(0x40FF50, this, arg1);
}

void mmInterface::ShowSessions()
{
    return stub<thiscall_t<void, mmInterface*>>(0x4101D0, this);
}

define_dummy_symbol(mmgame_interface);
