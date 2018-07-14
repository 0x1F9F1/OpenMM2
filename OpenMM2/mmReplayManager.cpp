#include "stdafx.h"
#include "mmReplayManager.h"

defnvar(0x627248, mmReplayManager::Instance);
defnvar(0x6B16CC, mmReplayManager::ReplayName);

mmReplayManager::mmReplayManager()
{
    stub<thiscall_t<void, mmReplayManager>>(0x406870, this);
}

mmReplayManager::~mmReplayManager()
{
    mmReplayManager::Instance = 0;

    DebugLogShutdown();
}

void mmReplayManager::LoadReplay(char * name)
{
    return stub<thiscall_t<void, mmReplayManager, char*>> (0x407000, this, name);
}