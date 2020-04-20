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
    ageaudio:audspeechdata

    0x513CF0 | public: __thiscall AudSpeechData::AudSpeechData(char *,float,float,bool,char *,char *) | ??0AudSpeechData@@QAE@PADMM_N00@Z
    0x513DB0 | public: __thiscall AudSpeechData::~AudSpeechData(void) | ??1AudSpeechData@@QAE@XZ
    0x513E20 | private: void __thiscall AudSpeechData::LoadOneShots(char *,char *) | ?LoadOneShots@AudSpeechData@@AAEXPAD0@Z
    0x513F70 | public: void __thiscall AudSpeechData::SetVolume(float) | ?SetVolume@AudSpeechData@@QAEXM@Z
    0x513FB0 | public: char * __thiscall AudSpeechData::GetName(int) | ?GetName@AudSpeechData@@QAEPADH@Z
    0x513FF0 | public: class AudSoundBase * __thiscall AudSpeechData::GetOneShot(int) | ?GetOneShot@AudSpeechData@@QAEPAVAudSoundBase@@H@Z
    0x514010 | public: char * __thiscall AudSpeechData::GetRandomName(void) | ?GetRandomName@AudSpeechData@@QAEPADXZ
    0x5140B0 | public: class AudSoundBase * __thiscall AudSpeechData::GetRandomOneShot(void) | ?GetRandomOneShot@AudSpeechData@@QAEPAVAudSoundBase@@XZ
*/

struct AudSpeechData
{
public:
    // 0x513CF0 | ??0AudSpeechData@@QAE@PADMM_N00@Z
    inline AudSpeechData(char* arg1, float arg2, float arg3, bool arg4, char* arg5, char* arg6)
    {
        stub<member_func_t<void, AudSpeechData, char*, float, float, bool, char*, char*>>(
            0x513CF0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x513DB0 | ??1AudSpeechData@@QAE@XZ
    inline ~AudSpeechData()
    {
        stub<member_func_t<void, AudSpeechData>>(0x513DB0, this);
    }

    // 0x513E20 | ?LoadOneShots@AudSpeechData@@AAEXPAD0@Z
    inline void LoadOneShots(char* arg1, char* arg2)
    {
        return stub<member_func_t<void, AudSpeechData, char*, char*>>(0x513E20, this, arg1, arg2);
    }

    // 0x513F70 | ?SetVolume@AudSpeechData@@QAEXM@Z
    inline void SetVolume(float arg1)
    {
        return stub<member_func_t<void, AudSpeechData, float>>(0x513F70, this, arg1);
    }

    // 0x513FB0 | ?GetName@AudSpeechData@@QAEPADH@Z
    inline char* GetName(int32_t arg1)
    {
        return stub<member_func_t<char*, AudSpeechData, int32_t>>(0x513FB0, this, arg1);
    }

    // 0x513FF0 | ?GetOneShot@AudSpeechData@@QAEPAVAudSoundBase@@H@Z
    inline class AudSoundBase* GetOneShot(int32_t arg1)
    {
        return stub<member_func_t<class AudSoundBase*, AudSpeechData, int32_t>>(0x513FF0, this, arg1);
    }

    // 0x514010 | ?GetRandomName@AudSpeechData@@QAEPADXZ
    inline char* GetRandomName()
    {
        return stub<member_func_t<char*, AudSpeechData>>(0x514010, this);
    }

    // 0x5140B0 | ?GetRandomOneShot@AudSpeechData@@QAEPAVAudSoundBase@@XZ
    inline class AudSoundBase* GetRandomOneShot()
    {
        return stub<member_func_t<class AudSoundBase*, AudSpeechData>>(0x5140B0, this);
    }
};
