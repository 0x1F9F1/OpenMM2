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

void phImpact::CalcCollision(
    class Vector3 const& arg1, f32 arg2, class Vector3* arg3, class Vector3* arg4, class Vector3* arg5)
{
    return stub<thiscall_t<void, phImpact*, class Vector3 const&, f32, class Vector3*, class Vector3*, class Vector3*>>(
        0x46CCF0, this, arg1, arg2, arg3, arg4, arg5);
}

void phImpact::Contact(
    class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3, class Matrix34 const& arg4)
{
    return stub<thiscall_t<void, phImpact*, class Vector3 const&, class Vector3 const&, class Vector3 const&,
        class Matrix34 const&>>(0x46D1F0, this, arg1, arg2, arg3, arg4);
}

f32 phImpact::EffectiveMass()
{
    return stub<thiscall_t<f32, phImpact*>>(0x46C9B0, this);
}

void phImpact::FindFrictionAndElasticity()
{
    return stub<thiscall_t<void, phImpact*>>(0x46D340, this);
}

void phImpact::GetLocalVelocities(class Vector3& arg1, class Vector3& arg2)
{
    return stub<thiscall_t<void, phImpact*, class Vector3&, class Vector3&>>(0x46CB70, this, arg1, arg2);
}

class phMaterial const* phImpact::GetMaterial(class phColliderBase* arg1, i32 arg2)
{
    return stub<thiscall_t<class phMaterial const*, phImpact*, class phColliderBase*, i32>>(0x46D3A0, this, arg1, arg2);
}

void phImpact::GetRelDisplacement(class Vector3* arg1)
{
    return stub<thiscall_t<void, phImpact*, class Vector3*>>(0x46CC30, this, arg1);
}

void phImpact::Impact(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3)
{
    return stub<thiscall_t<void, phImpact*, class Vector3 const&, class Vector3 const&, class Vector3 const&>>(
        0x46D250, this, arg1, arg2, arg3);
}

f32 phImpact::CalcCollisionNoFriction(
    class phInertialCS const& arg1, class Vector3 const& arg2, f32 arg3, class Vector3 const& arg4)
{
    return stub<cdecl_t<f32, class phInertialCS const&, class Vector3 const&, f32, class Vector3 const&>>(
        0x46D2A0, arg1, arg2, arg3, arg4);
}

define_dummy_symbol(phcollide_impact);
