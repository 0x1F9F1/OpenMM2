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
    mmwidget:textdrop

    0x4E7C80 | public: __thiscall UITextDropdown::UITextDropdown(void) | ??0UITextDropdown@@QAE@XZ
    0x4E7D20 | public: virtual __thiscall UITextDropdown::~UITextDropdown(void) | ??1UITextDropdown@@UAE@XZ
    0x4E7DB0 | public: void __thiscall UITextDropdown::Init(struct LocString *,int *,float,float,float,float,class string,int,int,int,class datCallback,char *,class datCallback) | ?Init@UITextDropdown@@QAEXPAULocString@@PAHMMMMVstring@@HHHVdatCallback@@PAD3@Z
    0x4E8180 | public: virtual float __thiscall UITextDropdown::GetScreenHeight(void) | ?GetScreenHeight@UITextDropdown@@UAEMXZ
    0x4E8190 | public: void __thiscall UITextDropdown::SetPos(float,float) | ?SetPos@UITextDropdown@@QAEXMM@Z
    0x4E81A0 | public: void __thiscall UITextDropdown::AssignString(class string) | ?AssignString@UITextDropdown@@QAEXVstring@@@Z
    0x4E8250 | public: void __thiscall UITextDropdown::SetData(int *) | ?SetData@UITextDropdown@@QAEXPAH@Z
    0x4E8280 | public: virtual void __thiscall UITextDropdown::Update(void) | ?Update@UITextDropdown@@UAEXXZ
    0x4E82F0 | public: void __thiscall UITextDropdown::SetText(struct LocString *) | ?SetText@UITextDropdown@@QAEXPAULocString@@@Z
    0x4E8300 | public: virtual void __thiscall UITextDropdown::CaptureAction(union eqEvent) | ?CaptureAction@UITextDropdown@@UAEXTeqEvent@@@Z
    0x4E8570 | int __cdecl inRange(float,float,float) | ?inRange@@YAHMMM@Z
    0x4E85D0 | public: virtual void __thiscall UITextDropdown::Action(union eqEvent) | ?Action@UITextDropdown@@UAEXTeqEvent@@@Z
    0x4E8680 | public: virtual void __thiscall UITextDropdown::Switch(int) | ?Switch@UITextDropdown@@UAEXH@Z
    0x4E8710 | public: void __thiscall UITextDropdown::SetSliderFocus(int) | ?SetSliderFocus@UITextDropdown@@QAEXH@Z
    0x4E87C0 | public: int __thiscall UITextDropdown::GetValue(void) | ?GetValue@UITextDropdown@@QAEHXZ
    0x4E87D0 | public: int __thiscall UITextDropdown::SetValue(int) | ?SetValue@UITextDropdown@@QAEHH@Z
    0x4E8800 | public: void __thiscall UITextDropdown::SetDisabledMask(long) | ?SetDisabledMask@UITextDropdown@@QAEXJ@Z
    0x4E8820 | public: int __thiscall UITextDropdown::AnyEnabled(void) | ?AnyEnabled@UITextDropdown@@QAEHXZ
    0x4E8830 | public: virtual void __thiscall UITextDropdown::Cull(void) | ?Cull@UITextDropdown@@UAEXXZ
    public: virtual void * __thiscall UITextDropdown::`vector deleting destructor'(unsigned int) | ??_EUITextDropdown@@UAEPAXI@Z
    0x4E8890 | public: virtual void * __thiscall UITextDropdown::`scalar deleting destructor'(unsigned int) | ??_GUITextDropdown@@UAEPAXI@Z
    0x4E88C0 | public: static int __cdecl gfxPipeline::GetWidth(void) | ?GetWidth@gfxPipeline@@SAHXZ
    0x5B33E0 | const UITextDropdown::`vftable' | ??_7UITextDropdown@@6B@
*/

// 0x4E8570 | ?inRange@@YAHMMM@Z
inline i32 inRange(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<cdecl_t<i32, f32, f32, f32>>(0x4E8570, arg1, arg2, arg3);
}

class UITextDropdown : uiWidget
{
public:
    // UITextDropdown::`vftable' @ 0x5B33E0

    // 0x4E7C80 | ??0UITextDropdown@@QAE@XZ
    inline UITextDropdown()
    {
        stub<member_func_t<void, UITextDropdown>>(0x4E7C80, this);
    }

    // 0x4E7DB0 | ?Init@UITextDropdown@@QAEXPAULocString@@PAHMMMMVstring@@HHHVdatCallback@@PAD3@Z
    inline void Init(struct LocString* arg1, i32* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, class string arg7,
        i32 arg8, i32 arg9, i32 arg10, class datCallback arg11, char* arg12, class datCallback arg13)
    {
        return stub<member_func_t<void, UITextDropdown, struct LocString*, i32*, f32, f32, f32, f32, class string, i32,
            i32, i32, class datCallback, char*, class datCallback>>(
            0x4E7DB0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }

    // 0x4E8190 | ?SetPos@UITextDropdown@@QAEXMM@Z
    inline void SetPos(f32 arg1, f32 arg2)
    {
        return stub<member_func_t<void, UITextDropdown, f32, f32>>(0x4E8190, this, arg1, arg2);
    }

    // 0x4E81A0 | ?AssignString@UITextDropdown@@QAEXVstring@@@Z
    inline void AssignString(class string arg1)
    {
        return stub<member_func_t<void, UITextDropdown, class string>>(0x4E81A0, this, arg1);
    }

    // 0x4E8250 | ?SetData@UITextDropdown@@QAEXPAH@Z
    inline void SetData(i32* arg1)
    {
        return stub<member_func_t<void, UITextDropdown, i32*>>(0x4E8250, this, arg1);
    }

    // 0x4E82F0 | ?SetText@UITextDropdown@@QAEXPAULocString@@@Z
    inline void SetText(struct LocString* arg1)
    {
        return stub<member_func_t<void, UITextDropdown, struct LocString*>>(0x4E82F0, this, arg1);
    }

    // 0x4E8710 | ?SetSliderFocus@UITextDropdown@@QAEXH@Z
    inline void SetSliderFocus(i32 arg1)
    {
        return stub<member_func_t<void, UITextDropdown, i32>>(0x4E8710, this, arg1);
    }

    // 0x4E87C0 | ?GetValue@UITextDropdown@@QAEHXZ
    inline i32 GetValue()
    {
        return stub<member_func_t<i32, UITextDropdown>>(0x4E87C0, this);
    }

    // 0x4E87D0 | ?SetValue@UITextDropdown@@QAEHH@Z
    inline i32 SetValue(i32 arg1)
    {
        return stub<member_func_t<i32, UITextDropdown, i32>>(0x4E87D0, this, arg1);
    }

    // 0x4E8800 | ?SetDisabledMask@UITextDropdown@@QAEXJ@Z
    inline void SetDisabledMask(i32 arg1)
    {
        return stub<member_func_t<void, UITextDropdown, i32>>(0x4E8800, this, arg1);
    }

    // 0x4E8820 | ?AnyEnabled@UITextDropdown@@QAEHXZ
    inline i32 AnyEnabled()
    {
        return stub<member_func_t<i32, UITextDropdown>>(0x4E8820, this);
    }

    // 0x4E7D20 | ??1UITextDropdown@@UAE@XZ
    inline ~UITextDropdown() override
    {
        stub<member_func_t<void, UITextDropdown>>(0x4E7D20, this);
    }

    // 0x4E8830 | ?Cull@UITextDropdown@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, UITextDropdown>>(0x4E8830, this);
    }

    // 0x4E8280 | ?Update@UITextDropdown@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, UITextDropdown>>(0x4E8280, this);
    }

    // 0x4E85D0 | ?Action@UITextDropdown@@UAEXTeqEvent@@@Z
    inline void Action(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UITextDropdown, union eqEvent>>(0x4E85D0, this, arg1);
    }

    // 0x4E8300 | ?CaptureAction@UITextDropdown@@UAEXTeqEvent@@@Z
    inline void CaptureAction(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UITextDropdown, union eqEvent>>(0x4E8300, this, arg1);
    }

    // 0x4E8680 | ?Switch@UITextDropdown@@UAEXH@Z
    inline void Switch(i32 arg1) override
    {
        return stub<member_func_t<void, UITextDropdown, i32>>(0x4E8680, this, arg1);
    }

    // 0x4E8180 | ?GetScreenHeight@UITextDropdown@@UAEMXZ
    inline f32 GetScreenHeight() override
    {
        return stub<member_func_t<f32, UITextDropdown>>(0x4E8180, this);
    }
};
