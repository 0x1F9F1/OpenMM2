#include "stdafx.h"
#include "mmDirSnd.h"
#include "datArgParser.h"

#include "mmStatePack.h"

mmDirSnd* mmDirSnd::Init(int sampleRate, bool enableStero, int a4, float volume, const char* deviceName, bool enable3D)
{
    if (deviceName[0] == '\0')
    {
        strcpy_s(MMSTATE.AudioDeviceName, "Primary Sound Driver");

        deviceName = MMSTATE.AudioDeviceName;

        Displayf("[mmDirSnd::Init]: Using %s", deviceName);
    }
    
    sampleRate = 48000;
    datArgParser::Get("samplerate", 0, sampleRate);

    return stub<cdecl_t<mmDirSnd*, int, bool, int, float, const char*, bool>>(0x51CC50, sampleRate, enableStero, a4, volume, deviceName, enable3D);
}

run_once([ ]
{
    hook::create_hook("mmDirSnd::Init", "Fixes no sound issue on startup.", 0x51941D, &mmDirSnd::Init, HookType::CALL);
})