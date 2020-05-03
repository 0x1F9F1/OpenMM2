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

#include "glass.h"

dgGlassInstance::dgGlassInstance()
{
    unimplemented();
}

void dgGlassInstance::Draw(i32 arg1)
{
    return stub<thiscall_t<void, dgGlassInstance*, i32>>(0x442E90, this, arg1);
}

void dgGlassInstance::DrawGlow()
{
    return stub<thiscall_t<void, dgGlassInstance*>>(0x442EF0, this);
}

void dgGlassInstance::Impact(class lvlInstance* arg1, class Vector3* arg2)
{
    return stub<thiscall_t<void, dgGlassInstance*, class lvlInstance*, class Vector3*>>(0x442CD0, this, arg1, arg2);
}

void dgGlassInstance::Reset()
{
    return stub<thiscall_t<void, dgGlassInstance*>>(0x442C90, this);
}

u32 dgGlassInstance::SizeOf()
{
    return stub<thiscall_t<u32, dgGlassInstance*>>(0x442F00, this);
}

void dgGlassInstance::InitStaticSystems()
{
    return stub<cdecl_t<void>>(0x442C30);
}

define_dummy_symbol(banger_glass);
