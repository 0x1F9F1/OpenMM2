#pragma once

#include "asNode.h"

class mmPlayer
    : public asNode
{
    char gap18[0x23A4];
};

check_size(mmPlayer, 0x23A4 + 0x18);

static_var(0x5E0D40, mmPlayer*, PLAYER);