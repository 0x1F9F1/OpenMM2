#include "stdafx.h"
#include "asNetwork.h"

static_var(0x6B39E0, uint8_t[1024], NetworkBuffer);

asNetwork::asNetwork()
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

netZoneScore::~netZoneScore()
{
    if (pZoneScore)
    {
        pZoneScore->Release();
    }

    pZoneScore = nullptr;
}
