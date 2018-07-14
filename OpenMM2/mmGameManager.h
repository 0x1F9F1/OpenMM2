#pragma once

#include "asNode.h"

class mmGameManager
    : public asNode
{
public:
    char gap18[0x1B8 - 0x18];

    mmGameManager();
    ~mmGameManager();

    void ForceReplayUI(void);
};

check_size(mmGameManager, 0x1B8);
