#include "stdafx.h"
#include "mmStatePack.h"

defnvar(0x6B1610, MMSTATE);

void mmStatePack::SetDefaults(const char* level, const char* car)
{
    return stub<thiscall_t<void, mmStatePack, const char*, const char*>>(0x523310, this, level, car);
}

bool mmStatePack::ParseStateArgs(void)
{
    return false;
}
