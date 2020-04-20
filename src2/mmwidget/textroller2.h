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
    mmwidget:textroller2

    0x4E93F0 | public: __thiscall UITextRoller2::UITextRoller2(void) | ??0UITextRoller2@@QAE@XZ
    0x4E94A0 | public: virtual __thiscall UITextRoller2::~UITextRoller2(void) | ??1UITextRoller2@@UAE@XZ
    0x4E9510 | public: void __thiscall UITextRoller2::Init(struct LocString *,int *,float,float,float,float,class string,int,int,int,int,class datCallback,class UIMenu *) | ?Init@UITextRoller2@@QAEXPAULocString@@PAHMMMMVstring@@HHHHVdatCallback@@PAVUIMenu@@@Z
    0x4E9BA0 | public: virtual void __thiscall UITextRoller2::Update(void) | ?Update@UITextRoller2@@UAEXXZ
    0x4E9C00 | public: virtual void __thiscall UITextRoller2::Switch(int) | ?Switch@UITextRoller2@@UAEXH@Z
    0x4E9CA0 | public: virtual void __thiscall UITextRoller2::Action(union eqEvent) | ?Action@UITextRoller2@@UAEXTeqEvent@@@Z
    0x4E9D90 | public: void __thiscall UITextRoller2::EvalMouseXY(float,float) | ?EvalMouseXY@UITextRoller2@@QAEXMM@Z
    0x4E9E60 | public: int __thiscall UITextRoller2::SetValue(int) | ?SetValue@UITextRoller2@@QAEHH@Z
    0x4E9F10 | public: void __thiscall UITextRoller2::SetString(class string) | ?SetString@UITextRoller2@@QAEXVstring@@@Z
    0x4E9FE0 | public: void __thiscall UITextRoller2::SetData(int *) | ?SetData@UITextRoller2@@QAEXPAH@Z
    0x4EA000 | public: void __thiscall UITextRoller2::SetText(void) | ?SetText@UITextRoller2@@QAEXXZ
    0x4EA070 | public: int __thiscall UITextRoller2::Inc(void) | ?Inc@UITextRoller2@@QAEHXZ
    0x4EA0A0 | public: int __thiscall UITextRoller2::Dec(void) | ?Dec@UITextRoller2@@QAEHXZ
    0x4EA0D0 | public: virtual void __thiscall UITextRoller2::Cull(void) | ?Cull@UITextRoller2@@UAEXXZ
    public: virtual void * __thiscall UITextRoller2::`vector deleting destructor'(unsigned int) | ??_EUITextRoller2@@UAEPAXI@Z
    0x4EA1B0 | public: virtual void * __thiscall UITextRoller2::`scalar deleting destructor'(unsigned int) | ??_GUITextRoller2@@UAEPAXI@Z
    0x5B34B4 | const UITextRoller2::`vftable' | ??_7UITextRoller2@@6B@
*/

class UITextRoller2 : uiWidget
{
public:
    // UITextRoller2::`vftable' @ 0x5B34B4

    // 0x4E93F0 | ??0UITextRoller2@@QAE@XZ
    inline UITextRoller2()
    {
        stub<member_func_t<void, UITextRoller2>>(0x4E93F0, this);
    }

    // 0x4E9510 | ?Init@UITextRoller2@@QAEXPAULocString@@PAHMMMMVstring@@HHHHVdatCallback@@PAVUIMenu@@@Z
    inline void Init(struct LocString* arg1, int32_t* arg2, float arg3, float arg4, float arg5, float arg6,
        class string arg7, int32_t arg8, int32_t arg9, int32_t arg10, int32_t arg11, class datCallback arg12,
        class UIMenu* arg13)
    {
        return stub<member_func_t<void, UITextRoller2, struct LocString*, int32_t*, float, float, float, float,
            class string, int32_t, int32_t, int32_t, int32_t, class datCallback, class UIMenu*>>(
            0x4E9510, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }

    // 0x4E9D90 | ?EvalMouseXY@UITextRoller2@@QAEXMM@Z
    inline void EvalMouseXY(float arg1, float arg2)
    {
        return stub<member_func_t<void, UITextRoller2, float, float>>(0x4E9D90, this, arg1, arg2);
    }

    // 0x4E9E60 | ?SetValue@UITextRoller2@@QAEHH@Z
    inline int32_t SetValue(int32_t arg1)
    {
        return stub<member_func_t<int32_t, UITextRoller2, int32_t>>(0x4E9E60, this, arg1);
    }

    // 0x4E9F10 | ?SetString@UITextRoller2@@QAEXVstring@@@Z
    inline void SetString(class string arg1)
    {
        return stub<member_func_t<void, UITextRoller2, class string>>(0x4E9F10, this, arg1);
    }

    // 0x4E9FE0 | ?SetData@UITextRoller2@@QAEXPAH@Z
    inline void SetData(int32_t* arg1)
    {
        return stub<member_func_t<void, UITextRoller2, int32_t*>>(0x4E9FE0, this, arg1);
    }

    // 0x4EA000 | ?SetText@UITextRoller2@@QAEXXZ
    inline void SetText()
    {
        return stub<member_func_t<void, UITextRoller2>>(0x4EA000, this);
    }

    // 0x4EA070 | ?Inc@UITextRoller2@@QAEHXZ
    inline int32_t Inc()
    {
        return stub<member_func_t<int32_t, UITextRoller2>>(0x4EA070, this);
    }

    // 0x4EA0A0 | ?Dec@UITextRoller2@@QAEHXZ
    inline int32_t Dec()
    {
        return stub<member_func_t<int32_t, UITextRoller2>>(0x4EA0A0, this);
    }

    // 0x4E94A0 | ??1UITextRoller2@@UAE@XZ
    inline ~UITextRoller2() override
    {
        stub<member_func_t<void, UITextRoller2>>(0x4E94A0, this);
    }

    // 0x4EA0D0 | ?Cull@UITextRoller2@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, UITextRoller2>>(0x4EA0D0, this);
    }

    // 0x4E9BA0 | ?Update@UITextRoller2@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, UITextRoller2>>(0x4E9BA0, this);
    }

    // 0x4E9CA0 | ?Action@UITextRoller2@@UAEXTeqEvent@@@Z
    inline void Action(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UITextRoller2, union eqEvent>>(0x4E9CA0, this, arg1);
    }

    // 0x4E9C00 | ?Switch@UITextRoller2@@UAEXH@Z
    inline void Switch(int32_t arg1) override
    {
        return stub<member_func_t<void, UITextRoller2, int32_t>>(0x4E9C00, this, arg1);
    }
};
