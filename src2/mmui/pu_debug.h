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
    mmui:pu_debug

    0x50C230 | public: __thiscall PUDebug::PUDebug(int,float,float,float,float) | ??0PUDebug@@QAE@HMMMM@Z
    0x50C3F0 | public: virtual __thiscall PUDebug::~PUDebug(void) | ??1PUDebug@@UAE@XZ
    0x50C400 | public: void __thiscall PUDebug::RecordCB(void) | ?RecordCB@PUDebug@@QAEXXZ
    0x50C410 | public: virtual void * __thiscall PUDebug::`scalar deleting destructor'(unsigned int) | ??_GPUDebug@@UAEPAXI@Z
    public: virtual void * __thiscall PUDebug::`vector deleting destructor'(unsigned int) | ??_EPUDebug@@UAEPAXI@Z
    0x5B4960 | const PUDebug::`vftable' | ??_7PUDebug@@6B@
*/

struct PUDebug : PUMenuBase
{
public:
    // PUDebug::`vftable' @ 0x5B4960

    // 0x50C230 | ??0PUDebug@@QAE@HMMMM@Z
    PUDebug(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5)
    {
        stub<member_func_t<void, PUDebug, i32, f32, f32, f32, f32>>(0x50C230, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x50C400 | ?RecordCB@PUDebug@@QAEXXZ
    void RecordCB()
    {
        return stub<member_func_t<void, PUDebug>>(0x50C400, this);
    }

    // 0x50C3F0 | ??1PUDebug@@UAE@XZ
    ~PUDebug() override
    {
        stub<member_func_t<void, PUDebug>>(0x50C3F0, this);
    }
};
