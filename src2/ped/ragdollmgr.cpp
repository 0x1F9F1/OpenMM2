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

#include "ragdollmgr.h"

pedRagdollMgr::pedRagdollMgr()
{
    unimplemented();
}

pedRagdollMgr::~pedRagdollMgr()
{
    unimplemented();
}

class pedActive* pedRagdollMgr::Attach(class aiPedestrianInstance* arg1)
{
    return stub<thiscall_t<class pedActive*, pedRagdollMgr*, class aiPedestrianInstance*>>(0x57BAF0, this, arg1);
}

void pedRagdollMgr::Detach(class aiPedestrianInstance* arg1)
{
    return stub<thiscall_t<void, pedRagdollMgr*, class aiPedestrianInstance*>>(0x57BB80, this, arg1);
}

void pedRagdollMgr::Init(i32 arg1, char** arg2)
{
    return stub<thiscall_t<void, pedRagdollMgr*, i32, char**>>(0x57B9B0, this, arg1, arg2);
}

void pedRagdollMgr::Reset()
{
    return stub<thiscall_t<void, pedRagdollMgr*>>(0x57BBD0, this);
}

bool pedRagdollMgr::UnusedActive()
{
    return stub<thiscall_t<bool, pedRagdollMgr*>>(0x57BBB0, this);
}

void pedRagdollMgr::Update()
{
    return stub<thiscall_t<void, pedRagdollMgr*>>(0x57BC10, this);
}

define_dummy_symbol(ped_ragdollmgr);
