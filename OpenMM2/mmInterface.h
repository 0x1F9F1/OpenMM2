#pragma once

#include "asNode.h"

class mmInterface
    : public asNode
{
public:
    char gap4C[0x7750 - sizeof(asNode)];

    mmInterface();
    ~mmInterface();

    void ShowMain(int firstLoad);
};

check_size(mmInterface, 0x7750);
