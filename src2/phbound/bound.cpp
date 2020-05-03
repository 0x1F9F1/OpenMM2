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

#include "bound.h"

phBound::phBound(i32 arg1)
{
    unimplemented();
}

void phBound::CalculateSphereFromBoundingBox()
{
    return stub<thiscall_t<void, phBound*>>(0x487200, this);
}

class Vector3 phBound::GetCenter(class Matrix34 const* arg1)
{
    return stub<thiscall_t<class Vector3, phBound*, class Matrix34 const*>>(0x4873A0, this, arg1);
}

void phBound::GetCenter(class Matrix34 const* arg1, class Vector3* arg2)
{
    return stub<thiscall_t<void, phBound*, class Matrix34 const*, class Vector3*>>(0x487320, this, arg1, arg2);
}

void phBound::GetFricElas(class phIntersection const* arg1, f32* arg2, f32* arg3)
{
    return stub<thiscall_t<void, phBound*, class phIntersection const*, f32*, f32*>>(0x487540, this, arg1, arg2, arg3);
}

bool const phBound::IsOffset()
{
    return stub<thiscall_t<bool const, phBound*>>(0x4872B0, this);
}

void phBound::SetFlexibility(f32 arg1)
{
    return stub<thiscall_t<void, phBound*, f32>>(0x4874D0, this, arg1);
}

void phBound::SetOffset(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, phBound*, class Vector3 const&>>(0x4872C0, this, arg1);
}

void phBound::SetPenetration()
{
    return stub<thiscall_t<void, phBound*>>(0x487450, this);
}

i32 phBound::TestSegment(class phSegment& arg1, class phIntersection* arg2, i32 arg3)
{
    return stub<thiscall_t<i32, phBound*, class phSegment&, class phIntersection*, i32>>(
        0x4875B0, this, arg1, arg2, arg3);
}

i32 phBound::TestSegmentPoint(class phSegment& arg1, class phIntersectionPoint* arg2, i32 arg3)
{
    return stub<thiscall_t<i32, phBound*, class phSegment&, class phIntersectionPoint*, i32>>(
        0x487630, this, arg1, arg2, arg3);
}

void phBound::CenterBound()
{
    return stub<thiscall_t<void, phBound*>>(0x4872A0, this);
}

class phMaterial const* phBound::GetMaterial(i32 arg1)
{
    return stub<thiscall_t<class phMaterial const*, phBound*, i32>>(0x0, this, arg1);
}

i32 phBound::GetNumMaterials()
{
    return stub<thiscall_t<i32, phBound*>>(0x45CF30, this);
}

f32 phBound::SetFriction()
{
    return stub<thiscall_t<f32, phBound*>>(0x45CF60, this);
}

void phBound::SetFriction(f32 arg1)
{
    return stub<thiscall_t<void, phBound*, f32>>(0x45CF40, this, arg1);
}

f32 phBound::SetElasticity()
{
    return stub<thiscall_t<f32, phBound*>>(0x45CF70, this);
}

void phBound::SetElasticity(f32 arg1)
{
    return stub<thiscall_t<void, phBound*, f32>>(0x45CF50, this, arg1);
}

bool phBound::TestProbePoint(class phSegment& arg1, class phIntersectionPoint* arg2, f32 arg3)
{
    return stub<thiscall_t<bool, phBound*, class phSegment&, class phIntersectionPoint*, f32>>(
        0x0, this, arg1, arg2, arg3);
}

bool phBound::TestAIPoint(class phSegment& arg1, class phIntersectionPoint* arg2)
{
    return stub<thiscall_t<bool, phBound*, class phSegment&, class phIntersectionPoint*>>(0x0, this, arg1, arg2);
}

i32 phBound::TestEdge(class phSegment& arg1, class phIntersection* arg2, i32 arg3)
{
    return stub<thiscall_t<i32, phBound*, class phSegment&, class phIntersection*, i32>>(0x0, this, arg1, arg2, arg3);
}

bool phBound::TestProbe(class phSegment& arg1, class phIntersection* arg2, f32 arg3)
{
    return stub<thiscall_t<bool, phBound*, class phSegment&, class phIntersection*, f32>>(0x0, this, arg1, arg2, arg3);
}

bool phBound::TestSphere(class Vector3 const& arg1, f32 arg2, class phImpactBase& arg3)
{
    return stub<thiscall_t<bool, phBound*, class Vector3 const&, f32, class phImpactBase&>>(
        0x4876C0, this, arg1, arg2, arg3);
}

bool phBound::TestSphere(class Vector3 const& arg1, f32 arg2, class Vector3& arg3, class Vector3& arg4, f32& arg5)
{
    return stub<thiscall_t<bool, phBound*, class Vector3 const&, f32, class Vector3&, class Vector3&, f32&>>(
        0x4876B0, this, arg1, arg2, arg3, arg4, arg5);
}

void phBound::ModifyInvMassMatrix(class Matrix34* arg1, i32 arg2, class Vector3 const& arg3, class Vector3 const& arg4)
{
    return stub<thiscall_t<void, phBound*, class Matrix34*, i32, class Vector3 const&, class Vector3 const&>>(
        0x45CF90, this, arg1, arg2, arg3, arg4);
}

void phBound::ModifyInvMassMatrix(class Matrix34* arg1, i32 arg2, class Vector3 const& arg3)
{
    return stub<thiscall_t<void, phBound*, class Matrix34*, i32, class Vector3 const&>>(
        0x45CF80, this, arg1, arg2, arg3);
}

f32 phBound::EffectiveMass(class Vector3 const& arg1, class Vector3 const& arg2, i32 arg3, f32 arg4)
{
    return stub<thiscall_t<f32, phBound*, class Vector3 const&, class Vector3 const&, i32, f32>>(
        0x45CFA0, this, arg1, arg2, arg3, arg4);
}

class Vector3 const& phBound::GetVertex(i32 arg1)
{
    return stub<thiscall_t<class Vector3 const&, phBound*, i32>>(0x487730, this, arg1);
}

void phBound::GetFricElas(class phBound const* arg1, class phIntersection const* arg2, class phBound const* arg3,
    class phIntersection const* arg4, f32* arg5, f32* arg6)
{
    return stub<cdecl_t<void, class phBound const*, class phIntersection const*, class phBound const*,
        class phIntersection const*, f32*, f32*>>(0x487500, arg1, arg2, arg3, arg4, arg5, arg6);
}

define_dummy_symbol(phbound_bound);
