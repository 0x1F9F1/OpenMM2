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

/*
    phbound:collision

    0x4912C0 | public: static void __cdecl phBoundCollision::SegSegDistNorm(class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 &,class Vector3 &,class Vector3 &,float &,int &) | ?SegSegDistNorm@phBoundCollision@@SAXABVVector3@@00000AAV2@11AAMAAH@Z
    0x491700 | public: static void __cdecl phBoundCollision::GetDisp(class Matrix34 const *,class Matrix34 const *,class Vector3 const &,class Vector3 &) | ?GetDisp@phBoundCollision@@SAXPBVMatrix34@@0ABVVector3@@AAV3@@Z
    0x4917D0 | public: static void __cdecl phBoundCollision::SetPenetration(float) | ?SetPenetration@phBoundCollision@@SAXM@Z
    0x4917F0 | private: static int __cdecl phBoundCollision::testNoOverlap(float const * const,float const * const) | ?testNoOverlap@phBoundCollision@@CAHQBM0@Z
    0x491860 | public: class Vector3 __thiscall Vector3::operator-(class Vector3 const &) const | ??GVector3@@QBE?AV0@ABV0@@Z
    0x4918A0 | public: class Vector3 __thiscall Vector3::operator/(float) const | ??KVector3@@QBE?AV0@M@Z
    0x4918E0 | class Vector3 __cdecl operator*(float,class Vector3 const &) | ??D@YA?AVVector3@@MABV0@@Z
    private: static float const phBoundCollision::FRACTIONOVERLAP | ?FRACTIONOVERLAP@phBoundCollision@@0MB
    0x5C762C | public: static float phBoundCollision::Penetration | ?Penetration@phBoundCollision@@2MA
    0x5C7630 | public: static float phBoundCollision::PenetrationBarelyMoved | ?PenetrationBarelyMoved@phBoundCollision@@2MA
*/

struct phBoundCollision
{
public:
    // 0x491700 | ?GetDisp@phBoundCollision@@SAXPBVMatrix34@@0ABVVector3@@AAV3@@Z
    static void GetDisp(
        class Matrix34 const* arg1, class Matrix34 const* arg2, class Vector3 const& arg3, class Vector3& arg4);

    // 0x4912C0 | ?SegSegDistNorm@phBoundCollision@@SAXABVVector3@@00000AAV2@11AAMAAH@Z
    static void SegSegDistNorm(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
        class Vector3 const& arg4, class Vector3 const& arg5, class Vector3 const& arg6, class Vector3& arg7,
        class Vector3& arg8, class Vector3& arg9, f32& arg10, i32& arg11);

    // 0x4917D0 | ?SetPenetration@phBoundCollision@@SAXM@Z
    static void SetPenetration(f32 arg1);

    // 0x5C762C | ?Penetration@phBoundCollision@@2MA
    static inline extern_var(0x5C762C, f32, Penetration);

    // 0x5C7630 | ?PenetrationBarelyMoved@phBoundCollision@@2MA
    static inline extern_var(0x5C7630, f32, PenetrationBarelyMoved);

private:
    // 0x4917F0 | ?testNoOverlap@phBoundCollision@@CAHQBM0@Z
    static i32 testNoOverlap(f32 const* const arg1, f32 const* const arg2);
};

// 0x4918E0 | ??D@YA?AVVector3@@MABV0@@Z
class Vector3 operator*(f32 arg1, class Vector3 const& arg2);
