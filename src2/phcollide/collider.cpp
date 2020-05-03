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

#include "collider.h"

void phCollider::Init(class Matrix34* arg1, class phBound const* arg2)
{
    return stub<thiscall_t<void, phCollider*, class Matrix34*, class phBound const*>>(0x46D870, this, arg1, arg2);
}

void phCollider::Init(class phBound const* arg1, class Matrix34* arg2)
{
    return stub<thiscall_t<void, phCollider*, class phBound const*, class Matrix34*>>(0x46D800, this, arg1, arg2);
}

void phCollider::Init(class phBound const* arg1, class phInertialCS* arg2, class phSleep* arg3)
{
    return stub<thiscall_t<void, phCollider*, class phBound const*, class phInertialCS*, class phSleep*>>(
        0x46D740, this, arg1, arg2, arg3);
}

void phCollider::Init(
    class phBound const* arg1, class InstanceData* arg2, class phInertialCS* arg3, class phSleep* arg4)
{
    return stub<
        thiscall_t<void, phCollider*, class phBound const*, class InstanceData*, class phInertialCS*, class phSleep*>>(
        0x46D6E0, this, arg1, arg2, arg3, arg4);
}

void phCollider::Init(class phBound const* arg1, class Matrix34* arg2, class phInertialCS* arg3, class phSleep* arg4)
{
    return stub<
        thiscall_t<void, phCollider*, class phBound const*, class Matrix34*, class phInertialCS*, class phSleep*>>(
        0x46D7A0, this, arg1, arg2, arg3, arg4);
}

void phCollider::Reset()
{
    return stub<thiscall_t<void, phCollider*>>(0x46D8D0, this);
}

void phCollider::InitArray(class phCollider* const arg1, i32 arg2)
{
    return stub<cdecl_t<void, class phCollider* const, i32>>(0x46D610, arg1, arg2);
}

define_dummy_symbol(phcollide_collider);
