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
    mmui:main

    0x505C30 | public: __thiscall MainMenu::MainMenu(int) | ??0MainMenu@@QAE@H@Z
    0x506020 | public: virtual __thiscall MainMenu::~MainMenu(void) | ??1MainMenu@@UAE@XZ
    0x5060A0 | public: virtual void __thiscall MainMenu::PreSetup(void) | ?PreSetup@MainMenu@@UAEXXZ
    0x5060B0 | public: void __thiscall MainMenu::EnableReplay(int) | ?EnableReplay@MainMenu@@QAEXH@Z
    0x5060D0 | public: int __thiscall MainMenu::IsReplayReadOnly(void) | ?IsReplayReadOnly@MainMenu@@QAEHXZ
    0x5060E0 | public: void __thiscall MainMenu::InitDriver(void) | ?InitDriver@MainMenu@@QAEXXZ
    0x506560 | public: void __thiscall MainMenu::RemovePlayer(char *) | ?RemovePlayer@MainMenu@@QAEXPAD@Z
    0x5067C0 | public: void __thiscall MainMenu::SetPlayerPick(int) | ?SetPlayerPick@MainMenu@@QAEXH@Z
    0x5067D0 | public: void __thiscall MainMenu::DecPlayer(void) | ?DecPlayer@MainMenu@@QAEXXZ
    0x506800 | public: void __thiscall MainMenu::IncPlayer(void) | ?IncPlayer@MainMenu@@QAEXXZ
    0x506830 | public: void __thiscall MainMenu::RemoveAllPlayers(void) | ?RemoveAllPlayers@MainMenu@@QAEXXZ
    0x506840 | public: void __thiscall MainMenu::AddPlayer(char *) | ?AddPlayer@MainMenu@@QAEXPAD@Z
    0x506960 | public: void __thiscall MainMenu::TDPickCB(void) | ?TDPickCB@MainMenu@@QAEXXZ
    0x506970 | public: void __thiscall MainMenu::DeleteCB(void) | ?DeleteCB@MainMenu@@QAEXXZ
    0x506980 | public: void __thiscall MainMenu::EnterNewPlayer(void) | ?EnterNewPlayer@MainMenu@@QAEXXZ
    0x506990 | public: void __thiscall MainMenu::DisplayDriverInfo(char *,char *,char *,char *,char *,int) | ?DisplayDriverInfo@MainMenu@@QAEXPAD0000H@Z
    0x506A50 | public: void __thiscall MainMenu::SetController(char *) | ?SetController@MainMenu@@QAEXPAD@Z
    0x506A70 | public: void __thiscall MainMenu::SetNetName(char *) | ?SetNetName@MainMenu@@QAEXPAD@Z
    0x506A80 | public: void __thiscall MainMenu::FocusDescription(int,int) | ?FocusDescription@MainMenu@@QAEXHH@Z
    0x506AB0 | public: virtual void * __thiscall MainMenu::`scalar deleting destructor'(unsigned int) | ??_GMainMenu@@UAEPAXI@Z
    public: virtual void * __thiscall MainMenu::`vector deleting destructor'(unsigned int) | ??_EMainMenu@@UAEPAXI@Z
    0x5B45E0 | const MainMenu::`vftable' | ??_7MainMenu@@6B@
*/

struct MainMenu : UIMenu
{
public:
    // MainMenu::`vftable' @ 0x5B45E0

    // 0x505C30 | ??0MainMenu@@QAE@H@Z
    inline MainMenu(int32_t arg1)
    {
        stub<member_func_t<void, MainMenu, int32_t>>(0x505C30, this, arg1);
    }

    // 0x5060B0 | ?EnableReplay@MainMenu@@QAEXH@Z
    inline void EnableReplay(int32_t arg1)
    {
        return stub<member_func_t<void, MainMenu, int32_t>>(0x5060B0, this, arg1);
    }

    // 0x5060D0 | ?IsReplayReadOnly@MainMenu@@QAEHXZ
    inline int32_t IsReplayReadOnly()
    {
        return stub<member_func_t<int32_t, MainMenu>>(0x5060D0, this);
    }

    // 0x5060E0 | ?InitDriver@MainMenu@@QAEXXZ
    inline void InitDriver()
    {
        return stub<member_func_t<void, MainMenu>>(0x5060E0, this);
    }

    // 0x506560 | ?RemovePlayer@MainMenu@@QAEXPAD@Z
    inline void RemovePlayer(char* arg1)
    {
        return stub<member_func_t<void, MainMenu, char*>>(0x506560, this, arg1);
    }

    // 0x5067C0 | ?SetPlayerPick@MainMenu@@QAEXH@Z
    inline void SetPlayerPick(int32_t arg1)
    {
        return stub<member_func_t<void, MainMenu, int32_t>>(0x5067C0, this, arg1);
    }

    // 0x5067D0 | ?DecPlayer@MainMenu@@QAEXXZ
    inline void DecPlayer()
    {
        return stub<member_func_t<void, MainMenu>>(0x5067D0, this);
    }

    // 0x506800 | ?IncPlayer@MainMenu@@QAEXXZ
    inline void IncPlayer()
    {
        return stub<member_func_t<void, MainMenu>>(0x506800, this);
    }

    // 0x506830 | ?RemoveAllPlayers@MainMenu@@QAEXXZ
    inline void RemoveAllPlayers()
    {
        return stub<member_func_t<void, MainMenu>>(0x506830, this);
    }

    // 0x506840 | ?AddPlayer@MainMenu@@QAEXPAD@Z
    inline void AddPlayer(char* arg1)
    {
        return stub<member_func_t<void, MainMenu, char*>>(0x506840, this, arg1);
    }

    // 0x506960 | ?TDPickCB@MainMenu@@QAEXXZ
    inline void TDPickCB()
    {
        return stub<member_func_t<void, MainMenu>>(0x506960, this);
    }

    // 0x506970 | ?DeleteCB@MainMenu@@QAEXXZ
    inline void DeleteCB()
    {
        return stub<member_func_t<void, MainMenu>>(0x506970, this);
    }

    // 0x506980 | ?EnterNewPlayer@MainMenu@@QAEXXZ
    inline void EnterNewPlayer()
    {
        return stub<member_func_t<void, MainMenu>>(0x506980, this);
    }

    // 0x506990 | ?DisplayDriverInfo@MainMenu@@QAEXPAD0000H@Z
    inline void DisplayDriverInfo(char* arg1, char* arg2, char* arg3, char* arg4, char* arg5, int32_t arg6)
    {
        return stub<member_func_t<void, MainMenu, char*, char*, char*, char*, char*, int32_t>>(
            0x506990, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x506A50 | ?SetController@MainMenu@@QAEXPAD@Z
    inline void SetController(char* arg1)
    {
        return stub<member_func_t<void, MainMenu, char*>>(0x506A50, this, arg1);
    }

    // 0x506A70 | ?SetNetName@MainMenu@@QAEXPAD@Z
    inline void SetNetName(char* arg1)
    {
        return stub<member_func_t<void, MainMenu, char*>>(0x506A70, this, arg1);
    }

    // 0x506A80 | ?FocusDescription@MainMenu@@QAEXHH@Z
    inline void FocusDescription(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, MainMenu, int32_t, int32_t>>(0x506A80, this, arg1, arg2);
    }

    // 0x506020 | ??1MainMenu@@UAE@XZ
    inline ~MainMenu() override
    {
        stub<member_func_t<void, MainMenu>>(0x506020, this);
    }

    // 0x5060A0 | ?PreSetup@MainMenu@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, MainMenu>>(0x5060A0, this);
    }
};
