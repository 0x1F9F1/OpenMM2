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

#include "precs.h"

camPreCS::camPreCS()
{
    unimplemented();
}

camPreCS::~camPreCS()
{
    unimplemented();
}

void camPreCS::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, camPreCS*, class datParser&>>(0x520550, this, arg1);
}

char* camPreCS::GetClassName()
{
    return stub<thiscall_t<char*, camPreCS*>>(0x520600, this);
}

void camPreCS::Init(class vehCar* arg1)
{
    return stub<thiscall_t<void, camPreCS*, class vehCar*>>(0x520480, this, arg1);
}

void camPreCS::MakeActive()
{
    return stub<thiscall_t<void, camPreCS*>>(0x5204D0, this);
}

void camPreCS::Reset()
{
    return stub<thiscall_t<void, camPreCS*>>(0x5204C0, this);
}

void camPreCS::Update()
{
    return stub<thiscall_t<void, camPreCS*>>(0x5204F0, this);
}

define_dummy_symbol(camera_precs);
