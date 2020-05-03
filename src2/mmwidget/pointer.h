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
    mmwidget:pointer

    0x4F1200 | public: __thiscall sfPointer::sfPointer(void) | ??0sfPointer@@QAE@XZ
    0x4F1270 | public: virtual __thiscall sfPointer::~sfPointer(void) | ??1sfPointer@@UAE@XZ
    0x4F12D0 | public: void __thiscall sfPointer::Init(void) | ?Init@sfPointer@@QAEXXZ
    0x4F12F0 | public: virtual void __thiscall sfPointer::ResChange(int,int) | ?ResChange@sfPointer@@UAEXHH@Z
    0x4F1350 | public: float __thiscall sfPointer::GetPointerHeight(void) | ?GetPointerHeight@sfPointer@@QAEMXZ
    0x4F1360 | public: virtual void __thiscall sfPointer::Update(void) | ?Update@sfPointer@@UAEXXZ
    0x4F1560 | private: void __thiscall sfPointer::UpdateAttached(void) | ?UpdateAttached@sfPointer@@AAEXXZ
    0x4F1570 | public: void __thiscall sfPointer::WaitForRelease(void) | ?WaitForRelease@sfPointer@@QAEXXZ
    0x4F1580 | public: virtual void __thiscall sfPointer::Cull(void) | ?Cull@sfPointer@@UAEXXZ
    0x4F15F0 | public: virtual void * __thiscall sfPointer::`scalar deleting destructor'(unsigned int) | ??_GsfPointer@@UAEPAXI@Z
    public: virtual void * __thiscall sfPointer::`vector deleting destructor'(unsigned int) | ??_EsfPointer@@UAEPAXI@Z
    0x5B3B30 | const sfPointer::`vftable' | ??_7sfPointer@@6B@
*/

class sfPointer : public asNode
{
    // const sfPointer::`vftable' @ 0x5B3B30

public:
    // 0x4F1200 | ??0sfPointer@@QAE@XZ
    sfPointer();

    // 0x4F15F0 | ??_GsfPointer@@UAEPAXI@Z
    // 0x4F1270 | ??1sfPointer@@UAE@XZ
    ~sfPointer() override;

    // 0x4F1580 | ?Cull@sfPointer@@UAEXXZ
    void Cull() override;

    // 0x4F1350 | ?GetPointerHeight@sfPointer@@QAEMXZ
    f32 GetPointerHeight();

    // 0x4F12D0 | ?Init@sfPointer@@QAEXXZ
    void Init();

    // 0x4F12F0 | ?ResChange@sfPointer@@UAEXHH@Z
    void ResChange(i32 arg1, i32 arg2) override;

    // 0x4F1360 | ?Update@sfPointer@@UAEXXZ
    void Update() override;

    // 0x4F1570 | ?WaitForRelease@sfPointer@@QAEXXZ
    void WaitForRelease();

private:
    // 0x4F1560 | ?UpdateAttached@sfPointer@@AAEXXZ
    void UpdateAttached();
};

check_size(sfPointer, 0x4C);
