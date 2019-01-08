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
    mmgame:wpobject

    0x43DDF0 | float __cdecl wpmin(float,float) | ?wpmin@@YAMMM@Z
    0x43DE10 | float __cdecl wpmax(float,float) | ?wpmax@@YAMMM@Z
    0x43DE30 | public: __thiscall mmWaypointObject::mmWaypointObject(class Vector4 &,char *,int,float,int,float) | ??0mmWaypointObject@@QAE@AAVVector4@@PADHMHM@Z
    0x43E010 | public: virtual __thiscall mmWaypointObject::~mmWaypointObject(void) | ??1mmWaypointObject@@UAE@XZ
    0x43E020 | public: virtual void __thiscall mmWaypointObject::Reset(void) | ?Reset@mmWaypointObject@@UAEXXZ
    0x43E060 | public: virtual void __thiscall mmWaypointObject::Update(void) | ?Update@mmWaypointObject@@UAEXXZ
    0x43E0C0 | public: void __thiscall mmWaypointObject::Activate(void) | ?Activate@mmWaypointObject@@QAEXXZ
    0x43E0D0 | public: void __thiscall mmWaypointObject::Deactivate(void) | ?Deactivate@mmWaypointObject@@QAEXXZ
    0x43E0E0 | public: void __thiscall mmWaypointObject::SetHeading(float) | ?SetHeading@mmWaypointObject@@QAEXM@Z
    0x43E140 | public: void __thiscall mmWaypointObject::SetPos(class Vector3) | ?SetPos@mmWaypointObject@@QAEXVVector3@@@Z
    0x43E160 | public: void __thiscall mmWaypointObject::SetHeadingType(int) | ?SetHeadingType@mmWaypointObject@@QAEXH@Z
    0x43E170 | public: void __thiscall mmWaypointObject::SetRadius(float) | ?SetRadius@mmWaypointObject@@QAEXM@Z
    0x43E190 | public: void __thiscall mmWaypointObject::CalculateGatePoints(void) | ?CalculateGatePoints@mmWaypointObject@@QAEXXZ
    0x43E210 | public: int __thiscall mmWaypointObject::PlaneHit(class Matrix34,class Vector2,class Vector2,class Vector3) | ?PlaneHit@mmWaypointObject@@QAEHVMatrix34@@VVector2@@1VVector3@@@Z
    0x43E3B0 | public: int __thiscall mmWaypointObject::RadiusHit(class Vector3) | ?RadiusHit@mmWaypointObject@@QAEHVVector3@@@Z
    0x43E400 | public: int __thiscall mmWaypointObject::LineIntersect(class Vector2,class Vector2,class Vector2,class Vector2,float) | ?LineIntersect@mmWaypointObject@@QAEHVVector2@@000M@Z
    0x43E5E0 | public: int __thiscall mmWaypointObject::GetDrawFlag(void) | ?GetDrawFlag@mmWaypointObject@@QAEHXZ
    0x43E5F0 | public: void __thiscall mmWaypointObject::Move(void) | ?Move@mmWaypointObject@@QAEXXZ
    0x43E6C0 | public: int __thiscall mmWaypointObject::GetHitFlag(void) | ?GetHitFlag@mmWaypointObject@@QAEHXZ
    0x43E6D0 | public: void __thiscall mmWaypointObject::SetHitFlag(int) | ?SetHitFlag@mmWaypointObject@@QAEXH@Z
    0x43E6E0 | public: virtual void * __thiscall mmWaypointObject::`scalar deleting destructor'(unsigned int) | ??_GmmWaypointObject@@UAEPAXI@Z
    public: virtual void * __thiscall mmWaypointObject::`vector deleting destructor'(unsigned int) | ??_EmmWaypointObject@@UAEPAXI@Z
    0x5B1180 | const mmWaypointObject::`vftable' | ??_7mmWaypointObject@@6B@
*/

#include "hooking.h"
