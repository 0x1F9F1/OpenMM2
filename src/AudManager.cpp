#include "stdafx.h"
#include "AudManager.h"

#include "DirSnd.h"

AudManagerBase::AudManagerBase()
{
    AUDMGRPTR = this;
}

AudManagerBase::~AudManagerBase()
{
    if (pManager)
    {
        ShutDownAudio();
    }

    delete DSGlobalPtr;

    DSGlobalPtr = nullptr;

    AUDMGRPTR = nullptr;
}

void AudManagerBase::ShutDownAudio(void)
{
    return stub<thiscall_t<void, AudManagerBase>>(0x50F000, this);
}

void AudManagerBase::Update(void)
{
    return stub<thiscall_t<void, AudManagerBase>>(0x50F130, this);
}

void AudManagerBase::UpdatePaused(void)
{
    return stub<thiscall_t<void, AudManagerBase>>(0x50F1A0, this);
}

AudManager::AudManager()
{
    MMAUDMGRPTR = this;

    dword38 = 0;
    SpeechContainer = 0;
    Num3DHalBuffers = 0;
    pManager = 0;
    pDirSound = 0;
    SampleRate = 22050;

    bool4A = false;
    bool4B = true;

    dword50 = 1.0f;

    MMAUDMGRPTR = this;
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

void InitAudioManager(bool enableSound)
{
    return stub<cdecl_t<void, bool>>(0x401E70, enableSound);
}
