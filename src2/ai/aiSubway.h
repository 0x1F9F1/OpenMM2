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
#include "banger/banger.h"

/*
    ai:aiSubway

    0x5418D0 | public: __thiscall aiSubway::aiSubway(void) | ??0aiSubway@@QAE@XZ
    0x5419F0 | public: __thiscall aiSubway::~aiSubway(void) | ??1aiSubway@@QAE@XZ
    0x541A80 | public: void __thiscall aiSubway::Init(char *,int,int,int,int,int,class aiSubway *,class aiSubway *) | ?Init@aiSubway@@QAEXPADHHHHHPAV1@1@Z
    0x541C50 | public: virtual void __thiscall aiSubway::Reset(void) | ?Reset@aiSubway@@UAEXXZ
    0x541F60 | public: virtual void __thiscall aiSubway::Update(void) | ?Update@aiSubway@@UAEXXZ
    0x542060 | private: bool __thiscall aiSubway::DetermineNextLink(class aiPath *,class aiPath * *) | ?DetermineNextLink@aiSubway@@AAE_NPAVaiPath@@PAPAV2@@Z
    0x542160 | private: void __thiscall aiSubway::SolvePositionAndOrientation(void) | ?SolvePositionAndOrientation@aiSubway@@AAEXXZ
    0x5427B0 | private: void __thiscall aiSubway::SolveVelocity(void) | ?SolveVelocity@aiSubway@@AAEXXZ
    0x5429A0 | private: void __thiscall aiSubway::ReverseDirection(void) | ?ReverseDirection@aiSubway@@AAEXXZ
    0x542A20 | private: bool __thiscall aiSubway::OkayToEnterIntersection(float) | ?OkayToEnterIntersection@aiSubway@@AAE_NM@Z
    0x542AF0 | private: float __thiscall aiSubway::DistanceToIntersection(void) | ?DistanceToIntersection@aiSubway@@AAEMXZ
    0x542B90 | private: void __thiscall aiSubway::SolveRailType(void) | ?SolveRailType@aiSubway@@AAEXXZ
    0x5434F0 | public: virtual int __thiscall aiSubway::CurrentRoadIdx(class aiPath * *,bool * const,int *) | ?CurrentRoadIdx@aiSubway@@UAEHPAPAVaiPath@@QA_NPAH@Z
    0x543600 | public: virtual int __thiscall aiSubway::CurrentRdVert(void) | ?CurrentRdVert@aiSubway@@UAEHXZ
    0x543620 | private: void __thiscall aiSubway::UpdateObstacleMap(void) | ?UpdateObstacleMap@aiSubway@@AAEXXZ
    0x543850 | private: void __thiscall aiSubway::ComputeXZCurve(class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &) | ?ComputeXZCurve@aiSubway@@AAEXAAVVector3@@000@Z
    0x543A20 | private: void __thiscall aiSubway::SolveXZCurve(class Vector3 &,class Vector3 &,float) | ?SolveXZCurve@aiSubway@@AAEXAAVVector3@@0M@Z
    0x543AD0 | public: virtual void __thiscall aiSubway::DrawId(void) | ?DrawId@aiSubway@@UAEXXZ
    0x543AE0 | public: virtual class Matrix34 const & __thiscall aiSubwayInstance::GetMatrix(class Matrix34 &) | ?GetMatrix@aiSubwayInstance@@UAEABVMatrix34@@AAV2@@Z
    0x543AF0 | public: virtual void __thiscall aiSubwayInstance::SetMatrix(class Matrix34 const &) | ?SetMatrix@aiSubwayInstance@@UAEXABVMatrix34@@@Z
    0x543B10 | public: virtual class Vector3 const & __thiscall aiSubwayInstance::GetVelocity(void) | ?GetVelocity@aiSubwayInstance@@UAEABVVector3@@XZ
    0x543B70 | public: virtual class Vector3 const & __thiscall aiSubwayInstance::GetPosition(void) | ?GetPosition@aiSubwayInstance@@UAEABVVector3@@XZ
    0x543B80 | public: virtual unsigned int __thiscall aiSubwayInstance::SizeOf(void) | ?SizeOf@aiSubwayInstance@@UAEIXZ
    0x543B90 | public: virtual void __thiscall aiSubwayInstance::ImpactCB(class dgHitBangerInstance *) | ?ImpactCB@aiSubwayInstance@@UAEXPAVdgHitBangerInstance@@@Z
    0x543BA0 | public: virtual void __thiscall aiSubwayInstance::Draw(int) | ?Draw@aiSubwayInstance@@UAEXH@Z
    0x543C90 | public: virtual int __thiscall aiSubway::Type(void) | ?Type@aiSubway@@UAEHXZ
    0x543CA0 | public: virtual float __thiscall aiSubway::Speed(void) | ?Speed@aiSubway@@UAEMXZ
    0x543CB0 | public: virtual int __thiscall aiSubway::CurrentLane(void) | ?CurrentLane@aiSubway@@UAEHXZ
    0x543CC0 | public: virtual float __thiscall aiSubway::FrontBumperDistance(void) | ?FrontBumperDistance@aiSubway@@UAEMXZ
    0x543CD0 | public: virtual float __thiscall aiSubway::BackBumperDistance(void) | ?BackBumperDistance@aiSubway@@UAEMXZ
    0x543CE0 | public: virtual float __thiscall aiSubway::LSideDistance(void) | ?LSideDistance@aiSubway@@UAEMXZ
    0x543CF0 | public: virtual float __thiscall aiSubway::RSideDistance(void) | ?RSideDistance@aiSubway@@UAEMXZ
    0x543D00 | public: virtual void __thiscall aiSubway::Position(class Vector3 &) | ?Position@aiSubway@@UAEXAAVVector3@@@Z
    0x543D20 | public: virtual class Matrix34 & __thiscall aiSubway::GetMatrix(void) | ?GetMatrix@aiSubway@@UAEAAVMatrix34@@XZ
    0x543D30 | public: virtual int __thiscall aiSubway::CurrentRoadId(void) | ?CurrentRoadId@aiSubway@@UAEHXZ
    0x5B5744 | const aiSubway::`vftable' | ??_7aiSubway@@6B@
    0x5B5798 | const aiSubwayInstance::`vftable' | ??_7aiSubwayInstance@@6B@
*/

class aiSubway : public aiVehicle
{
    // const aiSubway::`vftable' @ 0x5B5744

public:
    // 0x5418D0 | ??0aiSubway@@QAE@XZ
    aiSubway();

    // 0x5419F0 | ??1aiSubway@@QAE@XZ
    // 0x53BEE0 | ??_EaiSubway@@QAEPAXI@Z
    ~aiSubway();

    // 0x543CD0 | ?BackBumperDistance@aiSubway@@UAEMXZ
    f32 BackBumperDistance() override;

    // 0x543CB0 | ?CurrentLane@aiSubway@@UAEHXZ
    i32 CurrentLane() override;

    // 0x543600 | ?CurrentRdVert@aiSubway@@UAEHXZ
    i32 CurrentRdVert() override;

    // 0x543D30 | ?CurrentRoadId@aiSubway@@UAEHXZ
    i32 CurrentRoadId() override;

    // 0x5434F0 | ?CurrentRoadIdx@aiSubway@@UAEHPAPAVaiPath@@QA_NPAH@Z
    i32 CurrentRoadIdx(class aiPath** arg1, bool* const arg2, i32* arg3) override;

    // 0x543AD0 | ?DrawId@aiSubway@@UAEXXZ
    void DrawId() override;

    // 0x543CC0 | ?FrontBumperDistance@aiSubway@@UAEMXZ
    f32 FrontBumperDistance() override;

    // 0x543D20 | ?GetMatrix@aiSubway@@UAEAAVMatrix34@@XZ
    class Matrix34& GetMatrix() override;

    // 0x541A80 | ?Init@aiSubway@@QAEXPADHHHHHPAV1@1@Z
    void Init(char* arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5, i32 arg6, class aiSubway* arg7, class aiSubway* arg8);

    // 0x543CE0 | ?LSideDistance@aiSubway@@UAEMXZ
    f32 LSideDistance() override;

    // 0x543D00 | ?Position@aiSubway@@UAEXAAVVector3@@@Z
    void Position(class Vector3& arg1) override;

    // 0x543CF0 | ?RSideDistance@aiSubway@@UAEMXZ
    f32 RSideDistance() override;

    // 0x541C50 | ?Reset@aiSubway@@UAEXXZ
    void Reset() override;

    // 0x543CA0 | ?Speed@aiSubway@@UAEMXZ
    f32 Speed() override;

    // 0x543C90 | ?Type@aiSubway@@UAEHXZ
    i32 Type() override;

    // 0x541F60 | ?Update@aiSubway@@UAEXXZ
    void Update() override;

private:
    // 0x543850 | ?ComputeXZCurve@aiSubway@@AAEXAAVVector3@@000@Z
    void ComputeXZCurve(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4);

    // 0x542060 | ?DetermineNextLink@aiSubway@@AAE_NPAVaiPath@@PAPAV2@@Z
    bool DetermineNextLink(class aiPath* arg1, class aiPath** arg2);

    // 0x542AF0 | ?DistanceToIntersection@aiSubway@@AAEMXZ
    f32 DistanceToIntersection();

    // 0x542A20 | ?OkayToEnterIntersection@aiSubway@@AAE_NM@Z
    bool OkayToEnterIntersection(f32 arg1);

    // 0x5429A0 | ?ReverseDirection@aiSubway@@AAEXXZ
    void ReverseDirection();

    // 0x542160 | ?SolvePositionAndOrientation@aiSubway@@AAEXXZ
    void SolvePositionAndOrientation();

    // 0x542B90 | ?SolveRailType@aiSubway@@AAEXXZ
    void SolveRailType();

    // 0x5427B0 | ?SolveVelocity@aiSubway@@AAEXXZ
    void SolveVelocity();

    // 0x543A20 | ?SolveXZCurve@aiSubway@@AAEXAAVVector3@@0M@Z
    void SolveXZCurve(class Vector3& arg1, class Vector3& arg2, f32 arg3);

    // 0x543620 | ?UpdateObstacleMap@aiSubway@@AAEXXZ
    void UpdateObstacleMap();
};

check_size(aiSubway, 0x14C);

class aiSubwayInstance : public dgUnhitBangerInstance
{
    // const aiSubwayInstance::`vftable' @ 0x5B5798

public:
    // 0x543BA0 | ?Draw@aiSubwayInstance@@UAEXH@Z
    void Draw(i32 arg1) override;

    // 0x543AE0 | ?GetMatrix@aiSubwayInstance@@UAEABVMatrix34@@AAV2@@Z
    class Matrix34 const& GetMatrix(class Matrix34& arg1) override;

    // 0x543B70 | ?GetPosition@aiSubwayInstance@@UAEABVVector3@@XZ
    class Vector3 const& GetPosition() override;

    // 0x543B10 | ?GetVelocity@aiSubwayInstance@@UAEABVVector3@@XZ
    class Vector3 const& GetVelocity() override;

    // 0x543B90 | ?ImpactCB@aiSubwayInstance@@UAEXPAVdgHitBangerInstance@@@Z
    void ImpactCB(class dgHitBangerInstance* arg1) override;

    // 0x543AF0 | ?SetMatrix@aiSubwayInstance@@UAEXABVMatrix34@@@Z
    void SetMatrix(class Matrix34 const& arg1) override;

    // 0x543B80 | ?SizeOf@aiSubwayInstance@@UAEIXZ
    u32 SizeOf() override;
};

check_size(aiSubwayInstance, 0x0);
