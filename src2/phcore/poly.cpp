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

#include "poly.h"

phPolygon::phPolygon()
{
    unimplemented();
}

void phPolygon::CalculateNormal(class Vector3 const* arg1)
{
    return stub<thiscall_t<void, phPolygon*, class Vector3 const*>>(0x493A40, this, arg1);
}

i32 phPolygon::DetectSegmentDirected(class Vector3 const* arg1, class Vector3 const& arg2, class Vector3 const& arg3)
{
    return stub<thiscall_t<i32, phPolygon*, class Vector3 const*, class Vector3 const&, class Vector3 const&>>(
        0x4944B0, this, arg1, arg2, arg3);
}

i32 phPolygon::DetectSegmentUndirected(class Vector3 const* arg1, class Vector4 const& arg2, class Vector4 const& arg3)
{
    return stub<thiscall_t<i32, phPolygon*, class Vector3 const*, class Vector4 const&, class Vector4 const&>>(
        0x494780, this, arg1, arg2, arg3);
}

void phPolygon::InitQuad(u16 arg1, u16 arg2, u16 arg3, u16 arg4, class Vector3 const* arg5)
{
    return stub<thiscall_t<void, phPolygon*, u16, u16, u16, u16, class Vector3 const*>>(
        0x493940, this, arg1, arg2, arg3, arg4, arg5);
}

void phPolygon::InitTriangle(u16 arg1, u16 arg2, u16 arg3, class Vector3 const* arg4)
{
    return stub<thiscall_t<void, phPolygon*, u16, u16, u16, class Vector3 const*>>(
        0x493910, this, arg1, arg2, arg3, arg4);
}

void phPolygon::Rotate()
{
    return stub<thiscall_t<void, phPolygon*>>(0x493970, this);
}

i32 phPolygon::TestSegmentDirected(
    class Vector3 const* arg1, class phSegment const& arg2, class phIntersectionPoint* arg3, f32 arg4)
{
    return stub<
        thiscall_t<i32, phPolygon*, class Vector3 const*, class phSegment const&, class phIntersectionPoint*, f32>>(
        0x493D40, this, arg1, arg2, arg3, arg4);
}

i32 phPolygon::TestSegmentUndirected(
    class Vector3 const* arg1, class phSegment const& arg2, class phIntersectionPoint* arg3, f32 arg4, f32 arg5)
{
    return stub<thiscall_t<i32, phPolygon*, class Vector3 const*, class phSegment const&, class phIntersectionPoint*,
        f32, f32>>(0x4940D0, this, arg1, arg2, arg3, arg4, arg5);
}

void phPolygon::ComputeEdgeNormalCross(class Vector4* arg1, class Vector3 const* arg2)
{
    return stub<thiscall_t<void, phPolygon*, class Vector4*, class Vector3 const*>>(0x493C00, this, arg1, arg2);
}

bool phPolygon::SegEdgeCheckDirected(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector4 const& arg4, class Vector4 const& arg5)
{
    return stub<cdecl_t<bool, class Vector3 const&, class Vector3 const&, class Vector3 const&, class Vector4 const&,
        class Vector4 const&>>(0x494B30, arg1, arg2, arg3, arg4, arg5);
}

bool phPolygon::SegEdgeCheckUndirected(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector4 const& arg4, class Vector4 const& arg5)
{
    return stub<cdecl_t<bool, class Vector3 const&, class Vector3 const&, class Vector3 const&, class Vector4 const&,
        class Vector4 const&>>(0x494A70, arg1, arg2, arg3, arg4, arg5);
}

define_dummy_symbol(phcore_poly);
