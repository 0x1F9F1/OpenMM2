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

#include "autoinit.h"

#include "data/args.h"
#include "data/asset.h"
#include "core/output.h"

#include "zipfile/zipfile.h"

#include "minwin.h"

#include <algorithm>

void zipAutoInit(void)
{
    if (datArgParser::Exists("logopen"))
    {
        zipFile::sm_LogOpen = 1;
    }

    const char* archiveName = nullptr;

    if (datArgParser::Get("archive", 0, archiveName))
    {
        zipFile* file = new zipFile();

        if (file->Init(archiveName))
        {
            datAssetManager::SetPath("");
        }
        else
        {
            delete file;
        }
    }
}

void zipMultiAutoInit(char const * extension)
{
    if (datArgParser::Exists("logopen"))
    {
        zipFile::sm_LogOpen = true;
    }

    char stringBuffer[MAX_PATH];

    strcpy_s(stringBuffer, datAssetManager::sm_Path);
    strcat_s(stringBuffer, extension);

    char* fileList[256];

    WIN32_FIND_DATA fileData;
    memset(&fileData, 0, sizeof(fileData));
    HANDLE hFindFile = FindFirstFileA(stringBuffer, &fileData);

    size_t fileCount = 0;

    if (hFindFile != INVALID_HANDLE_VALUE)
    {
        do
        {
            strcpy_s(stringBuffer, datAssetManager::sm_Path);
            strcat_s(stringBuffer, fileData.cFileName);

            if (_strupr_s(stringBuffer) == NO_ERROR)
            {
                fileList[fileCount++] = _strdup(stringBuffer);
            }
            else
            {
                Warningf("That's one funky filename: %s", stringBuffer);
            }

        } while (fileCount != 256 && FindNextFileA(hFindFile, &fileData));

        FindClose(hFindFile);
    }

    std::sort(fileList, fileList + fileCount, [](char* lhs, char* rhs)
    {
        return strcmp(lhs, rhs) < 0;
    });

    for (size_t i = fileCount; i--;)
    {
        char* fileName = fileList[i];

        zipFile* file = new zipFile();

        if (file->Init(fileName))
        {
            datAssetManager::SetPath("");
        }
        else
        {
            delete file;
        }

        free(fileName);
    }
}
