#pragma once

#include "asNode.h"
#include "Matrix.h"

struct asRoot
    : public asNode
{
    Matrix34 Matrix;
    bool Paused;
    char byte49;
    char EnableNan;
};

check_size(asRoot, 0x4C);