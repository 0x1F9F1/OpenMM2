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
    phbound:boundsphere

    0x484460 | public: __thiscall phBoundSphere::phBoundSphere(void) | ??0phBoundSphere@@QAE@XZ
    0x484490 | public: __thiscall phBoundSphere::phBoundSphere(float) | ??0phBoundSphere@@QAE@M@Z
    0x484500 | public: __thiscall phBoundSphere::~phBoundSphere(void) | ??1phBoundSphere@@QAE@XZ
    0x484510 | public: void __thiscall phBoundSphere::SetRadius(float) | ?SetRadius@phBoundSphere@@QAEXM@Z
    0x484550 | public: void __thiscall phBoundSphere::ScaleRadius(float) | ?ScaleRadius@phBoundSphere@@QAEXM@Z
    0x484590 | public: void __thiscall phBoundSphere::CreateOffset(class Vector3 const &) | ?CreateOffset@phBoundSphere@@QAEXABVVector3@@@Z
    0x4845C0 | public: void __thiscall phBoundSphere::ShiftCentroid(class Vector3 const &) | ?ShiftCentroid@phBoundSphere@@QAEXABVVector3@@@Z
    0x484660 | public: bool __thiscall phBoundSphere::Load(char const *) | ?Load@phBoundSphere@@QAE_NPBD@Z
    0x4849E0 | public: bool __thiscall phBoundSphere::FindImpactSphereToSphere(class phBoundSphere const *,class Matrix34 const *,class Matrix34 const *,class phColliderBase *,class phColliderBase *,class phImpactBase *,class Vector3 const &) const | ?FindImpactSphereToSphere@phBoundSphere@@QBE_NPBV1@PBVMatrix34@@1PAVphColliderBase@@2PAVphImpactBase@@ABVVector3@@@Z
    0x484BC0 | public: virtual bool __thiscall phBoundSphere::TestProbePoint(class phSegment &,class phIntersectionPoint *,float) const | ?TestProbePoint@phBoundSphere@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@M@Z
    0x484D70 | public: virtual bool __thiscall phBoundSphere::TestAIPoint(class phSegment &,class phIntersectionPoint *) const | ?TestAIPoint@phBoundSphere@@UBE_NAAVphSegment@@PAVphIntersectionPoint@@@Z
    0x484F10 | public: virtual int __thiscall phBoundSphere::TestEdge(class phSegment &,class phIntersection *,int) const | ?TestEdge@phBoundSphere@@UBEHAAVphSegment@@PAVphIntersection@@H@Z
    0x485210 | public: virtual bool __thiscall phBoundSphere::TestProbe(class phSegment &,class phIntersection *,float) const | ?TestProbe@phBoundSphere@@UBE_NAAVphSegment@@PAVphIntersection@@M@Z
    0x4853E0 | public: virtual bool __thiscall phBoundSphere::TestSphere(class Vector3 const &,float,class Vector3 &,class Vector3 &,float &) const | ?TestSphere@phBoundSphere@@UBE_NABVVector3@@MAAV2@1AAM@Z
    0x4854B0 | public: virtual bool __thiscall phBoundSphere::TestSphere(class Vector3 const &,float,class phImpactBase &) const | ?TestSphere@phBoundSphere@@UBE_NABVVector3@@MAAVphImpactBase@@@Z
    public: virtual void __thiscall phBoundSphere::DrawPhysics(class Vector3 const &) const | ?DrawPhysics@phBoundSphere@@UBEXABVVector3@@@Z
    0x4855D0 | public: virtual class phMaterial const * __thiscall phBoundSphere::GetMaterial(int) const | ?GetMaterial@phBoundSphere@@UBEPBVphMaterial@@H@Z
    0x5B2204 | const phBoundSphere::`vftable' | ??_7phBoundSphere@@6B@
*/

// #include "hooking.h"
