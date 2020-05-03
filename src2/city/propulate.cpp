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

#include "propulate.h"

cityPropulator::cityPropulator(class lvlSDL const& arg1)
{
    unimplemented();
}

cityPropulator::~cityPropulator()
{
    unimplemented();
}

bool cityPropulator::Load(char const* arg1, char const* arg2, char const* arg3)
{
    return stub<thiscall_t<bool, cityPropulator*, char const*, char const*, char const*>>(
        0x45D220, this, arg1, arg2, arg3);
}

i32 cityPropulator::LookupRule(char const* arg1)
{
    return stub<thiscall_t<i32, cityPropulator*, char const*>>(0x45D290, this, arg1);
}

void cityPropulator::Propulate(i32 arg1, i32 arg2, i32 arg3, void (*arg4)(i32, char const*, class Matrix34 const&))
{
    return stub<thiscall_t<void, cityPropulator*, i32, i32, i32, void (*)(i32, char const*, class Matrix34 const&)>>(
        0x45D2C0, this, arg1, arg2, arg3, arg4);
}

define_dummy_symbol(city_propulate);
