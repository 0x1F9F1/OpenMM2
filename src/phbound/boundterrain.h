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
    phbound:boundterrain

    0x48C150 | public: __thiscall phBoundTerrain::phBoundTerrain(void) | ??0phBoundTerrain@@QAE@XZ
    0x48C1D0 | public: __thiscall phBoundTerrain::~phBoundTerrain(void) | ??1phBoundTerrain@@QAE@XZ
    0x48C270 | public: void __thiscall phBoundTerrain::SetHotEdges(bool) | ?SetHotEdges@phBoundTerrain@@QAEX_N@Z
    0x48C2D0 | public: virtual void __thiscall phBoundTerrain::PostLoadCompute(void) | ?PostLoadCompute@phBoundTerrain@@UAEXXZ
    0x48C2E0 | public: bool __thiscall phBoundTerrain::Load(char const *) | ?Load@phBoundTerrain@@QAE_NPBD@Z
    0x48C690 | public: bool __thiscall phBoundTerrain::Save(char const *) | ?Save@phBoundTerrain@@QAE_NPBD@Z
    0x48C8A0 | public: int __thiscall phBoundTerrain::TestBoundTerrainPoly(class phBoundPolygonal const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phIntersection *,class phIntersection *,int,int *,int *,class Vector3 const &,bool) const | ?TestBoundTerrainPoly@phBoundTerrain@@QBEHPBVphBoundPolygonal@@PBVMatrix34@@1PAVphColliderBase@@2PAVphIntersection@@3HPAH4ABVVector3@@_N@Z
    0x48C960 | public: int __thiscall phBoundTerrain::TestBoundTerrainEdgesVsPoly(class phBoundPolygonal const *,class phColliderBase *,class Matrix34 const *,class phIntersection *,int,int *) const | ?TestBoundTerrainEdgesVsPoly@phBoundTerrain@@QBEHPBVphBoundPolygonal@@PAVphColliderBase@@PBVMatrix34@@PAVphIntersection@@HPAH@Z
    0x48CD00 | public: int __thiscall phBoundTerrain::TestBoundPolyTerrain(class phBoundPolygonal const *,class phColliderBase *,class Matrix34 const *,class Matrix34 const *,class phIntersection *,int,int *,class Vector3 const *,bool) const | ?TestBoundPolyTerrain@phBoundTerrain@@QBEHPBVphBoundPolygonal@@PAVphColliderBase@@PBVMatrix34@@2PAVphIntersection@@HPAHPBVVector3@@_N@Z
    0x48D790 | public: virtual bool __thiscall phBoundTerrain::TestSphere(class Vector3 const &,float,class Vector3 &,class Vector3 &,float &) const | ?TestSphere@phBoundTerrain@@UBE_NABVVector3@@MAAV2@1AAM@Z
    public: virtual void __thiscall phBoundTerrain::DrawPhysics(class Vector3 const &) const | ?DrawPhysics@phBoundTerrain@@UBEXABVVector3@@@Z
    0x48D9C0 | public: void __thiscall phBoundTerrain::InitPolyIterator(class Vector3 const &,float) const | ?InitPolyIterator@phBoundTerrain@@QBEXABVVector3@@M@Z
    0x48DDC0 | public: void __thiscall phBoundTerrain::InitPolyIterator(class phSegment const &) const | ?InitPolyIterator@phBoundTerrain@@QBEXABVphSegment@@@Z
    0x48E0C0 | public: void __thiscall phBoundTerrain::ClearPolyTouched(void) const | ?ClearPolyTouched@phBoundTerrain@@QBEXXZ
    0x48E100 | public: virtual bool __thiscall phBoundTerrain::TestAIPoint(class phSegment &,class phIntersectionPoint *) const | ?TestAIPoint@phBoundTerrain@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@@Z
    0x48E200 | public: virtual bool __thiscall phBoundTerrain::TestProbePoint(class phSegment &,class phIntersectionPoint *,float) const | ?TestProbePoint@phBoundTerrain@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@M@Z
    0x48E310 | public: virtual bool __thiscall phBoundTerrain::TestProbe(class phSegment &,class phIntersection *,float) const | ?TestProbe@phBoundTerrain@@UBE_NAAVphSegment@@PAVphIntersection@@M@Z
    0x48E480 | public: virtual int __thiscall phBoundTerrain::TestEdge(class phSegment &,class phIntersection *,int) const | ?TestEdge@phBoundTerrain@@UBEHAAVphSegment@@PAVphIntersection@@H@Z
    0x48E680 | protected: void __thiscall phBoundTerrain::CalculateBuckets(float,float,float,float) const | ?CalculateBuckets@phBoundTerrain@@IBEXMMMM@Z
    0x48EF50 | public: int __thiscall phBoundTerrain::FindImpactsSphereToTerrain(class phBoundSphere const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phImpactBase *,int,class Vector3 const &,class Vector3 const &) const | ?FindImpactsSphereToTerrain@phBoundTerrain@@QBEHPBVphBoundSphere@@PBVMatrix34@@1PAVphColliderBase@@2PAVphImpactBase@@HABVVector3@@4@Z
    0x48F440 | public: int __thiscall phBoundTerrain::FindImpactsHotdogToTerrain(class phBoundHotdog const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phImpactBase *,int,class Vector3 const &,class Vector3 const &) const | ?FindImpactsHotdogToTerrain@phBoundTerrain@@QBEHPBVphBoundHotdog@@PBVMatrix34@@1PAVphColliderBase@@2PAVphImpactBase@@HABVVector3@@4@Z
    0x4901F0 | public: static void __cdecl phBoundTerrain::PackNormal(unsigned int &,class Vector4 const &) | ?PackNormal@phBoundTerrain@@SAXAAIABVVector4@@@Z
    0x490280 | public: static void __cdecl phBoundTerrain::UnpackNormal(class Vector4 &,unsigned int) | ?UnpackNormal@phBoundTerrain@@SAXAAVVector4@@I@Z
    protected: static float const phBoundTerrain::FileVersion | ?FileVersion@phBoundTerrain@@1MB
    0x5B2344 | const phBoundTerrain::`vftable' | ??_7phBoundTerrain@@6B@
    float gBoundTerrainLoad | ?gBoundTerrainLoad@@3MA
    protected: static bool phBoundTerrain::HotEdgesDefault | ?HotEdgesDefault@phBoundTerrain@@1_NA
*/

// #include "hooking.h"
