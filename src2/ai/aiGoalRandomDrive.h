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
    ai:aiGoalRandomDrive

    0x56C0C0 | public: __thiscall aiGoalRandomDrive::aiGoalRandomDrive(class aiRailSet *,class aiVehicleSpline *) | ??0aiGoalRandomDrive@@QAE@PAVaiRailSet@@PAVaiVehicleSpline@@@Z
    0x56C180 | public: __thiscall aiGoalRandomDrive::~aiGoalRandomDrive(void) | ??1aiGoalRandomDrive@@QAE@XZ
    0x56C190 | public: virtual void __thiscall aiGoalRandomDrive::Init(void) | ?Init@aiGoalRandomDrive@@UAEXXZ
    0x56C1B0 | public: virtual void __thiscall aiGoalRandomDrive::Reset(void) | ?Reset@aiGoalRandomDrive@@UAEXXZ
    0x56CBF0 | public: virtual void __thiscall aiGoalRandomDrive::Update(void) | ?Update@aiGoalRandomDrive@@UAEXXZ
    0x56CDC0 | public: int __thiscall aiGoalRandomDrive::Context(void) | ?Context@aiGoalRandomDrive@@QAEHXZ
    0x56CDE0 | public: int __thiscall aiGoalRandomDrive::Priority(void) | ?Priority@aiGoalRandomDrive@@QAEHXZ
    0x56CDF0 | private: void __thiscall aiGoalRandomDrive::SolveVelocity(void) | ?SolveVelocity@aiGoalRandomDrive@@AAEXXZ
    0x56D5F0 | private: int __thiscall aiGoalRandomDrive::UpcomingAccident(void) | ?UpcomingAccident@aiGoalRandomDrive@@AAEHXZ
    0x56D6A0 | private: float __thiscall aiGoalRandomDrive::SpeedLimit(void) | ?SpeedLimit@aiGoalRandomDrive@@AAEMXZ
    0x56D6F0 | private: int __thiscall aiGoalRandomDrive::OkayToEnterIntersection(float) | ?OkayToEnterIntersection@aiGoalRandomDrive@@AAEHM@Z
    0x56D8A0 | private: int __thiscall aiGoalRandomDrive::AnyVehiclesComingThisWay(void) | ?AnyVehiclesComingThisWay@aiGoalRandomDrive@@AAEHXZ
    0x56DB20 | private: void __thiscall aiGoalRandomDrive::AvoidCollision(class aiVehicleSpline *,float) | ?AvoidCollision@aiGoalRandomDrive@@AAEXPAVaiVehicleSpline@@M@Z
    0x56DD60 | public: void __thiscall aiGoalRandomDrive::SolvePosition(class Vector3 &,float) | ?SolvePosition@aiGoalRandomDrive@@QAEXAAVVector3@@M@Z
    0x56DDB0 | private: bool __thiscall aiGoalRandomDrive::SolveRailType(void) | ?SolveRailType@aiGoalRandomDrive@@AAE_NXZ
    0x56ED50 | private: void __thiscall aiGoalRandomDrive::SolveLane(void) | ?SolveLane@aiGoalRandomDrive@@AAEXXZ
    0x56EE60 | private: void __thiscall aiGoalRandomDrive::ChangeLanes(void) | ?ChangeLanes@aiGoalRandomDrive@@AAEXXZ
    0x56F3C0 | public: void __thiscall aiGoalRandomDrive::Dump(void) | ?Dump@aiGoalRandomDrive@@QAEXXZ
    0x56F3F0 | public: void __thiscall aiGoalRandomDrive::ReplayDebug(void) | ?ReplayDebug@aiGoalRandomDrive@@QAEXXZ
    public: __thiscall aiGoal::~aiGoal(void) | ??1aiGoal@@QAE@XZ
    0x5B5BF4 | const aiGoalRandomDrive::`vftable' | ??_7aiGoalRandomDrive@@6B@
*/

struct aiGoalRandomDrive : aiGoal
{
public:
    // aiGoalRandomDrive::`vftable' @ 0x5B5BF4

    // 0x56C0C0 | ??0aiGoalRandomDrive@@QAE@PAVaiRailSet@@PAVaiVehicleSpline@@@Z
    aiGoalRandomDrive(class aiRailSet* arg1, class aiVehicleSpline* arg2)
    {
        stub<member_func_t<void, aiGoalRandomDrive, class aiRailSet*, class aiVehicleSpline*>>(
            0x56C0C0, this, arg1, arg2);
    }

    // 0x56C180 | ??1aiGoalRandomDrive@@QAE@XZ
    ~aiGoalRandomDrive()
    {
        stub<member_func_t<void, aiGoalRandomDrive>>(0x56C180, this);
    }

    // 0x56CDC0 | ?Context@aiGoalRandomDrive@@QAEHXZ
    i32 Context()
    {
        return stub<member_func_t<i32, aiGoalRandomDrive>>(0x56CDC0, this);
    }

    // 0x56CDE0 | ?Priority@aiGoalRandomDrive@@QAEHXZ
    i32 Priority()
    {
        return stub<member_func_t<i32, aiGoalRandomDrive>>(0x56CDE0, this);
    }

    // 0x56CDF0 | ?SolveVelocity@aiGoalRandomDrive@@AAEXXZ
    void SolveVelocity()
    {
        return stub<member_func_t<void, aiGoalRandomDrive>>(0x56CDF0, this);
    }

    // 0x56D5F0 | ?UpcomingAccident@aiGoalRandomDrive@@AAEHXZ
    i32 UpcomingAccident()
    {
        return stub<member_func_t<i32, aiGoalRandomDrive>>(0x56D5F0, this);
    }

    // 0x56D6A0 | ?SpeedLimit@aiGoalRandomDrive@@AAEMXZ
    f32 SpeedLimit()
    {
        return stub<member_func_t<f32, aiGoalRandomDrive>>(0x56D6A0, this);
    }

    // 0x56D6F0 | ?OkayToEnterIntersection@aiGoalRandomDrive@@AAEHM@Z
    i32 OkayToEnterIntersection(f32 arg1)
    {
        return stub<member_func_t<i32, aiGoalRandomDrive, f32>>(0x56D6F0, this, arg1);
    }

    // 0x56D8A0 | ?AnyVehiclesComingThisWay@aiGoalRandomDrive@@AAEHXZ
    i32 AnyVehiclesComingThisWay()
    {
        return stub<member_func_t<i32, aiGoalRandomDrive>>(0x56D8A0, this);
    }

    // 0x56DB20 | ?AvoidCollision@aiGoalRandomDrive@@AAEXPAVaiVehicleSpline@@M@Z
    void AvoidCollision(class aiVehicleSpline* arg1, f32 arg2)
    {
        return stub<member_func_t<void, aiGoalRandomDrive, class aiVehicleSpline*, f32>>(0x56DB20, this, arg1, arg2);
    }

    // 0x56DD60 | ?SolvePosition@aiGoalRandomDrive@@QAEXAAVVector3@@M@Z
    void SolvePosition(class Vector3& arg1, f32 arg2)
    {
        return stub<member_func_t<void, aiGoalRandomDrive, class Vector3&, f32>>(0x56DD60, this, arg1, arg2);
    }

    // 0x56DDB0 | ?SolveRailType@aiGoalRandomDrive@@AAE_NXZ
    bool SolveRailType()
    {
        return stub<member_func_t<bool, aiGoalRandomDrive>>(0x56DDB0, this);
    }

    // 0x56ED50 | ?SolveLane@aiGoalRandomDrive@@AAEXXZ
    void SolveLane()
    {
        return stub<member_func_t<void, aiGoalRandomDrive>>(0x56ED50, this);
    }

    // 0x56EE60 | ?ChangeLanes@aiGoalRandomDrive@@AAEXXZ
    void ChangeLanes()
    {
        return stub<member_func_t<void, aiGoalRandomDrive>>(0x56EE60, this);
    }

    // 0x56F3C0 | ?Dump@aiGoalRandomDrive@@QAEXXZ
    void Dump()
    {
        return stub<member_func_t<void, aiGoalRandomDrive>>(0x56F3C0, this);
    }

    // 0x56F3F0 | ?ReplayDebug@aiGoalRandomDrive@@QAEXXZ
    void ReplayDebug()
    {
        return stub<member_func_t<void, aiGoalRandomDrive>>(0x56F3F0, this);
    }

    // 0x56C190 | ?Init@aiGoalRandomDrive@@UAEXXZ
    void Init() override
    {
        return stub<member_func_t<void, aiGoalRandomDrive>>(0x56C190, this);
    }

    // 0x56C1B0 | ?Reset@aiGoalRandomDrive@@UAEXXZ
    void Reset() override
    {
        return stub<member_func_t<void, aiGoalRandomDrive>>(0x56C1B0, this);
    }

    // 0x56CBF0 | ?Update@aiGoalRandomDrive@@UAEXXZ
    void Update() override
    {
        return stub<member_func_t<void, aiGoalRandomDrive>>(0x56CBF0, this);
    }
};
