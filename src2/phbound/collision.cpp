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

#include "collision.h"

void phBoundCollision::GetDisp(
    class Matrix34 const* arg1, class Matrix34 const* arg2, class Vector3 const& arg3, class Vector3& arg4)
{
    return stub<cdecl_t<void, class Matrix34 const*, class Matrix34 const*, class Vector3 const&, class Vector3&>>(
        0x491700, arg1, arg2, arg3, arg4);
}

void phBoundCollision::SegSegDistNorm(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, class Vector3 const& arg5, class Vector3 const& arg6, class Vector3& arg7,
    class Vector3& arg8, class Vector3& arg9, f32& arg10, i32& arg11)
{
    return stub<cdecl_t<void, class Vector3 const&, class Vector3 const&, class Vector3 const&, class Vector3 const&,
        class Vector3 const&, class Vector3 const&, class Vector3&, class Vector3&, class Vector3&, f32&, i32&>>(
        0x4912C0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
}

void phBoundCollision::SetPenetration(f32 arg1)
{
    return stub<cdecl_t<void, f32>>(0x4917D0, arg1);
}

i32 phBoundCollision::testNoOverlap(f32 const* const arg1, f32 const* const arg2)
{
    return stub<cdecl_t<i32, f32 const* const, f32 const* const>>(0x4917F0, arg1, arg2);
}

class Vector3 operator*(f32 arg1, class Vector3 const& arg2)
{
    return stub<cdecl_t<class Vector3, f32, class Vector3 const&>>(0x4918E0, arg1, arg2);
}

define_dummy_symbol(phbound_collision);
