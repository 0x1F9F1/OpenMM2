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

#include "gizmoinst.h"

gizInstance::gizInstance()
{
    unimplemented();
}

gizInstance::~gizInstance()
{
    unimplemented();
}

void gizInstance::Draw(i32 arg1)
{
    return stub<thiscall_t<void, gizInstance*, i32>>(0x579F30, this, arg1);
}

class Matrix34 const& gizInstance::GetMatrix(class Matrix34& arg1)
{
    return stub<thiscall_t<class Matrix34 const&, gizInstance*, class Matrix34&>>(0x579E40, this, arg1);
}

class Vector3 const& gizInstance::GetPosition()
{
    return stub<thiscall_t<class Vector3 const&, gizInstance*>>(0x579E30, this);
}

void gizInstance::Init(char* arg1, i32 arg2)
{
    return stub<thiscall_t<void, gizInstance*, char*, i32>>(0x579E90, this, arg1, arg2);
}

void gizInstance::SetMatrix(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, gizInstance*, class Matrix34 const&>>(0x579E60, this, arg1);
}

define_dummy_symbol(gizmo_gizmoinst);
