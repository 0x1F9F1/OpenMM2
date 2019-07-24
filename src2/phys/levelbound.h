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
