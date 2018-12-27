#pragma once

class Stream;

class vehCarAudioContainer
{
public:
    static void RegisterTypes(char const * fileName);
    static void RegisterTypes2(Stream* stream, void* context);

    static void RegisterSemiNames(Stream* stream, char* names);
    static void RegisterPoliceNames(Stream* stream, char* names);

    inline_var(0x6AFFA1, bool, s_bAlwaysNitro);

    inline_var(0x6AFF34, int, s_iNumPoliceNames);
    inline_var(0x6AFF38, int, s_iNumSemiNames);

    inline_var(0x6AFFA8, char**, s_ppPoliceName);
    inline_var(0x6AFFA4, char**, s_ppSemiName);
};
