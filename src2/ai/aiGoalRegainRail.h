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

struct aiGoalRegainRail
{
    // const aiGoalRegainRail::`vftable' @ 0x5B5BDC

public:
    // 0x56B6E0 | ??0aiGoalRegainRail@@QAE@PAVaiRailSet@@PAVaiVehicleAmbient@@@Z
    aiGoalRegainRail(class aiRailSet* arg1, class aiVehicleAmbient* arg2);

    // 0x56B710 | ??1aiGoalRegainRail@@QAE@XZ
    ~aiGoalRegainRail();

    // 0x56BF00 | ?Dump@aiGoalRegainRail@@QAEXXZ
    void Dump();

    // 0x56BF60 | ?ReplayDebug@aiGoalRegainRail@@QAEXXZ
    void ReplayDebug();

    // 0x56B720 | ?Init@aiGoalRegainRail@@UAEXXZ
    virtual void Init();

    // 0x56B750 | ?Reset@aiGoalRegainRail@@UAEXXZ
    virtual void Reset();

    // 0x56BD80 | ?Update@aiGoalRegainRail@@UAEXXZ
    virtual void Update();
};

check_size(aiGoalRegainRail, 0x24);
