#pragma once

class Stream;

class datAssetManager
{
public:
    static void SetPath(const char* path);

    static Stream* Open(char const* path, char const* ext, bool a2, bool readOnly);

    static void FullPath(char * buffer, int bufferLength, const char* path, const char* ext);

    declstatic(char[128], sm_Path);
    declstatic(bool, sm_IgnorePrefix);
};

declvar(bool, assetDebug);