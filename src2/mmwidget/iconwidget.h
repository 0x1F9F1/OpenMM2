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
    mmwidget:iconwidget

    0x4EDA70 | public: __thiscall UIIconW::UIIconW(void) | ??0UIIconW@@QAE@XZ
    0x4EDB30 | public: virtual __thiscall UIIconW::~UIIconW(void) | ??1UIIconW@@UAE@XZ
    0x4EDBA0 | public: void __thiscall UIIconW::Init(struct LocString *,char *,float,float,float,float,class datCallback) | ?Init@UIIconW@@QAEXPAULocString@@PADMMMMVdatCallback@@@Z
    0x4EDC90 | public: virtual void __thiscall UIIconW::Action(union eqEvent) | ?Action@UIIconW@@UAEXTeqEvent@@@Z
    0x4EDCF0 | public: virtual void __thiscall UIIconW::Update(void) | ?Update@UIIconW@@UAEXXZ
    0x4EDD70 | public: virtual void __thiscall UIIconW::Switch(int) | ?Switch@UIIconW@@UAEXH@Z
    public: virtual void * __thiscall UIIconW::`vector deleting destructor'(unsigned int) | ??_EUIIconW@@UAEPAXI@Z
    0x4EDDE0 | public: virtual void * __thiscall UIIconW::`scalar deleting destructor'(unsigned int) | ??_GUIIconW@@UAEPAXI@Z
    0x5B3840 | const UIIconW::`vftable' | ??_7UIIconW@@6B@
*/

class UIIconW : uiWidget
{
public:
    // UIIconW::`vftable' @ 0x5B3840

    // 0x4EDA70 | ??0UIIconW@@QAE@XZ
    inline UIIconW()
    {
        stub<member_func_t<void, UIIconW>>(0x4EDA70, this);
    }

    // 0x4EDBA0 | ?Init@UIIconW@@QAEXPAULocString@@PADMMMMVdatCallback@@@Z
    inline void Init(
        struct LocString* arg1, char* arg2, float arg3, float arg4, float arg5, float arg6, class datCallback arg7)
    {
        return stub<
            member_func_t<void, UIIconW, struct LocString*, char*, float, float, float, float, class datCallback>>(
            0x4EDBA0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x4EDB30 | ??1UIIconW@@UAE@XZ
    inline ~UIIconW() override
    {
        stub<member_func_t<void, UIIconW>>(0x4EDB30, this);
    }

    // 0x4EDCF0 | ?Update@UIIconW@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, UIIconW>>(0x4EDCF0, this);
    }

    // 0x4EDC90 | ?Action@UIIconW@@UAEXTeqEvent@@@Z
    inline void Action(union eqEvent arg1) override
    {
        return stub<member_func_t<void, UIIconW, union eqEvent>>(0x4EDC90, this, arg1);
    }

    // 0x4EDD70 | ?Switch@UIIconW@@UAEXH@Z
    inline void Switch(int32_t arg1) override
    {
        return stub<member_func_t<void, UIIconW, int32_t>>(0x4EDD70, this, arg1);
    }
};
