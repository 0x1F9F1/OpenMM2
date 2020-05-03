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

#include "pointcs.h"

camPointCS::camPointCS()
{
    unimplemented();
}

camPointCS::~camPointCS()
{
    unimplemented();
}

char* camPointCS::GetClassName()
{
    return stub<thiscall_t<char*, camPointCS*>>(0x520A20, this);
}

class Vector3 camPointCS::GetPos()
{
    return stub<thiscall_t<class Vector3, camPointCS*>>(0x520760, this);
}

void camPointCS::MakeActive()
{
    return stub<thiscall_t<void, camPointCS*>>(0x5206A0, this);
}

void camPointCS::Reset()
{
    return stub<thiscall_t<void, camPointCS*>>(0x520690, this);
}

void camPointCS::SetAppRate(f32 arg1)
{
    return stub<thiscall_t<void, camPointCS*, f32>>(0x520730, this, arg1);
}

void camPointCS::SetMaxDist(f32 arg1)
{
    return stub<thiscall_t<void, camPointCS*, f32>>(0x5206F0, this, arg1);
}

void camPointCS::SetMinDist(f32 arg1)
{
    return stub<thiscall_t<void, camPointCS*, f32>>(0x520710, this, arg1);
}

void camPointCS::SetPos(class Vector3& arg1)
{
    return stub<thiscall_t<void, camPointCS*, class Vector3&>>(0x5206B0, this, arg1);
}

void camPointCS::SetVel(class Vector3& arg1)
{
    return stub<thiscall_t<void, camPointCS*, class Vector3&>>(0x520740, this, arg1);
}

void camPointCS::Update()
{
    return stub<thiscall_t<void, camPointCS*>>(0x520790, this);
}

define_dummy_symbol(camera_pointcs);
