#pragma once

class Stream;

class vehCarAudioContainer
{
public:
    static void RegisterTypes(char const * fileName);
    static void RegisterTypes2(Stream* stream, void* context);

    static void RegisterSemiNames(Stream* stream, char* names);
    static void RegisterPoliceNames(Stream* stream, char* names);

    decl_static(bool, s_bAlwaysNitro);

    decl_static(int, s_iNumPoliceNames);
    decl_static(int, s_iNumSemiNames);

    decl_static(char**, s_ppPoliceName);
    decl_static(char**, s_ppSemiName);
};
