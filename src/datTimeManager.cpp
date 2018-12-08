#include "stdafx.h"
#include "datTimeManager.h"

void datTimeManager::RealTime(float time)
{
    return stub<cdecl_t<void, float>>(0x4C6580, time);
}

void datTimeManager::Update()
{
    return stub<cdecl_t<void>>(0x4C6340);
}
