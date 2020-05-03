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

#include "mcHookman.h"

mcHookman::mcHookman()
{
    unimplemented();
}

mcHookman::~mcHookman()
{
    unimplemented();
}

void mcHookman::DrawRouteThroughTraffic()
{
    return stub<thiscall_t<void, mcHookman*>>(0x54AF70, this);
}

void mcHookman::Init(i32 arg1, char* arg2)
{
    return stub<thiscall_t<void, mcHookman*, i32, char*>>(0x54A620, this, arg1, arg2);
}

void mcHookman::Reset()
{
    return stub<thiscall_t<void, mcHookman*>>(0x54A9F0, this);
}

void mcHookman::Update()
{
    return stub<thiscall_t<void, mcHookman*>>(0x54AA10, this);
}

void mcHookman::DriveCircuit()
{
    return stub<thiscall_t<void, mcHookman*>>(0x54AB40, this);
}

void mcHookman::DriveToHideout()
{
    return stub<thiscall_t<void, mcHookman*>>(0x54AC80, this);
}

void mcHookman::ReturnToCircuit()
{
    return stub<thiscall_t<void, mcHookman*>>(0x54AE10, this);
}

define_dummy_symbol(ai_mcHookman);
