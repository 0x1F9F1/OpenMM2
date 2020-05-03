/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 Brick

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

#include "node/node.h"

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

// 0x43DE10 | ?wpmax@@YAMMM@Z
f32 wpmax(f32 arg1, f32 arg2);

// 0x43DDF0 | ?wpmin@@YAMMM@Z
f32 wpmin(f32 arg1, f32 arg2);

class mmWaypointObject : public asNode
{
    // const mmWaypointObject::`vftable' @ 0x5B1180

public:
    // 0x43DE30 | ??0mmWaypointObject@@QAE@AAVVector4@@PADHMHM@Z
    mmWaypointObject(class Vector4& arg1, char* arg2, i32 arg3, f32 arg4, i32 arg5, f32 arg6);

    // 0x43E6E0 | ??_GmmWaypointObject@@UAEPAXI@Z
    // 0x43E010 | ??1mmWaypointObject@@UAE@XZ
    ~mmWaypointObject() override;

    // 0x43E0C0 | ?Activate@mmWaypointObject@@QAEXXZ
    void Activate();

    // 0x43E190 | ?CalculateGatePoints@mmWaypointObject@@QAEXXZ
    void CalculateGatePoints();

    // 0x43E0D0 | ?Deactivate@mmWaypointObject@@QAEXXZ
    void Deactivate();

    // 0x43E5E0 | ?GetDrawFlag@mmWaypointObject@@QAEHXZ
    i32 GetDrawFlag();

    // 0x43E6C0 | ?GetHitFlag@mmWaypointObject@@QAEHXZ
    i32 GetHitFlag();

    // 0x43E400 | ?LineIntersect@mmWaypointObject@@QAEHVVector2@@000M@Z
    i32 LineIntersect(class Vector2 arg1, class Vector2 arg2, class Vector2 arg3, class Vector2 arg4, f32 arg5);

    // 0x43E5F0 | ?Move@mmWaypointObject@@QAEXXZ
    void Move();

    // 0x43E210 | ?PlaneHit@mmWaypointObject@@QAEHVMatrix34@@VVector2@@1VVector3@@@Z
    i32 PlaneHit(class Matrix34 arg1, class Vector2 arg2, class Vector2 arg3, class Vector3 arg4);

    // 0x43E3B0 | ?RadiusHit@mmWaypointObject@@QAEHVVector3@@@Z
    i32 RadiusHit(class Vector3 arg1);

    // 0x43E020 | ?Reset@mmWaypointObject@@UAEXXZ
    void Reset() override;

    // 0x43E0E0 | ?SetHeading@mmWaypointObject@@QAEXM@Z
    void SetHeading(f32 arg1);

    // 0x43E160 | ?SetHeadingType@mmWaypointObject@@QAEXH@Z
    void SetHeadingType(i32 arg1);

    // 0x43E6D0 | ?SetHitFlag@mmWaypointObject@@QAEXH@Z
    void SetHitFlag(i32 arg1);

    // 0x43E140 | ?SetPos@mmWaypointObject@@QAEXVVector3@@@Z
    void SetPos(class Vector3 arg1);

    // 0x43E170 | ?SetRadius@mmWaypointObject@@QAEXM@Z
    void SetRadius(f32 arg1);

    // 0x43E060 | ?Update@mmWaypointObject@@UAEXXZ
    void Update() override;
};

check_size(mmWaypointObject, 0x5C);
