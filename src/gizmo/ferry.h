/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
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
    gizmo:ferry

    0x579260 | public: __thiscall gizFerry::gizFerry(void) | ??0gizFerry@@QAE@XZ
    0x5792D0 | public: __thiscall gizFerry::~gizFerry(void) | ??1gizFerry@@QAE@XZ
    0x579350 | public: virtual void __thiscall gizFerry::Reset(void) | ?Reset@gizFerry@@UAEXXZ
    0x5793A0 | public: void __thiscall gizFerry::Init(char *,class dgPath *) | ?Init@gizFerry@@QAEXPADPAVdgPath@@@Z
    0x579460 | public: void __thiscall gizFerry::Update(void) | ?Update@gizFerry@@QAEXXZ
    0x579520 | public: void __thiscall gizFerry::SetSpeed(float) | ?SetSpeed@gizFerry@@QAEXM@Z
    0x579540 | public: void __thiscall gizFerry::Cull(int) | ?Cull@gizFerry@@QAEXH@Z
    0x579550 | public: __thiscall gizFerryMgr::gizFerryMgr(void) | ??0gizFerryMgr@@QAE@XZ
    0x5795C0 | public: virtual __thiscall gizFerryMgr::~gizFerryMgr(void) | ??1gizFerryMgr@@UAE@XZ
    0x579650 | public: virtual void __thiscall gizFerryMgr::Reset(void) | ?Reset@gizFerryMgr@@UAEXXZ
    0x579680 | public: bool __thiscall gizFerryMgr::Init(char *,char *,char *) | ?Init@gizFerryMgr@@QAE_NPAD00@Z
    0x5797D0 | public: virtual void __thiscall gizFerryMgr::Update(void) | ?Update@gizFerryMgr@@UAEXXZ
    0x579820 | public: virtual void __thiscall gizFerryMgr::Cull(void) | ?Cull@gizFerryMgr@@UAEXXZ
    0x579910 | private: void __thiscall gizFerryMgr::ApplyTuning(void) | ?ApplyTuning@gizFerryMgr@@AAEXXZ
    public: void __thiscall gizFerryMgr::AddWidgets(class bkBank *) | ?AddWidgets@gizFerryMgr@@QAEXPAVbkBank@@@Z
    0x579970 | public: virtual void * __thiscall gizFerryMgr::`scalar deleting destructor'(unsigned int) | ??_GgizFerryMgr@@UAEPAXI@Z
    public: virtual void * __thiscall gizFerryMgr::`vector deleting destructor'(unsigned int) | ??_EgizFerryMgr@@UAEPAXI@Z
    0x5799A0 | public: void * __thiscall gizFerry::`vector deleting destructor'(unsigned int) | ??_EgizFerry@@QAEPAXI@Z
    0x579A00 | public: virtual void __thiscall gizFerry::Draw(int) | ?Draw@gizFerry@@UAEXH@Z
    0x579A10 | public: virtual unsigned int __thiscall gizFerry::SizeOf(void) | ?SizeOf@gizFerry@@UAEIXZ
    0x5B6180 | const gizFerry::`vftable' | ??_7gizFerry@@6B@
    0x5B61F8 | const gizFerryMgr::`vftable' | ??_7gizFerryMgr@@6B@
*/

#include "hooking.h"
