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

#include "random.h"

f32 logf_fast(f32 arg1)
{
    return stub<cdecl_t<f32, f32>>(0x4A3750, arg1);
}

f32 Random::Normal(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<f32, Random*, f32, f32>>(0x4A38E0, this, arg1, arg2);
}

f32 Random::Number()
{
    return stub<thiscall_t<f32, Random*>>(0x4A3880, this);
}

void Random::Seed(i32 arg1)
{
    return stub<thiscall_t<void, Random*, i32>>(0x4A37D0, this, arg1);
}

define_dummy_symbol(node_random);
