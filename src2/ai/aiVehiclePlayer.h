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

class aiObstacle
{
public:
    // aiObstacle::`vftable' @ 0x5B5A3C

    // 0x53F5D0 | ?InAccident@aiObstacle@@UAEHXZ
    virtual inline i32 InAccident()
    {
        return stub<member_func_t<i32, aiObstacle>>(0x53F5D0, this);
    }

    // 0x582519 | __purecall
    virtual inline void Position(class Vector3& arg1)
    {
        return stub<member_func_t<void, aiObstacle, class Vector3&>>(0x582519, this, arg1);
    }

    // 0x582519 | __purecall
    virtual inline f32 Speed()
    {
        return stub<member_func_t<f32, aiObstacle>>(0x582519, this);
    }

    // 0x53F5E0 | ?BreakThreshold@aiObstacle@@UAEMXZ
    virtual inline f32 BreakThreshold()
    {
        return stub<member_func_t<f32, aiObstacle>>(0x53F5E0, this);
    }

    // 0x53F5F0 | ?Drivable@aiObstacle@@UAEHXZ
    virtual inline i32 Drivable()
    {
        return stub<member_func_t<i32, aiObstacle>>(0x53F5F0, this);
    }

    // 0x582519 | __purecall
    virtual inline i32 CurrentRoadIdx(class aiPath** arg1, bool* const arg2, i32* arg3)
    {
        return stub<member_func_t<i32, aiObstacle, class aiPath**, bool* const, i32*>>(
            0x582519, this, arg1, arg2, arg3);
    }

    // 0x582519 | __purecall
    virtual inline i32 CurrentRdVert()
    {
        return stub<member_func_t<i32, aiObstacle>>(0x582519, this);
    }

    // 0x582519 | __purecall
    virtual inline void PreAvoid(
        class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, class Vector3& arg4, class Vector3& arg5)
    {
        return stub<member_func_t<void, aiObstacle, class Vector3 const&, class Vector3 const&, f32, class Vector3&,
            class Vector3&>>(0x582519, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x582519 | __purecall
    virtual inline f32 IsBlockingTarget(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, f32 arg4)
    {
        return stub<member_func_t<f32, aiObstacle, class Vector3 const&, class Vector3 const&, f32, f32>>(
            0x582519, this, arg1, arg2, arg3, arg4);
    }
};

class aiVehiclePlayer : aiVehicle
{
public:
    // aiVehiclePlayer::`vftable' @ 0x5B55AC

    // 0x53F320 | ??0aiVehiclePlayer@@QAE@XZ
    inline aiVehiclePlayer()
    {
        stub<member_func_t<void, aiVehiclePlayer>>(0x53F320, this);
    }

    // 0x53F340 | ??1aiVehiclePlayer@@QAE@XZ
    inline ~aiVehiclePlayer()
    {
        stub<member_func_t<void, aiVehiclePlayer>>(0x53F340, this);
    }

    // 0x53F350 | ?Attach@aiVehiclePlayer@@QAEXPAVvehCar@@@Z
    inline void Attach(class vehCar* arg1)
    {
        return stub<member_func_t<void, aiVehiclePlayer, class vehCar*>>(0x53F350, this, arg1);
    }

    // 0x53F620 | ?Position@aiVehiclePlayer@@UAEXAAVVector3@@@Z
    inline void Position(class Vector3& arg1) override
    {
        return stub<member_func_t<void, aiVehiclePlayer, class Vector3&>>(0x53F620, this, arg1);
    }

    // 0x53F610 | ?Speed@aiVehiclePlayer@@UAEMXZ
    inline f32 Speed() override
    {
        return stub<member_func_t<f32, aiVehiclePlayer>>(0x53F610, this);
    }

    // 0x53F540 | ?CurrentRoadIdx@aiVehiclePlayer@@UAEHPAPAVaiPath@@QA_NPAH@Z
    inline i32 CurrentRoadIdx(class aiPath** arg1, bool* const arg2, i32* arg3) override
    {
        return stub<member_func_t<i32, aiVehiclePlayer, class aiPath**, bool* const, i32*>>(
            0x53F540, this, arg1, arg2, arg3);
    }

    // 0x53F5B0 | ?CurrentRdVert@aiVehiclePlayer@@UAEHXZ
    inline i32 CurrentRdVert() override
    {
        return stub<member_func_t<i32, aiVehiclePlayer>>(0x53F5B0, this);
    }

    // 0x53F420 | ?Update@aiVehiclePlayer@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiVehiclePlayer>>(0x53F420, this);
    }

    // 0x53F360 | ?Reset@aiVehiclePlayer@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, aiVehiclePlayer>>(0x53F360, this);
    }

    // 0x53F600 | ?Type@aiVehiclePlayer@@UAEHXZ
    inline i32 Type() override
    {
        return stub<member_func_t<i32, aiVehiclePlayer>>(0x53F600, this);
    }

    // 0x53F650 | ?GetMatrix@aiVehiclePlayer@@UAEAAVMatrix34@@XZ
    inline class Matrix34& GetMatrix() override
    {
        return stub<member_func_t<class Matrix34&, aiVehiclePlayer>>(0x53F650, this);
    }

    // 0x53F660 | ?FrontBumperDistance@aiVehiclePlayer@@UAEMXZ
    inline f32 FrontBumperDistance() override
    {
        return stub<member_func_t<f32, aiVehiclePlayer>>(0x53F660, this);
    }

    // 0x53F680 | ?BackBumperDistance@aiVehiclePlayer@@UAEMXZ
    inline f32 BackBumperDistance() override
    {
        return stub<member_func_t<f32, aiVehiclePlayer>>(0x53F680, this);
    }

    // 0x53F6A0 | ?LSideDistance@aiVehiclePlayer@@UAEMXZ
    inline f32 LSideDistance() override
    {
        return stub<member_func_t<f32, aiVehiclePlayer>>(0x53F6A0, this);
    }

    // 0x53F6C0 | ?RSideDistance@aiVehiclePlayer@@UAEMXZ
    inline f32 RSideDistance() override
    {
        return stub<member_func_t<f32, aiVehiclePlayer>>(0x53F6C0, this);
    }

    // 0x53F6E0 | ?CurrentLane@aiVehiclePlayer@@UAEHXZ
    inline i32 CurrentLane() override
    {
        return stub<member_func_t<i32, aiVehiclePlayer>>(0x53F6E0, this);
    }

    // 0x53F6F0 | ?CurrentRoadId@aiVehiclePlayer@@UAEHXZ
    inline i32 CurrentRoadId() override
    {
        return stub<member_func_t<i32, aiVehiclePlayer>>(0x53F6F0, this);
    }

    // 0x53F5C0 | ?DrawId@aiVehiclePlayer@@UAEXXZ
    inline void DrawId() override
    {
        return stub<member_func_t<void, aiVehiclePlayer>>(0x53F5C0, this);
    }
};
