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

#include "pu_main.h"

PUMain::PUMain(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5, char* arg6)
{
    unimplemented();
}

PUMain::~PUMain()
{
    unimplemented();
}

i32 PUMain::IsRaceMenuReadOnly()
{
    return stub<thiscall_t<i32, PUMain*>>(0x50A870, this);
}

void PUMain::RaceMenuRO(i32 arg1)
{
    return stub<thiscall_t<void, PUMain*, i32>>(0x50A850, this, arg1);
}

void PUMain::RestartRO(i32 arg1)
{
    return stub<thiscall_t<void, PUMain*, i32>>(0x50A830, this, arg1);
}

void PUMain::RplRO(i32 arg1)
{
    return stub<thiscall_t<void, PUMain*, i32>>(0x50A810, this, arg1);
}

define_dummy_symbol(mmui_pu_main);
