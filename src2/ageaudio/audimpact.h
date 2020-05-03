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
    ageaudio:audimpact

    0x511130 | public: __thiscall AudImpact::AudImpact(void) | ??0AudImpact@@QAE@XZ
    0x511160 | public: __thiscall AudImpact::AudImpact(class AudImpact *) | ??0AudImpact@@QAE@PAV0@@Z
    0x511270 | public: virtual __thiscall AudImpact::~AudImpact(void) | ??1AudImpact@@UAE@XZ
    0x5112D0 | public: static void __cdecl AudImpact::SetSecondsElapsed(float) | ?SetSecondsElapsed@AudImpact@@SAXM@Z
    0x5112E0 | public: static float __cdecl AudImpact::GetSecondsElapsed(void) | ?GetSecondsElapsed@AudImpact@@SAMXZ
    0x5112F0 | public: class AudImpactData * __thiscall AudImpact::GetAudImpactDataPtr(int) | ?GetAudImpactDataPtr@AudImpact@@QAEPAVAudImpactData@@H@Z
    0x511370 | public: static int __cdecl AudImpact::Load(class AudImpact * *,char *,char *,int *) | ?Load@AudImpact@@SAHPAPAV1@PAD1PAH@Z
    0x511460 | public: static void __cdecl AudImpact::AddToHash(char *,int) | ?AddToHash@AudImpact@@SAXPADH@Z
    0x5114A0 | private: int __thiscall AudImpact::ReadCSV(class Stream *) | ?ReadCSV@AudImpact@@AAEHPAVStream@@@Z
    public: void __thiscall AudImpact::SaveFileNameAndPath(char *,char *) | ?SaveFileNameAndPath@AudImpact@@QAEXPAD0@Z
    public: void __thiscall AudImpact::SaveCSV(void) | ?SaveCSV@AudImpact@@QAEXXZ
    0x5117F0 | public: void __thiscall AudImpact::AssignSounds(int) | ?AssignSounds@AudImpact@@QAEXH@Z
    0x511820 | public: void __thiscall AudImpact::UnAssignSounds(void) | ?UnAssignSounds@AudImpact@@QAEXXZ
    0x511840 | public: void __thiscall AudImpact::Update(void) | ?Update@AudImpact@@QAEXXZ
    0x511860 | public: void __thiscall AudImpact::Play(float,int) | ?Play@AudImpact@@QAEXMH@Z
    0x511880 | public: void __thiscall AudImpact::Play(int,float) | ?Play@AudImpact@@QAEXHM@Z
    0x5118D0 | public: void __thiscall AudImpact::Set3D(bool,float) | ?Set3D@AudImpact@@QAEX_NM@Z
    0x5118F0 | public: void __thiscall AudImpact::SetPan(float) | ?SetPan@AudImpact@@QAEXM@Z
    0x511950 | public: void __thiscall AudImpact::UpdateAttenuation(float,float) | ?UpdateAttenuation@AudImpact@@QAEXMM@Z
    public: void __thiscall AudImpact::AddWidgets(class bkBank &) | ?AddWidgets@AudImpact@@QAEXAAVbkBank@@@Z
    public: virtual void * __thiscall AudImpact::`vector deleting destructor'(unsigned int) | ??_EAudImpact@@UAEPAXI@Z
    public: virtual void * __thiscall AudImpact::`scalar deleting destructor'(unsigned int) | ??_GAudImpact@@UAEPAXI@Z
    const AudImpact::`vftable' | ??_7AudImpact@@6B@
    0x6B14C4 | private: static float AudImpact::s_fSecondsElapsed | ?s_fSecondsElapsed@AudImpact@@0MA
*/

class AudImpact
{
public:
    // 0x511130 | ??0AudImpact@@QAE@XZ
    AudImpact();

    // 0x511160 | ??0AudImpact@@QAE@PAV0@@Z
    AudImpact(class AudImpact* arg1);

    // 0x511270 | ??1AudImpact@@UAE@XZ
    ~AudImpact();

    // 0x5117F0 | ?AssignSounds@AudImpact@@QAEXH@Z
    void AssignSounds(i32 arg1);

    // 0x5112F0 | ?GetAudImpactDataPtr@AudImpact@@QAEPAVAudImpactData@@H@Z
    class AudImpactData* GetAudImpactDataPtr(i32 arg1);

    // 0x511860 | ?Play@AudImpact@@QAEXMH@Z
    void Play(f32 arg1, i32 arg2);

    // 0x511880 | ?Play@AudImpact@@QAEXHM@Z
    void Play(i32 arg1, f32 arg2);

    // 0x5118D0 | ?Set3D@AudImpact@@QAEX_NM@Z
    void Set3D(bool arg1, f32 arg2);

    // 0x5118F0 | ?SetPan@AudImpact@@QAEXM@Z
    void SetPan(f32 arg1);

    // 0x511820 | ?UnAssignSounds@AudImpact@@QAEXXZ
    void UnAssignSounds();

    // 0x511840 | ?Update@AudImpact@@QAEXXZ
    void Update();

    // 0x511950 | ?UpdateAttenuation@AudImpact@@QAEXMM@Z
    void UpdateAttenuation(f32 arg1, f32 arg2);

    // 0x511460 | ?AddToHash@AudImpact@@SAXPADH@Z
    static void AddToHash(char* arg1, i32 arg2);

    // 0x5112E0 | ?GetSecondsElapsed@AudImpact@@SAMXZ
    static f32 GetSecondsElapsed();

    // 0x511370 | ?Load@AudImpact@@SAHPAPAV1@PAD1PAH@Z
    static i32 Load(class AudImpact** arg1, char* arg2, char* arg3, i32* arg4);

    // 0x5112D0 | ?SetSecondsElapsed@AudImpact@@SAXM@Z
    static void SetSecondsElapsed(f32 arg1);

private:
    // 0x5114A0 | ?ReadCSV@AudImpact@@AAEHPAVStream@@@Z
    i32 ReadCSV(class Stream* arg1);

    // 0x6B14C4 | ?s_fSecondsElapsed@AudImpact@@0MA
    static inline extern_var(0x6B14C4, f32, s_fSecondsElapsed);
};

check_size(AudImpact, 0x20);
