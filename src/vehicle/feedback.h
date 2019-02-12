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
    vehicle:feedback

    0x4D56C0 | public: __thiscall vehFeedback::vehFeedback(void) | ??0vehFeedback@@QAE@XZ
    0x4D5740 | public: virtual __thiscall vehFeedback::~vehFeedback(void) | ??1vehFeedback@@UAE@XZ
    0x4D5750 | public: class ioPad * __thiscall vehFeedback::GetPad(void) | ?GetPad@vehFeedback@@QAEPAVioPad@@XZ
    0x4D5760 | public: void __thiscall vehFeedback::SetPad(class ioPad *) | ?SetPad@vehFeedback@@QAEXPAVioPad@@@Z
    0x4D5770 | public: int __thiscall vehFeedback::GetPadID(void) | ?GetPadID@vehFeedback@@QAEHXZ
    0x4D5780 | public: void __thiscall vehFeedback::SetPadID(int) | ?SetPadID@vehFeedback@@QAEXH@Z
    0x4D57A0 | public: virtual int __thiscall vehFeedback::SetFeedback(bool) | ?SetFeedback@vehFeedback@@UAEH_N@Z
    0x4D57B0 | public: virtual int __thiscall vehFeedback::SetTimingUnit(float) | ?SetTimingUnit@vehFeedback@@UAEHM@Z
    0x4D57E0 | public: virtual int __thiscall vehFeedback::GetNumActuators(void) | ?GetNumActuators@vehFeedback@@UAEHXZ
    0x4D57F0 | public: virtual int __thiscall vehFeedback::SetActuatorValue(int,float) | ?SetActuatorValue@vehFeedback@@UAEHHM@Z
    0x4D5830 | public: virtual int __thiscall vehFeedback::PlayFeedbackSample(int,int,float *,int *) | ?PlayFeedbackSample@vehFeedback@@UAEHHHPAMPAH@Z
    0x4D58B0 | public: virtual int __thiscall vehFeedback::PlayFeedbackSampleID(int) | ?PlayFeedbackSampleID@vehFeedback@@UAEHH@Z
    0x4D5910 | public: virtual int __thiscall vehFeedback::ClearAllSamples(bool) | ?ClearAllSamples@vehFeedback@@UAEH_N@Z
    0x4D5980 | public: virtual float __thiscall vehFeedback::GetNextUnit(int) | ?GetNextUnit@vehFeedback@@UAEMH@Z
    0x4D5A80 | public: virtual int __thiscall vehFeedback::Update(void) | ?Update@vehFeedback@@UAEHXZ
    public: virtual void * __thiscall vehFeedback::`vector deleting destructor'(unsigned int) | ??_EvehFeedback@@UAEPAXI@Z
    0x4D5B50 | public: virtual void * __thiscall vehFeedback::`scalar deleting destructor'(unsigned int) | ??_GvehFeedback@@UAEPAXI@Z
    public: static struct vehFeedback::SampleRec const vehFeedback::sm_CollisionSmallFeedback | ?sm_CollisionSmallFeedback@vehFeedback@@2USampleRec@1@B
    public: static struct vehFeedback::SampleRec const vehFeedback::sm_CollisionLargeFeedback | ?sm_CollisionLargeFeedback@vehFeedback@@2USampleRec@1@B
    0x5B2E5C | const vehFeedback::`vftable' | ??_7vehFeedback@@6B@
*/

// #include "hooking.h"
