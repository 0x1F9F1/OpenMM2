#include "stdafx.h"
#include "datTimeManager.h"

void datTimeManager::RealTime(float time)
{
    return stub<cdecl_t<void, float>>(0x4C6580, time);
}
