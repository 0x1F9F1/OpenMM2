/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
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
    bank:bkwinmenu

    public: __thiscall bkMenu::bkMenu(void) | ??0bkMenu@@QAE@XZ
    public: __thiscall bkMenu::~bkMenu(void) | ??1bkMenu@@QAE@XZ
    public: int __thiscall bkMenu::Post(int,int) const | ?Post@bkMenu@@QBEHHH@Z
    public: void __thiscall bkMenu::AddItem(char const *,int,bool,bool) | ?AddItem@bkMenu@@QAEXPBDH_N1@Z
    public: void __thiscall bkMenu::AddItem(struct HBITMAP__ *,int,bool,bool) | ?AddItem@bkMenu@@QAEXPAUHBITMAP__@@H_N1@Z
    public: void __thiscall bkMenu::AddSeparator(void) | ?AddSeparator@bkMenu@@QAEXXZ
    public: void __thiscall bkMenu::AddSubMenu(char const *,class bkMenu *,bool) | ?AddSubMenu@bkMenu@@QAEXPBDPAV1@_N@Z
*/

#include "hooking.h"
