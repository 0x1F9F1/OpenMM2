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

#include "aiVehicle.h"

/*
    ai:aiVehiclePlayer

    0x53F320 | public: __thiscall aiVehiclePlayer::aiVehiclePlayer(void) | ??0aiVehiclePlayer@@QAE@XZ
    0x53F340 | public: __thiscall aiVehiclePlayer::~aiVehiclePlayer(void) | ??1aiVehiclePlayer@@QAE@XZ
    0x53F350 | public: void __thiscall aiVehiclePlayer::Attach(class vehCar *) | ?Attach@aiVehiclePlayer@@QAEXPAVvehCar@@@Z
    0x53F360 | public: virtual void __thiscall aiVehiclePlayer::Reset(void) | ?Reset@aiVehiclePlayer@@UAEXXZ
    0x53F420 | public: virtual void __thiscall aiVehiclePlayer::Update(void) | ?Update@aiVehiclePlayer@@UAEXXZ
    0x53F540 | public: virtual int __thiscall aiVehiclePlayer::CurrentRoadIdx(class aiPath * *,bool * const,int *) | ?CurrentRoadIdx@aiVehiclePlayer@@UAEHPAPAVaiPath@@QA_NPAH@Z
    0x53F5B0 | public: virtual int __thiscall aiVehiclePlayer::CurrentRdVert(void) | ?CurrentRdVert@aiVehiclePlayer@@UAEHXZ
    0x53F5C0 | public: virtual void __thiscall aiVehiclePlayer::DrawId(void) | ?DrawId@aiVehiclePlayer@@UAEXXZ
    0x53F5D0 | public: virtual int __thiscall aiObstacle::InAccident(void) | ?InAccident@aiObstacle@@UAEHXZ
    0x53F5E0 | public: virtual float __thiscall aiObstacle::BreakThreshold(void) | ?BreakThreshold@aiObstacle@@UAEMXZ
    0x53F5F0 | public: virtual int __thiscall aiObstacle::Drivable(void) | ?Drivable@aiObstacle@@UAEHXZ
    0x53F600 | public: virtual int __thiscall aiVehiclePlayer::Type(void) | ?Type@aiVehiclePlayer@@UAEHXZ
    0x53F610 | public: virtual float __thiscall aiVehiclePlayer::Speed(void) | ?Speed@aiVehiclePlayer@@UAEMXZ
    0x53F620 | public: virtual void __thiscall aiVehiclePlayer::Position(class Vector3 &) | ?Position@aiVehiclePlayer@@UAEXAAVVector3@@@Z
    0x53F650 | public: virtual class Matrix34 & __thiscall aiVehiclePlayer::GetMatrix(void) | ?GetMatrix@aiVehiclePlayer@@UAEAAVMatrix34@@XZ
    0x53F660 | public: virtual float __thiscall aiVehiclePlayer::FrontBumperDistance(void) | ?FrontBumperDistance@aiVehiclePlayer@@UAEMXZ
    0x53F680 | public: virtual float __thiscall aiVehiclePlayer::BackBumperDistance(void) | ?BackBumperDistance@aiVehiclePlayer@@UAEMXZ
    0x53F6A0 | public: virtual float __thiscall aiVehiclePlayer::LSideDistance(void) | ?LSideDistance@aiVehiclePlayer@@UAEMXZ
    0x53F6C0 | public: virtual float __thiscall aiVehiclePlayer::RSideDistance(void) | ?RSideDistance@aiVehiclePlayer@@UAEMXZ
    0x53F6E0 | public: virtual int __thiscall aiVehiclePlayer::CurrentLane(void) | ?CurrentLane@aiVehiclePlayer@@UAEHXZ
    0x53F6F0 | public: virtual int __thiscall aiVehiclePlayer::CurrentRoadId(void) | ?CurrentRoadId@aiVehiclePlayer@@UAEHXZ
    0x5B55AC | const aiVehiclePlayer::`vftable' | ??_7aiVehiclePlayer@@6B@
*/

class aiVehiclePlayer : public aiVehicle
{
    // const aiVehiclePlayer::`vftable' @ 0x5B55AC

public:
    // 0x53F320 | ??0aiVehiclePlayer@@QAE@XZ
    aiVehiclePlayer();

    // 0x53F340 | ??1aiVehiclePlayer@@QAE@XZ
    ~aiVehiclePlayer();

    // 0x53F350 | ?Attach@aiVehiclePlayer@@QAEXPAVvehCar@@@Z
    void Attach(class vehCar* arg1);

    // 0x53F680 | ?BackBumperDistance@aiVehiclePlayer@@UAEMXZ
    f32 BackBumperDistance() override;

    // 0x53F6E0 | ?CurrentLane@aiVehiclePlayer@@UAEHXZ
    i32 CurrentLane() override;

    // 0x53F5B0 | ?CurrentRdVert@aiVehiclePlayer@@UAEHXZ
    i32 CurrentRdVert() override;

    // 0x53F6F0 | ?CurrentRoadId@aiVehiclePlayer@@UAEHXZ
    i32 CurrentRoadId() override;

    // 0x53F540 | ?CurrentRoadIdx@aiVehiclePlayer@@UAEHPAPAVaiPath@@QA_NPAH@Z
    i32 CurrentRoadIdx(class aiPath** arg1, bool* const arg2, i32* arg3) override;

    // 0x53F5C0 | ?DrawId@aiVehiclePlayer@@UAEXXZ
    void DrawId() override;

    // 0x53F660 | ?FrontBumperDistance@aiVehiclePlayer@@UAEMXZ
    f32 FrontBumperDistance() override;

    // 0x53F650 | ?GetMatrix@aiVehiclePlayer@@UAEAAVMatrix34@@XZ
    class Matrix34& GetMatrix() override;

    // 0x53F6A0 | ?LSideDistance@aiVehiclePlayer@@UAEMXZ
    f32 LSideDistance() override;

    // 0x53F620 | ?Position@aiVehiclePlayer@@UAEXAAVVector3@@@Z
    void Position(class Vector3& arg1) override;

    // 0x53F6C0 | ?RSideDistance@aiVehiclePlayer@@UAEMXZ
    f32 RSideDistance() override;

    // 0x53F360 | ?Reset@aiVehiclePlayer@@UAEXXZ
    void Reset() override;

    // 0x53F610 | ?Speed@aiVehiclePlayer@@UAEMXZ
    f32 Speed() override;

    // 0x53F600 | ?Type@aiVehiclePlayer@@UAEHXZ
    i32 Type() override;

    // 0x53F420 | ?Update@aiVehiclePlayer@@UAEXXZ
    void Update() override;
};

check_size(aiVehiclePlayer, 0x30);

class aiObstacle
{
    // const aiObstacle::`vftable' @ 0x5B5A3C

public:
    // 0x53F5D0 | ?InAccident@aiObstacle@@UAEHXZ
    virtual i32 InAccident();

    virtual void Position(class Vector3& arg1) = 0;

    virtual f32 Speed() = 0;

    // 0x53F5E0 | ?BreakThreshold@aiObstacle@@UAEMXZ
    virtual f32 BreakThreshold();

    // 0x53F5F0 | ?Drivable@aiObstacle@@UAEHXZ
    virtual i32 Drivable();

    virtual i32 CurrentRoadIdx(class aiPath** arg1, bool* const arg2, i32* arg3) = 0;

    virtual i32 CurrentRdVert() = 0;

    virtual void PreAvoid(
        class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, class Vector3& arg4, class Vector3& arg5) = 0;

    virtual f32 IsBlockingTarget(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, f32 arg4) = 0;
};

check_size(aiObstacle, 0x0);
