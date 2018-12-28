#pragma once

class Stream;

class datAssetManager
{
public:
    static void SetPath(const char* path);

    static Stream* Open(char const* path, char const* ext, bool a2, bool readOnly);
    static Stream* Open(const char* prefix, const char *path, const char *ext, bool a4, bool readOnly);

    static void FullPath(char * buffer, int bufferLength, const char* path, const char* ext);
    static void FullPath(char * buffer, int bufferLength, const char *prefix, const char *path, const char *ext);

    inline_var(0x6A3B8C, char[128], sm_Path);
    inline_var(0x5CE760, bool, sm_IgnorePrefix);
};

static_var(0x6A3C0C, bool, assetDebug);