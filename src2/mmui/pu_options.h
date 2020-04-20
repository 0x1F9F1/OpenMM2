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
    mmui:pu_options

    0x50C440 | public: __thiscall PUOptions::PUOptions(int,float,float,float,float) | ??0PUOptions@@QAE@HMMMM@Z
    0x50C5E0 | public: virtual __thiscall PUOptions::~PUOptions(void) | ??1PUOptions@@UAE@XZ
    public: virtual void * __thiscall PUOptions::`vector deleting destructor'(unsigned int) | ??_EPUOptions@@UAEPAXI@Z
    0x50C5F0 | public: virtual void * __thiscall PUOptions::`scalar deleting destructor'(unsigned int) | ??_GPUOptions@@UAEPAXI@Z
    0x5B49A8 | const PUOptions::`vftable' | ??_7PUOptions@@6B@
*/

struct PUOptions : PUMenuBase
{
public:
    // PUOptions::`vftable' @ 0x5B49A8

    // 0x50C440 | ??0PUOptions@@QAE@HMMMM@Z
    inline PUOptions(int32_t arg1, float arg2, float arg3, float arg4, float arg5)
    {
        stub<member_func_t<void, PUOptions, int32_t, float, float, float, float>>(
            0x50C440, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x50C5E0 | ??1PUOptions@@UAE@XZ
    inline ~PUOptions() override
    {
        stub<member_func_t<void, PUOptions>>(0x50C5E0, this);
    }
};
