/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 Brick

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

#include "mmwidget/menu.h"

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

class MainMenu : public UIMenu
{
    // const MainMenu::`vftable' @ 0x5B45E0

public:
    // 0x505C30 | ??0MainMenu@@QAE@H@Z
    MainMenu(i32 arg1);

    // 0x506AB0 | ??_GMainMenu@@UAEPAXI@Z
    // 0x506020 | ??1MainMenu@@UAE@XZ
    ~MainMenu() override;

    // 0x506840 | ?AddPlayer@MainMenu@@QAEXPAD@Z
    void AddPlayer(char* arg1);

    // 0x5067D0 | ?DecPlayer@MainMenu@@QAEXXZ
    void DecPlayer();

    // 0x506970 | ?DeleteCB@MainMenu@@QAEXXZ
    void DeleteCB();

    // 0x506990 | ?DisplayDriverInfo@MainMenu@@QAEXPAD0000H@Z
    void DisplayDriverInfo(char* arg1, char* arg2, char* arg3, char* arg4, char* arg5, i32 arg6);

    // 0x5060B0 | ?EnableReplay@MainMenu@@QAEXH@Z
    void EnableReplay(i32 arg1);

    // 0x506980 | ?EnterNewPlayer@MainMenu@@QAEXXZ
    void EnterNewPlayer();

    // 0x506A80 | ?FocusDescription@MainMenu@@QAEXHH@Z
    void FocusDescription(i32 arg1, i32 arg2);

    // 0x506800 | ?IncPlayer@MainMenu@@QAEXXZ
    void IncPlayer();

    // 0x5060E0 | ?InitDriver@MainMenu@@QAEXXZ
    void InitDriver();

    // 0x5060D0 | ?IsReplayReadOnly@MainMenu@@QAEHXZ
    i32 IsReplayReadOnly();

    // 0x5060A0 | ?PreSetup@MainMenu@@UAEXXZ
    void PreSetup() override;

    // 0x506830 | ?RemoveAllPlayers@MainMenu@@QAEXXZ
    void RemoveAllPlayers();

    // 0x506560 | ?RemovePlayer@MainMenu@@QAEXPAD@Z
    void RemovePlayer(char* arg1);

    // 0x506A50 | ?SetController@MainMenu@@QAEXPAD@Z
    void SetController(char* arg1);

    // 0x506A70 | ?SetNetName@MainMenu@@QAEXPAD@Z
    void SetNetName(char* arg1);

    // 0x5067C0 | ?SetPlayerPick@MainMenu@@QAEXH@Z
    void SetPlayerPick(i32 arg1);

    // 0x506960 | ?TDPickCB@MainMenu@@QAEXXZ
    void TDPickCB();
};

check_size(MainMenu, 0x100);
