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
    vehicle:hornaudio

    0x4DAEC0 | public: __thiscall vehHornAudio::vehHornAudio(void) | ??0vehHornAudio@@QAE@XZ
    0x4DAEF0 | public: __thiscall vehHornAudio::vehHornAudio(class vehHornAudio *) | ??0vehHornAudio@@QAE@PAV0@@Z
    0x4DB020 | public: __thiscall vehHornAudio::~vehHornAudio(void) | ??1vehHornAudio@@QAE@XZ
    0x4DB080 | public: void __thiscall vehHornAudio::AllocTiming(void) | ?AllocTiming@vehHornAudio@@QAEXXZ
    0x4DB130 | public: class vehHornAudioTiming * __thiscall vehHornAudio::GetHornAudioTimingPtr(int) | ?GetHornAudioTimingPtr@vehHornAudio@@QAEPAVvehHornAudioTiming@@H@Z
    0x4DB140 | public: int __thiscall vehHornAudio::GetNumTimings(void) | ?GetNumTimings@vehHornAudio@@QAEHXZ
    0x4DB150 | public: void __thiscall vehHornAudio::UpdateDoppler(float,float,float) | ?UpdateDoppler@vehHornAudio@@QAEXMMM@Z
    0x4DB1C0 | public: bool __thiscall vehHornAudio::IsPlaying(void) | ?IsPlaying@vehHornAudio@@QAE_NXZ
    0x4DB1E0 | public: bool __thiscall vehHornAudio::PlayAvoidance(void) | ?PlayAvoidance@vehHornAudio@@QAE_NXZ
    0x4DB280 | public: void __thiscall vehHornAudio::PlayImpact(float) | ?PlayImpact@vehHornAudio@@QAEXM@Z
    0x4DB310 | public: void __thiscall vehHornAudio::Reset(void) | ?Reset@vehHornAudio@@QAEXXZ
    0x4DB320 | public: void __thiscall vehHornAudio::AssignSounds(int) | ?AssignSounds@vehHornAudio@@QAEXH@Z
    0x4DB350 | public: void __thiscall vehHornAudio::UnAssignSounds(void) | ?UnAssignSounds@vehHornAudio@@QAEXXZ
    0x4DB3D0 | public: static int __cdecl vehHornAudio::Load(class vehHornAudio * *,char *,char *,int *) | ?Load@vehHornAudio@@SAHPAPAV1@PAD1PAH@Z
    0x4DB490 | public: static void __cdecl vehHornAudio::AddToHash(char *,int) | ?AddToHash@vehHornAudio@@SAXPADH@Z
    0x4DB4D0 | private: int __thiscall vehHornAudio::ReadCSV(class Stream *) | ?ReadCSV@vehHornAudio@@AAEHPAVStream@@@Z
    0x4DB680 | public: void __thiscall vehHornAudio::Update(void) | ?Update@vehHornAudio@@QAEXXZ
    0x4DB6A0 | public: void __thiscall vehHornAudio::EchoOn(float) | ?EchoOn@vehHornAudio@@QAEXM@Z
    0x4DB6D0 | public: void __thiscall vehHornAudio::EchoOff(void) | ?EchoOff@vehHornAudio@@QAEXXZ
    0x4DB6E0 | public: void __thiscall vehHornAudio::UpdateEcho(void) | ?UpdateEcho@vehHornAudio@@QAEXXZ
*/

class vehHornAudio
{
public:
    // 0x4D0C50 | ??_GvehHornAudio@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)

    // 0x4DAEC0 | ??0vehHornAudio@@QAE@XZ
    vehHornAudio()
    {
        stub<member_func_t<void, vehHornAudio>>(0x4DAEC0, this);
    }

    // 0x4DAEF0 | ??0vehHornAudio@@QAE@PAV0@@Z
    vehHornAudio(class vehHornAudio* arg1)
    {
        stub<member_func_t<void, vehHornAudio, class vehHornAudio*>>(0x4DAEF0, this, arg1);
    }

    // 0x4DB020 | ??1vehHornAudio@@QAE@XZ
    ~vehHornAudio()
    {
        stub<member_func_t<void, vehHornAudio>>(0x4DB020, this);
    }

    // 0x4DB080 | ?AllocTiming@vehHornAudio@@QAEXXZ
    void AllocTiming()
    {
        return stub<member_func_t<void, vehHornAudio>>(0x4DB080, this);
    }

    // 0x4DB130 | ?GetHornAudioTimingPtr@vehHornAudio@@QAEPAVvehHornAudioTiming@@H@Z
    class vehHornAudioTiming* GetHornAudioTimingPtr(i32 arg1)
    {
        return stub<member_func_t<class vehHornAudioTiming*, vehHornAudio, i32>>(0x4DB130, this, arg1);
    }

    // 0x4DB140 | ?GetNumTimings@vehHornAudio@@QAEHXZ
    i32 GetNumTimings()
    {
        return stub<member_func_t<i32, vehHornAudio>>(0x4DB140, this);
    }

    // 0x4DB150 | ?UpdateDoppler@vehHornAudio@@QAEXMMM@Z
    void UpdateDoppler(f32 arg1, f32 arg2, f32 arg3)
    {
        return stub<member_func_t<void, vehHornAudio, f32, f32, f32>>(0x4DB150, this, arg1, arg2, arg3);
    }

    // 0x4DB1C0 | ?IsPlaying@vehHornAudio@@QAE_NXZ
    bool IsPlaying()
    {
        return stub<member_func_t<bool, vehHornAudio>>(0x4DB1C0, this);
    }

    // 0x4DB1E0 | ?PlayAvoidance@vehHornAudio@@QAE_NXZ
    bool PlayAvoidance()
    {
        return stub<member_func_t<bool, vehHornAudio>>(0x4DB1E0, this);
    }

    // 0x4DB280 | ?PlayImpact@vehHornAudio@@QAEXM@Z
    void PlayImpact(f32 arg1)
    {
        return stub<member_func_t<void, vehHornAudio, f32>>(0x4DB280, this, arg1);
    }

    // 0x4DB310 | ?Reset@vehHornAudio@@QAEXXZ
    void Reset()
    {
        return stub<member_func_t<void, vehHornAudio>>(0x4DB310, this);
    }

    // 0x4DB320 | ?AssignSounds@vehHornAudio@@QAEXH@Z
    void AssignSounds(i32 arg1)
    {
        return stub<member_func_t<void, vehHornAudio, i32>>(0x4DB320, this, arg1);
    }

    // 0x4DB350 | ?UnAssignSounds@vehHornAudio@@QAEXXZ
    void UnAssignSounds()
    {
        return stub<member_func_t<void, vehHornAudio>>(0x4DB350, this);
    }

    // 0x4DB3D0 | ?Load@vehHornAudio@@SAHPAPAV1@PAD1PAH@Z
    static inline i32 Load(class vehHornAudio** arg1, char* arg2, char* arg3, i32* arg4)
    {
        return stub<cdecl_t<i32, class vehHornAudio**, char*, char*, i32*>>(0x4DB3D0, arg1, arg2, arg3, arg4);
    }

    // 0x4DB490 | ?AddToHash@vehHornAudio@@SAXPADH@Z
    static inline void AddToHash(char* arg1, i32 arg2)
    {
        return stub<cdecl_t<void, char*, i32>>(0x4DB490, arg1, arg2);
    }

    // 0x4DB4D0 | ?ReadCSV@vehHornAudio@@AAEHPAVStream@@@Z
    i32 ReadCSV(class Stream* arg1)
    {
        return stub<member_func_t<i32, vehHornAudio, class Stream*>>(0x4DB4D0, this, arg1);
    }

    // 0x4DB680 | ?Update@vehHornAudio@@QAEXXZ
    void Update()
    {
        return stub<member_func_t<void, vehHornAudio>>(0x4DB680, this);
    }

    // 0x4DB6A0 | ?EchoOn@vehHornAudio@@QAEXM@Z
    void EchoOn(f32 arg1)
    {
        return stub<member_func_t<void, vehHornAudio, f32>>(0x4DB6A0, this, arg1);
    }

    // 0x4DB6D0 | ?EchoOff@vehHornAudio@@QAEXXZ
    void EchoOff()
    {
        return stub<member_func_t<void, vehHornAudio>>(0x4DB6D0, this);
    }

    // 0x4DB6E0 | ?UpdateEcho@vehHornAudio@@QAEXXZ
    void UpdateEcho()
    {
        return stub<member_func_t<void, vehHornAudio>>(0x4DB6E0, this);
    }
};
