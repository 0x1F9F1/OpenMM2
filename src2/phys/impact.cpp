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

#include "impact.h"

i32 dgImpact::CalcCollision(class Vector3 const& arg1, f32 arg2, class Vector3* arg3, class Vector3* arg4,
    class Vector3* arg5, class Vector3* arg6, f32 arg7)
{
    return stub<thiscall_t<i32, dgImpact*, class Vector3 const&, f32, class Vector3*, class Vector3*, class Vector3*,
        class Vector3*, f32>>(0x46B7D0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

i32 dgImpact::CalcCollision(class Vector3 const& arg1, f32 arg2, class Vector3* arg3, class Vector3* arg4,
    class Vector3* arg5, class Vector3* arg6, class Vector3* arg7, class Vector3* arg8, bool arg9, bool arg10,
    i32 arg11, i32 arg12, f32 arg13)
{
    return stub<thiscall_t<i32, dgImpact*, class Vector3 const&, f32, class Vector3*, class Vector3*, class Vector3*,
        class Vector3*, class Vector3*, class Vector3*, bool, bool, i32, i32, f32>>(
        0x46BE80, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
}

i32 dgImpact::CalcImpact(class dgImpact* arg1, f32 arg2, f32 arg3)
{
    return stub<cdecl_t<i32, class dgImpact*, f32, f32>>(0x46B620, arg1, arg2, arg3);
}

define_dummy_symbol(phys_impact);
