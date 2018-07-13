#include "stdafx.h"
#include "mmDirSnd.h"
#include "datArgParser.h"

auto $mmDirSnd_Init = mem::pointer(0x51CC50).as<void*(*)(int, bool, int, float, const char*, bool)>();

auto& CurrentAudioDevice = mem::pointer(0x6B17F2).as<char[200]>();

mmDirSnd* mmDirSnd::Init(int sampleRate, bool enableStero, int a4, float volume, const char* deviceName, bool enable3D)
{
    if (deviceName[0] == '\0')
    {
        strncpy_s(CurrentAudioDevice, "Primary Sound Driver", std::size(CurrentAudioDevice));

        deviceName = CurrentAudioDevice;

        Displayf("[mmDirSnd::Init]: Using Primary Sound Driver");
    }
    
    sampleRate = 48000;
    datArgParser::Get("samplerate", 0, sampleRate);

    return stub<cdecl_t<mmDirSnd*, int, bool, int, float, const char*, bool>>(0x51CC50, sampleRate, enableStero, a4, volume, deviceName, enable3D);
}

call_once([ ]
{
    hook::create_hook("mmDirSnd::Init", "Fixes no sound issue on startup.", 0x51941D, &mmDirSnd::Init, HookType::CALL);
})