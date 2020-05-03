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

#include "icons.h"

mmIcons::mmIcons()
{
    unimplemented();
}

mmIcons::~mmIcons()
{
    unimplemented();
}

void mmIcons::Cull()
{
    return stub<thiscall_t<void, mmIcons*>>(0x4323D0, this);
}

void mmIcons::Init(class Matrix34* arg1, f32 arg2, f32 arg3, i32 arg4)
{
    return stub<thiscall_t<void, mmIcons*, class Matrix34*, f32, f32, i32>>(0x432290, this, arg1, arg2, arg3, arg4);
}

void mmIcons::RegisterOpponents(struct OppIconInfo* arg1, i32 arg2, void* arg3)
{
    return stub<thiscall_t<void, mmIcons*, struct OppIconInfo*, i32, void*>>(0x4322F0, this, arg1, arg2, arg3);
}

void mmIcons::Update()
{
    return stub<thiscall_t<void, mmIcons*>>(0x432390, this);
}

define_dummy_symbol(mmgame_icons);
