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
    mmgame:netobject

    0x43BC10 | public: int __thiscall mmAccelCompute::Init(class Vector3,class Vector3) | ?Init@mmAccelCompute@@QAEHVVector3@@0@Z
    0x43BC60 | public: void __thiscall mmAccelCompute::SetLatest(class Vector3,float) | ?SetLatest@mmAccelCompute@@QAEXVVector3@@M@Z
    0x43BD70 | public: __thiscall mmNetPath::mmNetPath(void) | ??0mmNetPath@@QAE@XZ
    0x43BDB0 | public: __thiscall mmNetPath::~mmNetPath(void) | ??1mmNetPath@@QAE@XZ
    0x43BDC0 | public: void __thiscall mmNetPath::Reset(void) | ?Reset@mmNetPath@@QAEXXZ
    0x43BDF0 | public: void __thiscall mmNetPath::Compute(class Vector3 &,class Vector3 &,class Vector3 &,class Vector3 &) | ?Compute@mmNetPath@@QAEXAAVVector3@@000@Z
    0x43BFE0 | public: void __thiscall mmNetPath::Solve(class Vector3 &,class Vector3 &,float) | ?Solve@mmNetPath@@QAEXAAVVector3@@0M@Z
    0x43C080 | public: __thiscall mmNetObject::mmNetObject(void) | ??0mmNetObject@@QAE@XZ
    0x43C240 | public: virtual __thiscall mmNetObject::~mmNetObject(void) | ??1mmNetObject@@UAE@XZ
    0x43C260 | public: void __thiscall mmNetObject::ResetValues(void) | ?ResetValues@mmNetObject@@QAEXXZ
    0x43C370 | public: void __thiscall mmNetObject::Clear(void) | ?Clear@mmNetObject@@QAEXXZ
    0x43C480 | public: void __thiscall mmNetObject::Activate(void) | ?Activate@mmNetObject@@QAEXXZ
    0x43C4B0 | public: void __thiscall mmNetObject::Deactivate(void) | ?Deactivate@mmNetObject@@QAEXXZ
    0x43C4E0 | public: void __thiscall mmNetObject::Init(class vehCar *,char *,float,int,unsigned long,char *,bool) | ?Init@mmNetObject@@QAEXPAVvehCar@@PADMHK1_N@Z
    0x43C5D0 | public: void __thiscall mmNetObject::ReInit(class vehCar *,char *,float,int,unsigned long,char *,bool) | ?ReInit@mmNetObject@@QAEXPAVvehCar@@PADMHK1_N@Z
    0x43C740 | public: void __thiscall mmNetObject::SetCar(class vehCar *) | ?SetCar@mmNetObject@@QAEXPAVvehCar@@@Z
    0x43C750 | public: void __thiscall mmNetObject::Set(int) | ?Set@mmNetObject@@QAEXH@Z
    0x43C760 | public: void __thiscall mmNetObject::SetActive(int) | ?SetActive@mmNetObject@@QAEXH@Z
    0x43C780 | public: void __thiscall mmNetObject::SetScore(int) | ?SetScore@mmNetObject@@QAEXH@Z
    0x43C790 | public: void __thiscall mmNetObject::SetInputData(void) | ?SetInputData@mmNetObject@@QAEXXZ
    0x43C820 | public: int __thiscall mmNetObject::SetPositionData(unsigned long) | ?SetPositionData@mmNetObject@@QAEHK@Z
    0x43CC90 | public: void __thiscall mmNetObject::InputUpdate(struct NET_INPUTDATA *,float) | ?InputUpdate@mmNetObject@@QAEXPAUNET_INPUTDATA@@M@Z
    0x43CD10 | public: void __thiscall mmNetObject::PositionUpdate(struct NET_POSDATA *,float) | ?PositionUpdate@mmNetObject@@QAEXPAUNET_POSDATA@@M@Z
    0x43D700 | public: float __thiscall mmNetObject::GetPositionApproach(class Vector3 const &,class Vector3 const &) | ?GetPositionApproach@mmNetObject@@QAEMABVVector3@@0@Z
    0x43D750 | public: float __thiscall mmNetObject::GetAngleApproach(float,float) | ?GetAngleApproach@mmNetObject@@QAEMMM@Z
    0x43D760 | public: void __thiscall mmNetObject::Predict(void) | ?Predict@mmNetObject@@QAEXXZ
    0x43D850 | public: virtual void __thiscall mmNetObject::Update(void) | ?Update@mmNetObject@@UAEXXZ
    0x43D980 | public: virtual void __thiscall mmNetObject::Cull(void) | ?Cull@mmNetObject@@UAEXXZ
    public: virtual void __thiscall mmNetObject::AddWidgets(class bkBank &) | ?AddWidgets@mmNetObject@@UAEXAAVbkBank@@@Z
    0x43DD00 | public: virtual void * __thiscall mmNetObject::`scalar deleting destructor'(unsigned int) | ??_GmmNetObject@@UAEPAXI@Z
    public: virtual void * __thiscall mmNetObject::`vector deleting destructor'(unsigned int) | ??_EmmNetObject@@UAEPAXI@Z
    0x45CE40 | public: void __thiscall Vector3::Scale(class Vector3 const &,float) | ?Scale@Vector3@@QAEXABV1@M@Z
    public: class Vector3 __thiscall Vector3::operator*(float) const | ??DVector3@@QBE?AV0@M@Z
    0x43DD80 | public: void __thiscall Vector4::Set(float,float,float,float) | ?Set@Vector4@@QAEXMMMM@Z
    0x43DDA0 | public: float __thiscall Vector4::Dot(class Vector4 const &) const | ?Dot@Vector4@@QBEMABV1@@Z
    public: __thiscall Matrix34::Matrix34(void) | ??0Matrix34@@QAE@XZ
    public: __thiscall QuantVector3::QuantVector3(void) | ??0QuantVector3@@QAE@XZ
    public: __thiscall mmAccelCompute::~mmAccelCompute(void) | ??1mmAccelCompute@@QAE@XZ
    0x5B1138 | const mmNetObject::`vftable' | ??_7mmNetObject@@6B@
    int use_velocity | ?use_velocity@@3HA
*/

// #include "hooking.h"
