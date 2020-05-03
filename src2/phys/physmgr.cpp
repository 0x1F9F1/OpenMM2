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

#include "physmgr.h"

dgPhysManager::dgPhysManager()
{
    unimplemented();
}

dgPhysManager::~dgPhysManager()
{
    unimplemented();
}

bool dgPhysManager::Collide(
    class lvlSegment& arg1, class lvlIntersection* arg2, i32 arg3, class lvlInstance* arg4, i32 arg5, i32 arg6)
{
    return stub<
        thiscall_t<bool, dgPhysManager*, class lvlSegment&, class lvlIntersection*, i32, class lvlInstance*, i32, i32>>(
        0x468E40, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

bool dgPhysManager::CollideInstances(class lvlInstance* arg1, class lvlInstance* arg2)
{
    return stub<thiscall_t<bool, dgPhysManager*, class lvlInstance*, class lvlInstance*>>(0x469620, this, arg1, arg2);
}

bool dgPhysManager::CollideProbe(class lvlSegment& arg1, class lvlIntersection* arg2, class lvlInstance* arg3)
{
    return stub<thiscall_t<bool, dgPhysManager*, class lvlSegment&, class lvlIntersection*, class lvlInstance*>>(
        0x469110, this, arg1, arg2, arg3);
}

bool dgPhysManager::CollideTerrain(struct dgPhysManager::CollisionTableEntry* arg1)
{
    return stub<thiscall_t<bool, dgPhysManager*, struct dgPhysManager::CollisionTableEntry*>>(0x469A60, this, arg1);
}

class phInstance* dgPhysManager::CreateInstance()
{
    return stub<thiscall_t<class phInstance*, dgPhysManager*>>(0x469F80, this);
}

void dgPhysManager::DeclareMover(class lvlInstance* arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, dgPhysManager*, class lvlInstance*, i32, i32>>(0x468370, this, arg1, arg2, arg3);
}

void dgPhysManager::DemoteInstance(class phInstance* arg1)
{
    return stub<thiscall_t<void, dgPhysManager*, class phInstance*>>(0x469F30, this, arg1);
}

void dgPhysManager::DisableInstance(class phInstance* arg1)
{
    return stub<thiscall_t<void, dgPhysManager*, class phInstance*>>(0x469F50, this, arg1);
}

void dgPhysManager::Draw()
{
    return stub<thiscall_t<void, dgPhysManager*>>(0x469EC0, this);
}

void dgPhysManager::EnableInstance(class phInstance* arg1, i32 arg2)
{
    return stub<thiscall_t<void, dgPhysManager*, class phInstance*, i32>>(0x469F60, this, arg1, arg2);
}

void dgPhysManager::GatherCollidables(struct dgPhysManager::CollisionTableEntry* arg1)
{
    return stub<thiscall_t<void, dgPhysManager*, struct dgPhysManager::CollisionTableEntry*>>(0x4694E0, this, arg1);
}

class phColliderBase* dgPhysManager::GetCollider(class phInstance const* arg1)
{
    return stub<thiscall_t<class phColliderBase*, dgPhysManager*, class phInstance const*>>(0x469F70, this, arg1);
}

void dgPhysManager::IgnoreMover(class lvlInstance* arg1)
{
    return stub<thiscall_t<void, dgPhysManager*, class lvlInstance*>>(0x468860, this, arg1);
}

void dgPhysManager::KillInstance(class phInstance* arg1)
{
    return stub<thiscall_t<void, dgPhysManager*, class phInstance*>>(0x469F40, this, arg1);
}

void dgPhysManager::NewMover(class lvlInstance* arg1)
{
    return stub<thiscall_t<void, dgPhysManager*, class lvlInstance*>>(0x468670, this, arg1);
}

void dgPhysManager::NewMover(class lvlInstance* arg1, class lvlInstance* arg2)
{
    return stub<thiscall_t<void, dgPhysManager*, class lvlInstance*, class lvlInstance*>>(0x468550, this, arg1, arg2);
}

void dgPhysManager::NewMover(class lvlInstance* arg1, class lvlInstance* arg2, class lvlInstance* arg3)
{
    return stub<thiscall_t<void, dgPhysManager*, class lvlInstance*, class lvlInstance*, class lvlInstance*>>(
        0x468720, this, arg1, arg2, arg3);
}

class phColliderBase* dgPhysManager::PromoteInstance(class phInstance* arg1)
{
    return stub<thiscall_t<class phColliderBase*, dgPhysManager*, class phInstance*>>(0x469F20, this, arg1);
}

void dgPhysManager::Reset()
{
    return stub<thiscall_t<void, dgPhysManager*>>(0x4682D0, this);
}

void dgPhysManager::ResetTable()
{
    return stub<thiscall_t<void, dgPhysManager*>>(0x468E10, this);
}

bool dgPhysManager::TestProbe(class phSegment const& arg1, class phIntersection* arg2, u32 arg3, i32 arg4)
{
    return stub<thiscall_t<bool, dgPhysManager*, class phSegment const&, class phIntersection*, u32, i32>>(
        0x469F00, this, arg1, arg2, arg3, arg4);
}

bool dgPhysManager::TestSphere(class Vector3 const& arg1, f32 arg2, class phImpact* arg3, u32 arg4, i32 arg5)
{
    return stub<thiscall_t<bool, dgPhysManager*, class Vector3 const&, f32, class phImpact*, u32, i32>>(
        0x469F10, this, arg1, arg2, arg3, arg4, arg5);
}

bool dgPhysManager::TrivialCollideInstances(class lvlInstance* arg1, class lvlInstance* arg2)
{
    return stub<thiscall_t<bool, dgPhysManager*, class lvlInstance*, class lvlInstance*>>(0x4692E0, this, arg1, arg2);
}

void dgPhysManager::Update()
{
    return stub<thiscall_t<void, dgPhysManager*>>(0x4688B0, this);
}

bool phPhysicsManager::TestProbe(class phSegment const& arg1, class phIntersection* arg2, u32 arg3, i32 arg4)
{
    return stub<thiscall_t<bool, phPhysicsManager*, class phSegment const&, class phIntersection*, u32, i32>>(
        0x0, this, arg1, arg2, arg3, arg4);
}

bool phPhysicsManager::TestSphere(class Vector3 const& arg1, f32 arg2, class phImpact* arg3, u32 arg4, i32 arg5)
{
    return stub<thiscall_t<bool, phPhysicsManager*, class Vector3 const&, f32, class phImpact*, u32, i32>>(
        0x0, this, arg1, arg2, arg3, arg4, arg5);
}

class phColliderBase* phPhysicsManager::PromoteInstance(class phInstance* arg1)
{
    return stub<thiscall_t<class phColliderBase*, phPhysicsManager*, class phInstance*>>(0x0, this, arg1);
}

void phPhysicsManager::DemoteInstance(class phInstance* arg1)
{
    return stub<thiscall_t<void, phPhysicsManager*, class phInstance*>>(0x0, this, arg1);
}

void phPhysicsManager::KillInstance(class phInstance* arg1)
{
    return stub<thiscall_t<void, phPhysicsManager*, class phInstance*>>(0x0, this, arg1);
}

void phPhysicsManager::DisableInstance(class phInstance* arg1)
{
    return stub<thiscall_t<void, phPhysicsManager*, class phInstance*>>(0x0, this, arg1);
}

void phPhysicsManager::EnableInstance(class phInstance* arg1, i32 arg2)
{
    return stub<thiscall_t<void, phPhysicsManager*, class phInstance*, i32>>(0x0, this, arg1, arg2);
}

class phColliderBase* phPhysicsManager::GetCollider(class phInstance const* arg1)
{
    return stub<thiscall_t<class phColliderBase*, phPhysicsManager*, class phInstance const*>>(0x0, this, arg1);
}

class phInstance* phPhysicsManager::CreateInstance()
{
    return stub<thiscall_t<class phInstance*, phPhysicsManager*>>(0x0, this);
}

define_dummy_symbol(phys_physmgr);
