#pragma once

#include "DirSnd.h"

class mmDirSnd
    : public DirSnd
{
public:
    int EAXEnabled;
    int DSound3DEnabled;

    mmDirSnd();
    ~mmDirSnd();

    virtual int InitPrimarySoundBuffer(uint32_t sampleRate, bool enableStero, const char* deviceName) override;

    static mmDirSnd* Init(int sampleRate, bool enableStero, int a4, float volume, const char* deviceName, bool enable3D);
};

check_size(mmDirSnd, 0x44);