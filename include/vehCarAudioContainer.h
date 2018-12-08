#pragma once

class Stream;

class vehCarAudioContainer
{
public:
    static void RegisterTypes(char const * fileName);
    static void RegisterTypes2(Stream* stream, void* context);

    static void RegisterSemiNames(Stream* stream, char* names);
    static void RegisterPoliceNames(Stream* stream, char* names);

    declstatic(bool, s_bAlwaysNitro);

    declstatic(int, s_iNumPoliceNames);
    declstatic(int, s_iNumSemiNames);

    declstatic(char**, s_ppPoliceName);
    declstatic(char**, s_ppSemiName);
};
