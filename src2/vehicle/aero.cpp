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

#include "aero.h"

vehAero::vehAero()
{
    unimplemented();
}

vehAero::~vehAero()
{
    unimplemented();
}

void vehAero::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, vehAero*, class datParser&>>(0x4D96E0, this, arg1);
}

char* vehAero::GetClassName()
{
    return stub<thiscall_t<char*, vehAero*>>(0x4D9790, this);
}

void vehAero::Update()
{
    return stub<thiscall_t<void, vehAero*>>(0x4D9360, this);
}

define_dummy_symbol(vehicle_aero);
