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

#include "postcs.h"

camPostCS::camPostCS()
{
    unimplemented();
}

camPostCS::~camPostCS()
{
    unimplemented();
}

void camPostCS::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, camPostCS*, class datParser&>>(0x520340, this, arg1);
}

char* camPostCS::GetClassName()
{
    return stub<thiscall_t<char*, camPostCS*>>(0x520420, this);
}

void camPostCS::Init(class vehCar* arg1)
{
    return stub<thiscall_t<void, camPostCS*, class vehCar*>>(0x520160, this, arg1);
}

void camPostCS::MakeActive()
{
    return stub<thiscall_t<void, camPostCS*>>(0x5201B0, this);
}

void camPostCS::Reset()
{
    return stub<thiscall_t<void, camPostCS*>>(0x5201A0, this);
}

void camPostCS::Update()
{
    return stub<thiscall_t<void, camPostCS*>>(0x520210, this);
}

define_dummy_symbol(camera_postcs);
