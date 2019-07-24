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
    mmui:options

    0x502950 | public: __thiscall OptionsMenu::OptionsMenu(int) | ??0OptionsMenu@@QAE@H@Z
    0x502C70 | public: virtual __thiscall OptionsMenu::~OptionsMenu(void) | ??1OptionsMenu@@UAE@XZ
    0x502C80 | public: virtual void __thiscall OptionsMenu::PreSetup(void) | ?PreSetup@OptionsMenu@@UAEXXZ
    0x502CC0 | public: virtual void __thiscall OptionsMenu::PostSetup(void) | ?PostSetup@OptionsMenu@@UAEXXZ
    0x502CE0 | public: void __thiscall OptionsMenu::FocusDescription(int,int) | ?FocusDescription@OptionsMenu@@QAEXHH@Z
    0x502D10 | public: virtual void * __thiscall OptionsMenu::`scalar deleting destructor'(unsigned int) | ??_GOptionsMenu@@UAEPAXI@Z
    public: virtual void * __thiscall OptionsMenu::`vector deleting destructor'(unsigned int) | ??_EOptionsMenu@@UAEPAXI@Z
    0x5B434C | const OptionsMenu::`vftable' | ??_7OptionsMenu@@6B@
*/

struct OptionsMenu : UIMenu
{
public:
    // OptionsMenu::`vftable' @ 0x5B434C

    // 0x502950 | ??0OptionsMenu@@QAE@H@Z
    inline OptionsMenu(int32_t arg1)
    {
        stub<member_func_t<void, OptionsMenu, int32_t>>(0x502950, this, arg1);
    }

    // 0x502CE0 | ?FocusDescription@OptionsMenu@@QAEXHH@Z
    inline void FocusDescription(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, OptionsMenu, int32_t, int32_t>>(0x502CE0, this, arg1, arg2);
    }

    // 0x502C70 | ??1OptionsMenu@@UAE@XZ
    inline ~OptionsMenu() override
    {
        stub<member_func_t<void, OptionsMenu>>(0x502C70, this);
    }

    // 0x502C80 | ?PreSetup@OptionsMenu@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, OptionsMenu>>(0x502C80, this);
    }

    // 0x502CC0 | ?PostSetup@OptionsMenu@@UAEXXZ
    inline void PostSetup() override
    {
        return stub<member_func_t<void, OptionsMenu>>(0x502CC0, this);
    }
};
