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

#include "impact.h"

void phImpactBase::FinishMakingNewImpact(i32 arg1, i32 arg2, class phColliderBase* arg3, class phColliderBase* arg4,
    class phBound const* arg5, class phBound const* arg6, i32 arg7)
{
    return stub<thiscall_t<void, phImpactBase*, i32, i32, class phColliderBase*, class phColliderBase*,
        class phBound const*, class phBound const*, i32>>(0x491A30, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void phImpactBase::MakeNewImpact(class phColliderBase* arg1, class phColliderBase* arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, f32 arg5, class phBound const* arg6, class phBound const* arg7, i32 arg8, i32 arg9,
    i32 arg10)
{
    return stub<thiscall_t<void, phImpactBase*, class phColliderBase*, class phColliderBase*, class Vector3 const&,
        class Vector3 const&, f32, class phBound const*, class phBound const*, i32, i32, i32>>(
        0x491AB0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

void phImpactBase::Reset()
{
    return stub<thiscall_t<void, phImpactBase*>>(0x4925A0, this);
}

void phImpactBase::SetColliders(class phColliderBase* arg1, class phColliderBase* arg2)
{
    return stub<thiscall_t<void, phImpactBase*, class phColliderBase*, class phColliderBase*>>(
        0x492270, this, arg1, arg2);
}

void phImpactBase::SetColliders(class phColliderBase* arg1, class phColliderBase* arg2, i32 arg3, i32 arg4)
{
    return stub<thiscall_t<void, phImpactBase*, class phColliderBase*, class phColliderBase*, i32, i32>>(
        0x492290, this, arg1, arg2, arg3, arg4);
}

void phImpactBase::SetComponentA(i32 arg1)
{
    return stub<thiscall_t<void, phImpactBase*, i32>>(0x4922B0, this, arg1);
}

void phImpactBase::SetComponentB(i32 arg1)
{
    return stub<thiscall_t<void, phImpactBase*, i32>>(0x4922C0, this, arg1);
}

void phImpactBase::StartMakingNewImpact(f32 arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class phColliderBase* arg4, class phColliderBase* arg5, class Matrix34 const* arg6, i32 arg7, i32 arg8, i32 arg9)
{
    return stub<thiscall_t<void, phImpactBase*, f32, class Vector3 const&, class Vector3 const&, class phColliderBase*,
        class phColliderBase*, class Matrix34 const*, i32, i32, i32>>(
        0x491920, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

void phImpactBase::SwapColliders()
{
    return stub<thiscall_t<void, phImpactBase*>>(0x492310, this);
}

bool phImpactBase::AddImpactShaftPlaneTest(
    class phImpactBase* arg1, i32* arg2, class Vector3 const& arg3, f32 arg4, class Vector3 const& arg5)
{
    return stub<cdecl_t<bool, class phImpactBase*, i32*, class Vector3 const&, f32, class Vector3 const&>>(
        0x491E20, arg1, arg2, arg3, arg4, arg5);
}

bool phImpactBase::AddImpactSpherePlaneTest(class phImpactBase* arg1, i32* arg2, class Vector3 const& arg3, f32 arg4)
{
    return stub<cdecl_t<bool, class phImpactBase*, i32*, class Vector3 const&, f32>>(0x491B80, arg1, arg2, arg3, arg4);
}

void phImpactBase::CullImpactList(class phImpactBase* arg1, i32* arg2, class Vector3 const& arg3)
{
    return stub<cdecl_t<void, class phImpactBase*, i32*, class Vector3 const&>>(0x492360, arg1, arg2, arg3);
}

bool phImpactBase::ImpactIsInList(i32 arg1, i32 arg2, i32 arg3, class phImpactBase* arg4, i32 arg5)
{
    return stub<cdecl_t<bool, i32, i32, i32, class phImpactBase*, i32>>(0x4924C0, arg1, arg2, arg3, arg4, arg5);
}

void phImpactBase::SetColliders(
    class phColliderBase* arg1, class phColliderBase* arg2, class phImpactBase* arg3, i32 arg4)
{
    return stub<cdecl_t<void, class phColliderBase*, class phColliderBase*, class phImpactBase*, i32>>(
        0x4922D0, arg1, arg2, arg3, arg4);
}

define_dummy_symbol(phbound_impact);
