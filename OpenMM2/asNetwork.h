#pragma once

class asNetwork
{
public:
    char gap0[0x70];

    void Logout(void);
};

check_size(asNetwork, 0x70);

declvar(asNetwork, NETMGR);