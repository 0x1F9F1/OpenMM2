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

#include "network.h"

asNetwork::asNetwork()
{
    unimplemented();
}

asNetwork::~asNetwork()
{
    unimplemented();
}

void asNetwork::ChatMessage(u32 arg1, char* arg2)
{
    return stub<thiscall_t<void, asNetwork*, u32, char*>>(0x572120, this, arg1, arg2);
}

void asNetwork::CloseSession()
{
    return stub<thiscall_t<void, asNetwork*>>(0x571550, this);
}

i32 asNetwork::CreateInterface()
{
    return stub<thiscall_t<i32, asNetwork*>>(0x570300, this);
}

i32 asNetwork::CreatePlayer(char* arg1, void* arg2, i32 arg3)
{
    return stub<thiscall_t<i32, asNetwork*, char*, void*, i32>>(0x570900, this, arg1, arg2, arg3);
}

i32 asNetwork::CreateSession(char* arg1, char* arg2, i32 arg3, struct NETSESSION_DESC* arg4)
{
    return stub<thiscall_t<i32, asNetwork*, char*, char*, i32, struct NETSESSION_DESC*>>(
        0x571070, this, arg1, arg2, arg3, arg4);
}

void asNetwork::Deallocate()
{
    return stub<thiscall_t<void, asNetwork*>>(0x5702C0, this);
}

void asNetwork::DestroyPlayer()
{
    return stub<thiscall_t<void, asNetwork*>>(0x5709C0, this);
}

void asNetwork::Disconnect()
{
    return stub<thiscall_t<void, asNetwork*>>(0x570870, this);
}

void asNetwork::DumpRxQueueInfo()
{
    return stub<thiscall_t<void, asNetwork*>>(0x5720E0, this);
}

void asNetwork::DumpTxQueueInfo()
{
    return stub<thiscall_t<void, asNetwork*>>(0x572100, this);
}

char* asNetwork::GetEnumModem(i32 arg1)
{
    return stub<thiscall_t<char*, asNetwork*, i32>>(0x5727C0, this, arg1);
}

char* asNetwork::GetEnumPlayer(i32 arg1)
{
    return stub<thiscall_t<char*, asNetwork*, i32>>(0x570A60, this, arg1);
}

i32 asNetwork::GetEnumPlayerData(i32 arg1, void* arg2, i32 arg3)
{
    return stub<thiscall_t<i32, asNetwork*, i32, void*, i32>>(0x570E10, this, arg1, arg2, arg3);
}

char* asNetwork::GetEnumProtocol(i32 arg1)
{
    return stub<thiscall_t<char*, asNetwork*, i32>>(0x5708C0, this, arg1);
}

char* asNetwork::GetEnumSession(i32 arg1)
{
    return stub<thiscall_t<char*, asNetwork*, i32>>(0x571590, this, arg1);
}

i32 asNetwork::GetEnumSessionID(i32 arg1)
{
    return stub<thiscall_t<i32, asNetwork*, i32>>(0x5715C0, this, arg1);
}

i32 asNetwork::GetEnumSessionLock(i32 arg1)
{
    return stub<thiscall_t<i32, asNetwork*, i32>>(0x572490, this, arg1);
}

i32 asNetwork::GetEnumSessionStatus(i32 arg1)
{
    return stub<thiscall_t<i32, asNetwork*, i32>>(0x572460, this, arg1);
}

i32 asNetwork::GetGameVersion(i32 arg1)
{
    return stub<thiscall_t<i32, asNetwork*, i32>>(0x572430, this, arg1);
}

void asNetwork::GetMessageQueue(u32 arg1, u32 arg2, u32& arg3, u32& arg4, i32 arg5)
{
    return stub<thiscall_t<void, asNetwork*, u32, u32, u32&, u32&, i32>>(0x572090, this, arg1, arg2, arg3, arg4, arg5);
}

i32 asNetwork::GetMyLogicalIndex()
{
    return stub<thiscall_t<i32, asNetwork*>>(0x5723F0, this);
}

i32 asNetwork::GetNetworkCaps()
{
    return stub<thiscall_t<i32, asNetwork*>>(0x570320, this);
}

i32 asNetwork::GetNumModems()
{
    return stub<thiscall_t<i32, asNetwork*>>(0x5727B0, this);
}

i32 asNetwork::GetNumPlayers()
{
    return stub<thiscall_t<i32, asNetwork*>>(0x570AD0, this);
}

i32 asNetwork::GetNumProtocols()
{
    return stub<thiscall_t<i32, asNetwork*>>(0x5708F0, this);
}

i32 asNetwork::GetNumSessions()
{
    return stub<thiscall_t<i32, asNetwork*>>(0x5715F0, this);
}

i32 asNetwork::GetPlayerData(u32 arg1, void* arg2, i32 arg3)
{
    return stub<thiscall_t<i32, asNetwork*, u32, void*, i32>>(0x570EE0, this, arg1, arg2, arg3);
}

u32 asNetwork::GetPlayerID(i32 arg1)
{
    return stub<thiscall_t<u32, asNetwork*, i32>>(0x570A90, this, arg1);
}

char* asNetwork::GetPlayerName(u32 arg1)
{
    return stub<thiscall_t<char*, asNetwork*, u32>>(0x570B90, this, arg1);
}

i32 asNetwork::GetPlayerName(u32 arg1, char* arg2)
{
    return stub<thiscall_t<i32, asNetwork*, u32, char*>>(0x570C60, this, arg1, arg2);
}

i32 asNetwork::GetPlayers(struct _GUID* arg1)
{
    return stub<thiscall_t<i32, asNetwork*, struct _GUID*>>(0x570A30, this, arg1);
}

void asNetwork::GetProtocols()
{
    return stub<thiscall_t<void, asNetwork*>>(0x5703D0, this);
}

void asNetwork::GetSessionData(struct NETSESSION_DESC* arg1)
{
    return stub<thiscall_t<void, asNetwork*, struct NETSESSION_DESC*>>(0x571800, this, arg1);
}

void asNetwork::GetSessionsAsynch()
{
    return stub<thiscall_t<void, asNetwork*>>(0x571AB0, this);
}

i32 asNetwork::GetSessionsSynch(i32 arg1)
{
    return stub<thiscall_t<i32, asNetwork*, i32>>(0x571A00, this, arg1);
}

f32 asNetwork::GetTicks()
{
    return stub<thiscall_t<f32, asNetwork*>>(0x572540, this);
}

f32 asNetwork::GetTime()
{
    return stub<thiscall_t<f32, asNetwork*>>(0x572500, this);
}

void asNetwork::HandleAppMessage(struct NET_TXHEAD* arg1, u32 arg2, u32 arg3)
{
    return stub<thiscall_t<void, asNetwork*, struct NET_TXHEAD*, u32, u32>>(0x571D50, this, arg1, arg2, arg3);
}

void asNetwork::HandleSysMessage(struct DPMSG_GENERIC* arg1)
{
    return stub<thiscall_t<void, asNetwork*, struct DPMSG_GENERIC*>>(0x571D90, this, arg1);
}

i32 asNetwork::Initialize(i32 arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<i32, asNetwork*, i32, i32, i32>>(0x56FDC0, this, arg1, arg2, arg3);
}

i32 asNetwork::InitializeLobby(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<i32, asNetwork*, i32, i32>>(0x56FE20, this, arg1, arg2);
}

i32 asNetwork::JoinLobbySession()
{
    return stub<thiscall_t<i32, asNetwork*>>(0x56FEF0, this);
}

i32 asNetwork::JoinSession(i32 arg1, char* arg2)
{
    return stub<thiscall_t<i32, asNetwork*, i32, char*>>(0x572730, this, arg1, arg2);
}

i32 asNetwork::JoinSession(char* arg1, struct _GUID* arg2, char* arg3)
{
    return stub<thiscall_t<i32, asNetwork*, char*, struct _GUID*, char*>>(0x571170, this, arg1, arg2, arg3);
}

void asNetwork::Logout()
{
    return stub<thiscall_t<void, asNetwork*>>(0x5701C0, this);
}

u32 asNetwork::Ping(u32 arg1)
{
    return stub<thiscall_t<u32, asNetwork*, u32>>(0x570F90, this, arg1);
}

i32 asNetwork::PollLobby()
{
    return stub<thiscall_t<i32, asNetwork*>>(0x571B90, this);
}

i32 asNetwork::QueryModems()
{
    return stub<thiscall_t<i32, asNetwork*>>(0x5727F0, this);
}

void asNetwork::SealSession()
{
    return stub<thiscall_t<void, asNetwork*>>(0x571600, this);
}

i32 asNetwork::Send(u32 arg1, i32 arg2, void* arg3, u32 arg4, i32 arg5)
{
    return stub<thiscall_t<i32, asNetwork*, u32, i32, void*, u32, i32>>(0x572200, this, arg1, arg2, arg3, arg4, arg5);
}

void asNetwork::SendLobbyProperty(void* arg1, i32 arg2)
{
    return stub<thiscall_t<void, asNetwork*, void*, i32>>(0x5700E0, this, arg1, arg2);
}

void asNetwork::SetEnumSessionLock(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, asNetwork*, i32, i32>>(0x5724C0, this, arg1, arg2);
}

void asNetwork::SetPlayerData(u32 arg1, void* arg2, i32 arg3)
{
    return stub<thiscall_t<void, asNetwork*, u32, void*, i32>>(0x570D70, this, arg1, arg2, arg3);
}

i32 asNetwork::SetProtocol(i32 arg1)
{
    return stub<thiscall_t<i32, asNetwork*, i32>>(0x570760, this, arg1);
}

i32 asNetwork::SetProtocol(i32 arg1, struct NETCOMMPACK* arg2)
{
    return stub<thiscall_t<i32, asNetwork*, i32, struct NETCOMMPACK*>>(0x570400, this, arg1, arg2);
}

void asNetwork::SetSessionData(struct NETSESSION_DESC* arg1, char* arg2)
{
    return stub<thiscall_t<void, asNetwork*, struct NETSESSION_DESC*, char*>>(0x5718E0, this, arg1, arg2);
}

void asNetwork::SetTime(f32 arg1)
{
    return stub<thiscall_t<void, asNetwork*, f32>>(0x5724E0, this, arg1);
}

void asNetwork::StopSessionsAsynch()
{
    return stub<thiscall_t<void, asNetwork*>>(0x571B10, this);
}

void asNetwork::UnSealSession()
{
    return stub<thiscall_t<void, asNetwork*>>(0x571700, this);
}

i32 asNetwork::Update()
{
    return stub<thiscall_t<i32, asNetwork*>>(0x571C30, this);
}

void asNetwork::WaitForLobbyConnection(i32 arg1)
{
    return stub<thiscall_t<void, asNetwork*, i32>>(0x56FE90, this, arg1);
}

i32 __stdcall EnumConnectionsCallback(
    struct _GUID const* arg1, void* arg2, u32 arg3, struct DPNAME const* arg4, u32 arg5, void* arg6)
{
    return stub<stdcall_t<i32, struct _GUID const*, void*, u32, struct DPNAME const*, u32, void*>>(
        0x572640, arg1, arg2, arg3, arg4, arg5, arg6);
}

i32 __stdcall EnumModemAddress(struct _GUID const& arg1, u32 arg2, void const* arg3, void* arg4)
{
    return stub<stdcall_t<i32, struct _GUID const&, u32, void const*, void*>>(0x572920, arg1, arg2, arg3, arg4);
}

i32 __stdcall EnumPlayersCallback(u32 arg1, u32 arg2, struct DPNAME const* arg3, u32 arg4, void* arg5)
{
    return stub<stdcall_t<i32, u32, u32, struct DPNAME const*, u32, void*>>(0x5726D0, arg1, arg2, arg3, arg4, arg5);
}

i32 __stdcall EnumSessionCallback(struct DPSESSIONDESC2 const* arg1, u32* arg2, u32 arg3, void* arg4)
{
    return stub<stdcall_t<i32, struct DPSESSIONDESC2 const*, u32*, u32, void*>>(0x572580, arg1, arg2, arg3, arg4);
}

define_dummy_symbol(mmnetwork_network);
