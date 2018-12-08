#include "stdafx.h"
#include "DirSnd.h"

defnvar(0x6B4C2C, DSGlobalPtr);

DirSnd::DirSnd()
{
    if (DSGlobalPtr)
    {
        Errorf("DirectSound object has already been created!");
    }

    DSGlobalPtr = this;
}

DirSnd::~DirSnd()
{
    if (field_1C)
    {
        field_1C->Release();
    }

    if (lpDSBuffer)
    {
        lpDSBuffer->Release();
    }

    if (lpDS)
    {
        lpDS->Release();
    }

    if (SoundDevices)
    {
        for (int i = 0; i < DeviceCount; ++i)
        {
            mmSoundDriver* device = SoundDevices[i];

            if (device)
            {
                if (device->Name)
                {
                    delete device->Name;
                }

                delete device;
            }
        }

        delete SoundDevices;
    }

    DSGlobalPtr = 0;
}

int DirSnd::InitPrimarySoundBuffer(uint32_t sampleRate, bool enableStero, const char * deviceName)
{
    return stub<thiscall_t<int, DirSnd, uint32_t, bool, const char*>>(0x5A5530, this, sampleRate, enableStero, deviceName);
}
