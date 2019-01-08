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
    ageaudio:audimpactdata

    0x514120 | public: __thiscall AudImpactData::AudImpactData(void) | ??0AudImpactData@@QAE@XZ
    0x514130 | public: __thiscall AudImpactData::AudImpactData(class AudImpactData *) | ??0AudImpactData@@QAE@PAV0@@Z
    0x514180 | public: virtual __thiscall AudImpactData::~AudImpactData(void) | ??1AudImpactData@@UAE@XZ
    0x5141A0 | public: bool __thiscall AudImpactData::ReadCSV(class Stream *,int) | ?ReadCSV@AudImpactData@@QAE_NPAVStream@@H@Z
    public: void __thiscall AudImpactData::SaveCSVBuffer(class Stream *,int) | ?SaveCSVBuffer@AudImpactData@@QAEXPAVStream@@H@Z
    0x5143A0 | public: void __thiscall AudImpactData::AssignSounds(int) | ?AssignSounds@AudImpactData@@QAEXH@Z
    0x514410 | public: void __thiscall AudImpactData::UnAssignSounds(void) | ?UnAssignSounds@AudImpactData@@QAEXXZ
    0x514430 | public: void __thiscall AudImpactData::UpdateAttenuation(float,float) | ?UpdateAttenuation@AudImpactData@@QAEXMM@Z
    0x514470 | private: void __thiscall AudImpactData::UpdateAttenuation(struct tagImpactSampleWrapper *,float,float) | ?UpdateAttenuation@AudImpactData@@AAEXPAUtagImpactSampleWrapper@@MM@Z
    0x5144C0 | public: void __thiscall AudImpactData::Play(float) | ?Play@AudImpactData@@QAEXM@Z
    0x514520 | private: void __thiscall AudImpactData::PlaySample(struct tagImpactSampleWrapper *,float) | ?PlaySample@AudImpactData@@AAEXPAUtagImpactSampleWrapper@@M@Z
    0x5145A0 | public: void __thiscall AudImpactData::Play(float,float,float) | ?Play@AudImpactData@@QAEXMMM@Z
    0x514610 | private: void __thiscall AudImpactData::PlaySample(struct tagImpactSampleWrapper *,float,float,float) | ?PlaySample@AudImpactData@@AAEXPAUtagImpactSampleWrapper@@MMM@Z
    0x5146B0 | public: void __thiscall AudImpactData::SetPan(float) | ?SetPan@AudImpactData@@QAEXM@Z
    public: void __thiscall AudImpactData::AddWidgets(class bkBank &,int) | ?AddWidgets@AudImpactData@@QAEXAAVbkBank@@H@Z
    public: void __thiscall AudImpactData::SetBangerName(char *) | ?SetBangerName@AudImpactData@@QAEXPAD@Z
    public: void __thiscall AudImpactData::WidgetPlay(void) | ?WidgetPlay@AudImpactData@@QAEXXZ
    public: void __thiscall AudImpactData::WidgetVolDivs(void) | ?WidgetVolDivs@AudImpactData@@QAEXXZ
    public: virtual void * __thiscall AudImpactData::`vector deleting destructor'(unsigned int) | ??_EAudImpactData@@UAEPAXI@Z
    public: virtual void * __thiscall AudImpactData::`scalar deleting destructor'(unsigned int) | ??_GAudImpactData@@UAEPAXI@Z
    const AudImpactData::`vftable' | ??_7AudImpactData@@6B@
*/

#include "hooking.h"
