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

#include "netobject.h"

i32 mmAccelCompute::Init(class Vector3 arg1, class Vector3 arg2)
{
    return stub<thiscall_t<i32, mmAccelCompute*, class Vector3, class Vector3>>(0x43BC10, this, arg1, arg2);
}

void mmAccelCompute::SetLatest(class Vector3 arg1, f32 arg2)
{
    return stub<thiscall_t<void, mmAccelCompute*, class Vector3, f32>>(0x43BC60, this, arg1, arg2);
}

mmNetPath::mmNetPath()
{
    unimplemented();
}

mmNetPath::~mmNetPath()
{
    unimplemented();
}

void mmNetPath::Compute(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4)
{
    return stub<thiscall_t<void, mmNetPath*, class Vector3&, class Vector3&, class Vector3&, class Vector3&>>(
        0x43BDF0, this, arg1, arg2, arg3, arg4);
}

void mmNetPath::Reset()
{
    return stub<thiscall_t<void, mmNetPath*>>(0x43BDC0, this);
}

void mmNetPath::Solve(class Vector3& arg1, class Vector3& arg2, f32 arg3)
{
    return stub<thiscall_t<void, mmNetPath*, class Vector3&, class Vector3&, f32>>(0x43BFE0, this, arg1, arg2, arg3);
}

mmNetObject::mmNetObject()
{
    unimplemented();
}

mmNetObject::~mmNetObject()
{
    unimplemented();
}

void mmNetObject::Activate()
{
    return stub<thiscall_t<void, mmNetObject*>>(0x43C480, this);
}

void mmNetObject::Clear()
{
    return stub<thiscall_t<void, mmNetObject*>>(0x43C370, this);
}

void mmNetObject::Cull()
{
    return stub<thiscall_t<void, mmNetObject*>>(0x43D980, this);
}

void mmNetObject::Deactivate()
{
    return stub<thiscall_t<void, mmNetObject*>>(0x43C4B0, this);
}

f32 mmNetObject::GetAngleApproach(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<f32, mmNetObject*, f32, f32>>(0x43D750, this, arg1, arg2);
}

f32 mmNetObject::GetPositionApproach(class Vector3 const& arg1, class Vector3 const& arg2)
{
    return stub<thiscall_t<f32, mmNetObject*, class Vector3 const&, class Vector3 const&>>(0x43D700, this, arg1, arg2);
}

void mmNetObject::Init(class vehCar* arg1, char* arg2, f32 arg3, i32 arg4, u32 arg5, char* arg6, bool arg7)
{
    return stub<thiscall_t<void, mmNetObject*, class vehCar*, char*, f32, i32, u32, char*, bool>>(
        0x43C4E0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void mmNetObject::InputUpdate(struct NET_INPUTDATA* arg1, f32 arg2)
{
    return stub<thiscall_t<void, mmNetObject*, struct NET_INPUTDATA*, f32>>(0x43CC90, this, arg1, arg2);
}

void mmNetObject::PositionUpdate(struct NET_POSDATA* arg1, f32 arg2)
{
    return stub<thiscall_t<void, mmNetObject*, struct NET_POSDATA*, f32>>(0x43CD10, this, arg1, arg2);
}

void mmNetObject::Predict()
{
    return stub<thiscall_t<void, mmNetObject*>>(0x43D760, this);
}

void mmNetObject::ReInit(class vehCar* arg1, char* arg2, f32 arg3, i32 arg4, u32 arg5, char* arg6, bool arg7)
{
    return stub<thiscall_t<void, mmNetObject*, class vehCar*, char*, f32, i32, u32, char*, bool>>(
        0x43C5D0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void mmNetObject::ResetValues()
{
    return stub<thiscall_t<void, mmNetObject*>>(0x43C260, this);
}

void mmNetObject::Set(i32 arg1)
{
    return stub<thiscall_t<void, mmNetObject*, i32>>(0x43C750, this, arg1);
}

void mmNetObject::SetActive(i32 arg1)
{
    return stub<thiscall_t<void, mmNetObject*, i32>>(0x43C760, this, arg1);
}

void mmNetObject::SetCar(class vehCar* arg1)
{
    return stub<thiscall_t<void, mmNetObject*, class vehCar*>>(0x43C740, this, arg1);
}

void mmNetObject::SetInputData()
{
    return stub<thiscall_t<void, mmNetObject*>>(0x43C790, this);
}

i32 mmNetObject::SetPositionData(u32 arg1)
{
    return stub<thiscall_t<i32, mmNetObject*, u32>>(0x43C820, this, arg1);
}

void mmNetObject::SetScore(i32 arg1)
{
    return stub<thiscall_t<void, mmNetObject*, i32>>(0x43C780, this, arg1);
}

void mmNetObject::Update()
{
    return stub<thiscall_t<void, mmNetObject*>>(0x43D850, this);
}

define_dummy_symbol(mmgame_netobject);
