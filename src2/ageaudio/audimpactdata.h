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

class AudImpactData
{
public:
    // 0x514120 | ??0AudImpactData@@QAE@XZ
    inline AudImpactData()
    {
        stub<member_func_t<void, AudImpactData>>(0x514120, this);
    }

    // 0x514130 | ??0AudImpactData@@QAE@PAV0@@Z
    inline AudImpactData(class AudImpactData* arg1)
    {
        stub<member_func_t<void, AudImpactData, class AudImpactData*>>(0x514130, this, arg1);
    }

    // 0x5141A0 | ?ReadCSV@AudImpactData@@QAE_NPAVStream@@H@Z
    inline bool ReadCSV(class Stream* arg1, i32 arg2)
    {
        return stub<member_func_t<bool, AudImpactData, class Stream*, i32>>(0x5141A0, this, arg1, arg2);
    }

    // 0x5143A0 | ?AssignSounds@AudImpactData@@QAEXH@Z
    inline void AssignSounds(i32 arg1)
    {
        return stub<member_func_t<void, AudImpactData, i32>>(0x5143A0, this, arg1);
    }

    // 0x514410 | ?UnAssignSounds@AudImpactData@@QAEXXZ
    inline void UnAssignSounds()
    {
        return stub<member_func_t<void, AudImpactData>>(0x514410, this);
    }

    // 0x514430 | ?UpdateAttenuation@AudImpactData@@QAEXMM@Z
    inline void UpdateAttenuation(f32 arg1, f32 arg2)
    {
        return stub<member_func_t<void, AudImpactData, f32, f32>>(0x514430, this, arg1, arg2);
    }

    // 0x514470 | ?UpdateAttenuation@AudImpactData@@AAEXPAUtagImpactSampleWrapper@@MM@Z
    inline void UpdateAttenuation(struct tagImpactSampleWrapper* arg1, f32 arg2, f32 arg3)
    {
        return stub<member_func_t<void, AudImpactData, struct tagImpactSampleWrapper*, f32, f32>>(
            0x514470, this, arg1, arg2, arg3);
    }

    // 0x5144C0 | ?Play@AudImpactData@@QAEXM@Z
    inline void Play(f32 arg1)
    {
        return stub<member_func_t<void, AudImpactData, f32>>(0x5144C0, this, arg1);
    }

    // 0x514520 | ?PlaySample@AudImpactData@@AAEXPAUtagImpactSampleWrapper@@M@Z
    inline void PlaySample(struct tagImpactSampleWrapper* arg1, f32 arg2)
    {
        return stub<member_func_t<void, AudImpactData, struct tagImpactSampleWrapper*, f32>>(
            0x514520, this, arg1, arg2);
    }

    // 0x5145A0 | ?Play@AudImpactData@@QAEXMMM@Z
    inline void Play(f32 arg1, f32 arg2, f32 arg3)
    {
        return stub<member_func_t<void, AudImpactData, f32, f32, f32>>(0x5145A0, this, arg1, arg2, arg3);
    }

    // 0x514610 | ?PlaySample@AudImpactData@@AAEXPAUtagImpactSampleWrapper@@MMM@Z
    inline void PlaySample(struct tagImpactSampleWrapper* arg1, f32 arg2, f32 arg3, f32 arg4)
    {
        return stub<member_func_t<void, AudImpactData, struct tagImpactSampleWrapper*, f32, f32, f32>>(
            0x514610, this, arg1, arg2, arg3, arg4);
    }

    // 0x5146B0 | ?SetPan@AudImpactData@@QAEXM@Z
    inline void SetPan(f32 arg1)
    {
        return stub<member_func_t<void, AudImpactData, f32>>(0x5146B0, this, arg1);
    }
};
