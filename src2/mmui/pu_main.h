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

#include "pu_menu.h"

/*
    mmui:pu_main

    0x50A5C0 | public: __thiscall PUMain::PUMain(int,float,float,float,float,char *) | ??0PUMain@@QAE@HMMMMPAD@Z
    0x50A800 | public: virtual __thiscall PUMain::~PUMain(void) | ??1PUMain@@UAE@XZ
    0x50A810 | public: void __thiscall PUMain::RplRO(int) | ?RplRO@PUMain@@QAEXH@Z
    0x50A830 | public: void __thiscall PUMain::RestartRO(int) | ?RestartRO@PUMain@@QAEXH@Z
    0x50A850 | public: void __thiscall PUMain::RaceMenuRO(int) | ?RaceMenuRO@PUMain@@QAEXH@Z
    0x50A870 | public: int __thiscall PUMain::IsRaceMenuReadOnly(void) | ?IsRaceMenuReadOnly@PUMain@@QAEHXZ
    public: virtual void * __thiscall PUMain::`vector deleting destructor'(unsigned int) | ??_EPUMain@@UAEPAXI@Z
    0x50A880 | public: virtual void * __thiscall PUMain::`scalar deleting destructor'(unsigned int) | ??_GPUMain@@UAEPAXI@Z
    0x5B4720 | const PUMain::`vftable' | ??_7PUMain@@6B@
*/

class PUMain : public PUMenuBase
{
    // const PUMain::`vftable' @ 0x5B4720

public:
    // 0x50A5C0 | ??0PUMain@@QAE@HMMMMPAD@Z
    PUMain(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, char* arg6);

    // 0x50A880 | ??_GPUMain@@UAEPAXI@Z
    // 0x50A800 | ??1PUMain@@UAE@XZ
    ~PUMain() override;

    // 0x50A870 | ?IsRaceMenuReadOnly@PUMain@@QAEHXZ
    i32 IsRaceMenuReadOnly();

    // 0x50A850 | ?RaceMenuRO@PUMain@@QAEXH@Z
    void RaceMenuRO(i32 arg1);

    // 0x50A830 | ?RestartRO@PUMain@@QAEXH@Z
    void RestartRO(i32 arg1);

    // 0x50A810 | ?RplRO@PUMain@@QAEXH@Z
    void RplRO(i32 arg1);
};

check_size(PUMain, 0xC8);
