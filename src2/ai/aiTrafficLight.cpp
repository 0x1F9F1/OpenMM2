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

#include "aiTrafficLight.h"

aiTrafficLightSet::aiTrafficLightSet(class aiIntersection* arg1)
{
    unimplemented();
}

aiTrafficLightSet::~aiTrafficLightSet()
{
    unimplemented();
}

void aiTrafficLightSet::Reset()
{
    return stub<thiscall_t<void, aiTrafficLightSet*>>(0x53C460, this);
}

void aiTrafficLightSet::SetFourWay()
{
    return stub<thiscall_t<void, aiTrafficLightSet*>>(0x53C180, this);
}

void aiTrafficLightSet::Update()
{
    return stub<thiscall_t<void, aiTrafficLightSet*>>(0x53C4B0, this);
}

void aiTrafficLightInstance::Draw(i32 arg1)
{
    return stub<thiscall_t<void, aiTrafficLightInstance*, i32>>(0x53C960, this, arg1);
}

void aiTrafficLightInstance::DrawGlow()
{
    return stub<thiscall_t<void, aiTrafficLightInstance*>>(0x53CA70, this);
}

u32 aiTrafficLightInstance::SizeOf()
{
    return stub<thiscall_t<u32, aiTrafficLightInstance*>>(0x53CD50, this);
}

i32 aiTrafficLightInstance::Init(char* arg1, class Vector3& arg2, class Vector3& arg3, i32 arg4, char* arg5)
{
    return stub<thiscall_t<i32, aiTrafficLightInstance*, char*, class Vector3&, class Vector3&, i32, char*>>(
        0x53C6F0, this, arg1, arg2, arg3, arg4, arg5);
}

define_dummy_symbol(ai_aiTrafficLight);
