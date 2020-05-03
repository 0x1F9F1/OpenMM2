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

#include "ferry.h"

gizFerry::gizFerry()
{
    unimplemented();
}

gizFerry::~gizFerry()
{
    unimplemented();
}

void gizFerry::Cull(i32 arg1)
{
    return stub<thiscall_t<void, gizFerry*, i32>>(0x579540, this, arg1);
}

void gizFerry::Draw(i32 arg1)
{
    return stub<thiscall_t<void, gizFerry*, i32>>(0x579A00, this, arg1);
}

void gizFerry::Init(char* arg1, class dgPath* arg2)
{
    return stub<thiscall_t<void, gizFerry*, char*, class dgPath*>>(0x5793A0, this, arg1, arg2);
}

void gizFerry::Reset()
{
    return stub<thiscall_t<void, gizFerry*>>(0x579350, this);
}

void gizFerry::SetSpeed(f32 arg1)
{
    return stub<thiscall_t<void, gizFerry*, f32>>(0x579520, this, arg1);
}

u32 gizFerry::SizeOf()
{
    return stub<thiscall_t<u32, gizFerry*>>(0x579A10, this);
}

void gizFerry::Update()
{
    return stub<thiscall_t<void, gizFerry*>>(0x579460, this);
}

gizFerryMgr::gizFerryMgr()
{
    unimplemented();
}

gizFerryMgr::~gizFerryMgr()
{
    unimplemented();
}

void gizFerryMgr::Cull()
{
    return stub<thiscall_t<void, gizFerryMgr*>>(0x579820, this);
}

bool gizFerryMgr::Init(char* arg1, char* arg2, char* arg3)
{
    return stub<thiscall_t<bool, gizFerryMgr*, char*, char*, char*>>(0x579680, this, arg1, arg2, arg3);
}

void gizFerryMgr::Reset()
{
    return stub<thiscall_t<void, gizFerryMgr*>>(0x579650, this);
}

void gizFerryMgr::Update()
{
    return stub<thiscall_t<void, gizFerryMgr*>>(0x5797D0, this);
}

void gizFerryMgr::ApplyTuning()
{
    return stub<thiscall_t<void, gizFerryMgr*>>(0x579910, this);
}

define_dummy_symbol(gizmo_ferry);
