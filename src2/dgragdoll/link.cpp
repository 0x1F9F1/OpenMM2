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

#include "link.h"

dgLink::dgLink()
{
    unimplemented();
}

void dgLink::Bounce(class Vector3& arg1, class Vector3& arg2)
{
    return stub<thiscall_t<void, dgLink*, class Vector3&, class Vector3&>>(0x5A8540, this, arg1, arg2);
}

void dgLink::Init(class dgLinkData& arg1, class crIKGoal& arg2, class Vector3& arg3, class dgRagdoll& arg4)
{
    return stub<thiscall_t<void, dgLink*, class dgLinkData&, class crIKGoal&, class Vector3&, class dgRagdoll&>>(
        0x5A8200, this, arg1, arg2, arg3, arg4);
}

void dgLink::Reset()
{
    return stub<thiscall_t<void, dgLink*>>(0x5A8220, this);
}

void dgLink::ResetGoal()
{
    return stub<thiscall_t<void, dgLink*>>(0x5A8250, this);
}

void dgLink::SetMode(i32 arg1)
{
    return stub<thiscall_t<void, dgLink*, i32>>(0x5A8270, this, arg1);
}

void dgLink::Update()
{
    return stub<thiscall_t<void, dgLink*>>(0x5A82A0, this);
}

void dgLink::UpdateDamping()
{
    return stub<thiscall_t<void, dgLink*>>(0x5A8630, this);
}

void dgLink::UpdateFree()
{
    return stub<thiscall_t<void, dgLink*>>(0x5A82E0, this);
}

void dgLink::UpdateGrasp()
{
    return stub<thiscall_t<void, dgLink*>>(0x5A8620, this);
}

void dgLink::UpdateTendon()
{
    return stub<thiscall_t<void, dgLink*>>(0x5A87B0, this);
}

define_dummy_symbol(dgragdoll_link);
