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
    mmnetwork:network

    0x56FCD0 | public: __thiscall asNetwork::asNetwork(void) | ??0asNetwork@@QAE@XZ
    0x56FD70 | public: __thiscall asNetwork::~asNetwork(void) | ??1asNetwork@@QAE@XZ
    0x56FDC0 | public: int __thiscall asNetwork::Initialize(int,int,int) | ?Initialize@asNetwork@@QAEHHHH@Z
    0x56FE20 | public: int __thiscall asNetwork::InitializeLobby(int,int) | ?InitializeLobby@asNetwork@@QAEHHH@Z
    0x56FE90 | public: void __thiscall asNetwork::WaitForLobbyConnection(int) | ?WaitForLobbyConnection@asNetwork@@QAEXH@Z
    0x56FEF0 | public: int __thiscall asNetwork::JoinLobbySession(void) | ?JoinLobbySession@asNetwork@@QAEHXZ
    0x5700E0 | public: void __thiscall asNetwork::SendLobbyProperty(void *,int) | ?SendLobbyProperty@asNetwork@@QAEXPAXH@Z
    0x5701C0 | public: void __thiscall asNetwork::Logout(void) | ?Logout@asNetwork@@QAEXXZ
    0x5702C0 | public: void __thiscall asNetwork::Deallocate(void) | ?Deallocate@asNetwork@@QAEXXZ
    0x570300 | public: int __thiscall asNetwork::CreateInterface(void) | ?CreateInterface@asNetwork@@QAEHXZ
    0x570320 | public: int __thiscall asNetwork::GetNetworkCaps(void) | ?GetNetworkCaps@asNetwork@@QAEHXZ
    0x5703D0 | public: void __thiscall asNetwork::GetProtocols(void) | ?GetProtocols@asNetwork@@QAEXXZ
    0x570400 | public: int __thiscall asNetwork::SetProtocol(int,struct NETCOMMPACK *) | ?SetProtocol@asNetwork@@QAEHHPAUNETCOMMPACK@@@Z
    0x570760 | public: int __thiscall asNetwork::SetProtocol(int) | ?SetProtocol@asNetwork@@QAEHH@Z
    0x570870 | public: void __thiscall asNetwork::Disconnect(void) | ?Disconnect@asNetwork@@QAEXXZ
    0x5708C0 | public: char * __thiscall asNetwork::GetEnumProtocol(int) | ?GetEnumProtocol@asNetwork@@QAEPADH@Z
    0x5708F0 | public: int __thiscall asNetwork::GetNumProtocols(void) | ?GetNumProtocols@asNetwork@@QAEHXZ
    0x570900 | public: int __thiscall asNetwork::CreatePlayer(char *,void *,int) | ?CreatePlayer@asNetwork@@QAEHPADPAXH@Z
    0x5709C0 | public: void __thiscall asNetwork::DestroyPlayer(void) | ?DestroyPlayer@asNetwork@@QAEXXZ
    0x570A30 | public: int __thiscall asNetwork::GetPlayers(struct _GUID *) | ?GetPlayers@asNetwork@@QAEHPAU_GUID@@@Z
    0x570A60 | public: char * __thiscall asNetwork::GetEnumPlayer(int) | ?GetEnumPlayer@asNetwork@@QAEPADH@Z
    0x570A90 | public: unsigned long __thiscall asNetwork::GetPlayerID(int) | ?GetPlayerID@asNetwork@@QAEKH@Z
    0x570AD0 | public: int __thiscall asNetwork::GetNumPlayers(void) | ?GetNumPlayers@asNetwork@@QAEHXZ
    0x570B90 | public: char * __thiscall asNetwork::GetPlayerName(unsigned long) | ?GetPlayerName@asNetwork@@QAEPADK@Z
    0x570C60 | public: int __thiscall asNetwork::GetPlayerName(unsigned long,char *) | ?GetPlayerName@asNetwork@@QAEHKPAD@Z
    0x570D70 | public: void __thiscall asNetwork::SetPlayerData(unsigned long,void *,int) | ?SetPlayerData@asNetwork@@QAEXKPAXH@Z
    0x570E10 | public: int __thiscall asNetwork::GetEnumPlayerData(int,void *,int) | ?GetEnumPlayerData@asNetwork@@QAEHHPAXH@Z
    0x570EE0 | public: int __thiscall asNetwork::GetPlayerData(unsigned long,void *,int) | ?GetPlayerData@asNetwork@@QAEHKPAXH@Z
    0x570F90 | public: unsigned long __thiscall asNetwork::Ping(unsigned long) | ?Ping@asNetwork@@QAEKK@Z
    0x571070 | public: int __thiscall asNetwork::CreateSession(char *,char *,int,struct NETSESSION_DESC *) | ?CreateSession@asNetwork@@QAEHPAD0HPAUNETSESSION_DESC@@@Z
    0x571170 | public: int __thiscall asNetwork::JoinSession(char *,struct _GUID *,char *) | ?JoinSession@asNetwork@@QAEHPADPAU_GUID@@0@Z
    0x571550 | public: void __thiscall asNetwork::CloseSession(void) | ?CloseSession@asNetwork@@QAEXXZ
    0x571590 | public: char * __thiscall asNetwork::GetEnumSession(int) | ?GetEnumSession@asNetwork@@QAEPADH@Z
    0x5715C0 | public: int __thiscall asNetwork::GetEnumSessionID(int) | ?GetEnumSessionID@asNetwork@@QAEHH@Z
    0x5715F0 | public: int __thiscall asNetwork::GetNumSessions(void) | ?GetNumSessions@asNetwork@@QAEHXZ
    0x571600 | public: void __thiscall asNetwork::SealSession(void) | ?SealSession@asNetwork@@QAEXXZ
    0x571700 | public: void __thiscall asNetwork::UnSealSession(void) | ?UnSealSession@asNetwork@@QAEXXZ
    0x571800 | public: void __thiscall asNetwork::GetSessionData(struct NETSESSION_DESC *) | ?GetSessionData@asNetwork@@QAEXPAUNETSESSION_DESC@@@Z
    0x5718E0 | public: void __thiscall asNetwork::SetSessionData(struct NETSESSION_DESC *,char *) | ?SetSessionData@asNetwork@@QAEXPAUNETSESSION_DESC@@PAD@Z
    0x571A00 | public: int __thiscall asNetwork::GetSessionsSynch(int) | ?GetSessionsSynch@asNetwork@@QAEHH@Z
    0x571AB0 | public: void __thiscall asNetwork::GetSessionsAsynch(void) | ?GetSessionsAsynch@asNetwork@@QAEXXZ
    0x571B10 | public: void __thiscall asNetwork::StopSessionsAsynch(void) | ?StopSessionsAsynch@asNetwork@@QAEXXZ
    0x571B90 | public: int __thiscall asNetwork::PollLobby(void) | ?PollLobby@asNetwork@@QAEHXZ
    0x571C30 | public: int __thiscall asNetwork::Update(void) | ?Update@asNetwork@@QAEHXZ
    0x571D50 | public: void __thiscall asNetwork::HandleAppMessage(struct NET_TXHEAD *,unsigned long,unsigned long) | ?HandleAppMessage@asNetwork@@QAEXPAUNET_TXHEAD@@KK@Z
    0x571D90 | public: void __thiscall asNetwork::HandleSysMessage(struct DPMSG_GENERIC *) | ?HandleSysMessage@asNetwork@@QAEXPAUDPMSG_GENERIC@@@Z
    0x572090 | public: void __thiscall asNetwork::GetMessageQueue(unsigned long,unsigned long,unsigned int &,unsigned int &,int) | ?GetMessageQueue@asNetwork@@QAEXKKAAI0H@Z
    0x5720E0 | public: void __thiscall asNetwork::DumpRxQueueInfo(void) | ?DumpRxQueueInfo@asNetwork@@QAEXXZ
    0x572100 | public: void __thiscall asNetwork::DumpTxQueueInfo(void) | ?DumpTxQueueInfo@asNetwork@@QAEXXZ
    public: void __thiscall asNetwork::SetRxTime(float) | ?SetRxTime@asNetwork@@QAEXM@Z
    public: void __thiscall asNetwork::SetTxTime(float) | ?SetTxTime@asNetwork@@QAEXM@Z
    0x572120 | public: void __thiscall asNetwork::ChatMessage(unsigned long,char *) | ?ChatMessage@asNetwork@@QAEXKPAD@Z
    0x572200 | public: int __thiscall asNetwork::Send(unsigned long,int,void *,unsigned long,int) | ?Send@asNetwork@@QAEHKHPAXKH@Z
    0x5723F0 | public: int __thiscall asNetwork::GetMyLogicalIndex(void) | ?GetMyLogicalIndex@asNetwork@@QAEHXZ
    0x572430 | public: int __thiscall asNetwork::GetGameVersion(int) | ?GetGameVersion@asNetwork@@QAEHH@Z
    0x572460 | public: int __thiscall asNetwork::GetEnumSessionStatus(int) | ?GetEnumSessionStatus@asNetwork@@QAEHH@Z
    0x572490 | public: int __thiscall asNetwork::GetEnumSessionLock(int) | ?GetEnumSessionLock@asNetwork@@QAEHH@Z
    0x5724C0 | public: void __thiscall asNetwork::SetEnumSessionLock(int,int) | ?SetEnumSessionLock@asNetwork@@QAEXHH@Z
    0x5724E0 | public: void __thiscall asNetwork::SetTime(float) | ?SetTime@asNetwork@@QAEXM@Z
    0x572500 | public: float __thiscall asNetwork::GetTime(void) | ?GetTime@asNetwork@@QAEMXZ
    0x572540 | public: float __thiscall asNetwork::GetTicks(void) | ?GetTicks@asNetwork@@QAEMXZ
    0x572580 | int __stdcall EnumSessionCallback(struct DPSESSIONDESC2 const *,unsigned long *,unsigned long,void *) | ?EnumSessionCallback@@YGHPBUDPSESSIONDESC2@@PAKKPAX@Z
    0x572640 | int __stdcall EnumConnectionsCallback(struct _GUID const *,void *,unsigned long,struct DPNAME const *,unsigned long,void *) | ?EnumConnectionsCallback@@YGHPBU_GUID@@PAXKPBUDPNAME@@K1@Z
    0x5726D0 | int __stdcall EnumPlayersCallback(unsigned long,unsigned long,struct DPNAME const *,unsigned long,void *) | ?EnumPlayersCallback@@YGHKKPBUDPNAME@@KPAX@Z
    0x572730 | public: int __thiscall asNetwork::JoinSession(int,char *) | ?JoinSession@asNetwork@@QAEHHPAD@Z
    0x5727B0 | public: int __thiscall asNetwork::GetNumModems(void) | ?GetNumModems@asNetwork@@QAEHXZ
    0x5727C0 | public: char * __thiscall asNetwork::GetEnumModem(int) | ?GetEnumModem@asNetwork@@QAEPADH@Z
    0x5727F0 | public: int __thiscall asNetwork::QueryModems(void) | ?QueryModems@asNetwork@@QAEHXZ
    0x572920 | int __stdcall EnumModemAddress(struct _GUID const &,unsigned long,void const *,void *) | ?EnumModemAddress@@YGHABU_GUID@@KPBXPAX@Z
    public: __thiscall netStats::netStats(void) | ??0netStats@@QAE@XZ
    public: virtual __thiscall netStats::~netStats(void) | ??1netStats@@UAE@XZ
    public: virtual void __thiscall netStats::Stats(void) | ?Stats@netStats@@UAEXXZ
    public: virtual void __thiscall netStats::Cull(void) | ?Cull@netStats@@UAEXXZ
    public: virtual void * __thiscall netStats::`vector deleting destructor'(unsigned int) | ??_EnetStats@@UAEPAXI@Z
    public: virtual void * __thiscall netStats::`scalar deleting destructor'(unsigned int) | ??_GnetStats@@UAEPAXI@Z
    0x5B5C88 | _MM2_GUID
    0x5B5C98 | _MM2_ZONESCORE_GUID
    const netStats::`vftable' | ??_7netStats@@6B@
    0x6B3968 | class asNetwork NETMGR | ?NETMGR@@3VasNetwork@@A
    0x6B39E0 | unsigned char * SEND_BUFFER | ?SEND_BUFFER@@3PAEA
*/

#include "hooking.h"

#include "dplayx/dplay.h"
#include "dplayx/dplobby.h"

#include "data/callback.h"
#include "data/timer.h"

#include "zone.h"

class asNetwork
{
public:
    datCallback SysMessageCB {};
    datCallback AppMessageCB {};
    IDirectPlay4A *pDPlay {nullptr};
    IDirectPlayLobby3A *pLobby {nullptr};
    DPID PlayerID {0};
    DPLCONNECTION *pConnection {nullptr};
    GUID *pGUID {nullptr};
    void* pRecvBuf {nullptr};
    uint32_t nRecvBufSize {0};
    float float34 {0.0f};
    uint32_t MaxPlayers {32};
    uint32_t SessionOpen {0};
    uint32_t InLobby {0};
    uint32_t dword44 {0};
    uint32_t dword48 {0};
    uint8_t IsHost {0};
    Timer Time {};
    float Elapsed {0.0f};
    netZoneScore NetScore {};

    asNetwork();
    ~asNetwork();

    void Logout(void);
};

check_size(asNetwork, 0x70);

inline extern_var(0x6B3968, asNetwork, NETMGR);
