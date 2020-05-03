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
    // 0x4DAEC0 | ??0vehHornAudio@@QAE@XZ
    vehHornAudio();

    // 0x4DAEF0 | ??0vehHornAudio@@QAE@PAV0@@Z
    vehHornAudio(class vehHornAudio* arg1);

    // 0x4DB020 | ??1vehHornAudio@@QAE@XZ
    // 0x4D0C50 | ??_GvehHornAudio@@QAEPAXI@Z
    ~vehHornAudio();

    // 0x4DB080 | ?AllocTiming@vehHornAudio@@QAEXXZ
    void AllocTiming();

    // 0x4DB320 | ?AssignSounds@vehHornAudio@@QAEXH@Z
    void AssignSounds(i32 arg1);

    // 0x4DB6D0 | ?EchoOff@vehHornAudio@@QAEXXZ
    void EchoOff();

    // 0x4DB6A0 | ?EchoOn@vehHornAudio@@QAEXM@Z
    void EchoOn(f32 arg1);

    // 0x4DB130 | ?GetHornAudioTimingPtr@vehHornAudio@@QAEPAVvehHornAudioTiming@@H@Z
    class vehHornAudioTiming* GetHornAudioTimingPtr(i32 arg1);

    // 0x4DB140 | ?GetNumTimings@vehHornAudio@@QAEHXZ
    i32 GetNumTimings();

    // 0x4DB1C0 | ?IsPlaying@vehHornAudio@@QAE_NXZ
    bool IsPlaying();

    // 0x4DB1E0 | ?PlayAvoidance@vehHornAudio@@QAE_NXZ
    bool PlayAvoidance();

    // 0x4DB280 | ?PlayImpact@vehHornAudio@@QAEXM@Z
    void PlayImpact(f32 arg1);

    // 0x4DB310 | ?Reset@vehHornAudio@@QAEXXZ
    void Reset();

    // 0x4DB350 | ?UnAssignSounds@vehHornAudio@@QAEXXZ
    void UnAssignSounds();

    // 0x4DB680 | ?Update@vehHornAudio@@QAEXXZ
    void Update();

    // 0x4DB150 | ?UpdateDoppler@vehHornAudio@@QAEXMMM@Z
    void UpdateDoppler(f32 arg1, f32 arg2, f32 arg3);

    // 0x4DB6E0 | ?UpdateEcho@vehHornAudio@@QAEXXZ
    void UpdateEcho();

    // 0x4DB490 | ?AddToHash@vehHornAudio@@SAXPADH@Z
    static void AddToHash(char* arg1, i32 arg2);

    // 0x4DB3D0 | ?Load@vehHornAudio@@SAHPAPAV1@PAD1PAH@Z
    static i32 Load(class vehHornAudio** arg1, char* arg2, char* arg3, i32* arg4);

private:
    // 0x4DB4D0 | ?ReadCSV@vehHornAudio@@AAEHPAVStream@@@Z
    i32 ReadCSV(class Stream* arg1);
};

check_size(vehHornAudio, 0x34);
