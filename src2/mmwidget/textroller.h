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
    mmwidget:textroller

    0x4E88D0 | public: __thiscall UITextRoller::UITextRoller(void) | ??0UITextRoller@@QAE@XZ
    0x4E89A0 | public: virtual __thiscall UITextRoller::~UITextRoller(void) | ??1UITextRoller@@UAE@XZ
    0x4E8A10 | public: void __thiscall UITextRoller::Init(struct LocString *,int *,float,float,float,float,class string,int,int,int,int,class datCallback,class UIMenu *) | ?Init@UITextRoller@@QAEXPAULocString@@PAHMMMMVstring@@HHHHVdatCallback@@PAVUIMenu@@@Z
    0x4E8EA0 | public: virtual void __thiscall UITextRoller::Update(void) | ?Update@UITextRoller@@UAEXXZ
    0x4E8F00 | public: virtual void __thiscall UITextRoller::Switch(int) | ?Switch@UITextRoller@@UAEXH@Z
    0x4E8F30 | public: virtual void __thiscall UITextRoller::Action(union eqEvent) | ?Action@UITextRoller@@UAEXTeqEvent@@@Z
    0x4E9020 | public: void __thiscall UITextRoller::EvalMouseXY(float,float) | ?EvalMouseXY@UITextRoller@@QAEXMM@Z
    0x4E9100 | public: int __thiscall UITextRoller::SetValue(int) | ?SetValue@UITextRoller@@QAEHH@Z
    0x4E91A0 | public: void __thiscall UITextRoller::SetString(class string) | ?SetString@UITextRoller@@QAEXVstring@@@Z
    0x4E9270 | public: void __thiscall UITextRoller::SetText(void) | ?SetText@UITextRoller@@QAEXXZ
    0x4E92E0 | public: int __thiscall UITextRoller::Inc(void) | ?Inc@UITextRoller@@QAEHXZ
    0x4E9300 | public: int __thiscall UITextRoller::Dec(void) | ?Dec@UITextRoller@@QAEHXZ
    0x4E9320 | public: virtual void __thiscall UITextRoller::Cull(void) | ?Cull@UITextRoller@@UAEXXZ
    public: virtual void * __thiscall UITextRoller::`vector deleting destructor'(unsigned int) | ??_EUITextRoller@@UAEPAXI@Z
    0x4E93C0 | public: virtual void * __thiscall UITextRoller::`scalar deleting destructor'(unsigned int) | ??_GUITextRoller@@UAEPAXI@Z
    0x5B344C | const UITextRoller::`vftable' | ??_7UITextRoller@@6B@
*/

class UITextRoller : uiWidget
{
public:
    // UITextRoller::`vftable' @ 0x5B344C

    // 0x4E88D0 | ??0UITextRoller@@QAE@XZ
    UITextRoller()
    {
        stub<member_func_t<void, UITextRoller>>(0x4E88D0, this);
    }

    // 0x4E8A10 | ?Init@UITextRoller@@QAEXPAULocString@@PAHMMMMVstring@@HHHHVdatCallback@@PAVUIMenu@@@Z
    void Init(struct LocString* arg1, i32* arg2, f32 arg3, f32 arg4, f32 arg5, f32 arg6, class string arg7, i32 arg8,
        i32 arg9, i32 arg10, i32 arg11, class datCallback arg12, class UIMenu* arg13)
    {
        return stub<member_func_t<void, UITextRoller, struct LocString*, i32*, f32, f32, f32, f32, class string, i32,
            i32, i32, i32, class datCallback, class UIMenu*>>(
            0x4E8A10, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }

    // 0x4E9020 | ?EvalMouseXY@UITextRoller@@QAEXMM@Z
    void EvalMouseXY(f32 arg1, f32 arg2)
    {
        return stub<member_func_t<void, UITextRoller, f32, f32>>(0x4E9020, this, arg1, arg2);
    }

    // 0x4E9100 | ?SetValue@UITextRoller@@QAEHH@Z
    i32 SetValue(i32 arg1)
    {
        return stub<member_func_t<i32, UITextRoller, i32>>(0x4E9100, this, arg1);
    }

    // 0x4E91A0 | ?SetString@UITextRoller@@QAEXVstring@@@Z
    void SetString(class string arg1)
    {
        return stub<member_func_t<void, UITextRoller, class string>>(0x4E91A0, this, arg1);
    }

    // 0x4E9270 | ?SetText@UITextRoller@@QAEXXZ
    void SetText()
    {
        return stub<member_func_t<void, UITextRoller>>(0x4E9270, this);
    }

    // 0x4E92E0 | ?Inc@UITextRoller@@QAEHXZ
    i32 Inc()
    {
        return stub<member_func_t<i32, UITextRoller>>(0x4E92E0, this);
    }

    // 0x4E9300 | ?Dec@UITextRoller@@QAEHXZ
    i32 Dec()
    {
        return stub<member_func_t<i32, UITextRoller>>(0x4E9300, this);
    }

    // 0x4E89A0 | ??1UITextRoller@@UAE@XZ
    ~UITextRoller() override
    {
        stub<member_func_t<void, UITextRoller>>(0x4E89A0, this);
    }

    // 0x4E9320 | ?Cull@UITextRoller@@UAEXXZ
    void Cull() override
    {
        return stub<member_func_t<void, UITextRoller>>(0x4E9320, this);
    }

    // 0x4E8EA0 | ?Update@UITextRoller@@UAEXXZ
    void Update() override
    {
        return stub<member_func_t<void, UITextRoller>>(0x4E8EA0, this);
    }

    // 0x4E8F30 | ?Action@UITextRoller@@UAEXTeqEvent@@@Z
    void Action(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UITextRoller, union eqEvent>>(0x4E8F30, this, arg1);
    }

    // 0x4E8F00 | ?Switch@UITextRoller@@UAEXH@Z
    void Switch(i32 arg1) override
    {
        return stub<member_func_t<void, UITextRoller, i32>>(0x4E8F00, this, arg1);
    }
};
