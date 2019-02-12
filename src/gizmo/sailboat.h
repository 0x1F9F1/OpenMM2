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
    gizmo:sailboat

    0x578260 | public: __thiscall gizSailboat::gizSailboat(void) | ??0gizSailboat@@QAE@XZ
    0x5782B0 | public: __thiscall gizSailboat::~gizSailboat(void) | ??1gizSailboat@@QAE@XZ
    0x578320 | public: virtual void __thiscall gizSailboat::Reset(void) | ?Reset@gizSailboat@@UAEXXZ
    0x578330 | public: void __thiscall gizSailboat::Init(char *,class dgPath *) | ?Init@gizSailboat@@QAEXPADPAVdgPath@@@Z
    0x578410 | public: void __thiscall gizSailboat::Update(void) | ?Update@gizSailboat@@QAEXXZ
    0x578490 | public: void __thiscall gizSailboat::SetSpeed(float) | ?SetSpeed@gizSailboat@@QAEXM@Z
    0x5784B0 | public: __thiscall gizSailboatMgr::gizSailboatMgr(void) | ??0gizSailboatMgr@@QAE@XZ
    0x578520 | public: virtual __thiscall gizSailboatMgr::~gizSailboatMgr(void) | ??1gizSailboatMgr@@UAE@XZ
    0x5785C0 | public: virtual void __thiscall gizSailboatMgr::Reset(void) | ?Reset@gizSailboatMgr@@UAEXXZ
    0x5785F0 | public: bool __thiscall gizSailboatMgr::Init(char *,char *,char *) | ?Init@gizSailboatMgr@@QAE_NPAD00@Z
    0x578770 | public: virtual void __thiscall gizSailboatMgr::Update(void) | ?Update@gizSailboatMgr@@UAEXXZ
    0x5787A0 | private: void __thiscall gizSailboatMgr::ApplyTuning(void) | ?ApplyTuning@gizSailboatMgr@@AAEXXZ
    public: void __thiscall gizSailboatMgr::AddWidgets(class bkBank *) | ?AddWidgets@gizSailboatMgr@@QAEXPAVbkBank@@@Z
    public: virtual void * __thiscall gizSailboatMgr::`vector deleting destructor'(unsigned int) | ??_EgizSailboatMgr@@UAEPAXI@Z
    0x578800 | public: virtual void * __thiscall gizSailboatMgr::`scalar deleting destructor'(unsigned int) | ??_GgizSailboatMgr@@UAEPAXI@Z
    0x578830 | public: void * __thiscall gizSailboat::`vector deleting destructor'(unsigned int) | ??_EgizSailboat@@QAEPAXI@Z
    0x578890 | public: virtual unsigned int __thiscall gizSailboat::SizeOf(void) | ?SizeOf@gizSailboat@@UAEIXZ
    0x5B6038 | const gizSailboat::`vftable' | ??_7gizSailboat@@6B@
    0x5B60A0 | const gizSailboatMgr::`vftable' | ??_7gizSailboatMgr@@6B@
    0x6B46BC | class gizSailboatMgr * SAILBOAT | ?SAILBOAT@@3PAVgizSailboatMgr@@A
*/

// #include "hooking.h"
