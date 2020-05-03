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

#include "input.h"

void ioInput::Begin(bool arg1)
{
    return stub<cdecl_t<void, bool>>(0x4BA8B0, arg1);
}

void ioInput::End()
{
    return stub<cdecl_t<void>>(0x4BA8E0);
}

void ioInput::Poll()
{
    return stub<cdecl_t<void>>(0x4BA900);
}

void ioInput::Update()
{
    return stub<cdecl_t<void>>(0x4BA910);
}

define_dummy_symbol(input_input);
