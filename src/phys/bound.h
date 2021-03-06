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
    phys:bound

    0x46A170 | public: __thiscall dgBoundGeometry::dgBoundGeometry(void) | ??0dgBoundGeometry@@QAE@XZ
    0x46A1F0 | public: __thiscall dgBoundGeometry::~dgBoundGeometry(void) | ??1dgBoundGeometry@@QAE@XZ
    0x46A250 | public: virtual void __thiscall dgBoundGeometry::SetFriction(float) | ?SetFriction@dgBoundGeometry@@UAEXM@Z
    0x46A260 | public: virtual void __thiscall dgBoundGeometry::SetElasticity(float) | ?SetElasticity@dgBoundGeometry@@UAEXM@Z
    0x46A270 | public: __thiscall dgBoundBox::dgBoundBox(void) | ??0dgBoundBox@@QAE@XZ
    0x46A2E0 | public: __thiscall dgBoundBox::~dgBoundBox(void) | ??1dgBoundBox@@QAE@XZ
    0x46A340 | public: virtual void __thiscall dgBoundBox::SetFriction(float) | ?SetFriction@dgBoundBox@@UAEXM@Z
    0x46A360 | public: virtual void __thiscall dgBoundBox::SetElasticity(float) | ?SetElasticity@dgBoundBox@@UAEXM@Z
    0x46A380 | public: __thiscall dgBoundHotdog::dgBoundHotdog(void) | ??0dgBoundHotdog@@QAE@XZ
    0x46A3F0 | public: __thiscall dgBoundHotdog::~dgBoundHotdog(void) | ??1dgBoundHotdog@@QAE@XZ
    0x46A450 | public: virtual void __thiscall dgBoundHotdog::SetFriction(float) | ?SetFriction@dgBoundHotdog@@UAEXM@Z
    0x46A470 | public: virtual void __thiscall dgBoundHotdog::SetElasticity(float) | ?SetElasticity@dgBoundHotdog@@UAEXM@Z
    0x46A490 | public: __thiscall dgBoundSphere::dgBoundSphere(void) | ??0dgBoundSphere@@QAE@XZ
    0x46A500 | public: __thiscall dgBoundSphere::~dgBoundSphere(void) | ??1dgBoundSphere@@QAE@XZ
    0x46A560 | public: virtual void __thiscall dgBoundSphere::SetFriction(float) | ?SetFriction@dgBoundSphere@@UAEXM@Z
    0x46A580 | public: virtual void __thiscall dgBoundSphere::SetElasticity(float) | ?SetElasticity@dgBoundSphere@@UAEXM@Z
    0x46A5A0 | public: virtual class Vector3 const & __thiscall phBoundPolygonal::GetVertex(int) const | ?GetVertex@phBoundPolygonal@@UBEABVVector3@@H@Z
    0x46A5C0 | public: virtual float __thiscall phBoundGeometry::GetEdgeCosine(int) const | ?GetEdgeCosine@phBoundGeometry@@UBEMH@Z
    0x46A5D0 | public: virtual class Vector3 const & __thiscall phBoundGeometry::GetEdgeNormal(int,class Vector3 &) const | ?GetEdgeNormal@phBoundGeometry@@UBEABVVector3@@HAAV2@@Z
    0x46A5F0 | public: virtual class phMaterial const * __thiscall dgBoundGeometry::GetMaterial(int) const | ?GetMaterial@dgBoundGeometry@@UBEPBVphMaterial@@H@Z
    0x46A600 | public: virtual int __thiscall dgBoundGeometry::GetNumMaterials(void) const | ?GetNumMaterials@dgBoundGeometry@@UBEHXZ
    0x46A610 | public: virtual float __thiscall phBoundBox::GetEdgeCosine(int) const | ?GetEdgeCosine@phBoundBox@@UBEMH@Z
    0x46A620 | public: virtual class phMaterial const * __thiscall dgBoundBox::GetMaterial(int) const | ?GetMaterial@dgBoundBox@@UBEPBVphMaterial@@H@Z
    0x46A630 | public: virtual int __thiscall dgBoundBox::GetNumMaterials(void) const | ?GetNumMaterials@dgBoundBox@@UBEHXZ
    0x46A640 | public: virtual class phMaterial const * __thiscall dgBoundHotdog::GetMaterial(int) const | ?GetMaterial@dgBoundHotdog@@UBEPBVphMaterial@@H@Z
    0x46A650 | public: virtual int __thiscall dgBoundHotdog::GetNumMaterials(void) const | ?GetNumMaterials@dgBoundHotdog@@UBEHXZ
    0x46A660 | public: virtual class phMaterial const * __thiscall dgBoundSphere::GetMaterial(int) const | ?GetMaterial@dgBoundSphere@@UBEPBVphMaterial@@H@Z
    0x46A670 | public: virtual int __thiscall dgBoundSphere::GetNumMaterials(void) const | ?GetNumMaterials@dgBoundSphere@@UBEHXZ
    0x5B1D3C | const dgBoundGeometry::`vftable' | ??_7dgBoundGeometry@@6B@
    0x5B1D98 | const dgBoundBox::`vftable' | ??_7dgBoundBox@@6B@
    0x5B1DF4 | const dgBoundHotdog::`vftable' | ??_7dgBoundHotdog@@6B@
    0x5B1E38 | const dgBoundSphere::`vftable' | ??_7dgBoundSphere@@6B@
*/

// #include "hooking.h"
