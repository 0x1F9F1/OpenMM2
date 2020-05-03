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

#include "cardamage.h"

vehCarDamage::vehCarDamage()
{
    unimplemented();
}

vehCarDamage::~vehCarDamage()
{
    unimplemented();
}

void vehCarDamage::AddDamage(f32 arg1)
{
    return stub<thiscall_t<void, vehCarDamage*, f32>>(0x4CAEC0, this, arg1);
}

void vehCarDamage::ClearDamage()
{
    return stub<thiscall_t<void, vehCarDamage*>>(0x4CAE80, this);
}

void vehCarDamage::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, vehCarDamage*, class datParser&>>(0x4CB400, this, arg1);
}

char* vehCarDamage::GetClassName()
{
    return stub<thiscall_t<char*, vehCarDamage*>>(0x4CB640, this);
}

char const* vehCarDamage::GetDirName()
{
    return stub<thiscall_t<char const*, vehCarDamage*>>(0x4CA5F0, this);
}

void vehCarDamage::Init(class vehCar* arg1, char const* arg2)
{
    return stub<thiscall_t<void, vehCarDamage*, class vehCar*, char const*>>(0x4CA600, this, arg1, arg2);
}

void vehCarDamage::Reset()
{
    return stub<thiscall_t<void, vehCarDamage*>>(0x4CAE60, this);
}

void vehCarDamage::SetGameCallback(class datCallback arg1)
{
    return stub<thiscall_t<void, vehCarDamage*, class datCallback>>(0x4CB3E0, this, arg1);
}

void vehCarDamage::Update()
{
    return stub<thiscall_t<void, vehCarDamage*>>(0x4CAA40, this);
}

f32 vehCarDamage::GetDamageModifier(class phCollider* arg1)
{
    return stub<thiscall_t<f32, vehCarDamage*, class phCollider*>>(0x4CB650, this, arg1);
}

void vehCarDamage::Impact(class vehCarDamage* arg1, struct ImpactCBData* arg2)
{
    return stub<cdecl_t<void, class vehCarDamage*, struct ImpactCBData*>>(0x4CB350, arg1, arg2);
}

void vehCarDamage::ApplyImpact(struct vehDamageImpactInfo* arg1)
{
    return stub<thiscall_t<void, vehCarDamage*, struct vehDamageImpactInfo*>>(0x4CB140, this, arg1);
}

void vehCarDamage::InsertImpact(struct ImpactCBData* arg1, class phCollider* arg2)
{
    return stub<thiscall_t<void, vehCarDamage*, struct ImpactCBData*, class phCollider*>>(0x4CAEF0, this, arg1, arg2);
}

void vehCarDamage::SpewSmoke(class asParticles* arg1, f32* arg2, class Vector3& arg3, f32 arg4)
{
    return stub<thiscall_t<void, vehCarDamage*, class asParticles*, f32*, class Vector3&, f32>>(
        0x4CA8D0, this, arg1, arg2, arg3, arg4);
}

define_dummy_symbol(vehicle_cardamage);
