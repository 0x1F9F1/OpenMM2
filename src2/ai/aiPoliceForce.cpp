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

#include "aiPoliceForce.h"

aiPoliceForce::aiPoliceForce()
{
    unimplemented();
}

aiPoliceForce::~aiPoliceForce()
{
    unimplemented();
}

i32 aiPoliceForce::Find(class vehCar* arg1, class vehCar* arg2)
{
    return stub<thiscall_t<i32, aiPoliceForce*, class vehCar*, class vehCar*>>(0x550F40, this, arg1, arg2);
}

i32 aiPoliceForce::RegisterPerp(class vehCar* arg1, class vehCar* arg2)
{
    return stub<thiscall_t<i32, aiPoliceForce*, class vehCar*, class vehCar*>>(0x550FA0, this, arg1, arg2);
}

void aiPoliceForce::Reset()
{
    return stub<thiscall_t<void, aiPoliceForce*>>(0x550EF0, this);
}

i32 aiPoliceForce::State(class vehCar* arg1, class vehCar* arg2, f32 arg3)
{
    return stub<thiscall_t<i32, aiPoliceForce*, class vehCar*, class vehCar*, f32>>(0x551120, this, arg1, arg2, arg3);
}

i32 aiPoliceForce::UnRegisterCop(class vehCar* arg1, class vehCar* arg2)
{
    return stub<thiscall_t<i32, aiPoliceForce*, class vehCar*, class vehCar*>>(0x551040, this, arg1, arg2);
}

void aiPoliceForce::Update()
{
    return stub<thiscall_t<void, aiPoliceForce*>>(0x550F30, this);
}

define_dummy_symbol(ai_aiPoliceForce);
