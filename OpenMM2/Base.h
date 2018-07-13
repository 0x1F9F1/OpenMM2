#pragma once

class Base
{
public:
    virtual ~Base() = default;
};

check_size(Base, 0x4);