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

#include "aiVehiclePlayer.h"

/*
    ai:aiVehicle

    0x5561E0 | public: __thiscall aiVehicle::aiVehicle(void) | ??0aiVehicle@@QAE@XZ
    0x5561F0 | public: __thiscall aiVehicle::~aiVehicle(void) | ??1aiVehicle@@QAE@XZ
    0x556200 | public: void __thiscall aiVehicle::Init(int) | ?Init@aiVehicle@@QAEXH@Z
    0x556210 | public: virtual void __thiscall aiVehicle::Reset(void) | ?Reset@aiVehicle@@UAEXXZ
    0x556230 | public: virtual void __thiscall aiVehicle::Update(void) | ?Update@aiVehicle@@UAEXXZ
    0x556250 | public: virtual void __thiscall aiVehicle::PreAvoid(class Vector3 const &,class Vector3 const &,float,class Vector3 &,class Vector3 &) | ?PreAvoid@aiVehicle@@UAEXABVVector3@@0MAAV2@1@Z
    0x556850 | public: virtual float __thiscall aiVehicle::IsBlockingTarget(class Vector3 const &,class Vector3 const &,float,float) | ?IsBlockingTarget@aiVehicle@@UAEMABVVector3@@0MM@Z
    0x556D00 | public: virtual void __thiscall aiVehicle::ReplayDebug(void) | ?ReplayDebug@aiVehicle@@UAEXXZ
    0x5B59E8 | const aiVehicle::`vftable' | ??_7aiVehicle@@6B@
    0x5B5A3C | const aiObstacle::`vftable' | ??_7aiObstacle@@6B@
*/

class aiVehicle : public aiObstacle
{
    // const aiVehicle::`vftable' @ 0x5B59E8

public:
    // 0x5561E0 | ??0aiVehicle@@QAE@XZ
    aiVehicle();

    // 0x5561F0 | ??1aiVehicle@@QAE@XZ
    ~aiVehicle();

    // 0x556200 | ?Init@aiVehicle@@QAEXH@Z
    void Init(i32 arg1);

    // 0x556850 | ?IsBlockingTarget@aiVehicle@@UAEMABVVector3@@0MM@Z
    f32 IsBlockingTarget(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, f32 arg4) override;

    // 0x556250 | ?PreAvoid@aiVehicle@@UAEXABVVector3@@0MAAV2@1@Z
    void PreAvoid(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, class Vector3& arg4,
        class Vector3& arg5) override;

    // 0x556230 | ?Update@aiVehicle@@UAEXXZ
    virtual void Update();

    // 0x556210 | ?Reset@aiVehicle@@UAEXXZ
    virtual void Reset();

    virtual i32 Type() = 0;

    virtual class Matrix34& GetMatrix() = 0;

    virtual f32 FrontBumperDistance() = 0;

    virtual f32 BackBumperDistance() = 0;

    virtual f32 LSideDistance() = 0;

    virtual f32 RSideDistance() = 0;

    virtual i32 CurrentLane() = 0;

    virtual i32 CurrentRoadId() = 0;

    virtual void DrawId() = 0;

    // 0x556D00 | ?ReplayDebug@aiVehicle@@UAEXXZ
    virtual void ReplayDebug();
};

check_size(aiVehicle, 0x0);
