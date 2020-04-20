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

// 0x572580 | ?EnumSessionCallback@@YGHPBUDPSESSIONDESC2@@PAKKPAX@Z
inline int32_t __stdcall EnumSessionCallback(
    struct DPSESSIONDESC2 const* arg1, uint32_t* arg2, uint32_t arg3, void* arg4)
{
    return stub<stdcall_t<int32_t, struct DPSESSIONDESC2 const*, uint32_t*, uint32_t, void*>>(
        0x572580, arg1, arg2, arg3, arg4);
}

// 0x572640 | ?EnumConnectionsCallback@@YGHPBU_GUID@@PAXKPBUDPNAME@@K1@Z
inline int32_t __stdcall EnumConnectionsCallback(
    struct _GUID const* arg1, void* arg2, uint32_t arg3, struct DPNAME const* arg4, uint32_t arg5, void* arg6)
{
    return stub<stdcall_t<int32_t, struct _GUID const*, void*, uint32_t, struct DPNAME const*, uint32_t, void*>>(
        0x572640, arg1, arg2, arg3, arg4, arg5, arg6);
}

// 0x5726D0 | ?EnumPlayersCallback@@YGHKKPBUDPNAME@@KPAX@Z
inline int32_t __stdcall EnumPlayersCallback(
    uint32_t arg1, uint32_t arg2, struct DPNAME const* arg3, uint32_t arg4, void* arg5)
{
    return stub<stdcall_t<int32_t, uint32_t, uint32_t, struct DPNAME const*, uint32_t, void*>>(
        0x5726D0, arg1, arg2, arg3, arg4, arg5);
}

// 0x572920 | ?EnumModemAddress@@YGHABU_GUID@@KPBXPAX@Z
inline int32_t __stdcall EnumModemAddress(struct _GUID const& arg1, uint32_t arg2, void const* arg3, void* arg4)
{
    return stub<stdcall_t<int32_t, struct _GUID const&, uint32_t, void const*, void*>>(
        0x572920, arg1, arg2, arg3, arg4);
}

// 0x5B5C88 | _MM2_GUID

// 0x5B5C98 | _MM2_ZONESCORE_GUID

// 0x6B3968 | ?NETMGR@@3VasNetwork@@A
inline extern_var(0x6B3968, class asNetwork, NETMGR);

// 0x6B39E0 | ?SEND_BUFFER@@3PAEA
inline extern_var(0x6B39E0, uint8_t*, SEND_BUFFER);

class asNetwork
{
public:
    // 0x56FCD0 | ??0asNetwork@@QAE@XZ
    inline asNetwork()
    {
        stub<member_func_t<void, asNetwork>>(0x56FCD0, this);
    }

    // 0x56FD70 | ??1asNetwork@@QAE@XZ
    inline ~asNetwork()
    {
        stub<member_func_t<void, asNetwork>>(0x56FD70, this);
    }

    // 0x56FDC0 | ?Initialize@asNetwork@@QAEHHHH@Z
    inline int32_t Initialize(int32_t arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, asNetwork, int32_t, int32_t, int32_t>>(0x56FDC0, this, arg1, arg2, arg3);
    }

    // 0x56FE20 | ?InitializeLobby@asNetwork@@QAEHHH@Z
    inline int32_t InitializeLobby(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, asNetwork, int32_t, int32_t>>(0x56FE20, this, arg1, arg2);
    }

    // 0x56FE90 | ?WaitForLobbyConnection@asNetwork@@QAEXH@Z
    inline void WaitForLobbyConnection(int32_t arg1)
    {
        return stub<member_func_t<void, asNetwork, int32_t>>(0x56FE90, this, arg1);
    }

    // 0x56FEF0 | ?JoinLobbySession@asNetwork@@QAEHXZ
    inline int32_t JoinLobbySession()
    {
        return stub<member_func_t<int32_t, asNetwork>>(0x56FEF0, this);
    }

    // 0x5700E0 | ?SendLobbyProperty@asNetwork@@QAEXPAXH@Z
    inline void SendLobbyProperty(void* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, asNetwork, void*, int32_t>>(0x5700E0, this, arg1, arg2);
    }

    // 0x5701C0 | ?Logout@asNetwork@@QAEXXZ
    inline void Logout()
    {
        return stub<member_func_t<void, asNetwork>>(0x5701C0, this);
    }

    // 0x5702C0 | ?Deallocate@asNetwork@@QAEXXZ
    inline void Deallocate()
    {
        return stub<member_func_t<void, asNetwork>>(0x5702C0, this);
    }

    // 0x570300 | ?CreateInterface@asNetwork@@QAEHXZ
    inline int32_t CreateInterface()
    {
        return stub<member_func_t<int32_t, asNetwork>>(0x570300, this);
    }

    // 0x570320 | ?GetNetworkCaps@asNetwork@@QAEHXZ
    inline int32_t GetNetworkCaps()
    {
        return stub<member_func_t<int32_t, asNetwork>>(0x570320, this);
    }

    // 0x5703D0 | ?GetProtocols@asNetwork@@QAEXXZ
    inline void GetProtocols()
    {
        return stub<member_func_t<void, asNetwork>>(0x5703D0, this);
    }

    // 0x570400 | ?SetProtocol@asNetwork@@QAEHHPAUNETCOMMPACK@@@Z
    inline int32_t SetProtocol(int32_t arg1, struct NETCOMMPACK* arg2)
    {
        return stub<member_func_t<int32_t, asNetwork, int32_t, struct NETCOMMPACK*>>(0x570400, this, arg1, arg2);
    }

    // 0x570760 | ?SetProtocol@asNetwork@@QAEHH@Z
    inline int32_t SetProtocol(int32_t arg1)
    {
        return stub<member_func_t<int32_t, asNetwork, int32_t>>(0x570760, this, arg1);
    }

    // 0x570870 | ?Disconnect@asNetwork@@QAEXXZ
    inline void Disconnect()
    {
        return stub<member_func_t<void, asNetwork>>(0x570870, this);
    }

    // 0x5708C0 | ?GetEnumProtocol@asNetwork@@QAEPADH@Z
    inline char* GetEnumProtocol(int32_t arg1)
    {
        return stub<member_func_t<char*, asNetwork, int32_t>>(0x5708C0, this, arg1);
    }

    // 0x5708F0 | ?GetNumProtocols@asNetwork@@QAEHXZ
    inline int32_t GetNumProtocols()
    {
        return stub<member_func_t<int32_t, asNetwork>>(0x5708F0, this);
    }

    // 0x570900 | ?CreatePlayer@asNetwork@@QAEHPADPAXH@Z
    inline int32_t CreatePlayer(char* arg1, void* arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, asNetwork, char*, void*, int32_t>>(0x570900, this, arg1, arg2, arg3);
    }

    // 0x5709C0 | ?DestroyPlayer@asNetwork@@QAEXXZ
    inline void DestroyPlayer()
    {
        return stub<member_func_t<void, asNetwork>>(0x5709C0, this);
    }

    // 0x570A30 | ?GetPlayers@asNetwork@@QAEHPAU_GUID@@@Z
    inline int32_t GetPlayers(struct _GUID* arg1)
    {
        return stub<member_func_t<int32_t, asNetwork, struct _GUID*>>(0x570A30, this, arg1);
    }

    // 0x570A60 | ?GetEnumPlayer@asNetwork@@QAEPADH@Z
    inline char* GetEnumPlayer(int32_t arg1)
    {
        return stub<member_func_t<char*, asNetwork, int32_t>>(0x570A60, this, arg1);
    }

    // 0x570A90 | ?GetPlayerID@asNetwork@@QAEKH@Z
    inline uint32_t GetPlayerID(int32_t arg1)
    {
        return stub<member_func_t<uint32_t, asNetwork, int32_t>>(0x570A90, this, arg1);
    }

    // 0x570AD0 | ?GetNumPlayers@asNetwork@@QAEHXZ
    inline int32_t GetNumPlayers()
    {
        return stub<member_func_t<int32_t, asNetwork>>(0x570AD0, this);
    }

    // 0x570B90 | ?GetPlayerName@asNetwork@@QAEPADK@Z
    inline char* GetPlayerName(uint32_t arg1)
    {
        return stub<member_func_t<char*, asNetwork, uint32_t>>(0x570B90, this, arg1);
    }

    // 0x570C60 | ?GetPlayerName@asNetwork@@QAEHKPAD@Z
    inline int32_t GetPlayerName(uint32_t arg1, char* arg2)
    {
        return stub<member_func_t<int32_t, asNetwork, uint32_t, char*>>(0x570C60, this, arg1, arg2);
    }

    // 0x570D70 | ?SetPlayerData@asNetwork@@QAEXKPAXH@Z
    inline void SetPlayerData(uint32_t arg1, void* arg2, int32_t arg3)
    {
        return stub<member_func_t<void, asNetwork, uint32_t, void*, int32_t>>(0x570D70, this, arg1, arg2, arg3);
    }

    // 0x570E10 | ?GetEnumPlayerData@asNetwork@@QAEHHPAXH@Z
    inline int32_t GetEnumPlayerData(int32_t arg1, void* arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, asNetwork, int32_t, void*, int32_t>>(0x570E10, this, arg1, arg2, arg3);
    }

    // 0x570EE0 | ?GetPlayerData@asNetwork@@QAEHKPAXH@Z
    inline int32_t GetPlayerData(uint32_t arg1, void* arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, asNetwork, uint32_t, void*, int32_t>>(0x570EE0, this, arg1, arg2, arg3);
    }

    // 0x570F90 | ?Ping@asNetwork@@QAEKK@Z
    inline uint32_t Ping(uint32_t arg1)
    {
        return stub<member_func_t<uint32_t, asNetwork, uint32_t>>(0x570F90, this, arg1);
    }

    // 0x571070 | ?CreateSession@asNetwork@@QAEHPAD0HPAUNETSESSION_DESC@@@Z
    inline int32_t CreateSession(char* arg1, char* arg2, int32_t arg3, struct NETSESSION_DESC* arg4)
    {
        return stub<member_func_t<int32_t, asNetwork, char*, char*, int32_t, struct NETSESSION_DESC*>>(
            0x571070, this, arg1, arg2, arg3, arg4);
    }

    // 0x571170 | ?JoinSession@asNetwork@@QAEHPADPAU_GUID@@0@Z
    inline int32_t JoinSession(char* arg1, struct _GUID* arg2, char* arg3)
    {
        return stub<member_func_t<int32_t, asNetwork, char*, struct _GUID*, char*>>(0x571170, this, arg1, arg2, arg3);
    }

    // 0x571550 | ?CloseSession@asNetwork@@QAEXXZ
    inline void CloseSession()
    {
        return stub<member_func_t<void, asNetwork>>(0x571550, this);
    }

    // 0x571590 | ?GetEnumSession@asNetwork@@QAEPADH@Z
    inline char* GetEnumSession(int32_t arg1)
    {
        return stub<member_func_t<char*, asNetwork, int32_t>>(0x571590, this, arg1);
    }

    // 0x5715C0 | ?GetEnumSessionID@asNetwork@@QAEHH@Z
    inline int32_t GetEnumSessionID(int32_t arg1)
    {
        return stub<member_func_t<int32_t, asNetwork, int32_t>>(0x5715C0, this, arg1);
    }

    // 0x5715F0 | ?GetNumSessions@asNetwork@@QAEHXZ
    inline int32_t GetNumSessions()
    {
        return stub<member_func_t<int32_t, asNetwork>>(0x5715F0, this);
    }

    // 0x571600 | ?SealSession@asNetwork@@QAEXXZ
    inline void SealSession()
    {
        return stub<member_func_t<void, asNetwork>>(0x571600, this);
    }

    // 0x571700 | ?UnSealSession@asNetwork@@QAEXXZ
    inline void UnSealSession()
    {
        return stub<member_func_t<void, asNetwork>>(0x571700, this);
    }

    // 0x571800 | ?GetSessionData@asNetwork@@QAEXPAUNETSESSION_DESC@@@Z
    inline void GetSessionData(struct NETSESSION_DESC* arg1)
    {
        return stub<member_func_t<void, asNetwork, struct NETSESSION_DESC*>>(0x571800, this, arg1);
    }

    // 0x5718E0 | ?SetSessionData@asNetwork@@QAEXPAUNETSESSION_DESC@@PAD@Z
    inline void SetSessionData(struct NETSESSION_DESC* arg1, char* arg2)
    {
        return stub<member_func_t<void, asNetwork, struct NETSESSION_DESC*, char*>>(0x5718E0, this, arg1, arg2);
    }

    // 0x571A00 | ?GetSessionsSynch@asNetwork@@QAEHH@Z
    inline int32_t GetSessionsSynch(int32_t arg1)
    {
        return stub<member_func_t<int32_t, asNetwork, int32_t>>(0x571A00, this, arg1);
    }

    // 0x571AB0 | ?GetSessionsAsynch@asNetwork@@QAEXXZ
    inline void GetSessionsAsynch()
    {
        return stub<member_func_t<void, asNetwork>>(0x571AB0, this);
    }

    // 0x571B10 | ?StopSessionsAsynch@asNetwork@@QAEXXZ
    inline void StopSessionsAsynch()
    {
        return stub<member_func_t<void, asNetwork>>(0x571B10, this);
    }

    // 0x571B90 | ?PollLobby@asNetwork@@QAEHXZ
    inline int32_t PollLobby()
    {
        return stub<member_func_t<int32_t, asNetwork>>(0x571B90, this);
    }

    // 0x571C30 | ?Update@asNetwork@@QAEHXZ
    inline int32_t Update()
    {
        return stub<member_func_t<int32_t, asNetwork>>(0x571C30, this);
    }

    // 0x571D50 | ?HandleAppMessage@asNetwork@@QAEXPAUNET_TXHEAD@@KK@Z
    inline void HandleAppMessage(struct NET_TXHEAD* arg1, uint32_t arg2, uint32_t arg3)
    {
        return stub<member_func_t<void, asNetwork, struct NET_TXHEAD*, uint32_t, uint32_t>>(
            0x571D50, this, arg1, arg2, arg3);
    }

    // 0x571D90 | ?HandleSysMessage@asNetwork@@QAEXPAUDPMSG_GENERIC@@@Z
    inline void HandleSysMessage(struct DPMSG_GENERIC* arg1)
    {
        return stub<member_func_t<void, asNetwork, struct DPMSG_GENERIC*>>(0x571D90, this, arg1);
    }

    // 0x572090 | ?GetMessageQueue@asNetwork@@QAEXKKAAI0H@Z
    inline void GetMessageQueue(uint32_t arg1, uint32_t arg2, uint32_t& arg3, uint32_t& arg4, int32_t arg5)
    {
        return stub<member_func_t<void, asNetwork, uint32_t, uint32_t, uint32_t&, uint32_t&, int32_t>>(
            0x572090, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x5720E0 | ?DumpRxQueueInfo@asNetwork@@QAEXXZ
    inline void DumpRxQueueInfo()
    {
        return stub<member_func_t<void, asNetwork>>(0x5720E0, this);
    }

    // 0x572100 | ?DumpTxQueueInfo@asNetwork@@QAEXXZ
    inline void DumpTxQueueInfo()
    {
        return stub<member_func_t<void, asNetwork>>(0x572100, this);
    }

    // 0x572120 | ?ChatMessage@asNetwork@@QAEXKPAD@Z
    inline void ChatMessage(uint32_t arg1, char* arg2)
    {
        return stub<member_func_t<void, asNetwork, uint32_t, char*>>(0x572120, this, arg1, arg2);
    }

    // 0x572200 | ?Send@asNetwork@@QAEHKHPAXKH@Z
    inline int32_t Send(uint32_t arg1, int32_t arg2, void* arg3, uint32_t arg4, int32_t arg5)
    {
        return stub<member_func_t<int32_t, asNetwork, uint32_t, int32_t, void*, uint32_t, int32_t>>(
            0x572200, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x5723F0 | ?GetMyLogicalIndex@asNetwork@@QAEHXZ
    inline int32_t GetMyLogicalIndex()
    {
        return stub<member_func_t<int32_t, asNetwork>>(0x5723F0, this);
    }

    // 0x572430 | ?GetGameVersion@asNetwork@@QAEHH@Z
    inline int32_t GetGameVersion(int32_t arg1)
    {
        return stub<member_func_t<int32_t, asNetwork, int32_t>>(0x572430, this, arg1);
    }

    // 0x572460 | ?GetEnumSessionStatus@asNetwork@@QAEHH@Z
    inline int32_t GetEnumSessionStatus(int32_t arg1)
    {
        return stub<member_func_t<int32_t, asNetwork, int32_t>>(0x572460, this, arg1);
    }

    // 0x572490 | ?GetEnumSessionLock@asNetwork@@QAEHH@Z
    inline int32_t GetEnumSessionLock(int32_t arg1)
    {
        return stub<member_func_t<int32_t, asNetwork, int32_t>>(0x572490, this, arg1);
    }

    // 0x5724C0 | ?SetEnumSessionLock@asNetwork@@QAEXHH@Z
    inline void SetEnumSessionLock(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, asNetwork, int32_t, int32_t>>(0x5724C0, this, arg1, arg2);
    }

    // 0x5724E0 | ?SetTime@asNetwork@@QAEXM@Z
    inline void SetTime(float arg1)
    {
        return stub<member_func_t<void, asNetwork, float>>(0x5724E0, this, arg1);
    }

    // 0x572500 | ?GetTime@asNetwork@@QAEMXZ
    inline float GetTime()
    {
        return stub<member_func_t<float, asNetwork>>(0x572500, this);
    }

    // 0x572540 | ?GetTicks@asNetwork@@QAEMXZ
    inline float GetTicks()
    {
        return stub<member_func_t<float, asNetwork>>(0x572540, this);
    }

    // 0x572730 | ?JoinSession@asNetwork@@QAEHHPAD@Z
    inline int32_t JoinSession(int32_t arg1, char* arg2)
    {
        return stub<member_func_t<int32_t, asNetwork, int32_t, char*>>(0x572730, this, arg1, arg2);
    }

    // 0x5727B0 | ?GetNumModems@asNetwork@@QAEHXZ
    inline int32_t GetNumModems()
    {
        return stub<member_func_t<int32_t, asNetwork>>(0x5727B0, this);
    }

    // 0x5727C0 | ?GetEnumModem@asNetwork@@QAEPADH@Z
    inline char* GetEnumModem(int32_t arg1)
    {
        return stub<member_func_t<char*, asNetwork, int32_t>>(0x5727C0, this, arg1);
    }

    // 0x5727F0 | ?QueryModems@asNetwork@@QAEHXZ
    inline int32_t QueryModems()
    {
        return stub<member_func_t<int32_t, asNetwork>>(0x5727F0, this);
    }
};
