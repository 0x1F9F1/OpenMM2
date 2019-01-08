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
    phbound:boundbox

    0x479ED0 | public: __thiscall phBoundBox::phBoundBox(void) | ??0phBoundBox@@QAE@XZ
    0x47A020 | public: __thiscall phBoundBox::phBoundBox(class Vector3 const &) | ??0phBoundBox@@QAE@ABVVector3@@@Z
    0x47A160 | public: __thiscall phBoundBox::~phBoundBox(void) | ??1phBoundBox@@QAE@XZ
    0x47A180 | public: virtual class phMaterial const * __thiscall phBoundBox::GetMaterial(int) const | ?GetMaterial@phBoundBox@@UBEPBVphMaterial@@H@Z
    0x47A1A0 | public: void __thiscall phBoundBox::SetSize(class Vector3 const &) | ?SetSize@phBoundBox@@QAEXABVVector3@@@Z
    0x47A240 | public: void __thiscall phBoundBox::CreateOffset(class Vector3 const &) | ?CreateOffset@phBoundBox@@QAEXABVVector3@@@Z
    0x47A270 | public: void __thiscall phBoundBox::ShiftCentroid(class Vector3 const &) | ?ShiftCentroid@phBoundBox@@QAEXABVVector3@@@Z
    0x47A2B0 | public: void __thiscall phBoundBox::ScaleSize(class Vector3 const &) | ?ScaleSize@phBoundBox@@QAEXABVVector3@@@Z
    0x47A300 | public: void __thiscall phBoundBox::SetQuickTestInfo(void) | ?SetQuickTestInfo@phBoundBox@@QAEXXZ
    0x47A3A0 | public: bool __thiscall phBoundBox::Load(char const *) | ?Load@phBoundBox@@QAE_NPBD@Z
    0x47A6B0 | public: virtual class Vector3 const & __thiscall phBoundBox::GetEdgeNormal(int,class Vector3 &) const | ?GetEdgeNormal@phBoundBox@@UBEABVVector3@@HAAV2@@Z
    0x47A6D0 | public: int __thiscall phBoundBox::FindImpactSphereToBox(class phBoundSphere const *,class Matrix34 const &,class Matrix34 const &,class phColliderBase *,class phColliderBase *,class phImpactBase *,class Vector3 const &,class Vector3 const &) const | ?FindImpactSphereToBox@phBoundBox@@QBEHPBVphBoundSphere@@ABVMatrix34@@1PAVphColliderBase@@2PAVphImpactBase@@ABVVector3@@4@Z
    0x47AFE0 | public: int __thiscall phBoundBox::FindImpactsBoxToBox(class phBoundBox const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phImpactBase *,int,class Vector3 const &) const | ?FindImpactsBoxToBox@phBoundBox@@QBEHPBV1@PBVMatrix34@@111PAVphColliderBase@@2PAVphImpactBase@@HABVVector3@@@Z
    0x47BA90 | public: int __thiscall phBoundBox::FindImpactsBoxToBoxOffset(class phBoundBox const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phImpactBase *,int,class Vector3 const &) const | ?FindImpactsBoxToBoxOffset@phBoundBox@@QBEHPBV1@PBVMatrix34@@111PAVphColliderBase@@2PAVphImpactBase@@HABVVector3@@@Z
    0x47C5D0 | private: static void __cdecl phBoundBox::AddEdgeChecks(int,int,bool) | ?AddEdgeChecks@phBoundBox@@CAXHH_N@Z
    0x47C690 | private: static void __cdecl phBoundBox::AvoidEdgeChecks(int,int,bool) | ?AvoidEdgeChecks@phBoundBox@@CAXHH_N@Z
    0x47C710 | private: static void __cdecl phBoundBox::AvoidEdgeChecks(int,int) | ?AvoidEdgeChecks@phBoundBox@@CAXHH@Z
    0x47C790 | private: static void __cdecl phBoundBox::MakeTransformedCorners(class Vector3 const &,class Vector3 const &,bool) | ?MakeTransformedCorners@phBoundBox@@CAXABVVector3@@0_N@Z
    0x47CAA0 | private: static void __cdecl phBoundBox::FindFaceDots(float,int *,int *) | ?FindFaceDots@phBoundBox@@CAXMPAH0@Z
    0x47CB50 | private: static void __cdecl phBoundBox::RemoveFaceDotZero(void) | ?RemoveFaceDotZero@phBoundBox@@CAXXZ
    0x47CBD0 | private: static bool __cdecl phBoundBox::CheckFourFaceDotPattern(void) | ?CheckFourFaceDotPattern@phBoundBox@@CA_NXZ
    0x47CC30 | private: static bool __cdecl phBoundBox::VerifyFaceDotPattern(void) | ?VerifyFaceDotPattern@phBoundBox@@CA_NXZ
    0x47CC80 | private: static void __cdecl phBoundBox::RemoveFifthFaceDotZero(void) | ?RemoveFifthFaceDotZero@phBoundBox@@CAXXZ
    0x47CD30 | private: static bool __cdecl phBoundBox::UseThisImpact(class Vector3 const &,class Vector3 const &,float,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *) | ?UseThisImpact@phBoundBox@@CA_NABVVector3@@0MPBVMatrix34@@111@Z
    0x47CE40 | private: static void __cdecl phBoundBox::BoxToBoxFaceImpactsOffset(class Vector3 const &,class Vector3 const &,class Vector3 const &,class phImpactBase *,int,bool,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *) | ?BoxToBoxFaceImpactsOffset@phBoundBox@@CAXABVVector3@@00PAVphImpactBase@@H_NPBVMatrix34@@333PAVphColliderBase@@4@Z
    0x47E4A0 | protected: void __thiscall phBoundBox::BoxToBoxFaceImpacts(class Vector3 const &,class phImpactBase *,int,bool,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *) const | ?BoxToBoxFaceImpacts@phBoundBox@@IBEXABVVector3@@PAVphImpactBase@@H_NPBVMatrix34@@333PAVphColliderBase@@4@Z
    0x47F9B0 | public: virtual int __thiscall phBoundBox::TestEdge(class phSegment &,class phIntersection *,int) const | ?TestEdge@phBoundBox@@UBEHAAVphSegment@@PAVphIntersection@@H@Z
    0x480010 | public: virtual bool __thiscall phBoundBox::TestProbe(class phSegment &,class phIntersection *,float) const | ?TestProbe@phBoundBox@@UBE_NAAVphSegment@@PAVphIntersection@@M@Z
    0x480060 | public: virtual bool __thiscall phBoundBox::TestProbePoint(class phSegment &,class phIntersectionPoint *,float) const | ?TestProbePoint@phBoundBox@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@M@Z
    0x480080 | public: virtual bool __thiscall phBoundBox::TestAIPoint(class phSegment &,class phIntersectionPoint *) const | ?TestAIPoint@phBoundBox@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@@Z
    0x4800A0 | protected: bool __thiscall phBoundBox::TestProbeSlave(class phSegment &,class phIntersectionPoint *,long *,float) const | ?TestProbeSlave@phBoundBox@@IBE_NAAVphSegment@@PAVphIntersectionPoint@@PAJM@Z
    0x4805B0 | public: static bool __cdecl phBoundBox::ProbeVsBox(class Vector3 const &,class phSegment &,class phIntersectionPoint *,long *,float) | ?ProbeVsBox@phBoundBox@@SA_NABVVector3@@AAVphSegment@@PAVphIntersectionPoint@@PAJM@Z
    0x480AC0 | public: void __thiscall Vector3::Negate(class Vector3 const &) | ?Negate@Vector3@@QAEXABV1@@Z
    0x5B1F00 | public: static int const (* phBoundBox::EdgeFromFace)[4] | ?EdgeFromFace@phBoundBox@@2QAY03$$CBHA
    public: static int const (* phBoundBox::FaceFromEdge)[2] | ?FaceFromEdge@phBoundBox@@2QAY01$$CBHA
    public: static int const (* phBoundBox::EdgeFromCorner)[3] | ?EdgeFromCorner@phBoundBox@@2QAY02$$CBHA
    public: static int const (* phBoundBox::CornerFromEdge)[2] | ?CornerFromEdge@phBoundBox@@2QAY01$$CBHA
    public: static int const (* phBoundBox::CornerFromFace)[4] | ?CornerFromFace@phBoundBox@@2QAY03$$CBHA
    public: static int const * const phBoundBox::CornerFromEdgeDotFlag | ?CornerFromEdgeDotFlag@phBoundBox@@2QBHB
    0x5B2100 | const phBoundBox::`vftable' | ??_7phBoundBox@@6B@
    0x5B2158 | const phBoundPolygonal::`vftable' | ??_7phBoundPolygonal@@6B@
    private: static class Vector3 * phBoundBox::TrandFaceNormals | ?TrandFaceNormals@phBoundBox@@0PAVVector3@@A
    private: static float phBoundBox::BestTime | ?BestTime@phBoundBox@@0MA
    private: static int phBoundBox::NumImpacts | ?NumImpacts@phBoundBox@@0HA
    public: static class Vector3 const * const phBoundBox::CornerNormals | ?CornerNormals@phBoundBox@@2QBVVector3@@B
    private: static int (* phBoundBox::FaceDotsExact)[3] | ?FaceDotsExact@phBoundBox@@0PAY02HA
    private: static float phBoundBox::BestDepth | ?BestDepth@phBoundBox@@0MA
    private: static int (* phBoundBox::FaceDots)[3] | ?FaceDots@phBoundBox@@0PAY02HA
    private: static class Vector3 * phBoundBox::Corners | ?Corners@phBoundBox@@0PAVVector3@@A
    public: static class phHotEdge const * const phBoundBox::BoxEdges | ?BoxEdges@phBoundBox@@2QBVphHotEdge@@B
    public: static class Vector3 const * const phBoundBox::UnitCorners | ?UnitCorners@phBoundBox@@2QBVVector3@@B
    0x6611B0 | public: static class Vector3 const * const phBoundBox::EdgeNormals | ?EdgeNormals@phBoundBox@@2QBVVector3@@B
    public: static class Vector3 const * const phBoundBox::FaceNormals | ?FaceNormals@phBoundBox@@2QBVVector3@@B
    0x661288 | private: static char (* phBoundBox::EdgeChecks)[12] | ?EdgeChecks@phBoundBox@@0PAY0M@DA
    private: static float phBoundBox::MaxTime | ?MaxTime@phBoundBox@@0MA
    private: static float (* phBoundBox::FaceDotFloats)[3] | ?FaceDotFloats@phBoundBox@@0PAY02MA
*/

#include "hooking.h"
