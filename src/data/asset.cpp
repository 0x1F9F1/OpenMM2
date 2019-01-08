/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2019 Brick

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include "asset.h"

#include "core/stream.h"
#include "core/output.h"

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
            const char *v8 = strrchr(path, '.');

            if ( !v8 || _strcmpi(v8 + 1, ext) )
            {
                strcat_s(buffer, bufferLength, ".");
                strcat_s(buffer, bufferLength, ext);
            }
        }
    }

    ageDebug(assetDebug, "FullPath(%s,%s,%s) = %s", prefix, path, ext, buffer);
}
