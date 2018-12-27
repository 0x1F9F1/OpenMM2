#pragma once

#include "asNode.h"

class mmGameManager
    : public asNode
{
public:
    char gap18[0x1B8 - sizeof(asNode)];

    mmGameManager();
    ~mmGameManager();

    void ForceReplayUI(void);
    void ForcePopupUI(void);

    inline_var(0x5E0D08, mmGameManager*, Instance);
};

check_size(mmGameManager, 0x1B8);
