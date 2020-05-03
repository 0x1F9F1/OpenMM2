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
    mmui:pu_rplio

    0x50B980 | public: __thiscall PUReplaySave::PUReplaySave(int,float,float,float,float,char *) | ??0PUReplaySave@@QAE@HMMMMPAD@Z
    0x50BAE0 | public: virtual __thiscall PUReplaySave::~PUReplaySave(void) | ??1PUReplaySave@@UAE@XZ
    0x50BAF0 | public: virtual void * __thiscall PUReplaySave::`scalar deleting destructor'(unsigned int) | ??_GPUReplaySave@@UAEPAXI@Z
    public: virtual void * __thiscall PUReplaySave::`vector deleting destructor'(unsigned int) | ??_EPUReplaySave@@UAEPAXI@Z
    0x5B4888 | const PUReplaySave::`vftable' | ??_7PUReplaySave@@6B@
*/

class PUReplaySave : public PUMenuBase
{
    // const PUReplaySave::`vftable' @ 0x5B4888

public:
    // 0x50B980 | ??0PUReplaySave@@QAE@HMMMMPAD@Z
    PUReplaySave(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, char* arg6);

    // 0x50BAF0 | ??_GPUReplaySave@@UAEPAXI@Z
    // 0x50BAE0 | ??1PUReplaySave@@UAE@XZ
    ~PUReplaySave() override;
};

check_size(PUReplaySave, 0xBC);
