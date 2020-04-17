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
    ai:aiGoalAvoidPlayer

    0x56AD00 | public: __thiscall aiGoalAvoidPlayer::aiGoalAvoidPlayer(class aiRailSet *,class aiVehicleAmbient *) | ??0aiGoalAvoidPlayer@@QAE@PAVaiRailSet@@PAVaiVehicleAmbient@@@Z
    0x56AD30 | public: __thiscall aiGoalAvoidPlayer::~aiGoalAvoidPlayer(void) | ??1aiGoalAvoidPlayer@@QAE@XZ
    0x56AD40 | public: virtual void __thiscall aiGoalAvoidPlayer::Init(void) | ?Init@aiGoalAvoidPlayer@@UAEXXZ
    0x56AD50 | public: virtual void __thiscall aiGoalAvoidPlayer::Reset(void) | ?Reset@aiGoalAvoidPlayer@@UAEXXZ
    0x56AF50 | public: virtual void __thiscall aiGoalAvoidPlayer::Update(void) | ?Update@aiGoalAvoidPlayer@@UAEXXZ
    0x56B200 | private: void __thiscall aiGoalAvoidPlayer::AvoidPlayer(void) | ?AvoidPlayer@aiGoalAvoidPlayer@@AAEXXZ
    0x56B4F0 | public: int __thiscall aiGoalAvoidPlayer::Context(void) | ?Context@aiGoalAvoidPlayer@@QAEHXZ
    0x56B510 | public: int __thiscall aiGoalAvoidPlayer::Priority(void) | ?Priority@aiGoalAvoidPlayer@@QAEHXZ
    0x56B520 | public: void __thiscall aiGoalAvoidPlayer::Dump(void) | ?Dump@aiGoalAvoidPlayer@@QAEXXZ
    0x56B570 | public: void __thiscall aiGoalAvoidPlayer::ReplayDebug(void) | ?ReplayDebug@aiGoalAvoidPlayer@@QAEXXZ
    0x56B6D0 | public: virtual void __thiscall aiGoal::Update(void) | ?Update@aiGoal@@UAEXXZ
    0x5B5BB8 | const aiGoalAvoidPlayer::`vftable' | ??_7aiGoalAvoidPlayer@@6B@
    0x5B5BC4 | const aiGoal::`vftable' | ??_7aiGoal@@6B@
*/

struct aiGoalAvoidPlayer : aiGoal
{
public:
    // aiGoalAvoidPlayer::`vftable' @ 0x5B5BB8

    // 0x56AD00 | ??0aiGoalAvoidPlayer@@QAE@PAVaiRailSet@@PAVaiVehicleAmbient@@@Z
    aiGoalAvoidPlayer(class aiRailSet* arg1, class aiVehicleAmbient* arg2)
    {
        stub<member_func_t<void, aiGoalAvoidPlayer, class aiRailSet*, class aiVehicleAmbient*>>(
            0x56AD00, this, arg1, arg2);
    }

    // 0x56AD30 | ??1aiGoalAvoidPlayer@@QAE@XZ
    ~aiGoalAvoidPlayer()
    {
        stub<member_func_t<void, aiGoalAvoidPlayer>>(0x56AD30, this);
    }

    // 0x56B200 | ?AvoidPlayer@aiGoalAvoidPlayer@@AAEXXZ
    void AvoidPlayer()
    {
        return stub<member_func_t<void, aiGoalAvoidPlayer>>(0x56B200, this);
    }

    // 0x56B4F0 | ?Context@aiGoalAvoidPlayer@@QAEHXZ
    i32 Context()
    {
        return stub<member_func_t<i32, aiGoalAvoidPlayer>>(0x56B4F0, this);
    }

    // 0x56B510 | ?Priority@aiGoalAvoidPlayer@@QAEHXZ
    i32 Priority()
    {
        return stub<member_func_t<i32, aiGoalAvoidPlayer>>(0x56B510, this);
    }

    // 0x56B520 | ?Dump@aiGoalAvoidPlayer@@QAEXXZ
    void Dump()
    {
        return stub<member_func_t<void, aiGoalAvoidPlayer>>(0x56B520, this);
    }

    // 0x56B570 | ?ReplayDebug@aiGoalAvoidPlayer@@QAEXXZ
    void ReplayDebug()
    {
        return stub<member_func_t<void, aiGoalAvoidPlayer>>(0x56B570, this);
    }

    // 0x56AD40 | ?Init@aiGoalAvoidPlayer@@UAEXXZ
    void Init() override
    {
        return stub<member_func_t<void, aiGoalAvoidPlayer>>(0x56AD40, this);
    }

    // 0x56AD50 | ?Reset@aiGoalAvoidPlayer@@UAEXXZ
    void Reset() override
    {
        return stub<member_func_t<void, aiGoalAvoidPlayer>>(0x56AD50, this);
    }

    // 0x56AF50 | ?Update@aiGoalAvoidPlayer@@UAEXXZ
    void Update() override
    {
        return stub<member_func_t<void, aiGoalAvoidPlayer>>(0x56AF50, this);
    }
};

struct aiGoal
{
public:
    // aiGoal::`vftable' @ 0x5B5BC4

    // 0x582519 | __purecall
    virtual void Init()
    {
        return stub<member_func_t<void, aiGoal>>(0x582519, this);
    }

    // 0x582519 | __purecall
    virtual void Reset()
    {
        return stub<member_func_t<void, aiGoal>>(0x582519, this);
    }

    // 0x56B6D0 | ?Update@aiGoal@@UAEXXZ
    virtual void Update()
    {
        return stub<member_func_t<void, aiGoal>>(0x56B6D0, this);
    }
};
