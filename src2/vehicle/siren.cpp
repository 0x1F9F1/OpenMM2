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

#include "siren.h"

vehSiren::vehSiren()
{
    unimplemented();
}

vehSiren::~vehSiren()
{
    unimplemented();
}

bool vehSiren::AddLight(class Vector3 const& arg1, class Vector3 const& arg2)
{
    return stub<thiscall_t<bool, vehSiren*, class Vector3 const&, class Vector3 const&>>(0x4D6740, this, arg1, arg2);
}

void vehSiren::Draw(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, vehSiren*, class Matrix34 const&>>(0x4D6880, this, arg1);
}

bool vehSiren::Init()
{
    return stub<thiscall_t<bool, vehSiren*>>(0x4D6680, this);
}

void vehSiren::Reset()
{
    return stub<thiscall_t<void, vehSiren*>>(0x4D6820, this);
}

void vehSiren::Update()
{
    return stub<thiscall_t<void, vehSiren*>>(0x4D6830, this);
}

define_dummy_symbol(vehicle_siren);
