/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

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

// 0x43DDF0 | ?wpmin@@YAMMM@Z
inline float wpmin(float arg1, float arg2)
{
    return stub<cdecl_t<float, float, float>>(0x43DDF0, arg1, arg2);
}

// 0x43DE10 | ?wpmax@@YAMMM@Z
inline float wpmax(float arg1, float arg2)
{
    return stub<cdecl_t<float, float, float>>(0x43DE10, arg1, arg2);
}

struct mmWaypointObject : asNode
{
public:
    // mmWaypointObject::`vftable' @ 0x5B1180

    // 0x43DE30 | ??0mmWaypointObject@@QAE@AAVVector4@@PADHMHM@Z
    inline mmWaypointObject(class Vector4& arg1, char* arg2, int32_t arg3, float arg4, int32_t arg5, float arg6)
    {
        stub<member_func_t<void, mmWaypointObject, class Vector4&, char*, int32_t, float, int32_t, float>>(
            0x43DE30, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x43E0C0 | ?Activate@mmWaypointObject@@QAEXXZ
    inline void Activate()
    {
        return stub<member_func_t<void, mmWaypointObject>>(0x43E0C0, this);
    }

    // 0x43E0D0 | ?Deactivate@mmWaypointObject@@QAEXXZ
    inline void Deactivate()
    {
        return stub<member_func_t<void, mmWaypointObject>>(0x43E0D0, this);
    }

    // 0x43E0E0 | ?SetHeading@mmWaypointObject@@QAEXM@Z
    inline void SetHeading(float arg1)
    {
        return stub<member_func_t<void, mmWaypointObject, float>>(0x43E0E0, this, arg1);
    }

    // 0x43E140 | ?SetPos@mmWaypointObject@@QAEXVVector3@@@Z
    inline void SetPos(class Vector3 arg1)
    {
        return stub<member_func_t<void, mmWaypointObject, class Vector3>>(0x43E140, this, arg1);
    }

    // 0x43E160 | ?SetHeadingType@mmWaypointObject@@QAEXH@Z
    inline void SetHeadingType(int32_t arg1)
    {
        return stub<member_func_t<void, mmWaypointObject, int32_t>>(0x43E160, this, arg1);
    }

    // 0x43E170 | ?SetRadius@mmWaypointObject@@QAEXM@Z
    inline void SetRadius(float arg1)
    {
        return stub<member_func_t<void, mmWaypointObject, float>>(0x43E170, this, arg1);
    }

    // 0x43E190 | ?CalculateGatePoints@mmWaypointObject@@QAEXXZ
    inline void CalculateGatePoints()
    {
        return stub<member_func_t<void, mmWaypointObject>>(0x43E190, this);
    }

    // 0x43E210 | ?PlaneHit@mmWaypointObject@@QAEHVMatrix34@@VVector2@@1VVector3@@@Z
    inline int32_t PlaneHit(class Matrix34 arg1, class Vector2 arg2, class Vector2 arg3, class Vector3 arg4)
    {
        return stub<
            member_func_t<int32_t, mmWaypointObject, class Matrix34, class Vector2, class Vector2, class Vector3>>(
            0x43E210, this, arg1, arg2, arg3, arg4);
    }

    // 0x43E3B0 | ?RadiusHit@mmWaypointObject@@QAEHVVector3@@@Z
    inline int32_t RadiusHit(class Vector3 arg1)
    {
        return stub<member_func_t<int32_t, mmWaypointObject, class Vector3>>(0x43E3B0, this, arg1);
    }

    // 0x43E400 | ?LineIntersect@mmWaypointObject@@QAEHVVector2@@000M@Z
    inline int32_t LineIntersect(
        class Vector2 arg1, class Vector2 arg2, class Vector2 arg3, class Vector2 arg4, float arg5)
    {
        return stub<member_func_t<int32_t, mmWaypointObject, class Vector2, class Vector2, class Vector2, class Vector2,
            float>>(0x43E400, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x43E5E0 | ?GetDrawFlag@mmWaypointObject@@QAEHXZ
    inline int32_t GetDrawFlag()
    {
        return stub<member_func_t<int32_t, mmWaypointObject>>(0x43E5E0, this);
    }

    // 0x43E5F0 | ?Move@mmWaypointObject@@QAEXXZ
    inline void Move()
    {
        return stub<member_func_t<void, mmWaypointObject>>(0x43E5F0, this);
    }

    // 0x43E6C0 | ?GetHitFlag@mmWaypointObject@@QAEHXZ
    inline int32_t GetHitFlag()
    {
        return stub<member_func_t<int32_t, mmWaypointObject>>(0x43E6C0, this);
    }

    // 0x43E6D0 | ?SetHitFlag@mmWaypointObject@@QAEXH@Z
    inline void SetHitFlag(int32_t arg1)
    {
        return stub<member_func_t<void, mmWaypointObject, int32_t>>(0x43E6D0, this, arg1);
    }

    // 0x43E010 | ??1mmWaypointObject@@UAE@XZ
    inline ~mmWaypointObject() override
    {
        stub<member_func_t<void, mmWaypointObject>>(0x43E010, this);
    }

    // 0x43E060 | ?Update@mmWaypointObject@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmWaypointObject>>(0x43E060, this);
    }

    // 0x43E020 | ?Reset@mmWaypointObject@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmWaypointObject>>(0x43E020, this);
    }
};
