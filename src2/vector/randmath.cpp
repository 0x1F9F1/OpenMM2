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

#include "randmath.h"

void DisableGlobalSeed()
{
    return stub<cdecl_t<void>>(0x4BBD50);
}

void EnableGlobalSeed()
{
    return stub<cdecl_t<void>>(0x4BBD80);
}

void ResetRandomSeed()
{
    return stub<cdecl_t<void>>(0x4BBDB0);
}

f32 frand()
{
    return stub<cdecl_t<f32>>(0x4BBE30);
}

f32 frand(i32 arg1)
{
    return stub<cdecl_t<f32, i32>>(0x4BBE50, arg1);
}

i32 irand()
{
    return stub<cdecl_t<i32>>(0x4BBDF0);
}

i32 irand(i32 arg1)
{
    return stub<cdecl_t<i32, i32>>(0x4BBDC0, arg1);
}

define_dummy_symbol(vector_randmath);
