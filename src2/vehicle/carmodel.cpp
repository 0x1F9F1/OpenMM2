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

#include "carmodel.h"

vehCarModel::vehCarModel()
{
    unimplemented();
}

vehCarModel::~vehCarModel()
{
    unimplemented();
}

class dgPhysEntity* vehCarModel::AttachEntity()
{
    return stub<thiscall_t<class dgPhysEntity*, vehCarModel*>>(0x4CEFD0, this);
}

void vehCarModel::BreakElectrics(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, vehCarModel*, class Vector3 const&>>(0x4CEFE0, this, arg1);
}

void vehCarModel::ClearDamage()
{
    return stub<thiscall_t<void, vehCarModel*>>(0x4CDFF0, this);
}

void vehCarModel::Draw(i32 arg1)
{
    return stub<thiscall_t<void, vehCarModel*, i32>>(0x4CE040, this, arg1);
}

void vehCarModel::DrawGlow()
{
    return stub<thiscall_t<void, vehCarModel*>>(0x4CEB90, this);
}

void vehCarModel::DrawHeadlights(bool arg1)
{
    return stub<thiscall_t<void, vehCarModel*, bool>>(0x4CED50, this, arg1);
}

void vehCarModel::DrawPart(class modStatic* arg1, class Matrix34 const& arg2, class modShader* arg3)
{
    return stub<thiscall_t<void, vehCarModel*, class modStatic*, class Matrix34 const&, class modShader*>>(
        0x4CE880, this, arg1, arg2, arg3);
}

void vehCarModel::DrawPart(i32 arg1, i32 arg2, class Matrix34 const& arg3, class modShader* arg4)
{
    return stub<thiscall_t<void, vehCarModel*, i32, i32, class Matrix34 const&, class modShader*>>(
        0x4CE840, this, arg1, arg2, arg3, arg4);
}

void vehCarModel::DrawReflected(f32 arg1)
{
    return stub<thiscall_t<void, vehCarModel*, f32>>(0x4CF080, this, arg1);
}

void vehCarModel::DrawShadow()
{
    return stub<thiscall_t<void, vehCarModel*>>(0x4CE940, this);
}

void vehCarModel::DrawShadowMap()
{
    return stub<thiscall_t<void, vehCarModel*>>(0x4CEA90, this);
}

void vehCarModel::EjectOneshot()
{
    return stub<thiscall_t<void, vehCarModel*>>(0x4CDCA0, this);
}

class dgPhysEntity* vehCarModel::GetEntity()
{
    return stub<thiscall_t<class dgPhysEntity*, vehCarModel*>>(0x4CEFC0, this);
}

class Matrix34 const& vehCarModel::GetMatrix(class Matrix34& arg1)
{
    return stub<thiscall_t<class Matrix34 const&, vehCarModel*, class Matrix34&>>(0x4CEF90, this, arg1);
}

class Vector3 const& vehCarModel::GetPosition()
{
    return stub<thiscall_t<class Vector3 const&, vehCarModel*>>(0x4CEF50, this);
}

bool vehCarModel::GetTrailerHitch(class Vector3* arg1)
{
    return stub<thiscall_t<bool, vehCarModel*, class Vector3*>>(0x4CDBF0, this, arg1);
}

class Vector3 const& vehCarModel::GetVelocity()
{
    return stub<thiscall_t<class Vector3 const&, vehCarModel*>>(0x4CEF80, this);
}

bool vehCarModel::GetVisible()
{
    return stub<thiscall_t<bool, vehCarModel*>>(0x4CF070, this);
}

void vehCarModel::Init(class vehCar* arg1, char const* arg2, i32 arg3)
{
    return stub<thiscall_t<void, vehCarModel*, class vehCar*, char const*, i32>>(0x4CCFE0, this, arg1, arg2, arg3);
}

void vehCarModel::InitBound(char const* arg1, bool arg2)
{
    return stub<thiscall_t<void, vehCarModel*, char const*, bool>>(0x4CDA20, this, arg1, arg2);
}

void vehCarModel::Reset()
{
    return stub<thiscall_t<void, vehCarModel*>>(0x4CDFD0, this);
}

void vehCarModel::SetMatrix(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, vehCarModel*, class Matrix34 const&>>(0x4CEFA0, this, arg1);
}

void vehCarModel::SetVisible(bool arg1)
{
    return stub<thiscall_t<void, vehCarModel*, bool>>(0x4CF050, this, arg1);
}

u32 vehCarModel::SizeOf()
{
    return stub<thiscall_t<u32, vehCarModel*>>(0x4CDFE0, this);
}

bool vehCarModel::GetSurfaceColor(class modStatic* arg1, class Vector3& arg2)
{
    return stub<thiscall_t<bool, vehCarModel*, class modStatic*, class Vector3&>>(0x4CDF00, this, arg1, arg2);
}

bool vehCarModel::InitBreakable(class vehBreakableMgr* arg1, char const* arg2, char const* arg3, i32 arg4, i32 arg5)
{
    return stub<thiscall_t<bool, vehCarModel*, class vehBreakableMgr*, char const*, char const*, i32, i32>>(
        0x4CDC50, this, arg1, arg2, arg3, arg4, arg5);
}

void vehCarModel::InitSirenLight(char const* arg1, char const* arg2, i32 arg3)
{
    return stub<thiscall_t<void, vehCarModel*, char const*, char const*, i32>>(0x4CDF60, this, arg1, arg2, arg3);
}

define_dummy_symbol(vehicle_carmodel);
