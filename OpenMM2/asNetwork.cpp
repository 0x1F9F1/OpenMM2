#include "stdafx.h"
#include "asNetwork.h"

defnvar(0x6B3968, NETMGR);
instvar(0x6B39E0, uint8_t[1024], NetworkBuffer);

asNetwork::asNetwork()
    : pDPlay(0)
    , pLobby(0)
    , PlayerID()
    , pConnection(0)
    , pGUID(0)
    , pRecvBuf(nullptr)
    , nRecvBufSize(0)
    , float34(0.0f)
    , MaxPlayers(32)
    , SessionOpen(0)
    , InLobby(0)
    , dword44(0)
    , dword48(0)
    , IsHost(0)
    , Elapsed(0.0f)
{
    memset(NetworkBuffer, 0, sizeof(NetworkBuffer));
}

asNetwork::~asNetwork()
{
    Logout();
}

void asNetwork::Logout(void)
{
    return stub<thiscall_t<void, asNetwork>>(0x5701C0, this);
}

netZoneScore::netZoneScore()
    : pLobby(nullptr)
    , pZoneScore(nullptr)
    , GUID()
{ }

netZoneScore::~netZoneScore()
{
    if (pZoneScore)
    {
        pZoneScore->Release();
    }

    pZoneScore = nullptr;
}
