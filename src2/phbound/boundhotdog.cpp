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

#include "boundhotdog.h"

phBoundHotdog::phBoundHotdog()
{
    unimplemented();
}

phBoundHotdog::phBoundHotdog(f32 arg1, f32 arg2)
{
    unimplemented();
}

phBoundHotdog::~phBoundHotdog()
{
    unimplemented();
}

void phBoundHotdog::CalculateBoundingBox()
{
    return stub<thiscall_t<void, phBoundHotdog*>>(0x480C60, this);
}

void phBoundHotdog::CreateOffset(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, phBoundHotdog*, class Vector3 const&>>(0x480CE0, this, arg1);
}

class Vector3 phBoundHotdog::FindHotdogIsectNormal(class Vector3 const& arg1, i32 arg2)
{
    return stub<thiscall_t<class Vector3, phBoundHotdog*, class Vector3 const&, i32>>(0x481E70, this, arg1, arg2);
}

bool phBoundHotdog::FindImpactSphereToHotdog(class phBoundSphere const* arg1, class Matrix34 const* arg2,
    class Matrix34 const* arg3, class phColliderBase* arg4, class phColliderBase* arg5, class phImpactBase* arg6,
    class Vector3 const& arg7)
{
    return stub<
        thiscall_t<bool, phBoundHotdog*, class phBoundSphere const*, class Matrix34 const*, class Matrix34 const*,
            class phColliderBase*, class phColliderBase*, class phImpactBase*, class Vector3 const&>>(
        0x481F40, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

i32 phBoundHotdog::FindImpactsHotdogToHotdog(class phBoundHotdog const* arg1, class Matrix34 const* arg2,
    class Matrix34 const* arg3, class phColliderBase* arg4, class phColliderBase* arg5, class phImpactBase* arg6,
    i32 arg7)
{
    return stub<thiscall_t<i32, phBoundHotdog*, class phBoundHotdog const*, class Matrix34 const*,
        class Matrix34 const*, class phColliderBase*, class phColliderBase*, class phImpactBase*, i32>>(
        0x483880, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

i32 phBoundHotdog::FindImpactsHotdogToPoly(class phBoundPolygonal const* arg1, class Matrix34 const* arg2,
    class Matrix34 const* arg3, class phColliderBase* arg4, class phColliderBase* arg5, class phImpactBase* arg6,
    i32 arg7, class Vector3 const& arg8, class Vector3 const& arg9)
{
    return stub<thiscall_t<i32, phBoundHotdog*, class phBoundPolygonal const*, class Matrix34 const*,
        class Matrix34 const*, class phColliderBase*, class phColliderBase*, class phImpactBase*, i32,
        class Vector3 const&, class Vector3 const&>>(
        0x482440, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

class phMaterial const* phBoundHotdog::GetMaterial(i32 arg1)
{
    return stub<thiscall_t<class phMaterial const*, phBoundHotdog*, i32>>(0x484450, this, arg1);
}

bool phBoundHotdog::IsInsideHotdog(class Vector3 const& arg1)
{
    return stub<thiscall_t<bool, phBoundHotdog*, class Vector3 const&>>(0x481810, this, arg1);
}

bool phBoundHotdog::Load(char const* arg1)
{
    return stub<thiscall_t<bool, phBoundHotdog*, char const*>>(0x484080, this, arg1);
}

void phBoundHotdog::ScaleBoundingBox(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, phBoundHotdog*, f32, f32>>(0x480C20, this, arg1, arg2);
}

i32 phBoundHotdog::SegmentToHotdogIntersections(class Vector3 const& arg1, class Vector3 const& arg2, f32* arg3,
    f32* arg4, f32* arg5, f32* arg6, i32* arg7, i32* arg8)
{
    return stub<thiscall_t<i32, phBoundHotdog*, class Vector3 const&, class Vector3 const&, f32*, f32*, f32*, f32*,
        i32*, i32*>>(0x481900, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

void phBoundHotdog::SetBoundingBox(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, phBoundHotdog*, f32, f32>>(0x480BE0, this, arg1, arg2);
}

void phBoundHotdog::SetSize(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, phBoundHotdog*, f32, f32>>(0x480B60, this, arg1, arg2);
}

void phBoundHotdog::ShiftCentroid(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, phBoundHotdog*, class Vector3 const&>>(0x480D10, this, arg1);
}

bool phBoundHotdog::TestAIPoint(class phSegment& arg1, class phIntersectionPoint* arg2)
{
    return stub<thiscall_t<bool, phBoundHotdog*, class phSegment&, class phIntersectionPoint*>>(
        0x480F10, this, arg1, arg2);
}

i32 phBoundHotdog::TestEdge(class phSegment& arg1, class phIntersection* arg2, i32 arg3)
{
    return stub<thiscall_t<i32, phBoundHotdog*, class phSegment&, class phIntersection*, i32>>(
        0x4810A0, this, arg1, arg2, arg3);
}

bool phBoundHotdog::TestProbe(class phSegment& arg1, class phIntersection* arg2, f32 arg3)
{
    return stub<thiscall_t<bool, phBoundHotdog*, class phSegment&, class phIntersection*, f32>>(
        0x4813A0, this, arg1, arg2, arg3);
}

bool phBoundHotdog::TestProbePoint(class phSegment& arg1, class phIntersectionPoint* arg2, f32 arg3)
{
    return stub<thiscall_t<bool, phBoundHotdog*, class phSegment&, class phIntersectionPoint*, f32>>(
        0x480D50, this, arg1, arg2, arg3);
}

bool phBoundHotdog::TestSphere(class Vector3 const& arg1, f32 arg2, class Vector3& arg3, class Vector3& arg4, f32& arg5)
{
    return stub<thiscall_t<bool, phBoundHotdog*, class Vector3 const&, f32, class Vector3&, class Vector3&, f32&>>(
        0x481570, this, arg1, arg2, arg3, arg4, arg5);
}

define_dummy_symbol(phbound_boundhotdog);
