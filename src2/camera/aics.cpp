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

#include "aics.h"

camAICS::camAICS()
{
    unimplemented();
}

camAICS::~camAICS()
{
    unimplemented();
}

void camAICS::Init(class vehCar* arg1)
{
    return stub<thiscall_t<void, camAICS*, class vehCar*>>(0x520A70, this, arg1);
}

void camAICS::MakeActive()
{
    return stub<thiscall_t<void, camAICS*>>(0x520BA0, this);
}

void camAICS::Reset()
{
    return stub<thiscall_t<void, camAICS*>>(0x520AB0, this);
}

void camAICS::SetMatrix(class Matrix34* arg1)
{
    return stub<thiscall_t<void, camAICS*, class Matrix34*>>(0x520AE0, this, arg1);
}

void camAICS::SetPosition(class Vector3& arg1)
{
    return stub<thiscall_t<void, camAICS*, class Vector3&>>(0x520AC0, this, arg1);
}

void camAICS::Update()
{
    return stub<thiscall_t<void, camAICS*>>(0x520C50, this);
}

define_dummy_symbol(camera_aics);
