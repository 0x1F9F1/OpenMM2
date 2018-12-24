#pragma once

#include "asNode.h"

class mmInput
    : public asNode
{
public:
    char gap18[0x248 - sizeof(asNode)];

    mmInput();
    ~mmInput();

    int AttachToPipe(void);
    void Init(int inputDevice);

    virtual void Update() override;
    virtual void Reset() override;
};

check_size(mmInput, 0x248);

static_var(0x6B1CF0, mmInput*, GameInputPtr);