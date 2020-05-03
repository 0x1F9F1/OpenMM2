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

#include "phbound/bound.h"

/*
    phys:levelbound

    0x46A680 | public: virtual char * __thiscall lvlLevelBound::AllocateState(void) const | ?AllocateState@lvlLevelBound@@UBEPADXZ
    0x46A690 | public: virtual int __thiscall lvlLevelBound::TestEdge(class phSegment &,class phIntersection *,int) const | ?TestEdge@lvlLevelBound@@UBEHAAVphSegment@@PAVphIntersection@@H@Z
    0x46A6A0 | public: virtual bool __thiscall lvlLevelBound::TestProbe(class phSegment &,class phIntersection *,float) const | ?TestProbe@lvlLevelBound@@UBE_NAAVphSegment@@PAVphIntersection@@M@Z
    0x46A6B0 | public: virtual bool __thiscall lvlLevelBound::TestAI(class phSegment &,class phIntersection *) const | ?TestAI@lvlLevelBound@@UBE_NAAVphSegment@@PAVphIntersection@@@Z
    0x46A6C0 | public: virtual int __thiscall lvlLevelBound::TestEdgePoint(class phSegment &,class phIntersectionPoint *,int) const | ?TestEdgePoint@lvlLevelBound@@UBEHAAVphSegment@@PAVphIntersectionPoint@@H@Z
    0x46A6D0 | public: virtual bool __thiscall lvlLevelBound::TestProbePoint(class phSegment &,class phIntersectionPoint *,float) const | ?TestProbePoint@lvlLevelBound@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@M@Z
    0x46A6E0 | public: virtual bool __thiscall lvlLevelBound::TestAIPoint(class phSegment &,class phIntersectionPoint *) const | ?TestAIPoint@lvlLevelBound@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@@Z
    0x46A6F0 | public: virtual bool __thiscall lvlLevelBound::TestSphere(class Vector3 const &,float,class Vector3 &,class Vector3 &,float &) const | ?TestSphere@lvlLevelBound@@UBE_NABVVector3@@MAAV2@1AAM@Z
    0x46A700 | public: virtual float __thiscall lvlLevelBound::GetEdgeCosine(int) const | ?GetEdgeCosine@lvlLevelBound@@UBEMH@Z
    0x46A710 | public: virtual class Vector3 const & __thiscall lvlLevelBound::GetEdgeNormal(int,class Vector3 &) const | ?GetEdgeNormal@lvlLevelBound@@UBEABVVector3@@HAAV2@@Z
    0x46A720 | public: virtual class phMaterial const * __thiscall lvlLevelBound::GetMaterial(int) const | ?GetMaterial@lvlLevelBound@@UBEPBVphMaterial@@H@Z
    0x46A750 | public: virtual int __thiscall lvlLevelBound::CollidePolyToLevel(class phBoundPolygonal const *,int *,int,class phColliderBase *,class Matrix34 const *,class Matrix34 const *,class lvlIntersection *,int,int *,bool) const | ?CollidePolyToLevel@lvlLevelBound@@UBEHPBVphBoundPolygonal@@PAHHPAVphColliderBase@@PBVMatrix34@@3PAVlvlIntersection@@H1_N@Z
    public: void __thiscall lvlLevelBound::AddWidgets(class bkBank &) | ?AddWidgets@lvlLevelBound@@QAEXAAVbkBank@@@Z
    public: int __thiscall lvlLevelBound::FindImpactsPolyToPoly(class phBound const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class lvlIntersection *,class lvlIntersection *,class phImpactBase *,int,int,int) const | ?FindImpactsPolyToPoly@lvlLevelBound@@QBEHPBVphBound@@PBVMatrix34@@1PAVphColliderBase@@2PAVlvlIntersection@@3PAVphImpactBase@@HHH@Z
    public: int __thiscall lvlLevelBound::FindImpactsSphere(class phBoundSphere const *,class Vector3 const &,class phColliderBase *,class phColliderBase *,class phImpactBase *,int,int) const | ?FindImpactsSphere@lvlLevelBound@@QBEHPBVphBoundSphere@@ABVVector3@@PAVphColliderBase@@2PAVphImpactBase@@HH@Z
    public: int __thiscall lvlLevelBound::FindImpactsHotdog(class phBoundHotdog const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phImpactBase *,int,class Vector3 const &,int) const | ?FindImpactsHotdog@lvlLevelBound@@QBEHPBVphBoundHotdog@@PBVMatrix34@@1PAVphColliderBase@@2PAVphImpactBase@@HABVVector3@@H@Z
    0x46B580 | public: virtual bool __thiscall lvlLevelBound::TrivialCollideBoxToLevel(class phBoundBox const *,int,class phColliderBase *,class Matrix34 const *,class Matrix34 const *) const | ?TrivialCollideBoxToLevel@lvlLevelBound@@UBE_NPBVphBoundBox@@HPAVphColliderBase@@PBVMatrix34@@2@Z
    public: static bool lvlLevelBound::m_DrawTerrainCollisions | ?m_DrawTerrainCollisions@lvlLevelBound@@2_NA
    public: static bool lvlLevelBound::m_DrawSphereSphere | ?m_DrawSphereSphere@lvlLevelBound@@2_NA
*/

class lvlLevelBound : public phBound
{
public:
    // 0x46A720 | ?GetMaterial@lvlLevelBound@@UBEPBVphMaterial@@H@Z
    class phMaterial const* GetMaterial(i32 arg1) override;

    // 0x46A6E0 | ?TestAIPoint@lvlLevelBound@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@@Z
    bool TestAIPoint(class phSegment& arg1, class phIntersectionPoint* arg2) override;

    // 0x46A690 | ?TestEdge@lvlLevelBound@@UBEHAAVphSegment@@PAVphIntersection@@H@Z
    i32 TestEdge(class phSegment& arg1, class phIntersection* arg2, i32 arg3) override;

    // 0x46A6A0 | ?TestProbe@lvlLevelBound@@UBE_NAAVphSegment@@PAVphIntersection@@M@Z
    bool TestProbe(class phSegment& arg1, class phIntersection* arg2, f32 arg3) override;

    // 0x46A6D0 | ?TestProbePoint@lvlLevelBound@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@M@Z
    bool TestProbePoint(class phSegment& arg1, class phIntersectionPoint* arg2, f32 arg3) override;

    // 0x46A6F0 | ?TestSphere@lvlLevelBound@@UBE_NABVVector3@@MAAV2@1AAM@Z
    bool TestSphere(class Vector3 const& arg1, f32 arg2, class Vector3& arg3, class Vector3& arg4, f32& arg5) override;

    // 0x46A6B0 | ?TestAI@lvlLevelBound@@UBE_NAAVphSegment@@PAVphIntersection@@@Z
    virtual bool TestAI(class phSegment& arg1, class phIntersection* arg2);

    // 0x46A6C0 | ?TestEdgePoint@lvlLevelBound@@UBEHAAVphSegment@@PAVphIntersectionPoint@@H@Z
    virtual i32 TestEdgePoint(class phSegment& arg1, class phIntersectionPoint* arg2, i32 arg3);

    virtual i32 CollideEdge(class lvlSegment& arg1, class lvlIntersection* arg2, i32 arg3, i32* arg4, i32 arg5) = 0;

    virtual bool CollideProbe(class lvlSegment& arg1, class lvlIntersection* arg2, f32 arg3) = 0;

    virtual bool CollideAI(class lvlSegment& arg1, class lvlIntersection* arg2, i32* arg3, i32 arg4) = 0;

    virtual i32 CollideEdgePoint(class lvlSegment& arg1, class lvlIntersectionPoint* arg2, i32 arg3) = 0;

    virtual bool CollideProbePoint(class lvlSegment& arg1, class lvlIntersectionPoint* arg2, f32 arg3) = 0;

    virtual bool CollideAIPoint(class lvlSegment& arg1, class lvlIntersectionPoint* arg2) = 0;

    // 0x46A680 | ?AllocateState@lvlLevelBound@@UBEPADXZ
    virtual char* AllocateState();

    // 0x46A700 | ?GetEdgeCosine@lvlLevelBound@@UBEMH@Z
    virtual f32 GetEdgeCosine(i32 arg1);

    // 0x46A710 | ?GetEdgeNormal@lvlLevelBound@@UBEABVVector3@@HAAV2@@Z
    virtual class Vector3 const& GetEdgeNormal(i32 arg1, class Vector3& arg2);

    // 0x46B580 | ?TrivialCollideBoxToLevel@lvlLevelBound@@UBE_NPBVphBoundBox@@HPAVphColliderBase@@PBVMatrix34@@2@Z
    virtual bool TrivialCollideBoxToLevel(class phBoundBox const* arg1, i32 arg2, class phColliderBase* arg3,
        class Matrix34 const* arg4, class Matrix34 const* arg5);

    // 0x46A750 | ?CollidePolyToLevel@lvlLevelBound@@UBEHPBVphBoundPolygonal@@PAHHPAVphColliderBase@@PBVMatrix34@@3PAVlvlIntersection@@H1_N@Z
    virtual i32 CollidePolyToLevel(class phBoundPolygonal const* arg1, i32* arg2, i32 arg3, class phColliderBase* arg4,
        class Matrix34 const* arg5, class Matrix34 const* arg6, class lvlIntersection* arg7, i32 arg8, i32* arg9,
        bool arg10);

private:
    // 0x45CFB0 | ?FindImpactsSphereOneRoom@lvlLevelBound@@EBEHHPBVphBoundSphere@@ABVVector3@@PAVphColliderBase@@2PAVphImpactBase@@H@Z
    virtual i32 FindImpactsSphereOneRoom(i32 arg1, class phBoundSphere const* arg2, class Vector3 const& arg3,
        class phColliderBase* arg4, class phColliderBase* arg5, class phImpactBase* arg6, i32 arg7);

    // 0x45CFC0 | ?FindImpactsHotdogOneRoom@lvlLevelBound@@EBEHHQBVVector3@@PBVphBoundHotdog@@PBVMatrix34@@2PAVphColliderBase@@3PAVphImpactBase@@HABV2@@Z
    virtual i32 FindImpactsHotdogOneRoom(i32 arg1, class Vector3 const* const arg2, class phBoundHotdog const* arg3,
        class Matrix34 const* arg4, class Matrix34 const* arg5, class phColliderBase* arg6, class phColliderBase* arg7,
        class phImpactBase* arg8, i32 arg9, class Vector3 const& arg10);
};

check_size(lvlLevelBound, 0x0);
