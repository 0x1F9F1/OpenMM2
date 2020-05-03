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

class PUGraphics : public PUMenuBase
{
    // const PUGraphics::`vftable' @ 0x5B46D8

public:
    // 0x50A000 | ??0PUGraphics@@QAE@HMMMM@Z
    PUGraphics(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);

    // 0x50A590 | ??_GPUGraphics@@UAEPAXI@Z
    // 0x50A4A0 | ??1PUGraphics@@UAE@XZ
    ~PUGraphics() override;

    // 0x50A500 | ?CancelAction@PUGraphics@@QAEXXZ
    void CancelAction();

    // 0x50A530 | ?FixClip@PUGraphics@@QAEXXZ
    void FixClip();

    // 0x50A4B0 | ?PreSetup@PUGraphics@@UAEXXZ
    void PreSetup() override;

    // 0x50A580 | ?RenderQualityCB@PUGraphics@@QAEXXZ
    void RenderQualityCB();

    // 0x50A510 | ?SetFarClip@PUGraphics@@QAEXM@Z
    void SetFarClip(f32 arg1);
};

check_size(PUGraphics, 0xD4);
