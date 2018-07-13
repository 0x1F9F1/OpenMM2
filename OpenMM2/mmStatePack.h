#pragma once

class mmStatePack
{
    char pad0[0x3E0];

public:
    void SetDefaults(const char* level, const char* car);

    bool ParseStateArgs(void);
};

// Guess
check_size(mmStatePack, 0x3E0);

declvar(mmStatePack, MMSTATE);