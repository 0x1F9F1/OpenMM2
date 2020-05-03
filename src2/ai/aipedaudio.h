/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 Brick

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

#pragma once

#include "ageaudio/audcreaturecontainer.h"

/*
    ai:aipedaudio

    0x53CD60 | public: __thiscall aiPedAudio::aiPedAudio(void) | ??0aiPedAudio@@QAE@XZ
    0x53CD80 | public: virtual __thiscall aiPedAudio::~aiPedAudio(void) | ??1aiPedAudio@@UAE@XZ
    0x53CD90 | public: bool __thiscall aiPedAudio::LoadFemaleVoices(char *,bool) | ?LoadFemaleVoices@aiPedAudio@@QAE_NPAD_N@Z
    0x53CE00 | public: bool __thiscall aiPedAudio::LoadMaleVoices(char *,bool) | ?LoadMaleVoices@aiPedAudio@@QAE_NPAD_N@Z
    0x53CE70 | public: static void __cdecl aiPedAudio::SetCSVCatString(char *) | ?SetCSVCatString@aiPedAudio@@SAXPAD@Z
    0x53CEA0 | public: static void __cdecl aiPedAudio::LoadNumFemaleChoices(char *) | ?LoadNumFemaleChoices@aiPedAudio@@SAXPAD@Z
    0x53CEE0 | public: static void __cdecl aiPedAudio::LoadNumMaleChoices(char *) | ?LoadNumMaleChoices@aiPedAudio@@SAXPAD@Z
    public: virtual void * __thiscall aiPedAudio::`scalar deleting destructor'(unsigned int) | ??_GaiPedAudio@@UAEPAXI@Z
    public: virtual void * __thiscall aiPedAudio::`vector deleting destructor'(unsigned int) | ??_EaiPedAudio@@UAEPAXI@Z
    0x5B5568 | const aiPedAudio::`vftable' | ??_7aiPedAudio@@6B@
    0x6B3004 | private: static int aiPedAudio::s_iFemaleFileNum | ?s_iFemaleFileNum@aiPedAudio@@0HA
    0x6B3014 | private: static char * aiPedAudio::s_CSVCatString | ?s_CSVCatString@aiPedAudio@@0PADA
    0x6B3020 | private: static int aiPedAudio::s_iMaleFileNum | ?s_iMaleFileNum@aiPedAudio@@0HA
*/

class aiPedAudio : public AudCreatureContainer
{
    // const aiPedAudio::`vftable' @ 0x5B5568

public:
    // 0x53CD60 | ??0aiPedAudio@@QAE@XZ
    aiPedAudio();

    // 0x53CD80 | ??1aiPedAudio@@UAE@XZ
    ~aiPedAudio();

    // 0x53CD90 | ?LoadFemaleVoices@aiPedAudio@@QAE_NPAD_N@Z
    bool LoadFemaleVoices(char* arg1, bool arg2);

    // 0x53CE00 | ?LoadMaleVoices@aiPedAudio@@QAE_NPAD_N@Z
    bool LoadMaleVoices(char* arg1, bool arg2);

    // 0x53CEA0 | ?LoadNumFemaleChoices@aiPedAudio@@SAXPAD@Z
    static void LoadNumFemaleChoices(char* arg1);

    // 0x53CEE0 | ?LoadNumMaleChoices@aiPedAudio@@SAXPAD@Z
    static void LoadNumMaleChoices(char* arg1);

    // 0x53CE70 | ?SetCSVCatString@aiPedAudio@@SAXPAD@Z
    static void SetCSVCatString(char* arg1);

private:
    // 0x6B3014 | ?s_CSVCatString@aiPedAudio@@0PADA
    static inline extern_var(0x6B3014, char*, s_CSVCatString);

    // 0x6B3004 | ?s_iFemaleFileNum@aiPedAudio@@0HA
    static inline extern_var(0x6B3004, i32, s_iFemaleFileNum);

    // 0x6B3020 | ?s_iMaleFileNum@aiPedAudio@@0HA
    static inline extern_var(0x6B3020, i32, s_iMaleFileNum);
};

check_size(aiPedAudio, 0x0);
