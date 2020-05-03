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

vehBound::vehBound()
{
    unimplemented();
}

vehBound::~vehBound()
{
    unimplemented();
}

void vehBound::Init()
{
    return stub<thiscall_t<void, vehBound*>>(0x4DA6E0, this);
}

void vehBound::SetElasticity(f32 arg1)
{
    return stub<thiscall_t<void, vehBound*, f32>>(0x4DA710, this, arg1);
}

void vehBound::SetFriction(f32 arg1)
{
    return stub<thiscall_t<void, vehBound*, f32>>(0x4DA700, this, arg1);
}

define_dummy_symbol(vehicle_bound);
