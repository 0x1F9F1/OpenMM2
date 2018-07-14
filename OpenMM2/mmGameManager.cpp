#include "stdafx.h"
#include "mmGameManager.h"

mmGameManager::mmGameManager()
{
    stub<thiscall_t<void, mmGameManager>>(0x4029E0, this);
}

mmGameManager::~mmGameManager()
{
    stub<thiscall_t<void, mmGameManager>>(0x402E40, this);
}

void mmGameManager::ForceReplayUI(void)
{
    return stub<thiscall_t<void, mmGameManager>>(0x402FE0, this);
}
