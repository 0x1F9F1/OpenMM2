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

#include "colliderjointed.h"

phColliderJointed::phColliderJointed()
{
    unimplemented();
}

void phColliderJointed::Attach(class phJoint const* arg1)
{
    return stub<thiscall_t<void, phColliderJointed*, class phJoint const*>>(0x46D4D0, this, arg1);
}

void phColliderJointed::GetInvMassMatrix(
    class Vector3 const& arg1, class Vector3 const& arg2, class Matrix34& arg3, i32 arg4)
{
    return stub<thiscall_t<void, phColliderJointed*, class Vector3 const&, class Vector3 const&, class Matrix34&, i32>>(
        0x46D5F0, this, arg1, arg2, arg3, arg4);
}

void phColliderJointed::GetInvMassMatrix(class Vector3 const& arg1, class Matrix34& arg2, i32 arg3)
{
    return stub<thiscall_t<void, phColliderJointed*, class Vector3 const&, class Matrix34&, i32>>(
        0x46D580, this, arg1, arg2, arg3);
}

void phColliderJointed::Impact(class phImpactBase const* arg1, class Vector3 const& arg2)
{
    return stub<thiscall_t<void, phColliderJointed*, class phImpactBase const*, class Vector3 const&>>(
        0x46D500, this, arg1, arg2);
}

void phColliderJointed::Impact(class phImpactBase const* arg1, class Vector3 const& arg2, class Vector3 const& arg3)
{
    return stub<
        thiscall_t<void, phColliderJointed*, class phImpactBase const*, class Vector3 const&, class Vector3 const&>>(
        0x46D4E0, this, arg1, arg2, arg3);
}

void phColliderJointed::Contact(class Vector3 const& arg1, class phContact const* arg2)
{
    return stub<thiscall_t<void, phColliderJointed*, class Vector3 const&, class phContact const*>>(
        0x46D560, this, arg1, arg2);
}

void phColliderJointed::Contact(class Vector3 const& arg1, class phContact const* arg2, class Matrix34 const& arg3)
{
    return stub<
        thiscall_t<void, phColliderJointed*, class Vector3 const&, class phContact const*, class Matrix34 const&>>(
        0x46D540, this, arg1, arg2, arg3);
}

void phColliderJointed::Contact(class phImpactBase const* arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, class Matrix34 const& arg5)
{
    return stub<thiscall_t<void, phColliderJointed*, class phImpactBase const*, class Vector3 const&,
        class Vector3 const&, class Vector3 const&, class Matrix34 const&>>(
        0x46D520, this, arg1, arg2, arg3, arg4, arg5);
}

void phColliderJointed::InitArray(class phColliderJointed* const arg1, i32 arg2)
{
    return stub<cdecl_t<void, class phColliderJointed* const, i32>>(0x46D410, arg1, arg2);
}

define_dummy_symbol(phcollide_colliderjointed);
