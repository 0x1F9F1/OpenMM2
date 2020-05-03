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

#include "contact.h"

bool phContact::CalcContactForce(class phImpact const* arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector3 const& arg4, class Vector3* arg5, class Matrix34* arg6, f32* arg7, f32 arg8, f32 arg9)
{
    return stub<thiscall_t<bool, phContact*, class phImpact const*, class Vector3 const&, class Vector3 const&,
        class Vector3 const&, class Vector3*, class Matrix34*, f32*, f32, f32>>(
        0x46F410, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

void phContact::Init(class phImpact const& arg1)
{
    return stub<thiscall_t<void, phContact*, class phImpact const&>>(0x46EF10, this, arg1);
}

bool phContact::IsEqual(class phImpact const& arg1)
{
    return stub<thiscall_t<bool, phContact*, class phImpact const&>>(0x46F110, this, arg1);
}

void phContact::Set(class phContact const& arg1)
{
    return stub<thiscall_t<void, phContact*, class phContact const&>>(0x46F000, this, arg1);
}

void phContact::SetContactForceLimit(class phImpact const& arg1, class Vector3 const& arg2)
{
    return stub<thiscall_t<void, phContact*, class phImpact const&, class Vector3 const&>>(0x46F1D0, this, arg1, arg2);
}

void phContact::SwapAB()
{
    return stub<thiscall_t<void, phContact*>>(0x4700C0, this);
}

void phContact::DisableContacts()
{
    return stub<cdecl_t<void>>(0x46EEA0);
}

void phContact::SetContactPenetration()
{
    return stub<cdecl_t<void>>(0x46EED0);
}

void phContact::SetContactPenetrationScale(f32 arg1)
{
    return stub<cdecl_t<void, f32>>(0x46EEB0, arg1);
}

define_dummy_symbol(phcollide_contact);
