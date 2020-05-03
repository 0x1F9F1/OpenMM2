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

void phCollision::GetRelDisp(class Matrix34 const* arg1, class Matrix34 const* arg2, class Matrix34 const* arg3,
    class Vector3 const& arg4, class Vector3* arg5)
{
    return stub<cdecl_t<void, class Matrix34 const*, class Matrix34 const*, class Matrix34 const*, class Vector3 const&,
        class Vector3*>>(0x475B80, arg1, arg2, arg3, arg4, arg5);
}

void phCollision::SphereApplyCenterForceToHotdog(class phForceSphere const* arg1, class phColliderBase& arg2,
    class phBoundHotdog const* arg3, class phColliderBase& arg4)
{
    return stub<cdecl_t<void, class phForceSphere const*, class phColliderBase&, class phBoundHotdog const*,
        class phColliderBase&>>(0x474860, arg1, arg2, arg3, arg4);
}

bool phCollision::SphereApplyCenterForceToPoly(class phForceSphere const* arg1, class phColliderBase& arg2,
    class phBoundPolygonal const* arg3, class phColliderBase& arg4)
{
    return stub<cdecl_t<bool, class phForceSphere const*, class phColliderBase&, class phBoundPolygonal const*,
        class phColliderBase&>>(0x474030, arg1, arg2, arg3, arg4);
}

void phCollision::SphereApplyCenterForceToSphere(class phForceSphere const* arg1, class phColliderBase& arg2,
    class phBoundSphere const* arg3, class phColliderBase& arg4)
{
    return stub<cdecl_t<void, class phForceSphere const*, class phColliderBase&, class phBoundSphere const*,
        class phColliderBase&>>(0x4746F0, arg1, arg2, arg3, arg4);
}

void phCollision::TestBoundForce(class phBound const* arg1, class phColliderBase& arg2, class phBound const* arg3,
    class phColliderBase& arg4, class phImpact* arg5, i32 arg6, class Vector3 const& arg7)
{
    return stub<cdecl_t<void, class phBound const*, class phColliderBase&, class phBound const*, class phColliderBase&,
        class phImpact*, i32, class Vector3 const&>>(0x475B00, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

i32 phCollision::TestBoundGeneric(class phBound const* arg1, class phColliderBase& arg2, class phBound const* arg3,
    class phColliderBase& arg4, class phIntersection* arg5, class phIntersection* arg6, class phImpact* arg7, i32 arg8,
    i32 arg9, class Vector3 const& arg10)
{
    return stub<cdecl_t<i32, class phBound const*, class phColliderBase&, class phBound const*, class phColliderBase&,
        class phIntersection*, class phIntersection*, class phImpact*, i32, i32, class Vector3 const&>>(
        0x474A70, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

i32 phCollision::TestBoundGeneric(class phBound const* arg1, class phBound const* arg2, class Matrix34 const* arg3,
    class Matrix34 const* arg4, class Matrix34 const* arg5, class Matrix34 const* arg6, class phIntersection* arg7,
    class phIntersection* arg8, class phImpact* arg9, i32 arg10, i32 arg11, class Vector3 const& arg12, bool arg13)
{
    return stub<cdecl_t<i32, class phBound const*, class phBound const*, class Matrix34 const*, class Matrix34 const*,
        class Matrix34 const*, class Matrix34 const*, class phIntersection*, class phIntersection*, class phImpact*,
        i32, i32, class Vector3 const&, bool>>(
        0x475380, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
}

define_dummy_symbol(phcollide_collision);
