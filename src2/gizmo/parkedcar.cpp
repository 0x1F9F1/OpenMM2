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

#include "parkedcar.h"

gizParkedCarMgr::gizParkedCarMgr()
{
    unimplemented();
}

gizParkedCarMgr::~gizParkedCarMgr()
{
    unimplemented();
}

bool gizParkedCarMgr::Init(char* arg1, char* arg2, char* arg3)
{
    return stub<thiscall_t<bool, gizParkedCarMgr*, char*, char*, char*>>(0x579AF0, this, arg1, arg2, arg3);
}

void gizParkedCarMgr::Reset()
{
    return stub<thiscall_t<void, gizParkedCarMgr*>>(0x579AE0, this);
}

void gizParkedCarMgr::Update()
{
    return stub<thiscall_t<void, gizParkedCarMgr*>>(0x579CB0, this);
}

void gizParkedCarMgr::ApplyTuning()
{
    return stub<thiscall_t<void, gizParkedCarMgr*>>(0x579CC0, this);
}

define_dummy_symbol(gizmo_parkedcar);
