#pragma once

#include "datCallback.h"

#include "dplayx/include/dplay.h"
#include "dplayx/include/dplobby.h"

#include "Timer.h"

// Since MSN Zone is dead and IZoneScore never saw the light of day, this class is completely useless as is.
// However, it could be used for other presence systems (such as discord).
class netZoneScore
{
public:
    IDirectPlayLobby3 *pLobby;
    GUID GUID;
    IUnknown* pZoneScore; // IZoneScore

    netZoneScore();
    ~netZoneScore();
};

class asNetwork
{
public:
    datCallback SysMessageCB;
    datCallback AppMessageCB;
    IDirectPlay4A *pDPlay;
    IDirectPlayLobby3A *pLobby;
    DPID PlayerID;
    DPLCONNECTION *pConnection;
    GUID *pGUID;
    void* pRecvBuf;
    uint32_t nRecvBufSize;
    float float34;
    uint32_t MaxPlayers;
    uint32_t SessionOpen;
    uint32_t InLobby;
    uint32_t dword44;
    uint32_t dword48;
    uint8_t IsHost;
    Timer Time;
    float Elapsed;
    netZoneScore NetScore;

    asNetwork();
    ~asNetwork();

    void Logout(void);
};

check_size(asNetwork, 0x70);

declvar(asNetwork, NETMGR);
