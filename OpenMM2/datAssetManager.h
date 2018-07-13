#pragma once

class datAssetManager
{
public:
    static void SetPath(const char *path);

    declstatic(char[128], sm_Path);
    declstatic(bool, sm_IgnorePrefix);
};

declvar(bool, assetDebug);