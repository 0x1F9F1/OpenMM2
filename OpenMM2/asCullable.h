#pragma once

#include "Base.h"

class asCullable : public Base
{
public:
    virtual void Cull();
};

check_size(asCullable, 0x4);
