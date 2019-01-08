/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2019 Brick

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
    private: static float AudImpact::s_fSecondsElapsed | ?s_fSecondsElapsed@AudImpact@@0MA
*/

#include "hooking.h"
