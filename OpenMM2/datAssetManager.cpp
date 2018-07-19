#include "stdafx.h"
#include "datAssetManager.h"

#include "Stream.h"

defnvar(0x6A3B8C, datAssetManager::sm_Path);
defnvar(0x5CE760, datAssetManager::sm_IgnorePrefix);
defnvar(0x6A3C0C, assetDebug);

void datAssetManager::SetPath(const char* path)
{
    strcpy_s(sm_Path, path);

    if (*path)
    {
        for (char* v1 = sm_Path; *v1; ++v1)
        {
            if (*v1 == '/')
            {
                *v1 = '\\';
            }
        }

        size_t pathLength = strlen(sm_Path);

        if (pathLength && (sm_Path[pathLength - 1] != '\\'))
        {
            sm_Path[pathLength] = '\\';
            sm_Path[pathLength + 1] = '\0';
        }

        ageDebug(assetDebug, "datAssetManager::SetPath: %s", sm_Path);
    }
}

Stream* datAssetManager::Open(const char* path, const char* ext, bool a2, bool readOnly)
{
    (void)a2;

    char fullPath[128];

    FullPath(fullPath, 128, path, ext);

    ageDebug(assetDebug, "Opening '%s'...", fullPath);

    return Stream::Open(fullPath, readOnly);
}

void datAssetManager::FullPath(char* buffer, int bufferLength, const char* path, const char* ext)
{
    return stub<cdecl_t<void, char*, int, const char*, const char*>>(0x4C55E0, buffer, bufferLength, path, ext);
}
