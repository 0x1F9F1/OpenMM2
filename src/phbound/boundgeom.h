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
    phbound:boundgeom

    0x4855E0 | public: __thiscall phBoundGeometry::phBoundGeometry(void) | ??0phBoundGeometry@@QAE@XZ
    0x485620 | public: __thiscall phBoundGeometry::~phBoundGeometry(void) | ??1phBoundGeometry@@QAE@XZ
    0x485670 | public: void __thiscall phBoundGeometry::Init(int,int,int,int) | ?Init@phBoundGeometry@@QAEXHHHH@Z
    0x485780 | public: virtual void __thiscall phBoundGeometry::PostLoadCompute(void) | ?PostLoadCompute@phBoundGeometry@@UAEXXZ
    0x4857AB | public: bool __thiscall phBoundGeometry::Load(char const *,class Vector3 const *) | ?Load@phBoundGeometry@@QAE_NPBDPBVVector3@@@Z
    public: bool __thiscall phBoundGeometry::Save(char const *) | ?Save@phBoundGeometry@@QAE_NPBD@Z
    0x4860B9 | public: bool __thiscall phBoundGeometry::LoadBinary(char const *) | ?LoadBinary@phBoundGeometry@@QAE_NPBD@Z
    public: bool __thiscall phBoundGeometry::SaveBinary(char const *) | ?SaveBinary@phBoundGeometry@@QAE_NPBD@Z
    0x4862C9 | public: void __thiscall phBoundGeometry::ScaleSize(float,float,float) | ?ScaleSize@phBoundGeometry@@QAEXMMM@Z
    0x4863A9 | public: void __thiscall phBoundGeometry::ShiftCentroid(class Vector3 const &) | ?ShiftCentroid@phBoundGeometry@@QAEXABVVector3@@@Z
    public: bool __thiscall phBoundGeometry::WeldVertices(void) | ?WeldVertices@phBoundGeometry@@QAE_NXZ
    public: bool __thiscall phBoundGeometry::ConvertTrianglesToQuads(void) | ?ConvertTrianglesToQuads@phBoundGeometry@@QAE_NXZ
    public: bool __thiscall phBoundGeometry::EdgeHasTheseVerts(int,int,int) | ?EdgeHasTheseVerts@phBoundGeometry@@QAE_NHHH@Z
    0x4863F9 | public: void __thiscall phBoundGeometry::ComputeEdges(void) | ?ComputeEdges@phBoundGeometry@@QAEXXZ
    0x486609 | protected: static long __cdecl phBoundGeometry::EdgeInList(int,int,long,class phHotEdge *) | ?EdgeInList@phBoundGeometry@@KAJHHJPAVphHotEdge@@@Z
    0x486659 | public: void __thiscall phBoundGeometry::ComputeEdgeNums(void) | ?ComputeEdgeNums@phBoundGeometry@@QAEXXZ
    0x486739 | public: void __thiscall phBoundGeometry::ComputeEdgeNormals(void) | ?ComputeEdgeNormals@phBoundGeometry@@QAEXXZ
    0x4867A9 | public: void __thiscall phBoundGeometry::ReComputeEdgeNormals(void) | ?ReComputeEdgeNormals@phBoundGeometry@@QAEXXZ
    0x486B89 | public: void __thiscall phBoundGeometry::SetQuickTestInfo(void) | ?SetQuickTestInfo@phBoundGeometry@@QAEXXZ
    0x486C39 | public: void __thiscall phBoundGeometry::CalculatePolyNormals(void) | ?CalculatePolyNormals@phBoundGeometry@@QAEXXZ
    0x486C69 | public: bool __thiscall phBoundGeometry::OverlapRegion(class Vector3 const *,int,float,float) | ?OverlapRegion@phBoundGeometry@@QAE_NPBVVector3@@HMM@Z
    0x486D39 | public: bool __thiscall phBoundGeometry::GhostSection(class phBoundGeometry const *,class Vector3 const *,int,float,float) | ?GhostSection@phBoundGeometry@@QAE_NPBV1@PBVVector3@@HMM@Z
    0x4871A0 | public: virtual class phMaterial const * __thiscall phBoundGeometry::GetMaterial(int) const | ?GetMaterial@phBoundGeometry@@UBEPBVphMaterial@@H@Z
    0x5B2248 | const phBoundGeometry::`vftable' | ??_7phBoundGeometry@@6B@
    0x5B22A4 | const datBaseTokenizer::`vftable' | ??_7datBaseTokenizer@@6B@
    private: static char phBoundGeometry::sm_Version | ?sm_Version@phBoundGeometry@@0DA
    float gBoundGeometryLoad | ?gBoundGeometryLoad@@3MA
    float gBoundGeometryLoadBinary | ?gBoundGeometryLoadBinary@@3MA
*/

#include "hooking.h"
