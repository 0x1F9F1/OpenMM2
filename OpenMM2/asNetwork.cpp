#include "stdafx.h"
#include "asNetwork.h"

#pragma comment (lib, "dx7/lib/dplayx.lib")

defnvar(0x6B3968, NETMGR);
instvar(0x6B39E0, uint8_t[1024], NetworkBuffer);

asNetwork::asNetwork()
{
    pDPlay = 0;
    pGUID = 0;
    pConnection = 0;
    pLobby = 0;
    nRecvBufSize = 0;
    PlayerID = 0;
    pRecvBuf = 0;
    SysMessageCB = NullCallback;
    AppMessageCB = NullCallback;
    IsHost = 0;
    SessionOpen = 0;
    InLobby = 0;
    MaxPlayers = 32;
    dword44 = 0;
    dword48 = 0;
    Elapsed = 0.0f;

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
{
    pLobby = nullptr;
    pZoneScore = nullptr;
}

netZoneScore::~netZoneScore()
{
    if (pZoneScore)
    {
        pZoneScore->Release();
    }

    pZoneScore = nullptr;
}
