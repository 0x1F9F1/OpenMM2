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

#include "collisionprim.h"

bool phCollisionPrim::SegmentSphereTest(f32 arg1, class phSegment const& arg2)
{
    return stub<cdecl_t<bool, f32, class phSegment const&>>(0x492E00, arg1, arg2);
}

bool phCollisionPrim::SegmentSphereTest(class Vector3 const& arg1, f32 arg2, class phSegment const& arg3)
{
    return stub<cdecl_t<bool, class Vector3 const&, f32, class phSegment const&>>(0x492D00, arg1, arg2, arg3);
}

bool phCollisionPrim::SegmentSphereTest(f32 arg1, class Vector3 const& arg2, class Vector3 const& arg3)
{
    return stub<cdecl_t<bool, f32, class Vector3 const&, class Vector3 const&>>(0x492F00, arg1, arg2, arg3);
}

bool phCollisionPrim::SegmentSphereTest(
    class Vector3 const& arg1, f32 arg2, class Vector3 const& arg3, class Vector3 const& arg4)
{
    return stub<cdecl_t<bool, class Vector3 const&, f32, class Vector3 const&, class Vector3 const&>>(
        0x492C10, arg1, arg2, arg3, arg4);
}

bool phCollisionPrim::SegmentToSphere(
    class Vector3 const& arg1, f32 arg2, class phSegment const& arg3, class phIntersectionPoint* arg4)
{
    return stub<cdecl_t<bool, class Vector3 const&, f32, class phSegment const&, class phIntersectionPoint*>>(
        0x492A00, arg1, arg2, arg3, arg4);
}

bool phCollisionPrim::SphereToPolygonal(class Vector3 const& arg1, f32 arg2, class phBoundPolygonal const* arg3,
    class Vector3& arg4, class Vector3& arg5, f32& arg6)
{
    return stub<
        cdecl_t<bool, class Vector3 const&, f32, class phBoundPolygonal const*, class Vector3&, class Vector3&, f32&>>(
        0x4925D0, arg1, arg2, arg3, arg4, arg5, arg6);
}

bool phCollisionPrim::SphereToPolygonal(class Vector3 const& arg1, f32 arg2, class phBoundPolygonal const* arg3,
    class Matrix34 const& arg4, class Vector3& arg5, class Vector3& arg6, f32& arg7)
{
    return stub<cdecl_t<bool, class Vector3 const&, f32, class phBoundPolygonal const*, class Matrix34 const&,
        class Vector3&, class Vector3&, f32&>>(0x492770, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

define_dummy_symbol(phbound_collisionprim);
