#pragma once

class Stream;

class datAssetManager
{
public:
    static void SetPath(const char* path);

    static Stream* Open(char const* path, char const* ext, bool a2, bool readOnly);

    static void FullPath(char * buffer, int bufferLength, const char* path, const char* ext);

    decl_static(char[128], sm_Path);
    decl_static(bool, sm_IgnorePrefix);
};

static_var(0x6A3C0C, bool, assetDebug);