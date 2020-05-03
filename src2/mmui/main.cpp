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

#include "main.h"

MainMenu::MainMenu(i32 arg1)
{
    unimplemented();
}

MainMenu::~MainMenu()
{
    unimplemented();
}

void MainMenu::AddPlayer(char* arg1)
{
    return stub<thiscall_t<void, MainMenu*, char*>>(0x506840, this, arg1);
}

void MainMenu::DecPlayer()
{
    return stub<thiscall_t<void, MainMenu*>>(0x5067D0, this);
}

void MainMenu::DeleteCB()
{
    return stub<thiscall_t<void, MainMenu*>>(0x506970, this);
}

void MainMenu::DisplayDriverInfo(char* arg1, char* arg2, char* arg3, char* arg4, char* arg5, i32 arg6)
{
    return stub<thiscall_t<void, MainMenu*, char*, char*, char*, char*, char*, i32>>(
        0x506990, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

void MainMenu::EnableReplay(i32 arg1)
{
    return stub<thiscall_t<void, MainMenu*, i32>>(0x5060B0, this, arg1);
}

void MainMenu::EnterNewPlayer()
{
    return stub<thiscall_t<void, MainMenu*>>(0x506980, this);
}

void MainMenu::FocusDescription(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, MainMenu*, i32, i32>>(0x506A80, this, arg1, arg2);
}

void MainMenu::IncPlayer()
{
    return stub<thiscall_t<void, MainMenu*>>(0x506800, this);
}

void MainMenu::InitDriver()
{
    return stub<thiscall_t<void, MainMenu*>>(0x5060E0, this);
}

i32 MainMenu::IsReplayReadOnly()
{
    return stub<thiscall_t<i32, MainMenu*>>(0x5060D0, this);
}

void MainMenu::PreSetup()
{
    return stub<thiscall_t<void, MainMenu*>>(0x5060A0, this);
}

void MainMenu::RemoveAllPlayers()
{
    return stub<thiscall_t<void, MainMenu*>>(0x506830, this);
}

void MainMenu::RemovePlayer(char* arg1)
{
    return stub<thiscall_t<void, MainMenu*, char*>>(0x506560, this, arg1);
}

void MainMenu::SetController(char* arg1)
{
    return stub<thiscall_t<void, MainMenu*, char*>>(0x506A50, this, arg1);
}

void MainMenu::SetNetName(char* arg1)
{
    return stub<thiscall_t<void, MainMenu*, char*>>(0x506A70, this, arg1);
}

void MainMenu::SetPlayerPick(i32 arg1)
{
    return stub<thiscall_t<void, MainMenu*, i32>>(0x5067C0, this, arg1);
}

void MainMenu::TDPickCB()
{
    return stub<thiscall_t<void, MainMenu*>>(0x506960, this);
}

define_dummy_symbol(mmui_main);
