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

class aiSubway : aiVehicle
{
public:
    // aiSubway::`vftable' @ 0x5B5744

    // 0x53BEE0 | ??_EaiSubway@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)

    // 0x5418D0 | ??0aiSubway@@QAE@XZ
    inline aiSubway()
    {
        stub<member_func_t<void, aiSubway>>(0x5418D0, this);
    }

    // 0x5419F0 | ??1aiSubway@@QAE@XZ
    inline ~aiSubway()
    {
        stub<member_func_t<void, aiSubway>>(0x5419F0, this);
    }

    // 0x541A80 | ?Init@aiSubway@@QAEXPADHHHHHPAV1@1@Z
    inline void Init(
        char* arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5, i32 arg6, class aiSubway* arg7, class aiSubway* arg8)
    {
        return stub<member_func_t<void, aiSubway, char*, i32, i32, i32, i32, i32, class aiSubway*, class aiSubway*>>(
            0x541A80, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x542060 | ?DetermineNextLink@aiSubway@@AAE_NPAVaiPath@@PAPAV2@@Z
    inline bool DetermineNextLink(class aiPath* arg1, class aiPath** arg2)
    {
        return stub<member_func_t<bool, aiSubway, class aiPath*, class aiPath**>>(0x542060, this, arg1, arg2);
    }

    // 0x542160 | ?SolvePositionAndOrientation@aiSubway@@AAEXXZ
    inline void SolvePositionAndOrientation()
    {
        return stub<member_func_t<void, aiSubway>>(0x542160, this);
    }

    // 0x5427B0 | ?SolveVelocity@aiSubway@@AAEXXZ
    inline void SolveVelocity()
    {
        return stub<member_func_t<void, aiSubway>>(0x5427B0, this);
    }

    // 0x5429A0 | ?ReverseDirection@aiSubway@@AAEXXZ
    inline void ReverseDirection()
    {
        return stub<member_func_t<void, aiSubway>>(0x5429A0, this);
    }

    // 0x542A20 | ?OkayToEnterIntersection@aiSubway@@AAE_NM@Z
    inline bool OkayToEnterIntersection(f32 arg1)
    {
        return stub<member_func_t<bool, aiSubway, f32>>(0x542A20, this, arg1);
    }

    // 0x542AF0 | ?DistanceToIntersection@aiSubway@@AAEMXZ
    inline f32 DistanceToIntersection()
    {
        return stub<member_func_t<f32, aiSubway>>(0x542AF0, this);
    }

    // 0x542B90 | ?SolveRailType@aiSubway@@AAEXXZ
    inline void SolveRailType()
    {
        return stub<member_func_t<void, aiSubway>>(0x542B90, this);
    }

    // 0x543620 | ?UpdateObstacleMap@aiSubway@@AAEXXZ
    inline void UpdateObstacleMap()
    {
        return stub<member_func_t<void, aiSubway>>(0x543620, this);
    }

    // 0x543850 | ?ComputeXZCurve@aiSubway@@AAEXAAVVector3@@000@Z
    inline void ComputeXZCurve(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4)
    {
        return stub<member_func_t<void, aiSubway, class Vector3&, class Vector3&, class Vector3&, class Vector3&>>(
            0x543850, this, arg1, arg2, arg3, arg4);
    }

    // 0x543A20 | ?SolveXZCurve@aiSubway@@AAEXAAVVector3@@0M@Z
    inline void SolveXZCurve(class Vector3& arg1, class Vector3& arg2, f32 arg3)
    {
        return stub<member_func_t<void, aiSubway, class Vector3&, class Vector3&, f32>>(
            0x543A20, this, arg1, arg2, arg3);
    }

    // 0x543D00 | ?Position@aiSubway@@UAEXAAVVector3@@@Z
    inline void Position(class Vector3& arg1) override
    {
        return stub<member_func_t<void, aiSubway, class Vector3&>>(0x543D00, this, arg1);
    }

    // 0x543CA0 | ?Speed@aiSubway@@UAEMXZ
    inline f32 Speed() override
    {
        return stub<member_func_t<f32, aiSubway>>(0x543CA0, this);
    }

    // 0x5434F0 | ?CurrentRoadIdx@aiSubway@@UAEHPAPAVaiPath@@QA_NPAH@Z
    inline i32 CurrentRoadIdx(class aiPath** arg1, bool* const arg2, i32* arg3) override
    {
        return stub<member_func_t<i32, aiSubway, class aiPath**, bool* const, i32*>>(0x5434F0, this, arg1, arg2, arg3);
    }

    // 0x543600 | ?CurrentRdVert@aiSubway@@UAEHXZ
    inline i32 CurrentRdVert() override
    {
        return stub<member_func_t<i32, aiSubway>>(0x543600, this);
    }

    // 0x541F60 | ?Update@aiSubway@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiSubway>>(0x541F60, this);
    }

    // 0x541C50 | ?Reset@aiSubway@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, aiSubway>>(0x541C50, this);
    }

    // 0x543C90 | ?Type@aiSubway@@UAEHXZ
    inline i32 Type() override
    {
        return stub<member_func_t<i32, aiSubway>>(0x543C90, this);
    }

    // 0x543D20 | ?GetMatrix@aiSubway@@UAEAAVMatrix34@@XZ
    inline class Matrix34& GetMatrix() override
    {
        return stub<member_func_t<class Matrix34&, aiSubway>>(0x543D20, this);
    }

    // 0x543CC0 | ?FrontBumperDistance@aiSubway@@UAEMXZ
    inline f32 FrontBumperDistance() override
    {
        return stub<member_func_t<f32, aiSubway>>(0x543CC0, this);
    }

    // 0x543CD0 | ?BackBumperDistance@aiSubway@@UAEMXZ
    inline f32 BackBumperDistance() override
    {
        return stub<member_func_t<f32, aiSubway>>(0x543CD0, this);
    }

    // 0x543CE0 | ?LSideDistance@aiSubway@@UAEMXZ
    inline f32 LSideDistance() override
    {
        return stub<member_func_t<f32, aiSubway>>(0x543CE0, this);
    }

    // 0x543CF0 | ?RSideDistance@aiSubway@@UAEMXZ
    inline f32 RSideDistance() override
    {
        return stub<member_func_t<f32, aiSubway>>(0x543CF0, this);
    }

    // 0x543CB0 | ?CurrentLane@aiSubway@@UAEHXZ
    inline i32 CurrentLane() override
    {
        return stub<member_func_t<i32, aiSubway>>(0x543CB0, this);
    }

    // 0x543D30 | ?CurrentRoadId@aiSubway@@UAEHXZ
    inline i32 CurrentRoadId() override
    {
        return stub<member_func_t<i32, aiSubway>>(0x543D30, this);
    }

    // 0x543AD0 | ?DrawId@aiSubway@@UAEXXZ
    inline void DrawId() override
    {
        return stub<member_func_t<void, aiSubway>>(0x543AD0, this);
    }
};

struct aiSubwayInstance : dgUnhitBangerInstance
{
public:
    // aiSubwayInstance::`vftable' @ 0x5B5798

    // 0x543B70 | ?GetPosition@aiSubwayInstance@@UAEABVVector3@@XZ
    inline class Vector3 const& GetPosition() override
    {
        return stub<member_func_t<class Vector3 const&, aiSubwayInstance>>(0x543B70, this);
    }

    // 0x543AE0 | ?GetMatrix@aiSubwayInstance@@UAEABVMatrix34@@AAV2@@Z
    inline class Matrix34 const& GetMatrix(class Matrix34& arg1) override
    {
        return stub<member_func_t<class Matrix34 const&, aiSubwayInstance, class Matrix34&>>(0x543AE0, this, arg1);
    }

    // 0x543AF0 | ?SetMatrix@aiSubwayInstance@@UAEXABVMatrix34@@@Z
    inline void SetMatrix(class Matrix34 const& arg1) override
    {
        return stub<member_func_t<void, aiSubwayInstance, class Matrix34 const&>>(0x543AF0, this, arg1);
    }

    // 0x543B10 | ?GetVelocity@aiSubwayInstance@@UAEABVVector3@@XZ
    inline class Vector3 const& GetVelocity() override
    {
        return stub<member_func_t<class Vector3 const&, aiSubwayInstance>>(0x543B10, this);
    }

    // 0x543BA0 | ?Draw@aiSubwayInstance@@UAEXH@Z
    inline void Draw(i32 arg1) override
    {
        return stub<member_func_t<void, aiSubwayInstance, i32>>(0x543BA0, this, arg1);
    }

    // 0x543B80 | ?SizeOf@aiSubwayInstance@@UAEIXZ
    inline u32 SizeOf() override
    {
        return stub<member_func_t<u32, aiSubwayInstance>>(0x543B80, this);
    }

    // 0x543B90 | ?ImpactCB@aiSubwayInstance@@UAEXPAVdgHitBangerInstance@@@Z
    virtual inline void ImpactCB(class dgHitBangerInstance* arg1)
    {
        return stub<member_func_t<void, aiSubwayInstance, class dgHitBangerInstance*>>(0x543B90, this, arg1);
    }
};
