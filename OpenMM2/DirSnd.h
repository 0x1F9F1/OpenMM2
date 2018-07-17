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
    IDirectSoundBuffer* lpDSBuffer;
    IDirectSound* lpDS;
    HWND hWnd;
    int gap10;
    mmSoundDriver *FirstDriver;
    mmSoundDriver *CurrentDriver;
    IUnknown *field_1C;
    int DeviceCount;
    int BitDepth;
    int DeviceFlags;
    bool Enable3D;
    bool Initialized;
    int SoundEnabled;
    int DeviceCaps;
    mmSoundDriver **SoundDevices;

    DirSnd();
    ~DirSnd();

    virtual int InitPrimarySoundBuffer(uint32_t sampleRate, bool enableStero, const char* deviceName);
};

check_size(DirSnd, 0x3C);

declvar(DirSnd*, DSGlobalPtr);