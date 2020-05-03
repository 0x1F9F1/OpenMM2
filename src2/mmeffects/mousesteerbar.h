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

#include "node/node.h"

/*
    mmeffects:mousesteerbar

    public: __thiscall mmMouseSteerBar::mmMouseSteerBar(void) | ??0mmMouseSteerBar@@QAE@XZ
    public: virtual __thiscall mmMouseSteerBar::~mmMouseSteerBar(void) | ??1mmMouseSteerBar@@UAE@XZ
    0x534450 | public: void __thiscall mmMouseSteerBar::Init(float,float,float *) | ?Init@mmMouseSteerBar@@QAEXMMPAM@Z
    0x5344D0 | public: virtual void __thiscall mmMouseSteerBar::Update(void) | ?Update@mmMouseSteerBar@@UAEXXZ
    0x534500 | public: virtual void __thiscall mmMouseSteerBar::Cull(void) | ?Cull@mmMouseSteerBar@@UAEXXZ
    public: void __thiscall mmMouseSteerBar::AddWidgets(class bkBank *) | ?AddWidgets@mmMouseSteerBar@@QAEXPAVbkBank@@@Z
    0x534580 | public: virtual void * __thiscall mmMouseSteerBar::`scalar deleting destructor'(unsigned int) | ??_GmmMouseSteerBar@@UAEPAXI@Z
    public: virtual void * __thiscall mmMouseSteerBar::`vector deleting destructor'(unsigned int) | ??_EmmMouseSteerBar@@UAEPAXI@Z
    0x5B53C0 | const mmMouseSteerBar::`vftable' | ??_7mmMouseSteerBar@@6B@
*/

class mmMouseSteerBar : public asNode
{
    // const mmMouseSteerBar::`vftable' @ 0x5B53C0

public:
    // 0x534580 | ??_GmmMouseSteerBar@@UAEPAXI@Z
    ~mmMouseSteerBar() override;

    // 0x534500 | ?Cull@mmMouseSteerBar@@UAEXXZ
    void Cull() override;

    // 0x534450 | ?Init@mmMouseSteerBar@@QAEXMMPAM@Z
    void Init(f32 arg1, f32 arg2, f32* arg3);

    // 0x5344D0 | ?Update@mmMouseSteerBar@@UAEXXZ
    void Update() override;
};

check_size(mmMouseSteerBar, 0x0);
