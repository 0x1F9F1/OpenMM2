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

#include "boundsphere.h"

phBoundSphere::phBoundSphere()
{
    unimplemented();
}

phBoundSphere::phBoundSphere(f32 arg1)
{
    unimplemented();
}

phBoundSphere::~phBoundSphere()
{
    unimplemented();
}

void phBoundSphere::CreateOffset(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, phBoundSphere*, class Vector3 const&>>(0x484590, this, arg1);
}

bool phBoundSphere::FindImpactSphereToSphere(class phBoundSphere const* arg1, class Matrix34 const* arg2,
    class Matrix34 const* arg3, class phColliderBase* arg4, class phColliderBase* arg5, class phImpactBase* arg6,
    class Vector3 const& arg7)
{
    return stub<
        thiscall_t<bool, phBoundSphere*, class phBoundSphere const*, class Matrix34 const*, class Matrix34 const*,
            class phColliderBase*, class phColliderBase*, class phImpactBase*, class Vector3 const&>>(
        0x4849E0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

class phMaterial const* phBoundSphere::GetMaterial(i32 arg1)
{
    return stub<thiscall_t<class phMaterial const*, phBoundSphere*, i32>>(0x4855D0, this, arg1);
}

bool phBoundSphere::Load(char const* arg1)
{
    return stub<thiscall_t<bool, phBoundSphere*, char const*>>(0x484660, this, arg1);
}

void phBoundSphere::ScaleRadius(f32 arg1)
{
    return stub<thiscall_t<void, phBoundSphere*, f32>>(0x484550, this, arg1);
}

void phBoundSphere::SetRadius(f32 arg1)
{
    return stub<thiscall_t<void, phBoundSphere*, f32>>(0x484510, this, arg1);
}

void phBoundSphere::ShiftCentroid(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, phBoundSphere*, class Vector3 const&>>(0x4845C0, this, arg1);
}

bool phBoundSphere::TestAIPoint(class phSegment& arg1, class phIntersectionPoint* arg2)
{
    return stub<thiscall_t<bool, phBoundSphere*, class phSegment&, class phIntersectionPoint*>>(
        0x484D70, this, arg1, arg2);
}

i32 phBoundSphere::TestEdge(class phSegment& arg1, class phIntersection* arg2, i32 arg3)
{
    return stub<thiscall_t<i32, phBoundSphere*, class phSegment&, class phIntersection*, i32>>(
        0x484F10, this, arg1, arg2, arg3);
}

bool phBoundSphere::TestProbe(class phSegment& arg1, class phIntersection* arg2, f32 arg3)
{
    return stub<thiscall_t<bool, phBoundSphere*, class phSegment&, class phIntersection*, f32>>(
        0x485210, this, arg1, arg2, arg3);
}

bool phBoundSphere::TestProbePoint(class phSegment& arg1, class phIntersectionPoint* arg2, f32 arg3)
{
    return stub<thiscall_t<bool, phBoundSphere*, class phSegment&, class phIntersectionPoint*, f32>>(
        0x484BC0, this, arg1, arg2, arg3);
}

bool phBoundSphere::TestSphere(class Vector3 const& arg1, f32 arg2, class phImpactBase& arg3)
{
    return stub<thiscall_t<bool, phBoundSphere*, class Vector3 const&, f32, class phImpactBase&>>(
        0x4854B0, this, arg1, arg2, arg3);
}

bool phBoundSphere::TestSphere(class Vector3 const& arg1, f32 arg2, class Vector3& arg3, class Vector3& arg4, f32& arg5)
{
    return stub<thiscall_t<bool, phBoundSphere*, class Vector3 const&, f32, class Vector3&, class Vector3&, f32&>>(
        0x4853E0, this, arg1, arg2, arg3, arg4, arg5);
}

define_dummy_symbol(phbound_boundsphere);
