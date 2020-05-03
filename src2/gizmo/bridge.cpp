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

#include "bridge.h"

gizBridge::gizBridge()
{
    unimplemented();
}

gizBridge::~gizBridge()
{
    unimplemented();
}

void gizBridge::Draw(i32 arg1)
{
    return stub<thiscall_t<void, gizBridge*, i32>>(0x578240, this, arg1);
}

void gizBridge::Init(char* arg1, class Matrix34 const& arg2)
{
    return stub<thiscall_t<void, gizBridge*, char*, class Matrix34 const&>>(0x577530, this, arg1, arg2);
}

void gizBridge::Reset()
{
    return stub<thiscall_t<void, gizBridge*>>(0x5774F0, this);
}

u32 gizBridge::SizeOf()
{
    return stub<thiscall_t<u32, gizBridge*>>(0x578250, this);
}

bool gizBridge::Trigger()
{
    return stub<thiscall_t<bool, gizBridge*>>(0x577910, this);
}

void gizBridge::Update()
{
    return stub<thiscall_t<void, gizBridge*>>(0x5776D0, this);
}

void gizBridge::Reposition()
{
    return stub<thiscall_t<void, gizBridge*>>(0x577620, this);
}

gizBridgeMgr::gizBridgeMgr()
{
    unimplemented();
}

gizBridgeMgr::~gizBridgeMgr()
{
    unimplemented();
}

void gizBridgeMgr::AddProximityTrigger(class Vector3* arg1)
{
    return stub<thiscall_t<void, gizBridgeMgr*, class Vector3*>>(0x578180, this, arg1);
}

void gizBridgeMgr::Cull()
{
    return stub<thiscall_t<void, gizBridgeMgr*>>(0x577FF0, this);
}

class gizBridge* gizBridgeMgr::GetBridges(i32 arg1)
{
    return stub<thiscall_t<class gizBridge*, gizBridgeMgr*, i32>>(0x578160, this, arg1);
}

bool gizBridgeMgr::Init(char* arg1, char* arg2, char* arg3)
{
    return stub<thiscall_t<bool, gizBridgeMgr*, char*, char*, char*>>(0x577A70, this, arg1, arg2, arg3);
}

void gizBridgeMgr::Reset()
{
    return stub<thiscall_t<void, gizBridgeMgr*>>(0x577A40, this);
}

void gizBridgeMgr::Update()
{
    return stub<thiscall_t<void, gizBridgeMgr*>>(0x577F90, this);
}

bool gizBridgeMgr::CheckProximity(class gizBridge* arg1)
{
    return stub<thiscall_t<bool, gizBridgeMgr*, class gizBridge*>>(0x5780E0, this, arg1);
}

define_dummy_symbol(gizmo_bridge);
