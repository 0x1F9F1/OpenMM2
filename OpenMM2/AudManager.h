#pragma once

#include "asNode.h"

class audManager;
class mmDirSnd;

class AudManagerBase
    : public asNode
{
public:
    audManager *dword18;
    uint32_t dword1C;
    uint32_t dword20;
    uint32_t dword24;
    uint32_t dword28;
    uint32_t dword2C;

    AudManagerBase();
    ~AudManagerBase();
};

check_size(AudManagerBase, 0x30);

class AudManager
    : public AudManagerBase
{
public:
    uint32_t dword30;
    uint32_t Num3DHalBuffers;
    uint32_t dword38;
    uint32_t SampleRate;
    uint32_t SpeechContainer;
    uint32_t dword44;
    uint16_t SampleSharing;
    bool bool4A;
    bool bool4B;
    mmDirSnd *DirSnd;
    float dword50;

    AudManager();
    ~AudManager();

    bool EnableCD(void);
    int PlayCDTrack(int a1, int a2);
};

check_size(AudManager, 0x54);

declvar(AudManagerBase*, AUDMGRPTR);
declvar(AudManager*, MMAUDMGRPTR);

void InitAudioManager(bool enableSound);