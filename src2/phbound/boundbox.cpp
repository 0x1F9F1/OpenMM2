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

#include "boundbox.h"

phBoundBox::phBoundBox()
{
    unimplemented();
}

phBoundBox::phBoundBox(class Vector3 const& arg1)
{
    unimplemented();
}

phBoundBox::~phBoundBox()
{
    unimplemented();
}

void phBoundBox::CreateOffset(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, phBoundBox*, class Vector3 const&>>(0x47A240, this, arg1);
}

i32 phBoundBox::FindImpactSphereToBox(class phBoundSphere const* arg1, class Matrix34 const& arg2,
    class Matrix34 const& arg3, class phColliderBase* arg4, class phColliderBase* arg5, class phImpactBase* arg6,
    class Vector3 const& arg7, class Vector3 const& arg8)
{
    return stub<thiscall_t<i32, phBoundBox*, class phBoundSphere const*, class Matrix34 const&, class Matrix34 const&,
        class phColliderBase*, class phColliderBase*, class phImpactBase*, class Vector3 const&, class Vector3 const&>>(
        0x47A6D0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

i32 phBoundBox::FindImpactsBoxToBox(class phBoundBox const* arg1, class Matrix34 const* arg2,
    class Matrix34 const* arg3, class Matrix34 const* arg4, class Matrix34 const* arg5, class phColliderBase* arg6,
    class phColliderBase* arg7, class phImpactBase* arg8, i32 arg9, class Vector3 const& arg10)
{
    return stub<thiscall_t<i32, phBoundBox*, class phBoundBox const*, class Matrix34 const*, class Matrix34 const*,
        class Matrix34 const*, class Matrix34 const*, class phColliderBase*, class phColliderBase*, class phImpactBase*,
        i32, class Vector3 const&>>(0x47AFE0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

i32 phBoundBox::FindImpactsBoxToBoxOffset(class phBoundBox const* arg1, class Matrix34 const* arg2,
    class Matrix34 const* arg3, class Matrix34 const* arg4, class Matrix34 const* arg5, class phColliderBase* arg6,
    class phColliderBase* arg7, class phImpactBase* arg8, i32 arg9, class Vector3 const& arg10)
{
    return stub<thiscall_t<i32, phBoundBox*, class phBoundBox const*, class Matrix34 const*, class Matrix34 const*,
        class Matrix34 const*, class Matrix34 const*, class phColliderBase*, class phColliderBase*, class phImpactBase*,
        i32, class Vector3 const&>>(0x47BA90, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

f32 phBoundBox::GetEdgeCosine(i32 arg1)
{
    return stub<thiscall_t<f32, phBoundBox*, i32>>(0x46A610, this, arg1);
}

class Vector3 const& phBoundBox::GetEdgeNormal(i32 arg1, class Vector3& arg2)
{
    return stub<thiscall_t<class Vector3 const&, phBoundBox*, i32, class Vector3&>>(0x47A6B0, this, arg1, arg2);
}

class phMaterial const* phBoundBox::GetMaterial(i32 arg1)
{
    return stub<thiscall_t<class phMaterial const*, phBoundBox*, i32>>(0x47A180, this, arg1);
}

bool phBoundBox::Load(char const* arg1)
{
    return stub<thiscall_t<bool, phBoundBox*, char const*>>(0x47A3A0, this, arg1);
}

void phBoundBox::ScaleSize(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, phBoundBox*, class Vector3 const&>>(0x47A2B0, this, arg1);
}

void phBoundBox::SetQuickTestInfo()
{
    return stub<thiscall_t<void, phBoundBox*>>(0x47A300, this);
}

void phBoundBox::SetSize(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, phBoundBox*, class Vector3 const&>>(0x47A1A0, this, arg1);
}

void phBoundBox::ShiftCentroid(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, phBoundBox*, class Vector3 const&>>(0x47A270, this, arg1);
}

bool phBoundBox::TestAIPoint(class phSegment& arg1, class phIntersectionPoint* arg2)
{
    return stub<thiscall_t<bool, phBoundBox*, class phSegment&, class phIntersectionPoint*>>(
        0x480080, this, arg1, arg2);
}

i32 phBoundBox::TestEdge(class phSegment& arg1, class phIntersection* arg2, i32 arg3)
{
    return stub<thiscall_t<i32, phBoundBox*, class phSegment&, class phIntersection*, i32>>(
        0x47F9B0, this, arg1, arg2, arg3);
}

bool phBoundBox::TestProbe(class phSegment& arg1, class phIntersection* arg2, f32 arg3)
{
    return stub<thiscall_t<bool, phBoundBox*, class phSegment&, class phIntersection*, f32>>(
        0x480010, this, arg1, arg2, arg3);
}

bool phBoundBox::TestProbePoint(class phSegment& arg1, class phIntersectionPoint* arg2, f32 arg3)
{
    return stub<thiscall_t<bool, phBoundBox*, class phSegment&, class phIntersectionPoint*, f32>>(
        0x480060, this, arg1, arg2, arg3);
}

bool phBoundBox::ProbeVsBox(
    class Vector3 const& arg1, class phSegment& arg2, class phIntersectionPoint* arg3, i32* arg4, f32 arg5)
{
    return stub<cdecl_t<bool, class Vector3 const&, class phSegment&, class phIntersectionPoint*, i32*, f32>>(
        0x4805B0, arg1, arg2, arg3, arg4, arg5);
}

void phBoundBox::BoxToBoxFaceImpacts(class Vector3 const& arg1, class phImpactBase* arg2, i32 arg3, bool arg4,
    class Matrix34 const* arg5, class Matrix34 const* arg6, class Matrix34 const* arg7, class Matrix34 const* arg8,
    class phColliderBase* arg9, class phColliderBase* arg10)
{
    return stub<thiscall_t<void, phBoundBox*, class Vector3 const&, class phImpactBase*, i32, bool,
        class Matrix34 const*, class Matrix34 const*, class Matrix34 const*, class Matrix34 const*,
        class phColliderBase*, class phColliderBase*>>(
        0x47E4A0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

bool phBoundBox::TestProbeSlave(class phSegment& arg1, class phIntersectionPoint* arg2, i32* arg3, f32 arg4)
{
    return stub<thiscall_t<bool, phBoundBox*, class phSegment&, class phIntersectionPoint*, i32*, f32>>(
        0x4800A0, this, arg1, arg2, arg3, arg4);
}

void phBoundBox::AddEdgeChecks(i32 arg1, i32 arg2, bool arg3)
{
    return stub<cdecl_t<void, i32, i32, bool>>(0x47C5D0, arg1, arg2, arg3);
}

void phBoundBox::AvoidEdgeChecks(i32 arg1, i32 arg2)
{
    return stub<cdecl_t<void, i32, i32>>(0x47C710, arg1, arg2);
}

void phBoundBox::AvoidEdgeChecks(i32 arg1, i32 arg2, bool arg3)
{
    return stub<cdecl_t<void, i32, i32, bool>>(0x47C690, arg1, arg2, arg3);
}

void phBoundBox::BoxToBoxFaceImpactsOffset(class Vector3 const& arg1, class Vector3 const& arg2,
    class Vector3 const& arg3, class phImpactBase* arg4, i32 arg5, bool arg6, class Matrix34 const* arg7,
    class Matrix34 const* arg8, class Matrix34 const* arg9, class Matrix34 const* arg10, class phColliderBase* arg11,
    class phColliderBase* arg12)
{
    return stub<cdecl_t<void, class Vector3 const&, class Vector3 const&, class Vector3 const&, class phImpactBase*,
        i32, bool, class Matrix34 const*, class Matrix34 const*, class Matrix34 const*, class Matrix34 const*,
        class phColliderBase*, class phColliderBase*>>(
        0x47CE40, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
}

bool phBoundBox::CheckFourFaceDotPattern()
{
    return stub<cdecl_t<bool>>(0x47CBD0);
}

void phBoundBox::FindFaceDots(f32 arg1, i32* arg2, i32* arg3)
{
    return stub<cdecl_t<void, f32, i32*, i32*>>(0x47CAA0, arg1, arg2, arg3);
}

void phBoundBox::MakeTransformedCorners(class Vector3 const& arg1, class Vector3 const& arg2, bool arg3)
{
    return stub<cdecl_t<void, class Vector3 const&, class Vector3 const&, bool>>(0x47C790, arg1, arg2, arg3);
}

void phBoundBox::RemoveFaceDotZero()
{
    return stub<cdecl_t<void>>(0x47CB50);
}

void phBoundBox::RemoveFifthFaceDotZero()
{
    return stub<cdecl_t<void>>(0x47CC80);
}

bool phBoundBox::UseThisImpact(class Vector3 const& arg1, class Vector3 const& arg2, f32 arg3,
    class Matrix34 const* arg4, class Matrix34 const* arg5, class Matrix34 const* arg6, class Matrix34 const* arg7)
{
    return stub<cdecl_t<bool, class Vector3 const&, class Vector3 const&, f32, class Matrix34 const*,
        class Matrix34 const*, class Matrix34 const*, class Matrix34 const*>>(
        0x47CD30, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

bool phBoundBox::VerifyFaceDotPattern()
{
    return stub<cdecl_t<bool>>(0x47CC30);
}

define_dummy_symbol(phbound_boundbox);
