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

struct PUMain : PUMenuBase
{
public:
    // PUMain::`vftable' @ 0x5B4720

    // 0x50A5C0 | ??0PUMain@@QAE@HMMMMPAD@Z
    inline PUMain(int32_t arg1, float arg2, float arg3, float arg4, float arg5, char* arg6)
    {
        stub<member_func_t<void, PUMain, int32_t, float, float, float, float, char*>>(
            0x50A5C0, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x50A810 | ?RplRO@PUMain@@QAEXH@Z
    inline void RplRO(int32_t arg1)
    {
        return stub<member_func_t<void, PUMain, int32_t>>(0x50A810, this, arg1);
    }

    // 0x50A830 | ?RestartRO@PUMain@@QAEXH@Z
    inline void RestartRO(int32_t arg1)
    {
        return stub<member_func_t<void, PUMain, int32_t>>(0x50A830, this, arg1);
    }

    // 0x50A850 | ?RaceMenuRO@PUMain@@QAEXH@Z
    inline void RaceMenuRO(int32_t arg1)
    {
        return stub<member_func_t<void, PUMain, int32_t>>(0x50A850, this, arg1);
    }

    // 0x50A870 | ?IsRaceMenuReadOnly@PUMain@@QAEHXZ
    inline int32_t IsRaceMenuReadOnly()
    {
        return stub<member_func_t<int32_t, PUMain>>(0x50A870, this);
    }

    // 0x50A800 | ??1PUMain@@UAE@XZ
    inline ~PUMain() override
    {
        stub<member_func_t<void, PUMain>>(0x50A800, this);
    }
};
