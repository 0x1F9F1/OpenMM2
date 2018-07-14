#include "stdafx.h"
#include "AudManager.h"

defnvar(0x6B1474, AUDMGRPTR);
defnvar(0x6B15D0, MMAUDMGRPTR);

AudManagerBase::AudManagerBase()
{
    unimplemented;
}

#pragma warning (suppress: 4722)
AudManagerBase::~AudManagerBase()
{
    unimplemented;
}

AudManager::AudManager()
{
    unimplemented;
}

#pragma warning (suppress: 4722)
AudManager::~AudManager()
{
    unimplemented;
}

bool AudManager::EnableCD(void)
{
    return stub<thiscall_t<bool, AudManager>>(0x5198C0, this);
}

int AudManager::PlayCDTrack(int a1, int a2)
{
    return stub<thiscall_t<int, AudManager, int, int>>(0x519960, this, a1, a2);
}