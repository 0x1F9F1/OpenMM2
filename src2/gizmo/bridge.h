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

#include "banger/banger.h"
#include "node/node.h"

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
    0x5DBFA4 | float LiftSpeed | ?LiftSpeed@@3MA
    0x5DBFA8 | float GoalAngle | ?GoalAngle@@3MA
    0x5DBFAC | float DownInterval | ?DownInterval@@3MA
    0x5DBFB0 | float UpInterval | ?UpInterval@@3MA
    0x5DBFB4 | float ProximityDist2 | ?ProximityDist2@@3MA
    class Vector3 Offset | ?Offset@@3VVector3@@A
    0x578240 | public: virtual void __thiscall gizBridge::Draw(int) | ?Draw@gizBridge@@UAEXH@Z
    0x577FF0 | public: virtual void __thiscall gizBridgeMgr::Cull(void) | ?Cull@gizBridgeMgr@@UAEXXZ
*/

class gizBridge : public dgUnhitMtxBangerInstance
{
    // const gizBridge::`vftable' @ 0x5B5F8C

public:
    // 0x577410 | ??0gizBridge@@QAE@XZ
    gizBridge();

    // 0x577490 | ??1gizBridge@@QAE@XZ
    // 0x5781E0 | ??_EgizBridge@@QAEPAXI@Z
    ~gizBridge();

    // 0x578240 | ?Draw@gizBridge@@UAEXH@Z
    void Draw(i32 arg1) override;

    // 0x577530 | ?Init@gizBridge@@QAEXPADABVMatrix34@@@Z
    void Init(char* arg1, class Matrix34 const& arg2);

    // 0x5774F0 | ?Reset@gizBridge@@UAEXXZ
    void Reset() override;

    // 0x578250 | ?SizeOf@gizBridge@@UAEIXZ
    u32 SizeOf() override;

    // 0x577910 | ?Trigger@gizBridge@@QAE_NXZ
    bool Trigger();

    // 0x5776D0 | ?Update@gizBridge@@QAEXXZ
    void Update();

private:
    // 0x577620 | ?Reposition@gizBridge@@AAEXXZ
    void Reposition();
};

check_size(gizBridge, 0x11C);

class gizBridgeMgr : public asNode
{
    // const gizBridgeMgr::`vftable' @ 0x5B6004

public:
    // 0x577950 | ??0gizBridgeMgr@@QAE@XZ
    gizBridgeMgr();

    // 0x5781B0 | ??_GgizBridgeMgr@@UAEPAXI@Z
    // 0x5779B0 | ??1gizBridgeMgr@@UAE@XZ
    ~gizBridgeMgr() override;

    // 0x578180 | ?AddProximityTrigger@gizBridgeMgr@@QAEXPAVVector3@@@Z
    void AddProximityTrigger(class Vector3* arg1);

    // 0x577FF0 | ?Cull@gizBridgeMgr@@UAEXXZ
    void Cull() override;

    // 0x578160 | ?GetBridges@gizBridgeMgr@@QAEPAVgizBridge@@H@Z
    class gizBridge* GetBridges(i32 arg1);

    // 0x577A70 | ?Init@gizBridgeMgr@@QAE_NPAD00@Z
    bool Init(char* arg1, char* arg2, char* arg3);

    // 0x577A40 | ?Reset@gizBridgeMgr@@UAEXXZ
    void Reset() override;

    // 0x577F90 | ?Update@gizBridgeMgr@@UAEXXZ
    void Update() override;

private:
    // 0x5780E0 | ?CheckProximity@gizBridgeMgr@@AAE_NPAVgizBridge@@@Z
    bool CheckProximity(class gizBridge* arg1);
};

check_size(gizBridgeMgr, 0x50);

// 0x5DBFAC | ?DownInterval@@3MA
inline extern_var(0x5DBFAC, f32, DownInterval);

// 0x5DBFA8 | ?GoalAngle@@3MA
inline extern_var(0x5DBFA8, f32, GoalAngle);

// 0x5DBFA4 | ?LiftSpeed@@3MA
inline extern_var(0x5DBFA4, f32, LiftSpeed);

// 0x5DBFB4 | ?ProximityDist2@@3MA
inline extern_var(0x5DBFB4, f32, ProximityDist2);

// 0x5DBFB0 | ?UpInterval@@3MA
inline extern_var(0x5DBFB0, f32, UpInterval);
