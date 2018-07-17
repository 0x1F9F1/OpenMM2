#include "stdafx.h"
#include "mmDirSnd.h"
#include "datArgParser.h"

#include "mmStatePack.h"

mmDirSnd::mmDirSnd()
{
    Initialized = 0;
    EAXEnabled = 0;
    DSound3DEnabled = 0;
}

mmDirSnd::~mmDirSnd()
{
}

int mmDirSnd::InitPrimarySoundBuffer(uint32_t sampleRate, bool enableStero, const char * deviceName)
{
    return stub<thiscall_t<int, mmDirSnd, uint32_t, bool, const char*>>(0x51CD90, this, sampleRate, enableStero, deviceName);
}

mmDirSnd* mmDirSnd::Init(int sampleRate, bool enableStero, int a4, float volume, const char* deviceName, bool enable3D)
{
    sampleRate = 48000;

    datArgParser::Get("samplerate", 0, sampleRate);

    return stub<cdecl_t<mmDirSnd*, int, bool, int, float, const char*, bool>>(0x51CC50, sampleRate, enableStero, a4, volume, deviceName, enable3D);
}

run_once([ ]
{
    hook::create_hook("mmDirSnd::Init", "Fixes no sound issue on startup.", 0x51941D, &mmDirSnd::Init, HookType::CALL);
})