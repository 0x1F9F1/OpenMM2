/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

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

struct aiPedAudio : AudCreatureContainer
{
public:
    // aiPedAudio::`vftable' @ 0x5B5568

    // 0x53CD60 | ??0aiPedAudio@@QAE@XZ
    aiPedAudio()
    {
        stub<member_func_t<void, aiPedAudio>>(0x53CD60, this);
    }

    // 0x53CD90 | ?LoadFemaleVoices@aiPedAudio@@QAE_NPAD_N@Z
    bool LoadFemaleVoices(char* arg1, bool arg2)
    {
        return stub<member_func_t<bool, aiPedAudio, char*, bool>>(0x53CD90, this, arg1, arg2);
    }

    // 0x53CE00 | ?LoadMaleVoices@aiPedAudio@@QAE_NPAD_N@Z
    bool LoadMaleVoices(char* arg1, bool arg2)
    {
        return stub<member_func_t<bool, aiPedAudio, char*, bool>>(0x53CE00, this, arg1, arg2);
    }

    // 0x53CE70 | ?SetCSVCatString@aiPedAudio@@SAXPAD@Z
    static inline void SetCSVCatString(char* arg1)
    {
        return stub<cdecl_t<void, char*>>(0x53CE70, arg1);
    }

    // 0x53CEA0 | ?LoadNumFemaleChoices@aiPedAudio@@SAXPAD@Z
    static inline void LoadNumFemaleChoices(char* arg1)
    {
        return stub<cdecl_t<void, char*>>(0x53CEA0, arg1);
    }

    // 0x53CEE0 | ?LoadNumMaleChoices@aiPedAudio@@SAXPAD@Z
    static inline void LoadNumMaleChoices(char* arg1)
    {
        return stub<cdecl_t<void, char*>>(0x53CEE0, arg1);
    }

    // 0x6B3004 | ?s_iFemaleFileNum@aiPedAudio@@0HA
    inline extern_var(0x6B3004, int32_t, s_iFemaleFileNum);

    // 0x6B3014 | ?s_CSVCatString@aiPedAudio@@0PADA
    inline extern_var(0x6B3014, char*, s_CSVCatString);

    // 0x6B3020 | ?s_iMaleFileNum@aiPedAudio@@0HA
    inline extern_var(0x6B3020, int32_t, s_iMaleFileNum);
};
