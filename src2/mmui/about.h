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
    mmui:about

    0x505850 | void __cdecl GetMidtownRegString(char *,int,char *,char *) | ?GetMidtownRegString@@YAXPADH00@Z
    0x5058D0 | public: __thiscall AboutMenu::AboutMenu(int) | ??0AboutMenu@@QAE@H@Z
    0x505AB0 | public: virtual __thiscall AboutMenu::~AboutMenu(void) | ??1AboutMenu@@UAE@XZ
    0x505AC0 | public: virtual void __thiscall AboutMenu::PreSetup(void) | ?PreSetup@AboutMenu@@UAEXXZ
    0x505AE0 | public: virtual void __thiscall AboutMenu::Update(void) | ?Update@AboutMenu@@UAEXXZ
    0x505B50 | public: virtual void __thiscall AboutMenu::Cull(void) | ?Cull@AboutMenu@@UAEXXZ
    public: virtual void * __thiscall AboutMenu::`vector deleting destructor'(unsigned int) | ??_EAboutMenu@@UAEPAXI@Z
    0x505C00 | public: virtual void * __thiscall AboutMenu::`scalar deleting destructor'(unsigned int) | ??_GAboutMenu@@UAEPAXI@Z
    0x5B4584 | const AboutMenu::`vftable' | ??_7AboutMenu@@6B@
*/

// 0x505850 | ?GetMidtownRegString@@YAXPADH00@Z
inline void GetMidtownRegString(char* arg1, i32 arg2, char* arg3, char* arg4)
{
    return stub<cdecl_t<void, char*, i32, char*, char*>>(0x505850, arg1, arg2, arg3, arg4);
}

struct AboutMenu : UIMenu
{
public:
    // AboutMenu::`vftable' @ 0x5B4584

    // 0x5058D0 | ??0AboutMenu@@QAE@H@Z
    inline AboutMenu(i32 arg1)
    {
        stub<member_func_t<void, AboutMenu, i32>>(0x5058D0, this, arg1);
    }

    // 0x505AB0 | ??1AboutMenu@@UAE@XZ
    inline ~AboutMenu() override
    {
        stub<member_func_t<void, AboutMenu>>(0x505AB0, this);
    }

    // 0x505B50 | ?Cull@AboutMenu@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, AboutMenu>>(0x505B50, this);
    }

    // 0x505AE0 | ?Update@AboutMenu@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, AboutMenu>>(0x505AE0, this);
    }

    // 0x505AC0 | ?PreSetup@AboutMenu@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, AboutMenu>>(0x505AC0, this);
    }
};
