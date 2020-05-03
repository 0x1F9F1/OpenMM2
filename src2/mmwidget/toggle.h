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
    mmwidget:toggle

    0x4F39E0 | public: __thiscall mmToggle::mmToggle(void) | ??0mmToggle@@QAE@XZ
    0x4F3A00 | public: virtual __thiscall mmToggle::~mmToggle(void) | ??1mmToggle@@UAE@XZ
    0x4F3A60 | public: void __thiscall mmToggle::Init(char *,float,float,float,float) | ?Init@mmToggle@@QAEXPADMMMM@Z
    0x4F3B00 | private: void __thiscall mmToggle::LoadBitmap(char *) | ?LoadBitmap@mmToggle@@AAEXPAD@Z
    0x4F3B40 | private: void __thiscall mmToggle::SetSize(float,float) | ?SetSize@mmToggle@@AAEXMM@Z
    0x4F3BF0 | public: virtual void __thiscall mmToggle::Update(void) | ?Update@mmToggle@@UAEXXZ
    0x4F3C10 | public: virtual void __thiscall mmToggle::Cull(void) | ?Cull@mmToggle@@UAEXXZ
    0x4F3C80 | public: virtual void * __thiscall mmToggle::`scalar deleting destructor'(unsigned int) | ??_GmmToggle@@UAEPAXI@Z
    public: virtual void * __thiscall mmToggle::`vector deleting destructor'(unsigned int) | ??_EmmToggle@@UAEPAXI@Z
    0x5B3C6C | const mmToggle::`vftable' | ??_7mmToggle@@6B@
*/

class mmToggle : public asNode
{
    // const mmToggle::`vftable' @ 0x5B3C6C

public:
    // 0x4F39E0 | ??0mmToggle@@QAE@XZ
    mmToggle();

    // 0x4F3C80 | ??_GmmToggle@@UAEPAXI@Z
    // 0x4F3A00 | ??1mmToggle@@UAE@XZ
    ~mmToggle() override;

    // 0x4F3C10 | ?Cull@mmToggle@@UAEXXZ
    void Cull() override;

    // 0x4F3A60 | ?Init@mmToggle@@QAEXPADMMMM@Z
    void Init(char* arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5);

    // 0x4F3BF0 | ?Update@mmToggle@@UAEXXZ
    void Update() override;

private:
    // 0x4F3B00 | ?LoadBitmap@mmToggle@@AAEXPAD@Z
    void LoadBitmap(char* arg1);

    // 0x4F3B40 | ?SetSize@mmToggle@@AAEXMM@Z
    void SetSize(f32 arg1, f32 arg2);
};

check_size(mmToggle, 0x30);
