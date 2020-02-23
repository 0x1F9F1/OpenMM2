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
    0x578240 | public: virtual void __thiscall gizBridge::Draw(int) | ?Draw@gizBridge@@UAEXH@Z
    0x577FF0 | public: virtual void __thiscall gizBridgeMgr::Cull(void) | ?Cull@gizBridgeMgr@@UAEXXZ
*/

class gizBridge : dgUnhitMtxBangerInstance
{
public:
    // gizBridge::`vftable' @ 0x5B5F8C

    // 0x577410 | ??0gizBridge@@QAE@XZ
    inline gizBridge()
    {
        stub<member_func_t<void, gizBridge>>(0x577410, this);
    }

    // 0x577490 | ??1gizBridge@@QAE@XZ
    inline ~gizBridge()
    {
        stub<member_func_t<void, gizBridge>>(0x577490, this);
    }

    // 0x577530 | ?Init@gizBridge@@QAEXPADABVMatrix34@@@Z
    inline void Init(char* arg1, class Matrix34 const& arg2)
    {
        return stub<member_func_t<void, gizBridge, char*, class Matrix34 const&>>(0x577530, this, arg1, arg2);
    }

    // 0x577620 | ?Reposition@gizBridge@@AAEXXZ
    inline void Reposition()
    {
        return stub<member_func_t<void, gizBridge>>(0x577620, this);
    }

    // 0x5776D0 | ?Update@gizBridge@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, gizBridge>>(0x5776D0, this);
    }

    // 0x577910 | ?Trigger@gizBridge@@QAE_NXZ
    inline bool Trigger()
    {
        return stub<member_func_t<bool, gizBridge>>(0x577910, this);
    }

    // 0x5781E0 | ??_EgizBridge@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)

    // 0x5774F0 | ?Reset@gizBridge@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, gizBridge>>(0x5774F0, this);
    }

    // 0x578240 | ?Draw@gizBridge@@UAEXH@Z
    inline void Draw(i32 arg1) override
    {
        return stub<member_func_t<void, gizBridge, i32>>(0x578240, this, arg1);
    }

    // 0x578250 | ?SizeOf@gizBridge@@UAEIXZ
    inline u32 SizeOf() override
    {
        return stub<member_func_t<u32, gizBridge>>(0x578250, this);
    }
};

class gizBridgeMgr : asNode
{
public:
    // gizBridgeMgr::`vftable' @ 0x5B6004

    // 0x577950 | ??0gizBridgeMgr@@QAE@XZ
    inline gizBridgeMgr()
    {
        stub<member_func_t<void, gizBridgeMgr>>(0x577950, this);
    }

    // 0x577A70 | ?Init@gizBridgeMgr@@QAE_NPAD00@Z
    inline bool Init(char* arg1, char* arg2, char* arg3)
    {
        return stub<member_func_t<bool, gizBridgeMgr, char*, char*, char*>>(0x577A70, this, arg1, arg2, arg3);
    }

    // 0x5780E0 | ?CheckProximity@gizBridgeMgr@@AAE_NPAVgizBridge@@@Z
    inline bool CheckProximity(class gizBridge* arg1)
    {
        return stub<member_func_t<bool, gizBridgeMgr, class gizBridge*>>(0x5780E0, this, arg1);
    }

    // 0x578160 | ?GetBridges@gizBridgeMgr@@QAEPAVgizBridge@@H@Z
    inline class gizBridge* GetBridges(i32 arg1)
    {
        return stub<member_func_t<class gizBridge*, gizBridgeMgr, i32>>(0x578160, this, arg1);
    }

    // 0x578180 | ?AddProximityTrigger@gizBridgeMgr@@QAEXPAVVector3@@@Z
    inline void AddProximityTrigger(class Vector3* arg1)
    {
        return stub<member_func_t<void, gizBridgeMgr, class Vector3*>>(0x578180, this, arg1);
    }

    // 0x5779B0 | ??1gizBridgeMgr@@UAE@XZ
    inline ~gizBridgeMgr() override
    {
        stub<member_func_t<void, gizBridgeMgr>>(0x5779B0, this);
    }

    // 0x577FF0 | ?Cull@gizBridgeMgr@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, gizBridgeMgr>>(0x577FF0, this);
    }

    // 0x577F90 | ?Update@gizBridgeMgr@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, gizBridgeMgr>>(0x577F90, this);
    }

    // 0x577A40 | ?Reset@gizBridgeMgr@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, gizBridgeMgr>>(0x577A40, this);
    }
};
