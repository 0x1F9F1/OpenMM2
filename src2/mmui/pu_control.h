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
    mmui:pu_control

    0x50BD00 | public: __thiscall PUControl::PUControl(int,float,float,float,float) | ??0PUControl@@QAE@HMMMM@Z
    0x50C090 | public: virtual __thiscall PUControl::~PUControl(void) | ??1PUControl@@UAE@XZ
    0x50C0F0 | public: virtual void __thiscall PUControl::PreSetup(void) | ?PreSetup@PUControl@@UAEXXZ
    0x50C110 | public: void __thiscall PUControl::CancelAction(void) | ?CancelAction@PUControl@@QAEXXZ
    0x50C130 | public: void __thiscall PUControl::SetRWStates(void) | ?SetRWStates@PUControl@@QAEXXZ
    0x50C1C0 | public: void __thiscall PUControl::ControlSelect(void) | ?ControlSelect@PUControl@@QAEXXZ
    0x50C1F0 | public: void __thiscall PUControl::SetSensitivityCB(void) | ?SetSensitivityCB@PUControl@@QAEXXZ
    public: virtual void * __thiscall PUControl::`vector deleting destructor'(unsigned int) | ??_EPUControl@@UAEPAXI@Z
    0x50C200 | public: virtual void * __thiscall PUControl::`scalar deleting destructor'(unsigned int) | ??_GPUControl@@UAEPAXI@Z
    0x5B4918 | const PUControl::`vftable' | ??_7PUControl@@6B@
*/

struct PUControl : PUMenuBase
{
public:
    // PUControl::`vftable' @ 0x5B4918

    // 0x50BD00 | ??0PUControl@@QAE@HMMMM@Z
    inline PUControl(int32_t arg1, float arg2, float arg3, float arg4, float arg5)
    {
        stub<member_func_t<void, PUControl, int32_t, float, float, float, float>>(
            0x50BD00, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x50C110 | ?CancelAction@PUControl@@QAEXXZ
    inline void CancelAction()
    {
        return stub<member_func_t<void, PUControl>>(0x50C110, this);
    }

    // 0x50C130 | ?SetRWStates@PUControl@@QAEXXZ
    inline void SetRWStates()
    {
        return stub<member_func_t<void, PUControl>>(0x50C130, this);
    }

    // 0x50C1C0 | ?ControlSelect@PUControl@@QAEXXZ
    inline void ControlSelect()
    {
        return stub<member_func_t<void, PUControl>>(0x50C1C0, this);
    }

    // 0x50C1F0 | ?SetSensitivityCB@PUControl@@QAEXXZ
    inline void SetSensitivityCB()
    {
        return stub<member_func_t<void, PUControl>>(0x50C1F0, this);
    }

    // 0x50C090 | ??1PUControl@@UAE@XZ
    inline ~PUControl() override
    {
        stub<member_func_t<void, PUControl>>(0x50C090, this);
    }

    // 0x50C0F0 | ?PreSetup@PUControl@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, PUControl>>(0x50C0F0, this);
    }
};
