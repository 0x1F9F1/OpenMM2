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

#include "geometry.h"

i32 AddIntersection(f32 arg1, f32* arg2, f32* arg3, i32 arg4, i32* arg5, i32* arg6, i32 arg7)
{
    return stub<cdecl_t<i32, f32, f32*, f32*, i32, i32*, i32*, i32>>(
        0x4C4810, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

i32 AddIntersection(f32 arg1, f32* arg2, f32* arg3, class Vector3 const& arg4, class Vector3* arg5, class Vector3* arg6,
    i32 arg7, i32 arg8, i32* arg9, i32* arg10)
{
    return stub<
        cdecl_t<i32, f32, f32*, f32*, class Vector3 const&, class Vector3*, class Vector3*, i32, i32, i32*, i32*>>(
        0x4C4740, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

bool CollidePlane(class Vector3 const& arg1, class Vector3 const& arg2, class Vector4 const& arg3, f32* arg4)
{
    return stub<cdecl_t<bool, class Vector3 const&, class Vector3 const&, class Vector4 const&, f32*>>(
        0x4C49B0, arg1, arg2, arg3, arg4);
}

bool CollideRayTriangle(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, class Vector3 const& arg5, f32* arg6)
{
    return stub<cdecl_t<bool, class Vector3 const&, class Vector3 const&, class Vector3 const&, class Vector3 const&,
        class Vector3 const&, f32*>>(0x4C4A10, arg1, arg2, arg3, arg4, arg5, arg6);
}

void ComputeBoundInfo(
    i32 arg1, f32 const* const arg2, u32 arg3, class Vector3* arg4, class Vector3* arg5, class Vector3* arg6, f32* arg7)
{
    return stub<cdecl_t<void, i32, f32 const* const, u32, class Vector3*, class Vector3*, class Vector3*, f32*>>(
        0x4C1ED0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void ComputeBoundSphere(i32 arg1, f32 const* const arg2, u32 arg3, class Vector4& arg4)
{
    return stub<cdecl_t<void, i32, f32 const* const, u32, class Vector4&>>(0x4C1E80, arg1, arg2, arg3, arg4);
}

f32 DistanceLineToLine(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, class Vector3* arg5, f32 arg6)
{
    return stub<cdecl_t<f32, class Vector3 const&, class Vector3 const&, class Vector3 const&, class Vector3 const&,
        class Vector3*, f32>>(0x4C2DB0, arg1, arg2, arg3, arg4, arg5, arg6);
}

f32 DistanceLineToPoint(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3)
{
    return stub<cdecl_t<f32, class Vector3 const&, class Vector3 const&, class Vector3 const&>>(
        0x4C30A0, arg1, arg2, arg3);
}

f32 DistanceLineToYAxis(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3* arg3)
{
    return stub<cdecl_t<f32, class Vector3 const&, class Vector3 const&, class Vector3*>>(0x4C2FF0, arg1, arg2, arg3);
}

f32 DistanceParallelLineToLine(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, class Vector3* arg5)
{
    return stub<cdecl_t<f32, class Vector3 const&, class Vector3 const&, class Vector3 const&, class Vector3 const&,
        class Vector3*>>(0x4C2F00, arg1, arg2, arg3, arg4, arg5);
}

i32 FindClosestPointSegToOrigin(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3* arg3, f32* arg4)
{
    return stub<cdecl_t<i32, class Vector3 const&, class Vector3 const&, class Vector3*, f32*>>(
        0x4C2CD0, arg1, arg2, arg3, arg4);
}

i32 FindClosestPointSegToPoint(
    class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3, class Vector3* arg4, f32* arg5)
{
    return stub<cdecl_t<i32, class Vector3 const&, class Vector3 const&, class Vector3 const&, class Vector3*, f32*>>(
        0x4C2C50, arg1, arg2, arg3, arg4, arg5);
}

i32 FindImpactEdgeToShaft(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, f32 arg5, i32* arg6, class Vector3* arg7, f32* arg8, class Vector3* arg9)
{
    return stub<cdecl_t<i32, class Vector3 const&, class Vector3 const&, class Vector3 const&, class Vector3 const&,
        f32, i32*, class Vector3*, f32*, class Vector3*>>(
        0x4C28C0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

i32 FindImpactPolygonToSphere(class Vector3 const& arg1, f32 arg2, class Vector3 const* arg3, i32 arg4,
    class Vector3 const& arg5, class Vector3* arg6, i32* arg7, class Vector3* arg8, f32* arg9)
{
    return stub<cdecl_t<i32, class Vector3 const&, f32, class Vector3 const*, i32, class Vector3 const&, class Vector3*,
        i32*, class Vector3*, f32*>>(0x4C23F0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

f32 FindTValueSegToOrigin(class Vector3 const& arg1, class Vector3 const& arg2)
{
    return stub<cdecl_t<f32, class Vector3 const&, class Vector3 const&>>(0x4C31B0, arg1, arg2);
}

f32 FindTValueSegToPoint(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3)
{
    return stub<cdecl_t<f32, class Vector3 const&, class Vector3 const&, class Vector3 const&>>(
        0x4C3170, arg1, arg2, arg3);
}

bool FindTValuesLineToBoxFace(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, f32* arg5, f32* arg6, i32* arg7, i32* arg8)
{
    return stub<cdecl_t<bool, class Vector3 const&, class Vector3 const&, class Vector3 const&, class Vector3 const&,
        f32*, f32*, i32*, i32*>>(0x4C3910, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

bool FindTValuesLineToLine(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, f32* arg5, f32* arg6)
{
    return stub<cdecl_t<bool, class Vector3 const&, class Vector3 const&, class Vector3 const&, class Vector3 const&,
        f32*, f32*>>(0x4C3530, arg1, arg2, arg3, arg4, arg5, arg6);
}

bool FindTValuesLineToYAxis(
    class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, f32 arg4, f32* arg5, f32* arg6)
{
    return stub<cdecl_t<bool, class Vector3 const&, class Vector3 const&, f32, f32, f32*, f32*>>(
        0x4C3740, arg1, arg2, arg3, arg4, arg5, arg6);
}

bool FindTValuesSegToSeg(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, f32* arg5, f32* arg6)
{
    return stub<cdecl_t<bool, class Vector3 const&, class Vector3 const&, class Vector3 const&, class Vector3 const&,
        f32*, f32*>>(0x4C3230, arg1, arg2, arg3, arg4, arg5, arg6);
}

i32 IsNearZero(f32 arg1, f32 arg2)
{
    return stub<cdecl_t<i32, f32, f32>>(0x4C2C20, arg1, arg2);
}

bool IsPointBehindPlane(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3, f32 arg4)
{
    return stub<cdecl_t<bool, class Vector3 const&, class Vector3 const&, class Vector3 const&, f32>>(
        0x4C2B30, arg1, arg2, arg3, arg4);
}

bool IsPointInBox(class Vector3 const& arg1, f32 arg2, f32 arg3, f32 arg4)
{
    return stub<cdecl_t<bool, class Vector3 const&, f32, f32, f32>>(0x4C2BC0, arg1, arg2, arg3, arg4);
}

bool IsPointInRegion(f32 arg1, f32 arg2, class Vector3 const* arg3, i32 arg4)
{
    return stub<cdecl_t<bool, f32, f32, class Vector3 const*, i32>>(0x4C48D0, arg1, arg2, arg3, arg4);
}

bool IsPointNearPlane(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3, f32 arg4)
{
    return stub<cdecl_t<bool, class Vector3 const&, class Vector3 const&, class Vector3 const&, f32>>(
        0x4C2B70, arg1, arg2, arg3, arg4);
}

void OrderIntersections(f32* arg1, f32* arg2, f32* arg3, f32* arg4, i32* arg5, i32* arg6)
{
    return stub<cdecl_t<void, f32*, f32*, f32*, f32*, i32*, i32*>>(0x4C4890, arg1, arg2, arg3, arg4, arg5, arg6);
}

i32 SegmentToBoxIntersections(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, f32 arg4, f32 arg5,
    f32* arg6, f32* arg7, class Vector3* arg8, class Vector3* arg9, i32* arg10, i32* arg11)
{
    return stub<cdecl_t<i32, class Vector3 const&, class Vector3 const&, f32, f32, f32, f32*, f32*, class Vector3*,
        class Vector3*, i32*, i32*>>(0x4C4380, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
}

bool SegmentToDiskIntersection(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, f32* arg4)
{
    return stub<cdecl_t<bool, class Vector3 const&, class Vector3 const&, f32, f32*>>(0x4C3FA0, arg1, arg2, arg3, arg4);
}

i32 SegmentToHemisphereIntersections(
    class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, f32* arg4, f32* arg5, bool arg6)
{
    return stub<cdecl_t<i32, class Vector3 const&, class Vector3 const&, f32, f32*, f32*, bool>>(
        0x4C3D80, arg1, arg2, arg3, arg4, arg5, arg6);
}

i32 SegmentToInfCylIsects(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, f32 arg5, f32* arg6, f32* arg7)
{
    return stub<cdecl_t<i32, class Vector3 const&, class Vector3 const&, class Vector3 const&, class Vector3 const&,
        f32, f32*, f32*>>(0x4C4190, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

i32 SegmentToSphereIntersections(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, f32* arg4, f32* arg5)
{
    return stub<cdecl_t<i32, class Vector3 const&, class Vector3 const&, f32, f32*, f32*>>(
        0x4C3C20, arg1, arg2, arg3, arg4, arg5);
}

i32 SegmentToUprightCylIsects(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3, f32 arg4, f32* arg5,
    f32* arg6, f32* arg7, f32* arg8)
{
    return stub<cdecl_t<i32, class Vector3 const&, class Vector3 const&, f32, f32, f32*, f32*, f32*, f32*>>(
        0x4C4020, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

define_dummy_symbol(vector_geometry);
