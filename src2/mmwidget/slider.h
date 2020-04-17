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
    mmwidget:slider

    0x4EC520 | public: __thiscall UISlider::UISlider(void) | ??0UISlider@@QAE@XZ
    0x4EC5C0 | public: virtual __thiscall UISlider::~UISlider(void) | ??1UISlider@@UAE@XZ
    0x4EC630 | public: void __thiscall UISlider::Init(struct LocString *,float *,float,float,float,float,float,float,int,int,int,int,class datCallback,class UIMenu *,class datCallback) | ?Init@UISlider@@QAEXPAULocString@@PAMMMMMMMHHHHVdatCallback@@PAVUIMenu@@2@Z
    0x4EC860 | public: virtual void __thiscall UISlider::SetPosition(float,float) | ?SetPosition@UISlider@@UAEXMM@Z
    0x4EC990 | public: void __thiscall UISlider::SetText(struct LocString *) | ?SetText@UISlider@@QAEXPAULocString@@@Z
    0x4EC9A0 | public: virtual void __thiscall UISlider::Update(void) | ?Update@UISlider@@UAEXXZ
    0x4ECA00 | public: virtual void __thiscall UISlider::Action(union eqEvent) | ?Action@UISlider@@UAEXTeqEvent@@@Z
    0x4ECAC0 | public: virtual void __thiscall UISlider::Switch(int) | ?Switch@UISlider@@UAEXH@Z
    0x4ECB40 | public: int __thiscall UISlider::TestHit(float,float) | ?TestHit@UISlider@@QAEHMM@Z
    0x4ECB50 | public: void __thiscall UISlider::SetReadWrite(int) | ?SetReadWrite@UISlider@@QAEXH@Z
    0x4ECB90 | public: int __thiscall UISlider::IsReadWrite(void) | ?IsReadWrite@UISlider@@QAEHXZ
    0x4ECBA0 | public: float __thiscall UISlider::GetValue(void) | ?GetValue@UISlider@@QAEMXZ
    0x4ECBB0 | public: float __thiscall UISlider::SetValue(float) | ?SetValue@UISlider@@QAEMM@Z
    0x4ECBE0 | public: void __thiscall UISlider::SetMouseParams(float) | ?SetMouseParams@UISlider@@QAEXM@Z
    0x4ECC30 | public: void __thiscall UISlider::EvalMouseXY(float,float) | ?EvalMouseXY@UISlider@@QAEXMM@Z
    0x4ECD40 | public: void __thiscall UISlider::SetData(float) | ?SetData@UISlider@@QAEXM@Z
    0x4ECD60 | public: float __thiscall UISlider::GetFudgeWidth(void) | ?GetFudgeWidth@UISlider@@QAEMXZ
    0x4ECD70 | public: virtual void * __thiscall UISlider::`scalar deleting destructor'(unsigned int) | ??_GUISlider@@UAEPAXI@Z
    public: virtual void * __thiscall UISlider::`vector deleting destructor'(unsigned int) | ??_EUISlider@@UAEPAXI@Z
    0x4ECDA0 | public: virtual float __thiscall UISlider::GetScreenHeight(void) | ?GetScreenHeight@UISlider@@UAEMXZ
    0x5B364C | const UISlider::`vftable' | ??_7UISlider@@6B@
*/

class UISlider : uiWidget
{
public:
    // UISlider::`vftable' @ 0x5B364C

    // 0x4EC520 | ??0UISlider@@QAE@XZ
    UISlider()
    {
        stub<member_func_t<void, UISlider>>(0x4EC520, this);
    }

    // 0x4EC630 | ?Init@UISlider@@QAEXPAULocString@@PAMMMMMMMHHHHVdatCallback@@PAVUIMenu@@2@Z
    void Init(struct LocString* arg1, f32* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, f32 arg7, f32 arg8, i32 arg9,
        i32 arg10, i32 arg11, i32 arg12, class datCallback arg13, class UIMenu* arg14, class datCallback arg15)
    {
        return stub<member_func_t<void, UISlider, struct LocString*, f32*, f32, f32, f32, f32, f32, f32, i32, i32, i32,
            i32, class datCallback, class UIMenu*, class datCallback>>(0x4EC630, this, arg1, arg2, arg3, arg4, arg5,
            arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
    }

    // 0x4EC990 | ?SetText@UISlider@@QAEXPAULocString@@@Z
    void SetText(struct LocString* arg1)
    {
        return stub<member_func_t<void, UISlider, struct LocString*>>(0x4EC990, this, arg1);
    }

    // 0x4ECB40 | ?TestHit@UISlider@@QAEHMM@Z
    i32 TestHit(f32 arg1, f32 arg2)
    {
        return stub<member_func_t<i32, UISlider, f32, f32>>(0x4ECB40, this, arg1, arg2);
    }

    // 0x4ECB50 | ?SetReadWrite@UISlider@@QAEXH@Z
    void SetReadWrite(i32 arg1)
    {
        return stub<member_func_t<void, UISlider, i32>>(0x4ECB50, this, arg1);
    }

    // 0x4ECB90 | ?IsReadWrite@UISlider@@QAEHXZ
    i32 IsReadWrite()
    {
        return stub<member_func_t<i32, UISlider>>(0x4ECB90, this);
    }

    // 0x4ECBA0 | ?GetValue@UISlider@@QAEMXZ
    f32 GetValue()
    {
        return stub<member_func_t<f32, UISlider>>(0x4ECBA0, this);
    }

    // 0x4ECBB0 | ?SetValue@UISlider@@QAEMM@Z
    f32 SetValue(f32 arg1)
    {
        return stub<member_func_t<f32, UISlider, f32>>(0x4ECBB0, this, arg1);
    }

    // 0x4ECBE0 | ?SetMouseParams@UISlider@@QAEXM@Z
    void SetMouseParams(f32 arg1)
    {
        return stub<member_func_t<void, UISlider, f32>>(0x4ECBE0, this, arg1);
    }

    // 0x4ECC30 | ?EvalMouseXY@UISlider@@QAEXMM@Z
    void EvalMouseXY(f32 arg1, f32 arg2)
    {
        return stub<member_func_t<void, UISlider, f32, f32>>(0x4ECC30, this, arg1, arg2);
    }

    // 0x4ECD40 | ?SetData@UISlider@@QAEXM@Z
    void SetData(f32 arg1)
    {
        return stub<member_func_t<void, UISlider, f32>>(0x4ECD40, this, arg1);
    }

    // 0x4ECD60 | ?GetFudgeWidth@UISlider@@QAEMXZ
    f32 GetFudgeWidth()
    {
        return stub<member_func_t<f32, UISlider>>(0x4ECD60, this);
    }

    // 0x4EC5C0 | ??1UISlider@@UAE@XZ
    ~UISlider() override
    {
        stub<member_func_t<void, UISlider>>(0x4EC5C0, this);
    }

    // 0x4EC9A0 | ?Update@UISlider@@UAEXXZ
    void Update() override
    {
        return stub<member_func_t<void, UISlider>>(0x4EC9A0, this);
    }

    // 0x4ECA00 | ?Action@UISlider@@UAEXTeqEvent@@@Z
    void Action(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UISlider, union eqEvent>>(0x4ECA00, this, arg1);
    }

    // 0x4ECAC0 | ?Switch@UISlider@@UAEXH@Z
    void Switch(i32 arg1) override
    {
        return stub<member_func_t<void, UISlider, i32>>(0x4ECAC0, this, arg1);
    }

    // 0x4EC860 | ?SetPosition@UISlider@@UAEXMM@Z
    void SetPosition(f32 arg1, f32 arg2) override
    {
        return stub<member_func_t<void, UISlider, f32, f32>>(0x4EC860, this, arg1, arg2);
    }

    // 0x4ECDA0 | ?GetScreenHeight@UISlider@@UAEMXZ
    f32 GetScreenHeight() override
    {
        return stub<member_func_t<f32, UISlider>>(0x4ECDA0, this);
    }
};
