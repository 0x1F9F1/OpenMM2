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

#include "ragdoll.h"

dgRagdoll::dgRagdoll()
{
    unimplemented();
}

dgRagdoll::~dgRagdoll()
{
    unimplemented();
}

void dgRagdoll::ApplyPushVelocity(class Vector3& arg1)
{
    return stub<thiscall_t<void, dgRagdoll*, class Vector3&>>(0x5A8030, this, arg1);
}

void dgRagdoll::Deactivate()
{
    return stub<thiscall_t<void, dgRagdoll*>>(0x5A7EF0, this);
}

class Matrix34& dgRagdoll::GetMatrix()
{
    return stub<thiscall_t<class Matrix34&, dgRagdoll*>>(0x5A7D70, this);
}

void dgRagdoll::Init(class dgRagdollData const& arg1, class crKinematics& arg2, class Matrix34* arg3)
{
    return stub<thiscall_t<void, dgRagdoll*, class dgRagdollData const&, class crKinematics&, class Matrix34*>>(
        0x5A7D80, this, arg1, arg2, arg3);
}

void dgRagdoll::Reset()
{
    return stub<thiscall_t<void, dgRagdoll*>>(0x5A7F70, this);
}

void dgRagdoll::ResetGoals()
{
    return stub<thiscall_t<void, dgRagdoll*>>(0x5A7F00, this);
}

void dgRagdoll::StartRagdoll()
{
    return stub<thiscall_t<void, dgRagdoll*>>(0x5A7F10, this);
}

void dgRagdoll::StopRagdoll()
{
    return stub<thiscall_t<void, dgRagdoll*>>(0x5A7F60, this);
}

void dgRagdoll::Update()
{
    return stub<thiscall_t<void, dgRagdoll*>>(0x5A7FB0, this);
}

define_dummy_symbol(dgragdoll_ragdoll);
