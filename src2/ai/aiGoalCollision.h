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
    ai:aiGoalCollision

    0x56F550 | public: __thiscall aiGoalCollision::aiGoalCollision(class aiRailSet *,class aiVehicleSpline *) | ??0aiGoalCollision@@QAE@PAVaiRailSet@@PAVaiVehicleSpline@@@Z
    0x56F580 | public: __thiscall aiGoalCollision::~aiGoalCollision(void) | ??1aiGoalCollision@@QAE@XZ
    0x56F590 | public: virtual void __thiscall aiGoalCollision::Init(void) | ?Init@aiGoalCollision@@UAEXXZ
    0x56F5A0 | public: virtual void __thiscall aiGoalCollision::Reset(void) | ?Reset@aiGoalCollision@@UAEXXZ
    0x56F5B0 | public: virtual void __thiscall aiGoalCollision::Update(void) | ?Update@aiGoalCollision@@UAEXXZ
    0x56F620 | public: int __thiscall aiGoalCollision::Context(void) | ?Context@aiGoalCollision@@QAEHXZ
    0x56F640 | public: int __thiscall aiGoalCollision::Priority(void) | ?Priority@aiGoalCollision@@QAEHXZ
    0x5B5C14 | const aiGoalCollision::`vftable' | ??_7aiGoalCollision@@6B@
*/

struct aiGoalCollision : aiGoal
{
public:
    // aiGoalCollision::`vftable' @ 0x5B5C14

    // 0x56F550 | ??0aiGoalCollision@@QAE@PAVaiRailSet@@PAVaiVehicleSpline@@@Z
    inline aiGoalCollision(class aiRailSet* arg1, class aiVehicleSpline* arg2)
    {
        stub<member_func_t<void, aiGoalCollision, class aiRailSet*, class aiVehicleSpline*>>(
            0x56F550, this, arg1, arg2);
    }

    // 0x56F580 | ??1aiGoalCollision@@QAE@XZ
    inline ~aiGoalCollision()
    {
        stub<member_func_t<void, aiGoalCollision>>(0x56F580, this);
    }

    // 0x56F620 | ?Context@aiGoalCollision@@QAEHXZ
    inline i32 Context()
    {
        return stub<member_func_t<i32, aiGoalCollision>>(0x56F620, this);
    }

    // 0x56F640 | ?Priority@aiGoalCollision@@QAEHXZ
    inline i32 Priority()
    {
        return stub<member_func_t<i32, aiGoalCollision>>(0x56F640, this);
    }

    // 0x56F590 | ?Init@aiGoalCollision@@UAEXXZ
    inline void Init() override
    {
        return stub<member_func_t<void, aiGoalCollision>>(0x56F590, this);
    }

    // 0x56F5A0 | ?Reset@aiGoalCollision@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, aiGoalCollision>>(0x56F5A0, this);
    }

    // 0x56F5B0 | ?Update@aiGoalCollision@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiGoalCollision>>(0x56F5B0, this);
    }
};
