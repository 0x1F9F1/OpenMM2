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

#include "bound.h"

dgBoundGeometry::dgBoundGeometry()
{
    unimplemented();
}

dgBoundGeometry::~dgBoundGeometry()
{
    unimplemented();
}

class phMaterial const* dgBoundGeometry::GetMaterial(i32 arg1)
{
    return stub<thiscall_t<class phMaterial const*, dgBoundGeometry*, i32>>(0x46A5F0, this, arg1);
}

i32 dgBoundGeometry::GetNumMaterials()
{
    return stub<thiscall_t<i32, dgBoundGeometry*>>(0x46A600, this);
}

void dgBoundGeometry::SetElasticity(f32 arg1)
{
    return stub<thiscall_t<void, dgBoundGeometry*, f32>>(0x46A260, this, arg1);
}

void dgBoundGeometry::SetFriction(f32 arg1)
{
    return stub<thiscall_t<void, dgBoundGeometry*, f32>>(0x46A250, this, arg1);
}

dgBoundBox::dgBoundBox()
{
    unimplemented();
}

dgBoundBox::~dgBoundBox()
{
    unimplemented();
}

class phMaterial const* dgBoundBox::GetMaterial(i32 arg1)
{
    return stub<thiscall_t<class phMaterial const*, dgBoundBox*, i32>>(0x46A620, this, arg1);
}

i32 dgBoundBox::GetNumMaterials()
{
    return stub<thiscall_t<i32, dgBoundBox*>>(0x46A630, this);
}

void dgBoundBox::SetElasticity(f32 arg1)
{
    return stub<thiscall_t<void, dgBoundBox*, f32>>(0x46A360, this, arg1);
}

void dgBoundBox::SetFriction(f32 arg1)
{
    return stub<thiscall_t<void, dgBoundBox*, f32>>(0x46A340, this, arg1);
}

dgBoundHotdog::dgBoundHotdog()
{
    unimplemented();
}

dgBoundHotdog::~dgBoundHotdog()
{
    unimplemented();
}

class phMaterial const* dgBoundHotdog::GetMaterial(i32 arg1)
{
    return stub<thiscall_t<class phMaterial const*, dgBoundHotdog*, i32>>(0x46A640, this, arg1);
}

i32 dgBoundHotdog::GetNumMaterials()
{
    return stub<thiscall_t<i32, dgBoundHotdog*>>(0x46A650, this);
}

void dgBoundHotdog::SetElasticity(f32 arg1)
{
    return stub<thiscall_t<void, dgBoundHotdog*, f32>>(0x46A470, this, arg1);
}

void dgBoundHotdog::SetFriction(f32 arg1)
{
    return stub<thiscall_t<void, dgBoundHotdog*, f32>>(0x46A450, this, arg1);
}

dgBoundSphere::dgBoundSphere()
{
    unimplemented();
}

dgBoundSphere::~dgBoundSphere()
{
    unimplemented();
}

class phMaterial const* dgBoundSphere::GetMaterial(i32 arg1)
{
    return stub<thiscall_t<class phMaterial const*, dgBoundSphere*, i32>>(0x46A660, this, arg1);
}

i32 dgBoundSphere::GetNumMaterials()
{
    return stub<thiscall_t<i32, dgBoundSphere*>>(0x46A670, this);
}

void dgBoundSphere::SetElasticity(f32 arg1)
{
    return stub<thiscall_t<void, dgBoundSphere*, f32>>(0x46A580, this, arg1);
}

void dgBoundSphere::SetFriction(f32 arg1)
{
    return stub<thiscall_t<void, dgBoundSphere*, f32>>(0x46A560, this, arg1);
}

define_dummy_symbol(phys_bound);
