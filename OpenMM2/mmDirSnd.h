#pragma once

class mmDirSnd
{
public:
    static mmDirSnd* Init(int sampleRate, bool enableStero, int a4, float volume, const char* deviceName, bool enable3D);
};
