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
    mmui:pu_quit

    0x50B040 | public: __thiscall PUQuit::PUQuit(int,float,float,float,float,char *) | ??0PUQuit@@QAE@HMMMMPAD@Z
    0x50B1F0 | public: virtual __thiscall PUQuit::~PUQuit(void) | ??1PUQuit@@UAE@XZ
    0x50B200 | public: void __thiscall PUQuit::EnableMigrateHost(bool) | ?EnableMigrateHost@PUQuit@@QAEX_N@Z
    public: virtual void * __thiscall PUQuit::`vector deleting destructor'(unsigned int) | ??_EPUQuit@@UAEPAXI@Z
    0x50B240 | public: virtual void * __thiscall PUQuit::`scalar deleting destructor'(unsigned int) | ??_GPUQuit@@UAEPAXI@Z
    0x5B47B0 | const PUQuit::`vftable' | ??_7PUQuit@@6B@
*/

struct PUQuit : PUMenuBase
{
public:
    // PUQuit::`vftable' @ 0x5B47B0

    // 0x50B040 | ??0PUQuit@@QAE@HMMMMPAD@Z
    PUQuit(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, char* arg6)
    {
        stub<member_func_t<void, PUQuit, i32, f32, f32, f32, f32, char*>>(
            0x50B040, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x50B200 | ?EnableMigrateHost@PUQuit@@QAEX_N@Z
    void EnableMigrateHost(bool arg1)
    {
        return stub<member_func_t<void, PUQuit, bool>>(0x50B200, this, arg1);
    }

    // 0x50B1F0 | ??1PUQuit@@UAE@XZ
    ~PUQuit() override
    {
        stub<member_func_t<void, PUQuit>>(0x50B1F0, this);
    }
};
