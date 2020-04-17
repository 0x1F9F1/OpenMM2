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

struct vehFeedback
{
public:
    // vehFeedback::`vftable' @ 0x5B2E5C

    // 0x4D56C0 | ??0vehFeedback@@QAE@XZ
    vehFeedback()
    {
        stub<member_func_t<void, vehFeedback>>(0x4D56C0, this);
    }

    // 0x4D5750 | ?GetPad@vehFeedback@@QAEPAVioPad@@XZ
    class ioPad* GetPad()
    {
        return stub<member_func_t<class ioPad*, vehFeedback>>(0x4D5750, this);
    }

    // 0x4D5760 | ?SetPad@vehFeedback@@QAEXPAVioPad@@@Z
    void SetPad(class ioPad* arg1)
    {
        return stub<member_func_t<void, vehFeedback, class ioPad*>>(0x4D5760, this, arg1);
    }

    // 0x4D5770 | ?GetPadID@vehFeedback@@QAEHXZ
    i32 GetPadID()
    {
        return stub<member_func_t<i32, vehFeedback>>(0x4D5770, this);
    }

    // 0x4D5780 | ?SetPadID@vehFeedback@@QAEXH@Z
    void SetPadID(i32 arg1)
    {
        return stub<member_func_t<void, vehFeedback, i32>>(0x4D5780, this, arg1);
    }

    // 0x4D5740 | ??1vehFeedback@@UAE@XZ
    virtual ~vehFeedback()
    {
        stub<member_func_t<void, vehFeedback>>(0x4D5740, this);
    }

    // 0x4D57A0 | ?SetFeedback@vehFeedback@@UAEH_N@Z
    virtual i32 SetFeedback(bool arg1)
    {
        return stub<member_func_t<i32, vehFeedback, bool>>(0x4D57A0, this, arg1);
    }

    // 0x4D57B0 | ?SetTimingUnit@vehFeedback@@UAEHM@Z
    virtual i32 SetTimingUnit(f32 arg1)
    {
        return stub<member_func_t<i32, vehFeedback, f32>>(0x4D57B0, this, arg1);
    }

    // 0x4D57E0 | ?GetNumActuators@vehFeedback@@UAEHXZ
    virtual i32 GetNumActuators()
    {
        return stub<member_func_t<i32, vehFeedback>>(0x4D57E0, this);
    }

    // 0x4D57F0 | ?SetActuatorValue@vehFeedback@@UAEHHM@Z
    virtual i32 SetActuatorValue(i32 arg1, f32 arg2)
    {
        return stub<member_func_t<i32, vehFeedback, i32, f32>>(0x4D57F0, this, arg1, arg2);
    }

    // 0x4D5830 | ?PlayFeedbackSample@vehFeedback@@UAEHHHPAMPAH@Z
    virtual i32 PlayFeedbackSample(i32 arg1, i32 arg2, f32* arg3, i32* arg4)
    {
        return stub<member_func_t<i32, vehFeedback, i32, i32, f32*, i32*>>(0x4D5830, this, arg1, arg2, arg3, arg4);
    }

    // 0x4D58B0 | ?PlayFeedbackSampleID@vehFeedback@@UAEHH@Z
    virtual i32 PlayFeedbackSampleID(i32 arg1)
    {
        return stub<member_func_t<i32, vehFeedback, i32>>(0x4D58B0, this, arg1);
    }

    // 0x4D5980 | ?GetNextUnit@vehFeedback@@UAEMH@Z
    virtual f32 GetNextUnit(i32 arg1)
    {
        return stub<member_func_t<f32, vehFeedback, i32>>(0x4D5980, this, arg1);
    }

    // 0x4D5A80 | ?Update@vehFeedback@@UAEHXZ
    virtual i32 Update()
    {
        return stub<member_func_t<i32, vehFeedback>>(0x4D5A80, this);
    }

    // 0x4D5910 | ?ClearAllSamples@vehFeedback@@UAEH_N@Z
    virtual i32 ClearAllSamples(bool arg1)
    {
        return stub<member_func_t<i32, vehFeedback, bool>>(0x4D5910, this, arg1);
    }
};
