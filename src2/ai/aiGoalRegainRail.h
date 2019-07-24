/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
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
    ai:aiGoalRegainRail

    0x56B6E0 | public: __thiscall aiGoalRegainRail::aiGoalRegainRail(class aiRailSet *,class aiVehicleAmbient *) | ??0aiGoalRegainRail@@QAE@PAVaiRailSet@@PAVaiVehicleAmbient@@@Z
    0x56B710 | public: __thiscall aiGoalRegainRail::~aiGoalRegainRail(void) | ??1aiGoalRegainRail@@QAE@XZ
    0x56B720 | public: virtual void __thiscall aiGoalRegainRail::Init(void) | ?Init@aiGoalRegainRail@@UAEXXZ
    0x56B750 | public: virtual void __thiscall aiGoalRegainRail::Reset(void) | ?Reset@aiGoalRegainRail@@UAEXXZ
    0x56BD80 | public: virtual void __thiscall aiGoalRegainRail::Update(void) | ?Update@aiGoalRegainRail@@UAEXXZ
    private: void __thiscall aiGoalRegainRail::CheckPosition(void) | ?CheckPosition@aiGoalRegainRail@@AAEXXZ
    0x56BF00 | public: void __thiscall aiGoalRegainRail::Dump(void) | ?Dump@aiGoalRegainRail@@QAEXXZ
    0x56BF60 | public: void __thiscall aiGoalRegainRail::ReplayDebug(void) | ?ReplayDebug@aiGoalRegainRail@@QAEXXZ
    0x5B5BDC | const aiGoalRegainRail::`vftable' | ??_7aiGoalRegainRail@@6B@
*/

struct aiGoalRegainRail : aiGoal
{
public:
    // aiGoalRegainRail::`vftable' @ 0x5B5BDC

    // 0x56B6E0 | ??0aiGoalRegainRail@@QAE@PAVaiRailSet@@PAVaiVehicleAmbient@@@Z
    inline aiGoalRegainRail(class aiRailSet* arg1, class aiVehicleAmbient* arg2)
    {
        stub<member_func_t<void, aiGoalRegainRail, class aiRailSet*, class aiVehicleAmbient*>>(
            0x56B6E0, this, arg1, arg2);
    }

    // 0x56B710 | ??1aiGoalRegainRail@@QAE@XZ
    inline ~aiGoalRegainRail()
    {
        stub<member_func_t<void, aiGoalRegainRail>>(0x56B710, this);
    }

    // 0x56BF00 | ?Dump@aiGoalRegainRail@@QAEXXZ
    inline void Dump()
    {
        return stub<member_func_t<void, aiGoalRegainRail>>(0x56BF00, this);
    }

    // 0x56BF60 | ?ReplayDebug@aiGoalRegainRail@@QAEXXZ
    inline void ReplayDebug()
    {
        return stub<member_func_t<void, aiGoalRegainRail>>(0x56BF60, this);
    }

    // 0x56B720 | ?Init@aiGoalRegainRail@@UAEXXZ
    inline void Init() override
    {
        return stub<member_func_t<void, aiGoalRegainRail>>(0x56B720, this);
    }

    // 0x56B750 | ?Reset@aiGoalRegainRail@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, aiGoalRegainRail>>(0x56B750, this);
    }

    // 0x56BD80 | ?Update@aiGoalRegainRail@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiGoalRegainRail>>(0x56BD80, this);
    }
};
