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

#include "caraudiocontainer.h"

#include "core/stream.h"
#include "data/asset.h"
#include "zipfile/zipfile.h"

#include <unordered_set>
#include <string>

#define _CRT_SECURE_NO_WARNINGS

char* mm2_strdup(const char *string)
{
    if (string)
    {
        size_t len = strlen(string) + 1;
        char* result = new char[len];
        memcpy(result, string, len);
        return result;
    }

    return nullptr;
}

std::unordered_set<std::string> PoliceNames;
std::unordered_set<std::string> SemiNames;

void vehCarAudioContainer::RegisterTypes(char const * fileName)
{
    (void)fileName;

    PoliceNames.clear();
    SemiNames.clear();

    zipFile::EnumFiles2("aud\\cardata\\shared\\vehtypes.csv", &RegisterTypes2, nullptr);

    s_iNumPoliceNames = 0;
    s_ppPoliceName = new char*[PoliceNames.size()];

    for (const std::string& name : PoliceNames)
    {
        s_ppPoliceName[s_iNumPoliceNames++] = mm2_strdup(name.c_str());
    }

    s_iNumSemiNames = 0;
    s_ppSemiName = new char*[SemiNames.size()];

    for (const std::string& name : SemiNames)
    {
        s_ppSemiName[s_iNumSemiNames++] = mm2_strdup(name.c_str());
    }

    PoliceNames.clear();
    SemiNames.clear();
}

void vehCarAudioContainer::RegisterTypes2(Stream * stream, void* context)
{
    (void)context;

    char* tokContext = nullptr;

    char buffer[2048];

    fgets(buffer, 2048, stream);
    strtok_s(buffer, "\r\n", &tokContext);
    fgets(buffer, 2048, stream);
    strtok_s(buffer, "\r\n", &tokContext);
    RegisterSemiNames(stream, buffer);
    fgets(buffer, 2048, stream);
    strtok_s(buffer, "\r\n", &tokContext);
    fgets(buffer, 2048, stream);
    strtok_s(buffer, "\r\n", &tokContext);
    RegisterPoliceNames(stream, buffer);
    fgets(buffer, 2048, stream);
    strtok_s(buffer, "\r\n", &tokContext);
    fgets(buffer, 2048, stream);
    strtok_s(buffer, "\r\n", &tokContext);

    char* alwaysNitro = strtok_s(buffer, ",", &tokContext);

    s_bAlwaysNitro = _strcmpi(alwaysNitro, "TRUE") == 0;
}

void vehCarAudioContainer::RegisterSemiNames(Stream * stream, char * names)
{
    (void)stream;

    char* tokContext = nullptr;

    for (char* i = strtok_s(names, ",", &tokContext); memcmp(i, "ENDOFDATA", 0xAu); i = strtok_s(0, ",", &tokContext))
    {
        SemiNames.emplace(i);
    }
}

void vehCarAudioContainer::RegisterPoliceNames(Stream * stream, char * names)
{
    (void)stream;

    char* tokContext = nullptr;

    for (char* i = strtok_s(names, ",", &tokContext); memcmp(i, "ENDOFDATA", 0xAu); i = strtok_s(0, ",", &tokContext))
    {
        PoliceNames.emplace(i);
    }
}

define_dummy_symbol(vehCarAudioContainer);

run_once([ ]
{
    create_hook("vehCarAudioContainer::RegisterTypes", "Parse multiple vehtypes files", 0x4D0CB0, &vehCarAudioContainer::RegisterTypes);
});
