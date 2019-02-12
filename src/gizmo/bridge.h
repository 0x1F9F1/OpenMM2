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
    gizmo:bridge

    0x577410 | public: __thiscall gizBridge::gizBridge(void) | ??0gizBridge@@QAE@XZ
    0x577490 | public: __thiscall gizBridge::~gizBridge(void) | ??1gizBridge@@QAE@XZ
    0x5774F0 | public: virtual void __thiscall gizBridge::Reset(void) | ?Reset@gizBridge@@UAEXXZ
    0x577530 | public: void __thiscall gizBridge::Init(char *,class Matrix34 const &) | ?Init@gizBridge@@QAEXPADABVMatrix34@@@Z
    0x577620 | private: void __thiscall gizBridge::Reposition(void) | ?Reposition@gizBridge@@AAEXXZ
    0x5776D0 | public: void __thiscall gizBridge::Update(void) | ?Update@gizBridge@@QAEXXZ
    0x577910 | public: bool __thiscall gizBridge::Trigger(void) | ?Trigger@gizBridge@@QAE_NXZ
    0x577950 | public: __thiscall gizBridgeMgr::gizBridgeMgr(void) | ??0gizBridgeMgr@@QAE@XZ
    0x5779B0 | public: virtual __thiscall gizBridgeMgr::~gizBridgeMgr(void) | ??1gizBridgeMgr@@UAE@XZ
    0x577A40 | public: virtual void __thiscall gizBridgeMgr::Reset(void) | ?Reset@gizBridgeMgr@@UAEXXZ
    0x577A70 | public: bool __thiscall gizBridgeMgr::Init(char *,char *,char *) | ?Init@gizBridgeMgr@@QAE_NPAD00@Z
    0x577F90 | public: virtual void __thiscall gizBridgeMgr::Update(void) | ?Update@gizBridgeMgr@@UAEXXZ
    0x5780E0 | private: bool __thiscall gizBridgeMgr::CheckProximity(class gizBridge *) | ?CheckProximity@gizBridgeMgr@@AAE_NPAVgizBridge@@@Z
    0x578160 | public: class gizBridge * __thiscall gizBridgeMgr::GetBridges(int) | ?GetBridges@gizBridgeMgr@@QAEPAVgizBridge@@H@Z
    0x578180 | public: void __thiscall gizBridgeMgr::AddProximityTrigger(class Vector3 *) | ?AddProximityTrigger@gizBridgeMgr@@QAEXPAVVector3@@@Z
    public: void __thiscall gizBridgeMgr::AddWidgets(class bkBank *) | ?AddWidgets@gizBridgeMgr@@QAEXPAVbkBank@@@Z
    0x5781B0 | public: virtual void * __thiscall gizBridgeMgr::`scalar deleting destructor'(unsigned int) | ??_GgizBridgeMgr@@UAEPAXI@Z
    public: virtual void * __thiscall gizBridgeMgr::`vector deleting destructor'(unsigned int) | ??_EgizBridgeMgr@@UAEPAXI@Z
    0x5781E0 | public: void * __thiscall gizBridge::`vector deleting destructor'(unsigned int) | ??_EgizBridge@@QAEPAXI@Z
    0x578250 | public: virtual unsigned int __thiscall gizBridge::SizeOf(void) | ?SizeOf@gizBridge@@UAEIXZ
    0x5B5F8C | const gizBridge::`vftable' | ??_7gizBridge@@6B@
    0x5B6004 | const gizBridgeMgr::`vftable' | ??_7gizBridgeMgr@@6B@
    float LiftSpeed | ?LiftSpeed@@3MA
    float GoalAngle | ?GoalAngle@@3MA
    float DownInterval | ?DownInterval@@3MA
    float UpInterval | ?UpInterval@@3MA
    float ProximityDist2 | ?ProximityDist2@@3MA
    class Vector3 Offset | ?Offset@@3VVector3@@A
*/

// #include "hooking.h"
