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
    mmui:pu_key

    0x50B5A0 | public: __thiscall PUKey::PUKey(int,float,float,float,float) | ??0PUKey@@QAE@HMMMM@Z
    0x50B640 | public: virtual __thiscall PUKey::~PUKey(void) | ??1PUKey@@UAE@XZ
    0x50B650 | private: virtual void __thiscall PUKey::PreSetup(void) | ?PreSetup@PUKey@@EAEXXZ
    0x50B910 | private: virtual void __thiscall PUKey::PostSetup(void) | ?PostSetup@PUKey@@EAEXXZ
    0x50B950 | public: virtual void * __thiscall PUKey::`scalar deleting destructor'(unsigned int) | ??_GPUKey@@UAEPAXI@Z
    public: virtual void * __thiscall PUKey::`vector deleting destructor'(unsigned int) | ??_EPUKey@@UAEPAXI@Z
    0x5B4840 | const PUKey::`vftable' | ??_7PUKey@@6B@
*/

struct PUKey : PUMenuBase
{
public:
    // PUKey::`vftable' @ 0x5B4840

    // 0x50B5A0 | ??0PUKey@@QAE@HMMMM@Z
    PUKey(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5)
    {
        stub<member_func_t<void, PUKey, i32, f32, f32, f32, f32>>(0x50B5A0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x50B640 | ??1PUKey@@UAE@XZ
    ~PUKey() override
    {
        stub<member_func_t<void, PUKey>>(0x50B640, this);
    }

    // 0x50B650 | ?PreSetup@PUKey@@EAEXXZ
    void PreSetup() override
    {
        return stub<member_func_t<void, PUKey>>(0x50B650, this);
    }

    // 0x50B910 | ?PostSetup@PUKey@@EAEXXZ
    void PostSetup() override
    {
        return stub<member_func_t<void, PUKey>>(0x50B910, this);
    }
};
