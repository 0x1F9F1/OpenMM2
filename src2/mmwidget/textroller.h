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
    inline UITextRoller()
    {
        stub<member_func_t<void, UITextRoller>>(0x4E88D0, this);
    }

    // 0x4E8A10 | ?Init@UITextRoller@@QAEXPAULocString@@PAHMMMMVstring@@HHHHVdatCallback@@PAVUIMenu@@@Z
    inline void Init(struct LocString* arg1, int32_t* arg2, float arg3, float arg4, float arg5, float arg6,
        class string arg7, int32_t arg8, int32_t arg9, int32_t arg10, int32_t arg11, class datCallback arg12,
        class UIMenu* arg13)
    {
        return stub<member_func_t<void, UITextRoller, struct LocString*, int32_t*, float, float, float, float,
            class string, int32_t, int32_t, int32_t, int32_t, class datCallback, class UIMenu*>>(
            0x4E8A10, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }

    // 0x4E9020 | ?EvalMouseXY@UITextRoller@@QAEXMM@Z
    inline void EvalMouseXY(float arg1, float arg2)
    {
        return stub<member_func_t<void, UITextRoller, float, float>>(0x4E9020, this, arg1, arg2);
    }

    // 0x4E9100 | ?SetValue@UITextRoller@@QAEHH@Z
    inline int32_t SetValue(int32_t arg1)
    {
        return stub<member_func_t<int32_t, UITextRoller, int32_t>>(0x4E9100, this, arg1);
    }

    // 0x4E91A0 | ?SetString@UITextRoller@@QAEXVstring@@@Z
    inline void SetString(class string arg1)
    {
        return stub<member_func_t<void, UITextRoller, class string>>(0x4E91A0, this, arg1);
    }

    // 0x4E9270 | ?SetText@UITextRoller@@QAEXXZ
    inline void SetText()
    {
        return stub<member_func_t<void, UITextRoller>>(0x4E9270, this);
    }

    // 0x4E92E0 | ?Inc@UITextRoller@@QAEHXZ
    inline int32_t Inc()
    {
        return stub<member_func_t<int32_t, UITextRoller>>(0x4E92E0, this);
    }

    // 0x4E9300 | ?Dec@UITextRoller@@QAEHXZ
    inline int32_t Dec()
    {
        return stub<member_func_t<int32_t, UITextRoller>>(0x4E9300, this);
    }

    // 0x4E89A0 | ??1UITextRoller@@UAE@XZ
    inline ~UITextRoller() override
    {
        stub<member_func_t<void, UITextRoller>>(0x4E89A0, this);
    }

    // 0x4E9320 | ?Cull@UITextRoller@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, UITextRoller>>(0x4E9320, this);
    }

    // 0x4E8EA0 | ?Update@UITextRoller@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, UITextRoller>>(0x4E8EA0, this);
    }

    // 0x4E8F30 | ?Action@UITextRoller@@UAEXTeqEvent@@@Z
    inline void Action(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UITextRoller, union eqEvent>>(0x4E8F30, this, arg1);
    }

    // 0x4E8F00 | ?Switch@UITextRoller@@UAEXH@Z
    inline void Switch(int32_t arg1) override
    {
        return stub<member_func_t<void, UITextRoller, int32_t>>(0x4E8F00, this, arg1);
    }
};
