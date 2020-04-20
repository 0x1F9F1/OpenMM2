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
    vehicle:aiengineaudio

    0x4DA720 | public: __thiscall aiEngineAudio::aiEngineAudio(void) | ??0aiEngineAudio@@QAE@XZ
    0x4DA740 | public: __thiscall aiEngineAudio::aiEngineAudio(class aiEngineAudio *) | ??0aiEngineAudio@@QAE@PAV0@@Z
    0x4DA820 | public: __thiscall aiEngineAudio::~aiEngineAudio(void) | ??1aiEngineAudio@@QAE@XZ
    0x4DA8D0 | public: static int __cdecl aiEngineAudio::Load(class aiEngineAudio * *,char *,char *,int *) | ?Load@aiEngineAudio@@SAHPAPAV1@PAD1PAH@Z
    0x4DA990 | public: static void __cdecl aiEngineAudio::AddToHash(char *,int) | ?AddToHash@aiEngineAudio@@SAXPADH@Z
    0x4DA9D0 | private: int __thiscall aiEngineAudio::ReadCSV(class Stream *) | ?ReadCSV@aiEngineAudio@@AAEHPAVStream@@@Z
    0x4DAC10 | public: void __thiscall aiEngineAudio::EchoOn(float) | ?EchoOn@aiEngineAudio@@QAEXM@Z
    0x4DAC40 | public: void __thiscall aiEngineAudio::EchoOff(void) | ?EchoOff@aiEngineAudio@@QAEXXZ
    0x4DAC50 | public: void __thiscall aiEngineAudio::UpdateEcho(void) | ?UpdateEcho@aiEngineAudio@@QAEXXZ
    0x4DAC60 | public: void __thiscall aiEngineAudio::AssignSounds(int) | ?AssignSounds@aiEngineAudio@@QAEXH@Z
    0x4DAC80 | public: void __thiscall aiEngineAudio::UnAssignSounds(void) | ?UnAssignSounds@aiEngineAudio@@QAEXXZ
    0x4DACA0 | public: void __thiscall aiEngineAudio::CalculatePitch(float,float,int) | ?CalculatePitch@aiEngineAudio@@QAEXMMH@Z
    0x4DAD30 | public: void __thiscall aiEngineAudio::UpdateDoppler(float,float,float) | ?UpdateDoppler@aiEngineAudio@@QAEXMMM@Z
*/

class aiEngineAudio
{
public:
    // 0x4DA720 | ??0aiEngineAudio@@QAE@XZ
    inline aiEngineAudio()
    {
        stub<member_func_t<void, aiEngineAudio>>(0x4DA720, this);
    }

    // 0x4DA740 | ??0aiEngineAudio@@QAE@PAV0@@Z
    inline aiEngineAudio(class aiEngineAudio* arg1)
    {
        stub<member_func_t<void, aiEngineAudio, class aiEngineAudio*>>(0x4DA740, this, arg1);
    }

    // 0x4DA820 | ??1aiEngineAudio@@QAE@XZ
    inline ~aiEngineAudio()
    {
        stub<member_func_t<void, aiEngineAudio>>(0x4DA820, this);
    }

    // 0x4DA8D0 | ?Load@aiEngineAudio@@SAHPAPAV1@PAD1PAH@Z
    static inline int32_t Load(class aiEngineAudio** arg1, char* arg2, char* arg3, int32_t* arg4)
    {
        return stub<cdecl_t<int32_t, class aiEngineAudio**, char*, char*, int32_t*>>(0x4DA8D0, arg1, arg2, arg3, arg4);
    }

    // 0x4DA990 | ?AddToHash@aiEngineAudio@@SAXPADH@Z
    static inline void AddToHash(char* arg1, int32_t arg2)
    {
        return stub<cdecl_t<void, char*, int32_t>>(0x4DA990, arg1, arg2);
    }

    // 0x4DA9D0 | ?ReadCSV@aiEngineAudio@@AAEHPAVStream@@@Z
    inline int32_t ReadCSV(class Stream* arg1)
    {
        return stub<member_func_t<int32_t, aiEngineAudio, class Stream*>>(0x4DA9D0, this, arg1);
    }

    // 0x4DAC10 | ?EchoOn@aiEngineAudio@@QAEXM@Z
    inline void EchoOn(float arg1)
    {
        return stub<member_func_t<void, aiEngineAudio, float>>(0x4DAC10, this, arg1);
    }

    // 0x4DAC40 | ?EchoOff@aiEngineAudio@@QAEXXZ
    inline void EchoOff()
    {
        return stub<member_func_t<void, aiEngineAudio>>(0x4DAC40, this);
    }

    // 0x4DAC50 | ?UpdateEcho@aiEngineAudio@@QAEXXZ
    inline void UpdateEcho()
    {
        return stub<member_func_t<void, aiEngineAudio>>(0x4DAC50, this);
    }

    // 0x4DAC60 | ?AssignSounds@aiEngineAudio@@QAEXH@Z
    inline void AssignSounds(int32_t arg1)
    {
        return stub<member_func_t<void, aiEngineAudio, int32_t>>(0x4DAC60, this, arg1);
    }

    // 0x4DAC80 | ?UnAssignSounds@aiEngineAudio@@QAEXXZ
    inline void UnAssignSounds()
    {
        return stub<member_func_t<void, aiEngineAudio>>(0x4DAC80, this);
    }

    // 0x4DACA0 | ?CalculatePitch@aiEngineAudio@@QAEXMMH@Z
    inline void CalculatePitch(float arg1, float arg2, int32_t arg3)
    {
        return stub<member_func_t<void, aiEngineAudio, float, float, int32_t>>(0x4DACA0, this, arg1, arg2, arg3);
    }

    // 0x4DAD30 | ?UpdateDoppler@aiEngineAudio@@QAEXMMM@Z
    inline void UpdateDoppler(float arg1, float arg2, float arg3)
    {
        return stub<member_func_t<void, aiEngineAudio, float, float, float>>(0x4DAD30, this, arg1, arg2, arg3);
    }
};
