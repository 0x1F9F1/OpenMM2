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
    mmSlider()
    {
        stub<member_func_t<void, mmSlider>>(0x4F31C0, this);
    }

    // 0x4F3310 | ?Init@mmSlider@@QAEXPADPAVuiWidget@@MMMMHMMHH@Z
    void Init(char* arg1, class uiWidget* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, i32 arg7, f32 arg8, f32 arg9,
        i32 arg10, i32 arg11)
    {
        return stub<member_func_t<void, mmSlider, char*, class uiWidget*, f32, f32, f32, f32, i32, f32, f32, i32, i32>>(
            0x4F3310, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }

    // 0x4F3370 | ?LoadBitmap@mmSlider@@QAEXPAD@Z
    void LoadBitmap(char* arg1)
    {
        return stub<member_func_t<void, mmSlider, char*>>(0x4F3370, this, arg1);
    }

    // 0x4F3510 | ?SetReadWrite@mmSlider@@QAEXH@Z
    void SetReadWrite(i32 arg1)
    {
        return stub<member_func_t<void, mmSlider, i32>>(0x4F3510, this, arg1);
    }

    // 0x4F3530 | ?IsReadWrite@mmSlider@@QAEHXZ
    i32 IsReadWrite()
    {
        return stub<member_func_t<i32, mmSlider>>(0x4F3530, this);
    }

    // 0x4F3540 | ?SetValue@mmSlider@@QAEMM@Z
    f32 SetValue(f32 arg1)
    {
        return stub<member_func_t<f32, mmSlider, f32>>(0x4F3540, this, arg1);
    }

    // 0x4F35A0 | ?GetScreenHeight@mmSlider@@QAEMXZ
    f32 GetScreenHeight()
    {
        return stub<member_func_t<f32, mmSlider>>(0x4F35A0, this);
    }

    // 0x4F35C0 | ?FudgeWidth@mmSlider@@QAEMXZ
    f32 FudgeWidth()
    {
        return stub<member_func_t<f32, mmSlider>>(0x4F35C0, this);
    }

    // 0x4F35F0 | ?SetPosition@mmSlider@@QAEXMM@Z
    void SetPosition(f32 arg1, f32 arg2)
    {
        return stub<member_func_t<void, mmSlider, f32, f32>>(0x4F35F0, this, arg1, arg2);
    }

    // 0x4F3610 | ?GetSliderHotSpots@mmSlider@@QAEXAAM00000@Z
    void GetSliderHotSpots(f32& arg1, f32& arg2, f32& arg3, f32& arg4, f32& arg5, f32& arg6)
    {
        return stub<member_func_t<void, mmSlider, f32&, f32&, f32&, f32&, f32&, f32&>>(
            0x4F3610, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x4F36C0 | ?UpdatePosition@mmSlider@@QAEXXZ
    void UpdatePosition()
    {
        return stub<member_func_t<void, mmSlider>>(0x4F36C0, this);
    }

    // 0x4F36F0 | ?Inc@mmSlider@@QAEMXZ
    f32 Inc()
    {
        return stub<member_func_t<f32, mmSlider>>(0x4F36F0, this);
    }

    // 0x4F3710 | ?Dec@mmSlider@@QAEMXZ
    f32 Dec()
    {
        return stub<member_func_t<f32, mmSlider>>(0x4F3710, this);
    }

    // 0x4F3730 | ?SetStep@mmSlider@@QAEXM@Z
    void SetStep(f32 arg1)
    {
        return stub<member_func_t<void, mmSlider, f32>>(0x4F3730, this, arg1);
    }

    // 0x4F37A0 | ?SetRange@mmSlider@@QAEXMM@Z
    void SetRange(f32 arg1, f32 arg2)
    {
        return stub<member_func_t<void, mmSlider, f32, f32>>(0x4F37A0, this, arg1, arg2);
    }

    // 0x4F3250 | ??1mmSlider@@UAE@XZ
    ~mmSlider() override
    {
        stub<member_func_t<void, mmSlider>>(0x4F3250, this);
    }

    // 0x4F3820 | ?Cull@mmSlider@@UAEXXZ
    void Cull() override
    {
        return stub<member_func_t<void, mmSlider>>(0x4F3820, this);
    }

    // 0x4F3800 | ?Update@mmSlider@@UAEXXZ
    void Update() override
    {
        return stub<member_func_t<void, mmSlider>>(0x4F3800, this);
    }
};
