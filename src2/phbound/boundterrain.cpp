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

#include "boundterrain.h"

phBoundTerrain::phBoundTerrain()
{
    unimplemented();
}

phBoundTerrain::~phBoundTerrain()
{
    unimplemented();
}

void phBoundTerrain::ClearPolyTouched()
{
    return stub<thiscall_t<void, phBoundTerrain*>>(0x48E0C0, this);
}

i32 phBoundTerrain::FindImpactsHotdogToTerrain(class phBoundHotdog const* arg1, class Matrix34 const* arg2,
    class Matrix34 const* arg3, class phColliderBase* arg4, class phColliderBase* arg5, class phImpactBase* arg6,
    i32 arg7, class Vector3 const& arg8, class Vector3 const& arg9)
{
    return stub<thiscall_t<i32, phBoundTerrain*, class phBoundHotdog const*, class Matrix34 const*,
        class Matrix34 const*, class phColliderBase*, class phColliderBase*, class phImpactBase*, i32,
        class Vector3 const&, class Vector3 const&>>(
        0x48F440, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

i32 phBoundTerrain::FindImpactsSphereToTerrain(class phBoundSphere const* arg1, class Matrix34 const* arg2,
    class Matrix34 const* arg3, class phColliderBase* arg4, class phColliderBase* arg5, class phImpactBase* arg6,
    i32 arg7, class Vector3 const& arg8, class Vector3 const& arg9)
{
    return stub<thiscall_t<i32, phBoundTerrain*, class phBoundSphere const*, class Matrix34 const*,
        class Matrix34 const*, class phColliderBase*, class phColliderBase*, class phImpactBase*, i32,
        class Vector3 const&, class Vector3 const&>>(
        0x48EF50, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

void phBoundTerrain::InitPolyIterator(class phSegment const& arg1)
{
    return stub<thiscall_t<void, phBoundTerrain*, class phSegment const&>>(0x48DDC0, this, arg1);
}

void phBoundTerrain::InitPolyIterator(class Vector3 const& arg1, f32 arg2)
{
    return stub<thiscall_t<void, phBoundTerrain*, class Vector3 const&, f32>>(0x48D9C0, this, arg1, arg2);
}

bool phBoundTerrain::Load(char const* arg1)
{
    return stub<thiscall_t<bool, phBoundTerrain*, char const*>>(0x48C2E0, this, arg1);
}

void phBoundTerrain::PostLoadCompute()
{
    return stub<thiscall_t<void, phBoundTerrain*>>(0x48C2D0, this);
}

bool phBoundTerrain::Save(char const* arg1)
{
    return stub<thiscall_t<bool, phBoundTerrain*, char const*>>(0x48C690, this, arg1);
}

void phBoundTerrain::SetHotEdges(bool arg1)
{
    return stub<thiscall_t<void, phBoundTerrain*, bool>>(0x48C270, this, arg1);
}

bool phBoundTerrain::TestAIPoint(class phSegment& arg1, class phIntersectionPoint* arg2)
{
    return stub<thiscall_t<bool, phBoundTerrain*, class phSegment&, class phIntersectionPoint*>>(
        0x48E100, this, arg1, arg2);
}

i32 phBoundTerrain::TestBoundPolyTerrain(class phBoundPolygonal const* arg1, class phColliderBase* arg2,
    class Matrix34 const* arg3, class Matrix34 const* arg4, class phIntersection* arg5, i32 arg6, i32* arg7,
    class Vector3 const* arg8, bool arg9)
{
    return stub<thiscall_t<i32, phBoundTerrain*, class phBoundPolygonal const*, class phColliderBase*,
        class Matrix34 const*, class Matrix34 const*, class phIntersection*, i32, i32*, class Vector3 const*, bool>>(
        0x48CD00, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

i32 phBoundTerrain::TestBoundTerrainEdgesVsPoly(class phBoundPolygonal const* arg1, class phColliderBase* arg2,
    class Matrix34 const* arg3, class phIntersection* arg4, i32 arg5, i32* arg6)
{
    return stub<thiscall_t<i32, phBoundTerrain*, class phBoundPolygonal const*, class phColliderBase*,
        class Matrix34 const*, class phIntersection*, i32, i32*>>(0x48C960, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

i32 phBoundTerrain::TestBoundTerrainPoly(class phBoundPolygonal const* arg1, class Matrix34 const* arg2,
    class Matrix34 const* arg3, class phColliderBase* arg4, class phColliderBase* arg5, class phIntersection* arg6,
    class phIntersection* arg7, i32 arg8, i32* arg9, i32* arg10, class Vector3 const& arg11, bool arg12)
{
    return stub<thiscall_t<i32, phBoundTerrain*, class phBoundPolygonal const*, class Matrix34 const*,
        class Matrix34 const*, class phColliderBase*, class phColliderBase*, class phIntersection*,
        class phIntersection*, i32, i32*, i32*, class Vector3 const&, bool>>(
        0x48C8A0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
}

i32 phBoundTerrain::TestEdge(class phSegment& arg1, class phIntersection* arg2, i32 arg3)
{
    return stub<thiscall_t<i32, phBoundTerrain*, class phSegment&, class phIntersection*, i32>>(
        0x48E480, this, arg1, arg2, arg3);
}

bool phBoundTerrain::TestProbe(class phSegment& arg1, class phIntersection* arg2, f32 arg3)
{
    return stub<thiscall_t<bool, phBoundTerrain*, class phSegment&, class phIntersection*, f32>>(
        0x48E310, this, arg1, arg2, arg3);
}

bool phBoundTerrain::TestProbePoint(class phSegment& arg1, class phIntersectionPoint* arg2, f32 arg3)
{
    return stub<thiscall_t<bool, phBoundTerrain*, class phSegment&, class phIntersectionPoint*, f32>>(
        0x48E200, this, arg1, arg2, arg3);
}

bool phBoundTerrain::TestSphere(
    class Vector3 const& arg1, f32 arg2, class Vector3& arg3, class Vector3& arg4, f32& arg5)
{
    return stub<thiscall_t<bool, phBoundTerrain*, class Vector3 const&, f32, class Vector3&, class Vector3&, f32&>>(
        0x48D790, this, arg1, arg2, arg3, arg4, arg5);
}

void phBoundTerrain::PackNormal(u32& arg1, class Vector4 const& arg2)
{
    return stub<cdecl_t<void, u32&, class Vector4 const&>>(0x4901F0, arg1, arg2);
}

void phBoundTerrain::UnpackNormal(class Vector4& arg1, u32 arg2)
{
    return stub<cdecl_t<void, class Vector4&, u32>>(0x490280, arg1, arg2);
}

void phBoundTerrain::CalculateBuckets(f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
    return stub<thiscall_t<void, phBoundTerrain*, f32, f32, f32, f32>>(0x48E680, this, arg1, arg2, arg3, arg4);
}

define_dummy_symbol(phbound_boundterrain);
