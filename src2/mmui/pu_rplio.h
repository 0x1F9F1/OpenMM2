/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
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
    mmui:pu_rplio

    0x50B980 | public: __thiscall PUReplaySave::PUReplaySave(int,float,float,float,float,char *) | ??0PUReplaySave@@QAE@HMMMMPAD@Z
    0x50BAE0 | public: virtual __thiscall PUReplaySave::~PUReplaySave(void) | ??1PUReplaySave@@UAE@XZ
    0x50BAF0 | public: virtual void * __thiscall PUReplaySave::`scalar deleting destructor'(unsigned int) | ??_GPUReplaySave@@UAEPAXI@Z
    public: virtual void * __thiscall PUReplaySave::`vector deleting destructor'(unsigned int) | ??_EPUReplaySave@@UAEPAXI@Z
    0x5B4888 | const PUReplaySave::`vftable' | ??_7PUReplaySave@@6B@
*/

struct PUReplaySave : PUMenuBase
{
public:
    // PUReplaySave::`vftable' @ 0x5B4888

    // 0x50B980 | ??0PUReplaySave@@QAE@HMMMMPAD@Z
    inline PUReplaySave(int32_t arg1, float arg2, float arg3, float arg4, float arg5, char* arg6)
    {
        stub<member_func_t<void, PUReplaySave, int32_t, float, float, float, float, char*>>(
            0x50B980, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x50BAE0 | ??1PUReplaySave@@UAE@XZ
    inline ~PUReplaySave() override
    {
        stub<member_func_t<void, PUReplaySave>>(0x50BAE0, this);
    }
};
