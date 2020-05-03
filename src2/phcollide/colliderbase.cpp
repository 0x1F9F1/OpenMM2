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

#include "colliderbase.h"

void phColliderBase::ApplyAirResistance(f32 arg1, class Vector3 const& arg2, class phBound const* arg3)
{
    return stub<thiscall_t<void, phColliderBase*, f32, class Vector3 const&, class phBound const*>>(
        0x46EB00, this, arg1, arg2, arg3);
}

void phColliderBase::ApplyGravity()
{
    return stub<thiscall_t<void, phColliderBase*>>(0x46EAC0, this);
}

void phColliderBase::CalcMaxMoved()
{
    return stub<thiscall_t<void, phColliderBase*>>(0x46DA70, this);
}

void phColliderBase::CallBoundCallback(class phImpactBase const* arg1, class phContact const* arg2,
    class Vector3 const& arg3, class Vector3 const& arg4, bool arg5, class Matrix34 const* arg6)
{
    return stub<thiscall_t<void, phColliderBase*, class phImpactBase const*, class phContact const*,
        class Vector3 const&, class Vector3 const&, bool, class Matrix34 const*>>(
        0x46E4E0, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

bool phColliderBase::ColliderIsActive()
{
    return stub<thiscall_t<bool, phColliderBase*>>(0x46DD10, this);
}

void phColliderBase::CopyLastMatrix(class Matrix34* arg1, i32 arg2)
{
    return stub<thiscall_t<void, phColliderBase*, class Matrix34*, i32>>(0x475C50, this, arg1, arg2);
}

void phColliderBase::GetBoundCBImpactInfo(class phImpactBase const* arg1, class phContact const* arg2,
    struct phImpactBase::BoundCallbackData* arg3, class Vector3* arg4)
{
    return stub<thiscall_t<void, phColliderBase*, class phImpactBase const*, class phContact const*,
        struct phImpactBase::BoundCallbackData*, class Vector3*>>(0x46E6F0, this, arg1, arg2, arg3, arg4);
}

void phColliderBase::GetDisp(class Vector3 const& arg1, class Vector3* arg2)
{
    return stub<thiscall_t<void, phColliderBase*, class Vector3 const&, class Vector3*>>(0x46DD20, this, arg1, arg2);
}

void phColliderBase::GetDisp(class Vector3 const& arg1, class Vector3* arg2, i32 arg3)
{
    return stub<thiscall_t<void, phColliderBase*, class Vector3 const&, class Vector3*, i32>>(
        0x46DD60, this, arg1, arg2, arg3);
}

void phColliderBase::GetDisp(class Vector3 const& arg1, i32 arg2, i32 arg3, i32 arg4, class Vector3* arg5)
{
    return stub<thiscall_t<void, phColliderBase*, class Vector3 const&, i32, i32, i32, class Vector3*>>(
        0x46DDB0, this, arg1, arg2, arg3, arg4, arg5);
}

void phColliderBase::GetLocalVelocity(class Vector3 const& arg1, i32 arg2, i32 arg3, i32 arg4, class Vector3& arg5)
{
    return stub<thiscall_t<void, phColliderBase*, class Vector3 const&, i32, i32, i32, class Vector3&>>(
        0x46E040, this, arg1, arg2, arg3, arg4, arg5);
}

void phColliderBase::Reset()
{
    return stub<thiscall_t<void, phColliderBase*>>(0x46D9A0, this);
}

void phColliderBase::SetBoundCB(class datCallback* arg1)
{
    return stub<thiscall_t<void, phColliderBase*, class datCallback*>>(0x46E4C0, this, arg1);
}

void phColliderBase::SetHitCB(class datCallback* arg1)
{
    return stub<thiscall_t<void, phColliderBase*, class datCallback*>>(0x46E4D0, this, arg1);
}

void phColliderBase::SetImpactCB(class datCallback* arg1)
{
    return stub<thiscall_t<void, phColliderBase*, class datCallback*>>(0x46E4B0, this, arg1);
}

i32 phColliderBase::TestSegment(class phSegment const& arg1, class phIntersection* arg2, i32 arg3)
{
    return stub<thiscall_t<i32, phColliderBase*, class phSegment const&, class phIntersection*, i32>>(
        0x46E7D0, this, arg1, arg2, arg3);
}

i32 phColliderBase::TestSegmentPoint(class phSegment const& arg1, class phIntersectionPoint* arg2, i32 arg3)
{
    return stub<thiscall_t<i32, phColliderBase*, class phSegment const&, class phIntersectionPoint*, i32>>(
        0x46E920, this, arg1, arg2, arg3);
}

void phColliderBase::ToWorldCoords(class phIntersection* arg1, i32 arg2)
{
    return stub<thiscall_t<void, phColliderBase*, class phIntersection*, i32>>(0x46DB70, this, arg1, arg2);
}

void phColliderBase::Update()
{
    return stub<thiscall_t<void, phColliderBase*>>(0x46DA20, this);
}

void phColliderBase::UpdateMtx()
{
    return stub<thiscall_t<void, phColliderBase*>>(0x46D9E0, this);
}

void phColliderBase::GetInvMassMatrix(
    class Vector3 const& arg1, class Vector3 const& arg2, class Matrix34& arg3, i32 arg4)
{
    return stub<thiscall_t<void, phColliderBase*, class Vector3 const&, class Vector3 const&, class Matrix34&, i32>>(
        0x46EA90, this, arg1, arg2, arg3, arg4);
}

void phColliderBase::GetInvMassMatrix(class Vector3 const& arg1, class Matrix34& arg2, i32 arg3)
{
    return stub<thiscall_t<void, phColliderBase*, class Vector3 const&, class Matrix34&, i32>>(
        0x46EA60, this, arg1, arg2, arg3);
}

void phColliderBase::Impact(class phImpactBase const* arg1, class Vector3 const& arg2)
{
    return stub<thiscall_t<void, phColliderBase*, class phImpactBase const*, class Vector3 const&>>(
        0x46E1B0, this, arg1, arg2);
}

void phColliderBase::Impact(class phImpactBase const* arg1, class Vector3 const& arg2, class Vector3 const& arg3)
{
    return stub<
        thiscall_t<void, phColliderBase*, class phImpactBase const*, class Vector3 const&, class Vector3 const&>>(
        0x46E070, this, arg1, arg2, arg3);
}

void phColliderBase::Contact(class Vector3 const& arg1, class phContact const* arg2)
{
    return stub<thiscall_t<void, phColliderBase*, class Vector3 const&, class phContact const*>>(
        0x46E3C0, this, arg1, arg2);
}

void phColliderBase::Contact(class Vector3 const& arg1, class phContact const* arg2, class Matrix34 const& arg3)
{
    return stub<thiscall_t<void, phColliderBase*, class Vector3 const&, class phContact const*, class Matrix34 const&>>(
        0x46E350, this, arg1, arg2, arg3);
}

void phColliderBase::Contact(class phImpactBase const* arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, class Matrix34 const& arg5)
{
    return stub<thiscall_t<void, phColliderBase*, class phImpactBase const*, class Vector3 const&, class Vector3 const&,
        class Vector3 const&, class Matrix34 const&>>(0x46E2B0, this, arg1, arg2, arg3, arg4, arg5);
}

void phColliderBase::SetColliderPenetration(f32 arg1)
{
    return stub<cdecl_t<void, f32>>(0x46D980, arg1);
}

define_dummy_symbol(phcollide_colliderbase);
