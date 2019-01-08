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
    mmui:pu_chat

    0x50BB20 | public: __thiscall PUChat::PUChat(int,float,float,float,float,char *) | ??0PUChat@@QAE@HMMMMPAD@Z
    0x50BC20 | public: virtual __thiscall PUChat::~PUChat(void) | ??1PUChat@@UAE@XZ
    0x50BC30 | public: void __thiscall PUChat::ClearChat(void) | ?ClearChat@PUChat@@QAEXXZ
    0x50BC70 | public: void __thiscall PUChat::ChatEntry(void) | ?ChatEntry@PUChat@@QAEXXZ
    0x50BCD0 | public: virtual void * __thiscall PUChat::`scalar deleting destructor'(unsigned int) | ??_GPUChat@@UAEPAXI@Z
    public: virtual void * __thiscall PUChat::`vector deleting destructor'(unsigned int) | ??_EPUChat@@UAEPAXI@Z
    0x5B48D0 | const PUChat::`vftable' | ??_7PUChat@@6B@
*/

#include "hooking.h"
