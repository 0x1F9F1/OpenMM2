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

#include "multiroom.h"

class dgPhysEntity* lvlMultiRoomInstance::AttachEntity()
{
    return stub<thiscall_t<class dgPhysEntity*, lvlMultiRoomInstance*>>(0x467B40, this);
}

void lvlMultiRoomInstance::Draw(i32 arg1)
{
    return stub<thiscall_t<void, lvlMultiRoomInstance*, i32>>(0x467BA0, this, arg1);
}

class phBound const* lvlMultiRoomInstance::GetBound(i32 arg1)
{
    return stub<thiscall_t<class phBound const*, lvlMultiRoomInstance*, i32>>(0x467C20, this, arg1);
}

class dgPhysEntity* lvlMultiRoomInstance::GetEntity()
{
    return stub<thiscall_t<class dgPhysEntity*, lvlMultiRoomInstance*>>(0x467B30, this);
}

class Matrix34 const& lvlMultiRoomInstance::GetMatrix(class Matrix34& arg1)
{
    return stub<thiscall_t<class Matrix34 const&, lvlMultiRoomInstance*, class Matrix34&>>(0x467AF0, this, arg1);
}

class Vector3 const& lvlMultiRoomInstance::GetPosition()
{
    return stub<thiscall_t<class Vector3 const&, lvlMultiRoomInstance*>>(0x467AE0, this);
}

class Vector3 const& lvlMultiRoomInstance::GetVelocity()
{
    return stub<thiscall_t<class Vector3 const&, lvlMultiRoomInstance*>>(0x467B50, this);
}

bool lvlMultiRoomInstance::IsCollidable()
{
    return stub<thiscall_t<bool, lvlMultiRoomInstance*>>(0x467B70, this);
}

bool lvlMultiRoomInstance::IsLandmark()
{
    return stub<thiscall_t<bool, lvlMultiRoomInstance*>>(0x467B60, this);
}

bool lvlMultiRoomInstance::IsTerrainCollidable()
{
    return stub<thiscall_t<bool, lvlMultiRoomInstance*>>(0x467B80, this);
}

void lvlMultiRoomInstance::SetMatrix(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, lvlMultiRoomInstance*, class Matrix34 const&>>(0x467B10, this, arg1);
}

u32 lvlMultiRoomInstance::SizeOf()
{
    return stub<thiscall_t<u32, lvlMultiRoomInstance*>>(0x467C30, this);
}

void lvlMultiRoomInstance::Create(class lvlInstance* arg1, i32 arg2)
{
    return stub<cdecl_t<void, class lvlInstance*, i32>>(0x467C40, arg1, arg2);
}

lvlMultiRoomInstance::lvlMultiRoomInstance(class lvlInstance* arg1, struct lvlMultiRoomState* arg2, i32 arg3)
{
    unimplemented();
}

define_dummy_symbol(level_multiroom);
