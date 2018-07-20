#include "stdafx.h"
#include "vehCarAudioContainer.h"

#include "datAssetManager.h"

#include "zipFile.h"
#include "Stream.h"

#include "String.h"

#include <unordered_set>
#include <string>

#define _CRT_SECURE_NO_WARNINGS

defnvar(0x6AFFA1, vehCarAudioContainer::s_bAlwaysNitro);

defnvar(0x6AFF34, vehCarAudioContainer::s_iNumPoliceNames);
defnvar(0x6AFF38, vehCarAudioContainer::s_iNumSemiNames);

defnvar(0x6AFFA8, vehCarAudioContainer::s_ppPoliceName);
defnvar(0x6AFFA4, vehCarAudioContainer::s_ppSemiName);

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

run_once([]
{
    hook::create_hook("vehCarAudioContainer::RegisterTypes", "Parse multiple vehtypes files", 0x4D0CB0, &vehCarAudioContainer::RegisterTypes, HookType::JMP);
});