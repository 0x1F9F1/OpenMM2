#include "stdafx.h"
#include "mmGameManager.h"

defn_static(0x5E0D08, mmGameManager::Instance);

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

void mmGameManager::ForcePopupUI(void)
{
    return stub<thiscall_t<void, mmGameManager>>(0x402FB0, this);
}
