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

#include "viewcs.h"

camViewCS::camViewCS()
{
    unimplemented();
}

camViewCS::~camViewCS()
{
    unimplemented();
}

void camViewCS::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, camViewCS*, class datParser&>>(0x5200D0, this, arg1);
}

void camViewCS::ForceMatrixDelta(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, camViewCS*, class Matrix34 const&>>(0x520080, this, arg1);
}

void camViewCS::ForceMatrixDelta(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, camViewCS*, class Vector3 const&>>(0x5200A0, this, arg1);
}

void camViewCS::Init(class vehCar* arg1)
{
    return stub<thiscall_t<void, camViewCS*, class vehCar*>>(0x51FFF0, this, arg1);
}

i32 camViewCS::NewCam(class camCarCS* arg1, i32 arg2, f32 arg3, class datCallback arg4)
{
    return stub<thiscall_t<i32, camViewCS*, class camCarCS*, i32, f32, class datCallback>>(
        0x51FF30, this, arg1, arg2, arg3, arg4);
}

void camViewCS::OneShot()
{
    return stub<thiscall_t<void, camViewCS*>>(0x5200C0, this);
}

void camViewCS::Reset()
{
    return stub<thiscall_t<void, camViewCS*>>(0x520010, this);
}

void camViewCS::SetCam(class camCarCS* arg1)
{
    return stub<thiscall_t<void, camViewCS*, class camCarCS*>>(0x51FE90, this, arg1);
}

void camViewCS::Update()
{
    return stub<thiscall_t<void, camViewCS*>>(0x51FFC0, this);
}

class camViewCS* camViewCS::Instance(class vehCar& arg1)
{
    return stub<cdecl_t<class camViewCS*, class vehCar&>>(0x51FE30, arg1);
}

define_dummy_symbol(camera_viewcs);
