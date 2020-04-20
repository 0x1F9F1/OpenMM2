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
    mmwidget:mexbutton

    0x4EE440 | public: __thiscall UIMexButton::UIMexButton(void) | ??0UIMexButton@@QAE@XZ
    0x4EE4C0 | public: virtual __thiscall UIMexButton::~UIMexButton(void) | ??1UIMexButton@@UAE@XZ
    0x4EE4D0 | public: void __thiscall UIMexButton::Init(struct LocString *,int *,int,float,float,float,float,int,int,class datCallback) | ?Init@UIMexButton@@QAEXPAULocString@@PAHHMMMMHHVdatCallback@@@Z
    0x4EE590 | public: virtual void __thiscall UIMexButton::Update(void) | ?Update@UIMexButton@@UAEXXZ
    0x4EE5E0 | private: virtual void __thiscall UIMexButton::DrawOff(void) | ?DrawOff@UIMexButton@@EAEXXZ
    0x4EE5F0 | private: virtual void __thiscall UIMexButton::DrawOn(void) | ?DrawOn@UIMexButton@@EAEXXZ
    0x4EE620 | public: virtual void __thiscall UIMexButton::DoToggle(void) | ?DoToggle@UIMexButton@@UAEXXZ
    0x4EE640 | public: virtual void __thiscall UIMexButton::Action(union eqEvent) | ?Action@UIMexButton@@UAEXTeqEvent@@@Z
    public: virtual void * __thiscall UIMexButton::`vector deleting destructor'(unsigned int) | ??_EUIMexButton@@UAEPAXI@Z
    0x4EE6C0 | public: virtual void * __thiscall UIMexButton::`scalar deleting destructor'(unsigned int) | ??_GUIMexButton@@UAEPAXI@Z
    0x5B3988 | const UIMexButton::`vftable' | ??_7UIMexButton@@6B@
*/

class UIMexButton : UIToggleButton2
{
public:
    // UIMexButton::`vftable' @ 0x5B3988

    // 0x4EE440 | ??0UIMexButton@@QAE@XZ
    inline UIMexButton()
    {
        stub<member_func_t<void, UIMexButton>>(0x4EE440, this);
    }

    // 0x4EE4D0 | ?Init@UIMexButton@@QAEXPAULocString@@PAHHMMMMHHVdatCallback@@@Z
    inline void Init(struct LocString* arg1, int32_t* arg2, int32_t arg3, float arg4, float arg5, float arg6,
        float arg7, int32_t arg8, int32_t arg9, class datCallback arg10)
    {
        return stub<member_func_t<void, UIMexButton, struct LocString*, int32_t*, int32_t, float, float, float, float,
            int32_t, int32_t, class datCallback>>(
            0x4EE4D0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    }

    // 0x4EE4C0 | ??1UIMexButton@@UAE@XZ
    inline ~UIMexButton() override
    {
        stub<member_func_t<void, UIMexButton>>(0x4EE4C0, this);
    }

    // 0x4EE590 | ?Update@UIMexButton@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, UIMexButton>>(0x4EE590, this);
    }

    // 0x4EE640 | ?Action@UIMexButton@@UAEXTeqEvent@@@Z
    inline void Action(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UIMexButton, union eqEvent>>(0x4EE640, this, arg1);
    }

    // 0x4EE620 | ?DoToggle@UIMexButton@@UAEXXZ
    inline void DoToggle() override
    {
        return stub<member_func_t<void, UIMexButton>>(0x4EE620, this);
    }

    // 0x4EE5E0 | ?DrawOff@UIMexButton@@EAEXXZ
    inline void DrawOff() override
    {
        return stub<member_func_t<void, UIMexButton>>(0x4EE5E0, this);
    }

    // 0x4EE5F0 | ?DrawOn@UIMexButton@@EAEXXZ
    inline void DrawOn() override
    {
        return stub<member_func_t<void, UIMexButton>>(0x4EE5F0, this);
    }
};
