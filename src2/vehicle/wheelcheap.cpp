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

#include "wheelcheap.h"

vehWheelCheap::vehWheelCheap()
{
    unimplemented();
}

vehWheelCheap::~vehWheelCheap()
{
    unimplemented();
}

void vehWheelCheap::Init(class Vector3* arg1, class aiVehicleData* arg2, class phInertialCS* arg3)
{
    return stub<thiscall_t<void, vehWheelCheap*, class Vector3*, class aiVehicleData*, class phInertialCS*>>(
        0x59D890, this, arg1, arg2, arg3);
}

void vehWheelCheap::Reset()
{
    return stub<thiscall_t<void, vehWheelCheap*>>(0x59D860, this);
}

void vehWheelCheap::Update()
{
    return stub<thiscall_t<void, vehWheelCheap*>>(0x59D970, this);
}

define_dummy_symbol(vehicle_wheelcheap);
