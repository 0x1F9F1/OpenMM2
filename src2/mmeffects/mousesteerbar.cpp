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

#include "mousesteerbar.h"

mmMouseSteerBar::~mmMouseSteerBar()
{
    unimplemented();
}

void mmMouseSteerBar::Cull()
{
    return stub<thiscall_t<void, mmMouseSteerBar*>>(0x534500, this);
}

void mmMouseSteerBar::Init(f32 arg1, f32 arg2, f32* arg3)
{
    return stub<thiscall_t<void, mmMouseSteerBar*, f32, f32, f32*>>(0x534450, this, arg1, arg2, arg3);
}

void mmMouseSteerBar::Update()
{
    return stub<thiscall_t<void, mmMouseSteerBar*>>(0x5344D0, this);
}

define_dummy_symbol(mmeffects_mousesteerbar);
