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

#include "about.h"

void GetMidtownRegString(char* arg1, i32 arg2, char* arg3, char* arg4)
{
    return stub<cdecl_t<void, char*, i32, char*, char*>>(0x505850, arg1, arg2, arg3, arg4);
}

AboutMenu::AboutMenu(i32 arg1)
{
    unimplemented();
}

AboutMenu::~AboutMenu()
{
    unimplemented();
}

void AboutMenu::Cull()
{
    return stub<thiscall_t<void, AboutMenu*>>(0x505B50, this);
}

void AboutMenu::PreSetup()
{
    return stub<thiscall_t<void, AboutMenu*>>(0x505AC0, this);
}

void AboutMenu::Update()
{
    return stub<thiscall_t<void, AboutMenu*>>(0x505AE0, this);
}

define_dummy_symbol(mmui_about);
