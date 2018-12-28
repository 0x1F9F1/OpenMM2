#include "stdafx.h"
#include "datAssetManager.h"

#include "Stream.h"

void datAssetManager::SetPath(const char* path)
{
    strcpy_s(sm_Path, path);

    if (*path)
    {
        for (char* i = sm_Path; *i; ++i)
        {
            if (*i == '/')
            {
                *i = '\\';
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

Stream * datAssetManager::Open(const char * prefix, const char * path, const char * ext, bool a4, bool readOnly)
{
    char buffer[128];

    datAssetManager::FullPath(buffer, 128, prefix, path, ext);
    ageDebug(assetDebug, "Opening '%s'...", buffer);
    return Stream::Open(buffer, readOnly);
}

void datAssetManager::FullPath(char* buffer, int bufferLength, const char* path, const char* ext)
{
    if (strchr(path, '/') || strchr(path, '\\') || path[1] == ':')
    {
        *buffer = 0;
    }
    else
    {
        strcpy_s(buffer, bufferLength, datAssetManager::sm_Path);
    }

    strcat_s(buffer, bufferLength, path);

    const char* path_ext = strrchr(path, '.');

    if (!path_ext || _strcmpi(path_ext, ext))
    {
        strcat_s(buffer, bufferLength, ".");
        strcat_s(buffer, bufferLength, ext);
    }

    ageDebug(assetDebug, "FullPath(%s,%s) = %s", path, ext, buffer);
}

void datAssetManager::FullPath(char * buffer, int bufferLength, const char * prefix, const char * path, const char * ext)
{
    const char *v8; // eax

    if ( strchr(path, '/') || strchr(path, '\\') || path[1] == ':' )
    {
        *buffer = 0;
    }
    else
    {
        strcpy_s(buffer, bufferLength, datAssetManager::sm_Path);
        if ( prefix )
        {
            if ( *prefix )
            {
                if ( !datAssetManager::sm_IgnorePrefix )
                {
                    strcat_s(buffer, bufferLength, prefix);
                    strcat_s(buffer, bufferLength, "\\");
                }
            }
        }
    }
    strcat_s(buffer, bufferLength, path);
    if ( ext )
    {
        if ( *ext )
        {
            if ( !strrchr(path, '.') || (v8 = strrchr(path, '.'), _strcmpi(v8 + 1, ext)) )
            {
                strcat_s(buffer, bufferLength, ".");
                strcat_s(buffer, bufferLength, ext);
            }
        }
    }

    ageDebug(assetDebug, "FullPath(%s,%s,%s) = %s", prefix, path, ext, buffer);
}
