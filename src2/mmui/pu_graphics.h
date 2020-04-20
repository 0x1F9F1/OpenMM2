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
    mmui:pu_graphics

    public: void __thiscall PUGraphics::SetLocalDetail(float) | ?SetLocalDetail@PUGraphics@@QAEXM@Z
    public: void __thiscall PUGraphics::FixLameLighting(void) | ?FixLameLighting@PUGraphics@@QAEXXZ
    0x50A000 | public: __thiscall PUGraphics::PUGraphics(int,float,float,float,float) | ??0PUGraphics@@QAE@HMMMM@Z
    0x50A4A0 | public: virtual __thiscall PUGraphics::~PUGraphics(void) | ??1PUGraphics@@UAE@XZ
    0x50A4B0 | public: virtual void __thiscall PUGraphics::PreSetup(void) | ?PreSetup@PUGraphics@@UAEXXZ
    0x50A500 | public: void __thiscall PUGraphics::CancelAction(void) | ?CancelAction@PUGraphics@@QAEXXZ
    0x50A510 | public: void __thiscall PUGraphics::SetFarClip(float) | ?SetFarClip@PUGraphics@@QAEXM@Z
    0x50A530 | public: void __thiscall PUGraphics::FixClip(void) | ?FixClip@PUGraphics@@QAEXXZ
    0x50A580 | public: void __thiscall PUGraphics::RenderQualityCB(void) | ?RenderQualityCB@PUGraphics@@QAEXXZ
    0x50A590 | public: virtual void * __thiscall PUGraphics::`scalar deleting destructor'(unsigned int) | ??_GPUGraphics@@UAEPAXI@Z
    public: virtual void * __thiscall PUGraphics::`vector deleting destructor'(unsigned int) | ??_EPUGraphics@@UAEPAXI@Z
    0x5B46D8 | const PUGraphics::`vftable' | ??_7PUGraphics@@6B@
*/

struct PUGraphics : PUMenuBase
{
public:
    // PUGraphics::`vftable' @ 0x5B46D8

    // 0x50A000 | ??0PUGraphics@@QAE@HMMMM@Z
    inline PUGraphics(int32_t arg1, float arg2, float arg3, float arg4, float arg5)
    {
        stub<member_func_t<void, PUGraphics, int32_t, float, float, float, float>>(
            0x50A000, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x50A500 | ?CancelAction@PUGraphics@@QAEXXZ
    inline void CancelAction()
    {
        return stub<member_func_t<void, PUGraphics>>(0x50A500, this);
    }

    // 0x50A510 | ?SetFarClip@PUGraphics@@QAEXM@Z
    inline void SetFarClip(float arg1)
    {
        return stub<member_func_t<void, PUGraphics, float>>(0x50A510, this, arg1);
    }

    // 0x50A530 | ?FixClip@PUGraphics@@QAEXXZ
    inline void FixClip()
    {
        return stub<member_func_t<void, PUGraphics>>(0x50A530, this);
    }

    // 0x50A580 | ?RenderQualityCB@PUGraphics@@QAEXXZ
    inline void RenderQualityCB()
    {
        return stub<member_func_t<void, PUGraphics>>(0x50A580, this);
    }

    // 0x50A4A0 | ??1PUGraphics@@UAE@XZ
    inline ~PUGraphics() override
    {
        stub<member_func_t<void, PUGraphics>>(0x50A4A0, this);
    }

    // 0x50A4B0 | ?PreSetup@PUGraphics@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, PUGraphics>>(0x50A4B0, this);
    }
};
