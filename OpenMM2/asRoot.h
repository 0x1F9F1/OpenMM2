#pragma once

#include "asNode.h"
#include "Matrix.h"

struct asRoot
    : public asNode
{
    Matrix34 Matrix;
    bool Paused;
    bool byte49;
    bool EnableNan;

    asRoot();

    void Init(bool nanSignal);

    virtual void Update(void) override;
    virtual void Reset(void) override;
    virtual char * GetClassName(void) override;
};

check_size(asRoot, 0x4C);

declvar(asRoot, ROOT);