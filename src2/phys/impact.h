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
    phys:impact

    0x46B620 | public: static int __cdecl dgImpact::CalcImpact(class dgImpact *,float,float) | ?CalcImpact@dgImpact@@SAHPAV1@MM@Z
    0x46B7D0 | public: int __thiscall dgImpact::CalcCollision(class Vector3 const &,float,class Vector3 *,class Vector3 *,class Vector3 *,class Vector3 *,float) | ?CalcCollision@dgImpact@@QAEHABVVector3@@MPAV2@111M@Z
    0x46BE80 | public: int __thiscall dgImpact::CalcCollision(class Vector3 const &,float,class Vector3 *,class Vector3 *,class Vector3 *,class Vector3 *,class Vector3 *,class Vector3 *,bool,bool,int,int,float) | ?CalcCollision@dgImpact@@QAEHABVVector3@@MPAV2@11111_N2HHM@Z
    public: void __thiscall Vector3::operator*=(float) | ??XVector3@@QAEXM@Z
    public: void __thiscall Vector3::Negate(void) | ?Negate@Vector3@@QAEXXZ
    0x45CCD0 | public: void __thiscall Vector3::operator+=(class Vector3 const &) | ??YVector3@@QAEXABV0@@Z
    public: void __thiscall Vector3::Dot(class Matrix34 const &) | ?Dot@Vector3@@QAEXABVMatrix34@@@Z
*/

class dgImpact
{
public:
    // 0x46B620 | ?CalcImpact@dgImpact@@SAHPAV1@MM@Z
    static inline i32 CalcImpact(class dgImpact* arg1, f32 arg2, f32 arg3)
    {
        return stub<cdecl_t<i32, class dgImpact*, f32, f32>>(0x46B620, arg1, arg2, arg3);
    }

    // 0x46B7D0 | ?CalcCollision@dgImpact@@QAEHABVVector3@@MPAV2@111M@Z
    inline i32 CalcCollision(class Vector3 const& arg1, f32 arg2, class Vector3* arg3, class Vector3* arg4,
        class Vector3* arg5, class Vector3* arg6, f32 arg7)
    {
        return stub<member_func_t<i32, dgImpact, class Vector3 const&, f32, class Vector3*, class Vector3*,
            class Vector3*, class Vector3*, f32>>(0x46B7D0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x46BE80 | ?CalcCollision@dgImpact@@QAEHABVVector3@@MPAV2@11111_N2HHM@Z
    inline i32 CalcCollision(class Vector3 const& arg1, f32 arg2, class Vector3* arg3, class Vector3* arg4,
        class Vector3* arg5, class Vector3* arg6, class Vector3* arg7, class Vector3* arg8, bool arg9, bool arg10,
        i32 arg11, i32 arg12, f32 arg13)
    {
        return stub<member_func_t<i32, dgImpact, class Vector3 const&, f32, class Vector3*, class Vector3*,
            class Vector3*, class Vector3*, class Vector3*, class Vector3*, bool, bool, i32, i32, f32>>(
            0x46BE80, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    }
};
