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

#include "boundpolygonal.h"

void phBoundPolygonal::CenterBound()
{
    return stub<thiscall_t<void, phBoundPolygonal*>>(0x487950, this);
}

i32 phBoundPolygonal::FindImpactsPolyToPoly(class phBoundPolygonal const* arg1, class Matrix34 const* arg2,
    class Matrix34 const* arg3, class Matrix34 const* arg4, class Matrix34 const* arg5, class phColliderBase* arg6,
    class phColliderBase* arg7, class phIntersection* arg8, class phIntersection* arg9, class phImpactBase* arg10,
    i32 arg11, i32 arg12, i32* arg13, i32* arg14)
{
    return stub<
        thiscall_t<i32, phBoundPolygonal*, class phBoundPolygonal const*, class Matrix34 const*, class Matrix34 const*,
            class Matrix34 const*, class Matrix34 const*, class phColliderBase*, class phColliderBase*,
            class phIntersection*, class phIntersection*, class phImpactBase*, i32, i32, i32*, i32*>>(
        0x489DD0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
}

i32 phBoundPolygonal::FindImpactsSphereToPoly(class phBoundSphere const* arg1, class Matrix34 const* arg2,
    class Matrix34 const* arg3, class phColliderBase* arg4, class phColliderBase* arg5, class phImpactBase* arg6,
    i32 arg7, class Vector3 const& arg8, class Vector3 const& arg9)
{
    return stub<thiscall_t<i32, phBoundPolygonal*, class phBoundSphere const*, class Matrix34 const*,
        class Matrix34 const*, class phColliderBase*, class phColliderBase*, class phImpactBase*, i32,
        class Vector3 const&, class Vector3 const&>>(
        0x4879D0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

void phBoundPolygonal::GetAllSegments(f32 arg1, struct phBoundPolygonal::DispSegment* arg2,
    struct phBoundPolygonal::Segment* arg3, class Matrix34 const& arg4, class Matrix34 const& arg5, f32 arg6,
    class Vector3 const& arg7, u8* arg8, class Vector4* arg9, i32& arg10, i32& arg11)
{
    return stub<thiscall_t<void, phBoundPolygonal*, f32, struct phBoundPolygonal::DispSegment*,
        struct phBoundPolygonal::Segment*, class Matrix34 const&, class Matrix34 const&, f32, class Vector3 const&, u8*,
        class Vector4*, i32&, i32&>>(
        0x48B590, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
}

i32 phBoundPolygonal::GetNextSegment(
    class phSegment& arg1, i32* arg2, class Matrix34 const* arg3, class Matrix34 const* arg4, i32& arg5, i32& arg6)
{
    return stub<thiscall_t<i32, phBoundPolygonal*, class phSegment&, i32*, class Matrix34 const*, class Matrix34 const*,
        i32&, i32&>>(0x488310, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

i32 phBoundPolygonal::GetNextSegment(class phSegment& arg1, i32* arg2, class Matrix34 const* arg3,
    class Matrix34 const* arg4, f32 arg5, class Vector3 const* arg6, u8* arg7, class Vector3* arg8, i32& arg9,
    i32& arg10)
{
    return stub<thiscall_t<i32, phBoundPolygonal*, class phSegment&, i32*, class Matrix34 const*, class Matrix34 const*,
        f32, class Vector3 const*, u8*, class Vector3*, i32&, i32&>>(
        0x488500, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

class Vector3 const& phBoundPolygonal::GetVertex(i32 arg1)
{
    return stub<thiscall_t<class Vector3 const&, phBoundPolygonal*, i32>>(0x46A5A0, this, arg1);
}

f32 phBoundPolygonal::MaxDot(class Vector3 const& arg1, class Matrix34 const& arg2, class Vector3& arg3)
{
    return stub<thiscall_t<f32, phBoundPolygonal*, class Vector3 const&, class Matrix34 const&, class Vector3&>>(
        0x487840, this, arg1, arg2, arg3);
}

f32 phBoundPolygonal::MinDot(class Vector3 const& arg1, class Matrix34 const& arg2, class Vector3& arg3)
{
    return stub<thiscall_t<f32, phBoundPolygonal*, class Vector3 const&, class Matrix34 const&, class Vector3&>>(
        0x487910, this, arg1, arg2, arg3);
}

void phBoundPolygonal::RewindSegments(bool arg1, class Matrix34 const* arg2, class Matrix34 const* arg3,
    class Matrix34* arg4, class Matrix34* arg5, i32& arg6, i32& arg7)
{
    return stub<thiscall_t<void, phBoundPolygonal*, bool, class Matrix34 const*, class Matrix34 const*, class Matrix34*,
        class Matrix34*, i32&, i32&>>(0x4882C0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void phBoundPolygonal::RewindSegments(bool arg1, class Matrix34 const* arg2, class Matrix34 const* arg3,
    class Matrix34 const* arg4, class Matrix34 const* arg5, class Matrix34* arg6, class Matrix34* arg7, i32& arg8,
    i32& arg9)
{
    return stub<thiscall_t<void, phBoundPolygonal*, bool, class Matrix34 const*, class Matrix34 const*,
        class Matrix34 const*, class Matrix34 const*, class Matrix34*, class Matrix34*, i32&, i32&>>(
        0x488250, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

bool phBoundPolygonal::TestAIPoint(class phSegment& arg1, class phIntersectionPoint* arg2)
{
    return stub<thiscall_t<bool, phBoundPolygonal*, class phSegment&, class phIntersectionPoint*>>(
        0x48B370, this, arg1, arg2);
}

i32 phBoundPolygonal::TestEdge(class phSegment& arg1, class phIntersection* arg2, i32 arg3)
{
    return stub<thiscall_t<i32, phBoundPolygonal*, class phSegment&, class phIntersection*, i32>>(
        0x48B450, this, arg1, arg2, arg3);
}

bool phBoundPolygonal::TestProbe(class phSegment& arg1, class phIntersection* arg2, f32 arg3)
{
    return stub<thiscall_t<bool, phBoundPolygonal*, class phSegment&, class phIntersection*, f32>>(
        0x48B3E0, this, arg1, arg2, arg3);
}

bool phBoundPolygonal::TestProbePoint(class phSegment& arg1, class phIntersectionPoint* arg2, f32 arg3)
{
    return stub<thiscall_t<bool, phBoundPolygonal*, class phSegment&, class phIntersectionPoint*, f32>>(
        0x48B300, this, arg1, arg2, arg3);
}

bool phBoundPolygonal::TestSphere(
    class Vector3 const& arg1, f32 arg2, class Vector3& arg3, class Vector3& arg4, f32& arg5)
{
    return stub<thiscall_t<bool, phBoundPolygonal*, class Vector3 const&, f32, class Vector3&, class Vector3&, f32&>>(
        0x4879A0, this, arg1, arg2, arg3, arg4, arg5);
}

f32 phBoundPolygonal::GetEdgeCosine(i32 arg1)
{
    return stub<thiscall_t<f32, phBoundPolygonal*, i32>>(0x0, this, arg1);
}

class Vector3 const& phBoundPolygonal::GetEdgeNormal(i32 arg1, class Vector3& arg2)
{
    return stub<thiscall_t<class Vector3 const&, phBoundPolygonal*, i32, class Vector3&>>(0x0, this, arg1, arg2);
}

i32 phBoundPolygonal::TestBoundPolyPoly(class phBoundPolygonal const* arg1, class Matrix34 const* arg2,
    class Matrix34 const* arg3, class Matrix34 const* arg4, class Matrix34 const* arg5, class phColliderBase* arg6,
    class phColliderBase* arg7, class phIntersection* arg8, class phIntersection* arg9, i32 arg10, i32* arg11,
    i32* arg12, class Vector3 const& arg13, bool arg14)
{
    return stub<
        thiscall_t<i32, phBoundPolygonal*, class phBoundPolygonal const*, class Matrix34 const*, class Matrix34 const*,
            class Matrix34 const*, class Matrix34 const*, class phColliderBase*, class phColliderBase*,
            class phIntersection*, class phIntersection*, i32, i32*, i32*, class Vector3 const&, bool>>(
        0x487DF0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
}

i32 phBoundPolygonal::TestBoundPolyPolyUseDot(class phBoundPolygonal const* arg1, class phColliderBase* arg2,
    class Matrix34 const* arg3, class Matrix34 const* arg4, class Matrix34 const* arg5, class Matrix34 const* arg6,
    class phIntersection* arg7, i32 arg8, i32* arg9, f32 arg10, class Vector3 const* arg11, bool arg12)
{
    return stub<thiscall_t<i32, phBoundPolygonal*, class phBoundPolygonal const*, class phColliderBase*,
        class Matrix34 const*, class Matrix34 const*, class Matrix34 const*, class Matrix34 const*,
        class phIntersection*, i32, i32*, f32, class Vector3 const*, bool>>(
        0x487F00, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
}

i32 phBoundPolygonal::TestBoundPolyPolyUseDotSmall(class phBoundPolygonal const* arg1, class phColliderBase* arg2,
    class Matrix34 const* arg3, class Matrix34 const* arg4, class Matrix34 const* arg5, class Matrix34 const* arg6,
    class phIntersection* arg7, i32* arg8, f32 arg9, class Vector3 const& arg10, bool arg11)
{
    return stub<thiscall_t<i32, phBoundPolygonal*, class phBoundPolygonal const*, class phColliderBase*,
        class Matrix34 const*, class Matrix34 const*, class Matrix34 const*, class Matrix34 const*,
        class phIntersection*, i32*, f32, class Vector3 const&, bool>>(
        0x48B7A0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
}

void phBoundPolygonal::BackupAbyPenetration(class phSegment& arg1)
{
    return stub<cdecl_t<void, class phSegment&>>(0x488770, arg1);
}

i32 phBoundPolygonal::AddInteriorEdges(
    class phIntersection* arg1, i32 arg2, class phIntersection* arg3, i32 arg4, i32 arg5)
{
    return stub<thiscall_t<i32, phBoundPolygonal*, class phIntersection*, i32, class phIntersection*, i32, i32>>(
        0x4891D0, this, arg1, arg2, arg3, arg4, arg5);
}

i32 phBoundPolygonal::FindImpacts(class phBound const* arg1, class Matrix34 const* arg2, class Matrix34 const* arg3,
    class Matrix34 const* arg4, class Matrix34 const* arg5, class phColliderBase* arg6, class phColliderBase* arg7,
    class phIntersection* arg8, class phIntersection* arg9, i32 arg10, i32 arg11, class phImpactBase* arg12, i32 arg13)
{
    return stub<thiscall_t<i32, phBoundPolygonal*, class phBound const*, class Matrix34 const*, class Matrix34 const*,
        class Matrix34 const*, class Matrix34 const*, class phColliderBase*, class phColliderBase*,
        class phIntersection*, class phIntersection*, i32, i32, class phImpactBase*, i32>>(
        0x48A0C0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
}

void phBoundPolygonal::BackupDispByPenetration(class Vector3& arg1, class Vector3 const& arg2, f32 arg3)
{
    return stub<cdecl_t<void, class Vector3&, class Vector3 const&, f32>>(0x487760, arg1, arg2, arg3);
}

void phBoundPolygonal::CheckSaveEdgeEdge(class phIntersection* arg1, i32 arg2, bool arg3, bool arg4,
    class Vector3 const& arg5, class Vector3 const& arg6, class Vector3 const& arg7, f32 arg8, f32 arg9, bool arg10,
    f32 arg11, f32 arg12)
{
    return stub<cdecl_t<void, class phIntersection*, i32, bool, bool, class Vector3 const&, class Vector3 const&,
        class Vector3 const&, f32, f32, bool, f32, f32>>(
        0x488960, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
}

void phBoundPolygonal::DoEndPtSearch(class phBound const* arg1, class Matrix34 const* arg2, class Matrix34 const* arg3,
    class Matrix34 const* arg4, class Matrix34 const* arg5, class phColliderBase* arg6, class phColliderBase* arg7,
    i32 arg8, class phIntersection* arg9, i32 arg10, class phImpactBase** arg11, i32& arg12, bool arg13)
{
    return stub<cdecl_t<void, class phBound const*, class Matrix34 const*, class Matrix34 const*, class Matrix34 const*,
        class Matrix34 const*, class phColliderBase*, class phColliderBase*, i32, class phIntersection*, i32,
        class phImpactBase**, i32&, bool>>(
        0x489490, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
}

bool phBoundPolygonal::GetCollideEdgePoly(class phIntersection const* arg1, class Vector3 const& arg2,
    class Matrix34 const& arg3, class Matrix34 const& arg4, class Vector3 const& arg5, class Vector3* arg6,
    class Vector3* arg7, f32* arg8, i32* arg9, bool* arg10)
{
    return stub<cdecl_t<bool, class phIntersection const*, class Vector3 const&, class Matrix34 const&,
        class Matrix34 const&, class Vector3 const&, class Vector3*, class Vector3*, f32*, i32*, bool*>>(
        0x488B00, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

void phBoundPolygonal::GetNextEdgeIsect(i32& arg1, class phIntersection*& arg2, bool arg3)
{
    return stub<cdecl_t<void, i32&, class phIntersection*&, bool>>(0x489460, arg1, arg2, arg3);
}

void phBoundPolygonal::MakeBsInside(class phIntersection* arg1, i32 arg2)
{
    return stub<cdecl_t<void, class phIntersection*, i32>>(0x488850, arg1, arg2);
}

void phBoundPolygonal::ResetVertNeedsH(class phIntersection* arg1, class phIntersection* arg2, bool arg3, bool arg4)
{
    return stub<cdecl_t<void, class phIntersection*, class phIntersection*, bool, bool>>(
        0x48B230, arg1, arg2, arg3, arg4);
}

void phBoundPolygonal::ResetVertNeedsH(
    class phIntersection* arg1, class phIntersection* arg2, bool arg3, bool arg4, f32 arg5)
{
    return stub<cdecl_t<void, class phIntersection*, class phIntersection*, bool, bool, f32>>(
        0x48B270, arg1, arg2, arg3, arg4, arg5);
}

void phBoundPolygonal::RetryVertPolyCollide(class phBound const* arg1, class phColliderBase* arg2,
    class phColliderBase* arg3, class phIntersection* arg4, i32 arg5, class phImpactBase** arg6, i32* arg7, bool arg8)
{
    return stub<cdecl_t<void, class phBound const*, class phColliderBase*, class phColliderBase*, class phIntersection*,
        i32, class phImpactBase**, i32*, bool>>(0x489C30, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

define_dummy_symbol(phbound_boundpolygonal);
