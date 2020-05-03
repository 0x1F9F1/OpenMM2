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

#include "sailboat.h"

gizSailboat::gizSailboat()
{
    unimplemented();
}

gizSailboat::~gizSailboat()
{
    unimplemented();
}

void gizSailboat::Init(char* arg1, class dgPath* arg2)
{
    return stub<thiscall_t<void, gizSailboat*, char*, class dgPath*>>(0x578330, this, arg1, arg2);
}

void gizSailboat::Reset()
{
    return stub<thiscall_t<void, gizSailboat*>>(0x578320, this);
}

void gizSailboat::SetSpeed(f32 arg1)
{
    return stub<thiscall_t<void, gizSailboat*, f32>>(0x578490, this, arg1);
}

u32 gizSailboat::SizeOf()
{
    return stub<thiscall_t<u32, gizSailboat*>>(0x578890, this);
}

void gizSailboat::Update()
{
    return stub<thiscall_t<void, gizSailboat*>>(0x578410, this);
}

gizSailboatMgr::gizSailboatMgr()
{
    unimplemented();
}

gizSailboatMgr::~gizSailboatMgr()
{
    unimplemented();
}

bool gizSailboatMgr::Init(char* arg1, char* arg2, char* arg3)
{
    return stub<thiscall_t<bool, gizSailboatMgr*, char*, char*, char*>>(0x5785F0, this, arg1, arg2, arg3);
}

void gizSailboatMgr::Reset()
{
    return stub<thiscall_t<void, gizSailboatMgr*>>(0x5785C0, this);
}

void gizSailboatMgr::Update()
{
    return stub<thiscall_t<void, gizSailboatMgr*>>(0x578770, this);
}

void gizSailboatMgr::ApplyTuning()
{
    return stub<thiscall_t<void, gizSailboatMgr*>>(0x5787A0, this);
}

define_dummy_symbol(gizmo_sailboat);
