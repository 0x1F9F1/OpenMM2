/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
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
    phbound:collision

    0x4912C0 | public: static void __cdecl phBoundCollision::SegSegDistNorm(class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 const &,class Vector3 &,class Vector3 &,class Vector3 &,float &,int &) | ?SegSegDistNorm@phBoundCollision@@SAXABVVector3@@00000AAV2@11AAMAAH@Z
    0x491700 | public: static void __cdecl phBoundCollision::GetDisp(class Matrix34 const *,class Matrix34 const *,class Vector3 const &,class Vector3 &) | ?GetDisp@phBoundCollision@@SAXPBVMatrix34@@0ABVVector3@@AAV3@@Z
    0x4917D0 | public: static void __cdecl phBoundCollision::SetPenetration(float) | ?SetPenetration@phBoundCollision@@SAXM@Z
    0x4917F0 | private: static int __cdecl phBoundCollision::testNoOverlap(float const * const,float const * const) | ?testNoOverlap@phBoundCollision@@CAHQBM0@Z
    0x491860 | public: class Vector3 __thiscall Vector3::operator-(class Vector3 const &) const | ??GVector3@@QBE?AV0@ABV0@@Z
    0x4918A0 | public: class Vector3 __thiscall Vector3::operator/(float) const | ??KVector3@@QBE?AV0@M@Z
    0x4918E0 | class Vector3 __cdecl operator*(float,class Vector3 const &) | ??D@YA?AVVector3@@MABV0@@Z
    private: static float const phBoundCollision::FRACTIONOVERLAP | ?FRACTIONOVERLAP@phBoundCollision@@0MB
    public: static float phBoundCollision::Penetration | ?Penetration@phBoundCollision@@2MA
    public: static float phBoundCollision::PenetrationBarelyMoved | ?PenetrationBarelyMoved@phBoundCollision@@2MA
*/

// 0x4918E0 | ??D@YA?AVVector3@@MABV0@@Z
inline class Vector3 operator*(float arg1, class Vector3 const& arg2)
{
    return stub<cdecl_t<class Vector3, float, class Vector3 const&>>(0x4918E0, arg1, arg2);
}
