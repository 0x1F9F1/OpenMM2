#include "stdafx.h"
#include "asNetwork.h"

defnvar(0x6B3968, NETMGR);

void asNetwork::Logout(void)
{
    return stub<thiscall_t<void, asNetwork>>(0x5701C0, this);
}
