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
    mmui:pu_exit

    0x50CAF0 | public: __thiscall PUExit::PUExit(int,float,float,float,float,char *) | ??0PUExit@@QAE@HMMMMPAD@Z
    0x50CC50 | public: virtual __thiscall PUExit::~PUExit(void) | ??1PUExit@@UAE@XZ
    public: virtual void * __thiscall PUExit::`vector deleting destructor'(unsigned int) | ??_EPUExit@@UAEPAXI@Z
    0x50CC60 | public: virtual void * __thiscall PUExit::`scalar deleting destructor'(unsigned int) | ??_GPUExit@@UAEPAXI@Z
    0x5B4A44 | const PUExit::`vftable' | ??_7PUExit@@6B@
*/

struct PUExit : PUMenuBase
{
public:
    // PUExit::`vftable' @ 0x5B4A44

    // 0x50CAF0 | ??0PUExit@@QAE@HMMMMPAD@Z
    PUExit(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, char* arg6)
    {
        stub<member_func_t<void, PUExit, i32, f32, f32, f32, f32, char*>>(
            0x50CAF0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x50CC50 | ??1PUExit@@UAE@XZ
    ~PUExit() override
    {
        stub<member_func_t<void, PUExit>>(0x50CC50, this);
    }
};
