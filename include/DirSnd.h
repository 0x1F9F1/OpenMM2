#pragma once

#include <mmsystem.h>
#include <dsound.h>

struct mmSoundDriver
{
    GUID GUID;
    char* Name;
    int Rating;
    mmSoundDriver *Next;
};

check_size(mmSoundDriver, 0x1C);

class DirSnd
{
public:
    IDirectSoundBuffer* lpDSBuffer {nullptr};
    IDirectSound* lpDS {nullptr};
    HWND hWnd {nullptr};
    int gap10 {0};
    mmSoundDriver *FirstDriver {nullptr};
    mmSoundDriver *CurrentDriver {nullptr};
    IUnknown *field_1C {nullptr};
    int DeviceCount {0};
    int BitDepth {1};
    int DeviceFlags {0};
    bool Enable3D {false};
    bool Initialized {false};
    int SoundEnabled {false};
    int DeviceCaps {0};
    mmSoundDriver **SoundDevices {nullptr};

    DirSnd();
    ~DirSnd();

    virtual int InitPrimarySoundBuffer(uint32_t sampleRate, bool enableStero, const char* deviceName);
};

check_size(DirSnd, 0x3C);

static_var(0x6B4C2C, DirSnd*, DSGlobalPtr);