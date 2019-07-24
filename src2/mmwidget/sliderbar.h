/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
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
    mmwidget:sliderbar

    0x4F31C0 | public: __thiscall mmSlider::mmSlider(void) | ??0mmSlider@@QAE@XZ
    0x4F3250 | public: virtual __thiscall mmSlider::~mmSlider(void) | ??1mmSlider@@UAE@XZ
    0x4F3310 | public: void __thiscall mmSlider::Init(char *,class uiWidget *,float,float,float,float,int,float,float,int,int) | ?Init@mmSlider@@QAEXPADPAVuiWidget@@MMMMHMMHH@Z
    0x4F3370 | public: void __thiscall mmSlider::LoadBitmap(char *) | ?LoadBitmap@mmSlider@@QAEXPAD@Z
    0x4F3510 | public: void __thiscall mmSlider::SetReadWrite(int) | ?SetReadWrite@mmSlider@@QAEXH@Z
    0x4F3530 | public: int __thiscall mmSlider::IsReadWrite(void) | ?IsReadWrite@mmSlider@@QAEHXZ
    0x4F3540 | public: float __thiscall mmSlider::SetValue(float) | ?SetValue@mmSlider@@QAEMM@Z
    0x4F35A0 | public: float __thiscall mmSlider::GetScreenHeight(void) | ?GetScreenHeight@mmSlider@@QAEMXZ
    0x4F35C0 | public: float __thiscall mmSlider::FudgeWidth(void) | ?FudgeWidth@mmSlider@@QAEMXZ
    0x4F35F0 | public: void __thiscall mmSlider::SetPosition(float,float) | ?SetPosition@mmSlider@@QAEXMM@Z
    0x4F3610 | public: void __thiscall mmSlider::GetSliderHotSpots(float &,float &,float &,float &,float &,float &) | ?GetSliderHotSpots@mmSlider@@QAEXAAM00000@Z
    0x4F36C0 | public: void __thiscall mmSlider::UpdatePosition(void) | ?UpdatePosition@mmSlider@@QAEXXZ
    0x4F36F0 | public: float __thiscall mmSlider::Inc(void) | ?Inc@mmSlider@@QAEMXZ
    0x4F3710 | public: float __thiscall mmSlider::Dec(void) | ?Dec@mmSlider@@QAEMXZ
    0x4F3730 | public: void __thiscall mmSlider::SetStep(float) | ?SetStep@mmSlider@@QAEXM@Z
    0x4F37A0 | public: void __thiscall mmSlider::SetRange(float,float) | ?SetRange@mmSlider@@QAEXMM@Z
    0x4F3800 | public: virtual void __thiscall mmSlider::Update(void) | ?Update@mmSlider@@UAEXXZ
    0x4F3820 | public: virtual void __thiscall mmSlider::Cull(void) | ?Cull@mmSlider@@UAEXXZ
    public: virtual void * __thiscall mmSlider::`vector deleting destructor'(unsigned int) | ??_EmmSlider@@UAEPAXI@Z
    0x4F39B0 | public: virtual void * __thiscall mmSlider::`scalar deleting destructor'(unsigned int) | ??_GmmSlider@@UAEPAXI@Z
    0x5B3C38 | const mmSlider::`vftable' | ??_7mmSlider@@6B@
*/

struct mmSlider : asNode
{
public:
    // mmSlider::`vftable' @ 0x5B3C38

    // 0x4F31C0 | ??0mmSlider@@QAE@XZ
    inline mmSlider()
    {
        stub<member_func_t<void, mmSlider>>(0x4F31C0, this);
    }

    // 0x4F3310 | ?Init@mmSlider@@QAEXPADPAVuiWidget@@MMMMHMMHH@Z
    inline void Init(char* arg1, class uiWidget* arg2, float arg3, float arg4, float arg5, float arg6, int32_t arg7,
        float arg8, float arg9, int32_t arg10, int32_t arg11)
    {
        return stub<member_func_t<void, mmSlider, char*, class uiWidget*, float, float, float, float, int32_t, float,
            float, int32_t, int32_t>>(
            0x4F3310, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }

    // 0x4F3370 | ?LoadBitmap@mmSlider@@QAEXPAD@Z
    inline void LoadBitmap(char* arg1)
    {
        return stub<member_func_t<void, mmSlider, char*>>(0x4F3370, this, arg1);
    }

    // 0x4F3510 | ?SetReadWrite@mmSlider@@QAEXH@Z
    inline void SetReadWrite(int32_t arg1)
    {
        return stub<member_func_t<void, mmSlider, int32_t>>(0x4F3510, this, arg1);
    }

    // 0x4F3530 | ?IsReadWrite@mmSlider@@QAEHXZ
    inline int32_t IsReadWrite()
    {
        return stub<member_func_t<int32_t, mmSlider>>(0x4F3530, this);
    }

    // 0x4F3540 | ?SetValue@mmSlider@@QAEMM@Z
    inline float SetValue(float arg1)
    {
        return stub<member_func_t<float, mmSlider, float>>(0x4F3540, this, arg1);
    }

    // 0x4F35A0 | ?GetScreenHeight@mmSlider@@QAEMXZ
    inline float GetScreenHeight()
    {
        return stub<member_func_t<float, mmSlider>>(0x4F35A0, this);
    }

    // 0x4F35C0 | ?FudgeWidth@mmSlider@@QAEMXZ
    inline float FudgeWidth()
    {
        return stub<member_func_t<float, mmSlider>>(0x4F35C0, this);
    }

    // 0x4F35F0 | ?SetPosition@mmSlider@@QAEXMM@Z
    inline void SetPosition(float arg1, float arg2)
    {
        return stub<member_func_t<void, mmSlider, float, float>>(0x4F35F0, this, arg1, arg2);
    }

    // 0x4F3610 | ?GetSliderHotSpots@mmSlider@@QAEXAAM00000@Z
    inline void GetSliderHotSpots(float& arg1, float& arg2, float& arg3, float& arg4, float& arg5, float& arg6)
    {
        return stub<member_func_t<void, mmSlider, float&, float&, float&, float&, float&, float&>>(
            0x4F3610, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4F36C0 | ?UpdatePosition@mmSlider@@QAEXXZ
    inline void UpdatePosition()
    {
        return stub<member_func_t<void, mmSlider>>(0x4F36C0, this);
    }

    // 0x4F36F0 | ?Inc@mmSlider@@QAEMXZ
    inline float Inc()
    {
        return stub<member_func_t<float, mmSlider>>(0x4F36F0, this);
    }

    // 0x4F3710 | ?Dec@mmSlider@@QAEMXZ
    inline float Dec()
    {
        return stub<member_func_t<float, mmSlider>>(0x4F3710, this);
    }

    // 0x4F3730 | ?SetStep@mmSlider@@QAEXM@Z
    inline void SetStep(float arg1)
    {
        return stub<member_func_t<void, mmSlider, float>>(0x4F3730, this, arg1);
    }

    // 0x4F37A0 | ?SetRange@mmSlider@@QAEXMM@Z
    inline void SetRange(float arg1, float arg2)
    {
        return stub<member_func_t<void, mmSlider, float, float>>(0x4F37A0, this, arg1, arg2);
    }

    // 0x4F3250 | ??1mmSlider@@UAE@XZ
    inline ~mmSlider() override
    {
        stub<member_func_t<void, mmSlider>>(0x4F3250, this);
    }

    // 0x4F3820 | ?Cull@mmSlider@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmSlider>>(0x4F3820, this);
    }

    // 0x4F3800 | ?Update@mmSlider@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmSlider>>(0x4F3800, this);
    }
};
