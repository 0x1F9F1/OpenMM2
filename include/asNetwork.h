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
    IDirectPlayLobby3 *pLobby {nullptr};
    GUID GUID {};
    IUnknown* pZoneScore {nullptr}; // IZoneScore

    netZoneScore() = default;

    ~netZoneScore();
};

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

static_var(0x6B3968, asNetwork, NETMGR);
