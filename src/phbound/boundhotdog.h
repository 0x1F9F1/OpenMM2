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
    phbound:boundhotdog

    0x480AE0 | public: __thiscall phBoundHotdog::phBoundHotdog(void) | ??0phBoundHotdog@@QAE@XZ
    0x480B20 | public: __thiscall phBoundHotdog::phBoundHotdog(float,float) | ??0phBoundHotdog@@QAE@MM@Z
    0x480B60 | public: void __thiscall phBoundHotdog::SetSize(float,float) | ?SetSize@phBoundHotdog@@QAEXMM@Z
    0x480BD0 | public: __thiscall phBoundHotdog::~phBoundHotdog(void) | ??1phBoundHotdog@@QAE@XZ
    0x480BE0 | public: void __thiscall phBoundHotdog::SetBoundingBox(float,float) | ?SetBoundingBox@phBoundHotdog@@QAEXMM@Z
    0x480C20 | public: void __thiscall phBoundHotdog::ScaleBoundingBox(float,float) | ?ScaleBoundingBox@phBoundHotdog@@QAEXMM@Z
    0x480C60 | public: void __thiscall phBoundHotdog::CalculateBoundingBox(void) | ?CalculateBoundingBox@phBoundHotdog@@QAEXXZ
    0x480CE0 | public: void __thiscall phBoundHotdog::CreateOffset(class Vector3 const &) | ?CreateOffset@phBoundHotdog@@QAEXABVVector3@@@Z
    0x480D10 | public: void __thiscall phBoundHotdog::ShiftCentroid(class Vector3 const &) | ?ShiftCentroid@phBoundHotdog@@QAEXABVVector3@@@Z
    0x480D50 | public: virtual bool __thiscall phBoundHotdog::TestProbePoint(class phSegment &,class phIntersectionPoint *,float) const | ?TestProbePoint@phBoundHotdog@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@M@Z
    0x480F10 | public: virtual bool __thiscall phBoundHotdog::TestAIPoint(class phSegment &,class phIntersectionPoint *) const | ?TestAIPoint@phBoundHotdog@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@@Z
    0x4810A0 | public: virtual int __thiscall phBoundHotdog::TestEdge(class phSegment &,class phIntersection *,int) const | ?TestEdge@phBoundHotdog@@UBEHAAVphSegment@@PAVphIntersection@@H@Z
    0x4813A0 | public: virtual bool __thiscall phBoundHotdog::TestProbe(class phSegment &,class phIntersection *,float) const | ?TestProbe@phBoundHotdog@@UBE_NAAVphSegment@@PAVphIntersection@@M@Z
    0x481570 | public: virtual bool __thiscall phBoundHotdog::TestSphere(class Vector3 const &,float,class Vector3 &,class Vector3 &,float &) const | ?TestSphere@phBoundHotdog@@UBE_NABVVector3@@MAAV2@1AAM@Z
    0x481810 | public: bool __thiscall phBoundHotdog::IsInsideHotdog(class Vector3 const &) const | ?IsInsideHotdog@phBoundHotdog@@QBE_NABVVector3@@@Z
    0x481900 | public: int __thiscall phBoundHotdog::SegmentToHotdogIntersections(class Vector3 const &,class Vector3 const &,float *,float *,float *,float *,int *,int *) const | ?SegmentToHotdogIntersections@phBoundHotdog@@QBEHABVVector3@@0PAM111PAH2@Z
    0x481E70 | public: class Vector3 __thiscall phBoundHotdog::FindHotdogIsectNormal(class Vector3 const &,int) const | ?FindHotdogIsectNormal@phBoundHotdog@@QBE?AVVector3@@ABV2@H@Z
    0x481F40 | public: bool __thiscall phBoundHotdog::FindImpactSphereToHotdog(class phBoundSphere const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phImpactBase *,class Vector3 const &) const | ?FindImpactSphereToHotdog@phBoundHotdog@@QBE_NPBVphBoundSphere@@PBVMatrix34@@1PAVphColliderBase@@2PAVphImpactBase@@ABVVector3@@@Z
    0x482440 | public: int __thiscall phBoundHotdog::FindImpactsHotdogToPoly(class phBoundPolygonal const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phImpactBase *,int,class Vector3 const &,class Vector3 const &) const | ?FindImpactsHotdogToPoly@phBoundHotdog@@QBEHPBVphBoundPolygonal@@PBVMatrix34@@1PAVphColliderBase@@2PAVphImpactBase@@HABVVector3@@4@Z
    0x483880 | public: int __thiscall phBoundHotdog::FindImpactsHotdogToHotdog(class phBoundHotdog const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phImpactBase *,int) const | ?FindImpactsHotdogToHotdog@phBoundHotdog@@QBEHPBV1@PBVMatrix34@@1PAVphColliderBase@@2PAVphImpactBase@@H@Z
    public: virtual void __thiscall phBoundHotdog::DrawPhysics(class Vector3 const &) const | ?DrawPhysics@phBoundHotdog@@UBEXABVVector3@@@Z
    0x484080 | public: bool __thiscall phBoundHotdog::Load(char const *) | ?Load@phBoundHotdog@@QAE_NPBD@Z
    0x484420 | public: void __thiscall Vector3::AddScaled(class Vector3 const &,class Vector3 const &,float) | ?AddScaled@Vector3@@QAEXABV1@0M@Z
    0x484450 | public: virtual class phMaterial const * __thiscall phBoundHotdog::GetMaterial(int) const | ?GetMaterial@phBoundHotdog@@UBEPBVphMaterial@@H@Z
    0x5B21B8 | const phBoundHotdog::`vftable' | ??_7phBoundHotdog@@6B@
*/

// #include "hooking.h"
