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

#include "aiStuck.h"

aiStuck::aiStuck()
{
    unimplemented();
}

aiStuck::~aiStuck()
{
    unimplemented();
}

void aiStuck::Impact()
{
    return stub<thiscall_t<void, aiStuck*>>(0x56FA10, this);
}

void aiStuck::Init(class vehCar* arg1)
{
    return stub<thiscall_t<void, aiStuck*, class vehCar*>>(0x56F9F0, this, arg1);
}

i32 aiStuck::Pegged()
{
    return stub<thiscall_t<i32, aiStuck*>>(0x56FA30, this);
}

void aiStuck::Reset()
{
    return stub<thiscall_t<void, aiStuck*>>(0x56FA20, this);
}

void aiStuck::Update()
{
    return stub<thiscall_t<void, aiStuck*>>(0x56FAA0, this);
}

define_dummy_symbol(ai_aiStuck);
