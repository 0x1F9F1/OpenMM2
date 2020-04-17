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
    ageaudio:audcreature

    0x512700 | public: __thiscall AudCreature::AudCreature(void) | ??0AudCreature@@QAE@XZ
    0x512710 | public: __thiscall AudCreature::AudCreature(class AudCreature *) | ??0AudCreature@@QAE@PAV0@@Z
    0x512840 | public: __thiscall AudCreature::~AudCreature(void) | ??1AudCreature@@QAE@XZ
    0x5128C0 | public: void __thiscall AudCreature::SetAud3DObjectPtr(class Aud3DObject *) | ?SetAud3DObjectPtr@AudCreature@@QAEXPAVAud3DObject@@@Z
    0x512900 | public: void __thiscall AudCreature::PlayAvoidance(float) | ?PlayAvoidance@AudCreature@@QAEXM@Z
    0x512940 | public: bool __thiscall AudCreature::IsPlaying(void) | ?IsPlaying@AudCreature@@QAE_NXZ
    0x512990 | public: void __thiscall AudCreature::PlayImpact(float) | ?PlayImpact@AudCreature@@QAEXM@Z
    0x5129B0 | public: void __thiscall AudCreature::UpdateAttenuation(float,float,float) | ?UpdateAttenuation@AudCreature@@QAEXMMM@Z
    0x512A60 | public: static int __cdecl AudCreature::Load(class AudCreature * *,char *,char *,int *) | ?Load@AudCreature@@SAHPAPAV1@PAD1PAH@Z
    0x512B00 | public: static void __cdecl AudCreature::AddToHash(char *,int) | ?AddToHash@AudCreature@@SAXPADH@Z
    0x512B20 | private: int __thiscall AudCreature::ReadCSV(class Stream *) | ?ReadCSV@AudCreature@@AAEHPAVStream@@@Z
    0x512D90 | public: void __thiscall AudCreature::AssignSounds(int) | ?AssignSounds@AudCreature@@QAEXH@Z
    0x512DD0 | public: void __thiscall AudCreature::UnAssignSounds(void) | ?UnAssignSounds@AudCreature@@QAEXXZ
    0x512E10 | public: void __thiscall AudCreature::EchoOn(float) | ?EchoOn@AudCreature@@QAEXM@Z
    0x512E50 | public: void __thiscall AudCreature::EchoOff(void) | ?EchoOff@AudCreature@@QAEXXZ
    0x512E90 | public: void __thiscall AudCreature::Update(float) | ?Update@AudCreature@@QAEXM@Z
    0x512ED0 | public: void __thiscall AudCreature::UpdateEcho(void) | ?UpdateEcho@AudCreature@@QAEXXZ
*/

class AudCreature
{
public:
    // 0x512700 | ??0AudCreature@@QAE@XZ
    AudCreature()
    {
        stub<member_func_t<void, AudCreature>>(0x512700, this);
    }

    // 0x512710 | ??0AudCreature@@QAE@PAV0@@Z
    AudCreature(class AudCreature* arg1)
    {
        stub<member_func_t<void, AudCreature, class AudCreature*>>(0x512710, this, arg1);
    }

    // 0x512840 | ??1AudCreature@@QAE@XZ
    ~AudCreature()
    {
        stub<member_func_t<void, AudCreature>>(0x512840, this);
    }

    // 0x5128C0 | ?SetAud3DObjectPtr@AudCreature@@QAEXPAVAud3DObject@@@Z
    void SetAud3DObjectPtr(class Aud3DObject* arg1)
    {
        return stub<member_func_t<void, AudCreature, class Aud3DObject*>>(0x5128C0, this, arg1);
    }

    // 0x512900 | ?PlayAvoidance@AudCreature@@QAEXM@Z
    void PlayAvoidance(f32 arg1)
    {
        return stub<member_func_t<void, AudCreature, f32>>(0x512900, this, arg1);
    }

    // 0x512940 | ?IsPlaying@AudCreature@@QAE_NXZ
    bool IsPlaying()
    {
        return stub<member_func_t<bool, AudCreature>>(0x512940, this);
    }

    // 0x512990 | ?PlayImpact@AudCreature@@QAEXM@Z
    void PlayImpact(f32 arg1)
    {
        return stub<member_func_t<void, AudCreature, f32>>(0x512990, this, arg1);
    }

    // 0x5129B0 | ?UpdateAttenuation@AudCreature@@QAEXMMM@Z
    void UpdateAttenuation(f32 arg1, f32 arg2, f32 arg3)
    {
        return stub<member_func_t<void, AudCreature, f32, f32, f32>>(0x5129B0, this, arg1, arg2, arg3);
    }

    // 0x512A60 | ?Load@AudCreature@@SAHPAPAV1@PAD1PAH@Z
    static inline i32 Load(class AudCreature** arg1, char* arg2, char* arg3, i32* arg4)
    {
        return stub<cdecl_t<i32, class AudCreature**, char*, char*, i32*>>(0x512A60, arg1, arg2, arg3, arg4);
    }

    // 0x512B00 | ?AddToHash@AudCreature@@SAXPADH@Z
    static inline void AddToHash(char* arg1, i32 arg2)
    {
        return stub<cdecl_t<void, char*, i32>>(0x512B00, arg1, arg2);
    }

    // 0x512B20 | ?ReadCSV@AudCreature@@AAEHPAVStream@@@Z
    i32 ReadCSV(class Stream* arg1)
    {
        return stub<member_func_t<i32, AudCreature, class Stream*>>(0x512B20, this, arg1);
    }

    // 0x512D90 | ?AssignSounds@AudCreature@@QAEXH@Z
    void AssignSounds(i32 arg1)
    {
        return stub<member_func_t<void, AudCreature, i32>>(0x512D90, this, arg1);
    }

    // 0x512DD0 | ?UnAssignSounds@AudCreature@@QAEXXZ
    void UnAssignSounds()
    {
        return stub<member_func_t<void, AudCreature>>(0x512DD0, this);
    }

    // 0x512E10 | ?EchoOn@AudCreature@@QAEXM@Z
    void EchoOn(f32 arg1)
    {
        return stub<member_func_t<void, AudCreature, f32>>(0x512E10, this, arg1);
    }

    // 0x512E50 | ?EchoOff@AudCreature@@QAEXXZ
    void EchoOff()
    {
        return stub<member_func_t<void, AudCreature>>(0x512E50, this);
    }

    // 0x512E90 | ?Update@AudCreature@@QAEXM@Z
    void Update(f32 arg1)
    {
        return stub<member_func_t<void, AudCreature, f32>>(0x512E90, this, arg1);
    }

    // 0x512ED0 | ?UpdateEcho@AudCreature@@QAEXXZ
    void UpdateEcho()
    {
        return stub<member_func_t<void, AudCreature>>(0x512ED0, this);
    }
};
