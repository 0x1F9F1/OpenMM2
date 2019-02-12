/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
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
    phbound:boundpolygonal

    0x487760 | protected: static void __cdecl phBoundPolygonal::BackupDispByPenetration(class Vector3 &,class Vector3 const &,float) | ?BackupDispByPenetration@phBoundPolygonal@@KAXAAVVector3@@ABV2@M@Z
    0x487840 | public: float __thiscall phBoundPolygonal::MaxDot(class Vector3 const &,class Matrix34 const &,class Vector3 &) const | ?MaxDot@phBoundPolygonal@@QBEMABVVector3@@ABVMatrix34@@AAV2@@Z
    0x487910 | public: float __thiscall phBoundPolygonal::MinDot(class Vector3 const &,class Matrix34 const &,class Vector3 &) const | ?MinDot@phBoundPolygonal@@QBEMABVVector3@@ABVMatrix34@@AAV2@@Z
    0x487950 | public: virtual void __thiscall phBoundPolygonal::CenterBound(void) | ?CenterBound@phBoundPolygonal@@UAEXXZ
    public: virtual void __thiscall phBoundPolygonal::DrawPhysics(class Vector3 const &) const | ?DrawPhysics@phBoundPolygonal@@UBEXABVVector3@@@Z
    0x4879A0 | public: virtual bool __thiscall phBoundPolygonal::TestSphere(class Vector3 const &,float,class Vector3 &,class Vector3 &,float &) const | ?TestSphere@phBoundPolygonal@@UBE_NABVVector3@@MAAV2@1AAM@Z
    0x4879D0 | public: int __thiscall phBoundPolygonal::FindImpactsSphereToPoly(class phBoundSphere const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phImpactBase *,int,class Vector3 const &,class Vector3 const &) const | ?FindImpactsSphereToPoly@phBoundPolygonal@@QBEHPBVphBoundSphere@@PBVMatrix34@@1PAVphColliderBase@@2PAVphImpactBase@@HABVVector3@@4@Z
    0x487DF0 | public: virtual int __thiscall phBoundPolygonal::TestBoundPolyPoly(class phBoundPolygonal const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phIntersection *,class phIntersection *,int,int *,int *,class Vector3 const &,bool) const | ?TestBoundPolyPoly@phBoundPolygonal@@UBEHPBV1@PBVMatrix34@@111PAVphColliderBase@@2PAVphIntersection@@3HPAH4ABVVector3@@_N@Z
    0x487F00 | public: virtual int __thiscall phBoundPolygonal::TestBoundPolyPolyUseDot(class phBoundPolygonal const *,class phColliderBase *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class phIntersection *,int,int *,float,class Vector3 const *,bool) const | ?TestBoundPolyPolyUseDot@phBoundPolygonal@@UBEHPBV1@PAVphColliderBase@@PBVMatrix34@@222PAVphIntersection@@HPAHMPBVVector3@@_N@Z
    0x488250 | public: void __thiscall phBoundPolygonal::RewindSegments(bool,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 *,class Matrix34 *,int &,int &) const | ?RewindSegments@phBoundPolygonal@@QBEX_NPBVMatrix34@@111PAV2@2AAH3@Z
    0x4882C0 | public: void __thiscall phBoundPolygonal::RewindSegments(bool,class Matrix34 const *,class Matrix34 const *,class Matrix34 *,class Matrix34 *,int &,int &) const | ?RewindSegments@phBoundPolygonal@@QBEX_NPBVMatrix34@@1PAV2@2AAH3@Z
    0x488310 | public: int __thiscall phBoundPolygonal::GetNextSegment(class phSegment &,long *,class Matrix34 const *,class Matrix34 const *,int &,int &) const | ?GetNextSegment@phBoundPolygonal@@QBEHAAVphSegment@@PAJPBVMatrix34@@2AAH3@Z
    0x488500 | public: int __thiscall phBoundPolygonal::GetNextSegment(class phSegment &,long *,class Matrix34 const *,class Matrix34 const *,float,class Vector3 const *,unsigned char *,class Vector3 *,int &,int &) const | ?GetNextSegment@phBoundPolygonal@@QBEHAAVphSegment@@PAJPBVMatrix34@@2MPBVVector3@@PAEPAV4@AAH6@Z
    0x488770 | public: static void __cdecl phBoundPolygonal::BackupAbyPenetration(class phSegment &) | ?BackupAbyPenetration@phBoundPolygonal@@SAXAAVphSegment@@@Z
    0x488850 | protected: static void __cdecl phBoundPolygonal::MakeBsInside(class phIntersection *,int) | ?MakeBsInside@phBoundPolygonal@@KAXPAVphIntersection@@H@Z
    0x488960 | protected: static void __cdecl phBoundPolygonal::CheckSaveEdgeEdge(class phIntersection *,int,bool,bool,class Vector3 const &,class Vector3 const &,class Vector3 const &,float,float,bool,float,float) | ?CheckSaveEdgeEdge@phBoundPolygonal@@KAXPAVphIntersection@@H_N1ABVVector3@@22MM1MM@Z
    0x488B00 | protected: static bool __cdecl phBoundPolygonal::GetCollideEdgePoly(class phIntersection const *,class Vector3 const &,class Matrix34 const &,class Matrix34 const &,class Vector3 const &,class Vector3 *,class Vector3 *,float *,int *,bool *) | ?GetCollideEdgePoly@phBoundPolygonal@@KA_NPBVphIntersection@@ABVVector3@@ABVMatrix34@@21PAV3@3PAMPAHPA_N@Z
    0x4891D0 | protected: int __thiscall phBoundPolygonal::AddInteriorEdges(class phIntersection *,int,class phIntersection *,int,int) const | ?AddInteriorEdges@phBoundPolygonal@@IBEHPAVphIntersection@@H0HH@Z
    0x489460 | protected: static void __cdecl phBoundPolygonal::GetNextEdgeIsect(int &,class phIntersection * &,bool) | ?GetNextEdgeIsect@phBoundPolygonal@@KAXAAHAAPAVphIntersection@@_N@Z
    0x489490 | protected: static void __cdecl phBoundPolygonal::DoEndPtSearch(class phBound const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,int,class phIntersection *,int,class phImpactBase * *,int &,bool) | ?DoEndPtSearch@phBoundPolygonal@@KAXPBVphBound@@PBVMatrix34@@111PAVphColliderBase@@2HPAVphIntersection@@HPAPAVphImpactBase@@AAH_N@Z
    0x489C30 | protected: static void __cdecl phBoundPolygonal::RetryVertPolyCollide(class phBound const *,class phColliderBase *,class phColliderBase *,class phIntersection *,int,class phImpactBase * *,int *,bool) | ?RetryVertPolyCollide@phBoundPolygonal@@KAXPBVphBound@@PAVphColliderBase@@1PAVphIntersection@@HPAPAVphImpactBase@@PAH_N@Z
    0x489DD0 | public: int __thiscall phBoundPolygonal::FindImpactsPolyToPoly(class phBoundPolygonal const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phIntersection *,class phIntersection *,class phImpactBase *,int,int,int *,int *) const | ?FindImpactsPolyToPoly@phBoundPolygonal@@QBEHPBV1@PBVMatrix34@@111PAVphColliderBase@@2PAVphIntersection@@3PAVphImpactBase@@HHPAH5@Z
    0x48A0C0 | protected: int __thiscall phBoundPolygonal::FindImpacts(class phBound const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phIntersection *,class phIntersection *,int,int,class phImpactBase *,int) const | ?FindImpacts@phBoundPolygonal@@IBEHPBVphBound@@PBVMatrix34@@111PAVphColliderBase@@2PAVphIntersection@@3HHPAVphImpactBase@@H@Z
    0x48B230 | protected: static void __cdecl phBoundPolygonal::ResetVertNeedsH(class phIntersection *,class phIntersection *,bool,bool) | ?ResetVertNeedsH@phBoundPolygonal@@KAXPAVphIntersection@@0_N1@Z
    0x48B270 | protected: static void __cdecl phBoundPolygonal::ResetVertNeedsH(class phIntersection *,class phIntersection *,bool,bool,float) | ?ResetVertNeedsH@phBoundPolygonal@@KAXPAVphIntersection@@0_N1M@Z
    0x48B300 | public: virtual bool __thiscall phBoundPolygonal::TestProbePoint(class phSegment &,class phIntersectionPoint *,float) const | ?TestProbePoint@phBoundPolygonal@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@M@Z
    0x48B370 | public: virtual bool __thiscall phBoundPolygonal::TestAIPoint(class phSegment &,class phIntersectionPoint *) const | ?TestAIPoint@phBoundPolygonal@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@@Z
    0x48B3E0 | public: virtual bool __thiscall phBoundPolygonal::TestProbe(class phSegment &,class phIntersection *,float) const | ?TestProbe@phBoundPolygonal@@UBE_NAAVphSegment@@PAVphIntersection@@M@Z
    0x48B450 | public: virtual int __thiscall phBoundPolygonal::TestEdge(class phSegment &,class phIntersection *,int) const | ?TestEdge@phBoundPolygonal@@UBEHAAVphSegment@@PAVphIntersection@@H@Z
    0x48B590 | public: void __thiscall phBoundPolygonal::GetAllSegments(float,struct phBoundPolygonal::DispSegment *,struct phBoundPolygonal::Segment *,class Matrix34 const &,class Matrix34 const &,float,class Vector3 const &,unsigned char *,class Vector4 *,int &,int &) const | ?GetAllSegments@phBoundPolygonal@@QBEXMPAUDispSegment@1@PAUSegment@1@ABVMatrix34@@2MABVVector3@@PAEPAVVector4@@AAH6@Z
    0x48B7A0 | public: virtual int __thiscall phBoundPolygonal::TestBoundPolyPolyUseDotSmall(class phBoundPolygonal const *,class phColliderBase *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class phIntersection *,int *,float,class Vector3 const &,bool) const | ?TestBoundPolyPolyUseDotSmall@phBoundPolygonal@@UBEHPBV1@PAVphColliderBase@@PBVMatrix34@@222PAVphIntersection@@PAHMABVVector3@@_N@Z
    protected: static float const phBoundPolygonal::COSINEFACTOR | ?COSINEFACTOR@phBoundPolygonal@@1MB
    protected: static float phBoundPolygonal::ImpactPenetration | ?ImpactPenetration@phBoundPolygonal@@1MA
*/

// #include "hooking.h"
