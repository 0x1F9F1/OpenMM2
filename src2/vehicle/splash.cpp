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

#include "splash.h"

vehSplash::vehSplash()
{
    unimplemented();
}

vehSplash::~vehSplash()
{
    unimplemented();
}

void vehSplash::Activate(f32 arg1)
{
    return stub<thiscall_t<void, vehSplash*, f32>>(0x4D6BD0, this, arg1);
}

void vehSplash::Init(class phInertialCS* arg1, class Vector3 const& arg2, class Vector3 const& arg3)
{
    return stub<thiscall_t<void, vehSplash*, class phInertialCS*, class Vector3 const&, class Vector3 const&>>(
        0x4D6A80, this, arg1, arg2, arg3);
}

void vehSplash::Reset()
{
    return stub<thiscall_t<void, vehSplash*>>(0x4D6A70, this);
}

void vehSplash::Update()
{
    return stub<thiscall_t<void, vehSplash*>>(0x4D6BF0, this);
}

define_dummy_symbol(vehicle_splash);
