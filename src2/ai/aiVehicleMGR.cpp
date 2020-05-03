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

#include "aiVehicleMGR.h"

aiVehicleInstance::aiVehicleInstance(class aiVehicleSpline* arg1, char* arg2)
{
    unimplemented();
}

class dgPhysEntity* aiVehicleInstance::AttachEntity()
{
    return stub<thiscall_t<class dgPhysEntity*, aiVehicleInstance*>>(0x552FB0, this);
}

void aiVehicleInstance::Detach()
{
    return stub<thiscall_t<void, aiVehicleInstance*>>(0x552F80, this);
}

void aiVehicleInstance::Draw(i32 arg1)
{
    return stub<thiscall_t<void, aiVehicleInstance*, i32>>(0x552160, this, arg1);
}

void aiVehicleInstance::DrawGlow()
{
    return stub<thiscall_t<void, aiVehicleInstance*>>(0x552930, this);
}

void aiVehicleInstance::DrawPart(class modStatic& arg1, class Matrix34 const& arg2, class modShader* arg3, i32 arg4)
{
    return stub<thiscall_t<void, aiVehicleInstance*, class modStatic&, class Matrix34 const&, class modShader*, i32>>(
        0x552870, this, arg1, arg2, arg3, arg4);
}

void aiVehicleInstance::DrawReflected(f32 arg1)
{
    return stub<thiscall_t<void, aiVehicleInstance*, f32>>(0x552CB0, this, arg1);
}

void aiVehicleInstance::DrawShadow()
{
    return stub<thiscall_t<void, aiVehicleInstance*>>(0x552CC0, this);
}

void aiVehicleInstance::DrawShadowMap()
{
    return stub<thiscall_t<void, aiVehicleInstance*>>(0x552F30, this);
}

class phBound const* aiVehicleInstance::GetBound(i32 arg1)
{
    return stub<thiscall_t<class phBound const*, aiVehicleInstance*, i32>>(0x552F40, this, arg1);
}

class aiVehicleData* aiVehicleInstance::GetData()
{
    return stub<thiscall_t<class aiVehicleData*, aiVehicleInstance*>>(0x553F80, this);
}

class dgPhysEntity* aiVehicleInstance::GetEntity()
{
    return stub<thiscall_t<class dgPhysEntity*, aiVehicleInstance*>>(0x552F50, this);
}

class Matrix34 const& aiVehicleInstance::GetMatrix(class Matrix34& arg1)
{
    return stub<thiscall_t<class Matrix34 const&, aiVehicleInstance*, class Matrix34&>>(0x553020, this, arg1);
}

class Vector3 const& aiVehicleInstance::GetPosition()
{
    return stub<thiscall_t<class Vector3 const&, aiVehicleInstance*>>(0x553030, this);
}

void aiVehicleInstance::Reset()
{
    return stub<thiscall_t<void, aiVehicleInstance*>>(0x552100, this);
}

void aiVehicleInstance::SetColor()
{
    return stub<thiscall_t<void, aiVehicleInstance*>>(0x552110, this);
}

void aiVehicleInstance::SetMatrix(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, aiVehicleInstance*, class Matrix34 const&>>(0x553010, this, arg1);
}

u32 aiVehicleInstance::SizeOf()
{
    return stub<thiscall_t<u32, aiVehicleInstance*>>(0x553060, this);
}

bool aiVehicleInstance::InitBreakable(char const* arg1, char const* arg2, i32 arg3)
{
    return stub<thiscall_t<bool, aiVehicleInstance*, char const*, char const*, i32>>(0x552010, this, arg1, arg2, arg3);
}

aiVehicleActive::aiVehicleActive()
{
    unimplemented();
}

aiVehicleActive::~aiVehicleActive()
{
    unimplemented();
}

void aiVehicleActive::Attach(class aiVehicleInstance* arg1)
{
    return stub<thiscall_t<void, aiVehicleActive*, class aiVehicleInstance*>>(0x553440, this, arg1);
}

i32 aiVehicleActive::BottomedOut()
{
    return stub<thiscall_t<i32, aiVehicleActive*>>(0x5539E0, this);
}

void aiVehicleActive::Detach()
{
    return stub<thiscall_t<void, aiVehicleActive*>>(0x5536B0, this);
}

void aiVehicleActive::DetachMe()
{
    return stub<thiscall_t<void, aiVehicleActive*>>(0x553690, this);
}

class phInertialCS* aiVehicleActive::GetICS()
{
    return stub<thiscall_t<class phInertialCS*, aiVehicleActive*>>(0x5543B0, this);
}

class lvlInstance* aiVehicleActive::GetInst()
{
    return stub<thiscall_t<class lvlInstance*, aiVehicleActive*>>(0x553430, this);
}

void aiVehicleActive::PostUpdate()
{
    return stub<thiscall_t<void, aiVehicleActive*>>(0x553960, this);
}

bool aiVehicleActive::RequiresTerrainCollision()
{
    return stub<thiscall_t<bool, aiVehicleActive*>>(0x553A20, this);
}

void aiVehicleActive::Reset()
{
    return stub<thiscall_t<void, aiVehicleActive*>>(0x553290, this);
}

void aiVehicleActive::Update()
{
    return stub<thiscall_t<void, aiVehicleActive*>>(0x553890, this);
}

void aiVehicleActive::UpdateDamage()
{
    return stub<thiscall_t<void, aiVehicleActive*>>(0x553B20, this);
}

void aiVehicleActive::Impact(class aiVehicleActive* arg1, struct ImpactCBData* arg2)
{
    return stub<cdecl_t<void, class aiVehicleActive*, struct ImpactCBData*>>(0x5532A0, arg1, arg2);
}

aiVehicleManager::aiVehicleManager()
{
    unimplemented();
}

aiVehicleManager::~aiVehicleManager()
{
    unimplemented();
}

i32 aiVehicleManager::AddVehicleDataEntry(char* arg1)
{
    return stub<thiscall_t<i32, aiVehicleManager*, char*>>(0x553FA0, this, arg1);
}

class aiVehicleActive* aiVehicleManager::Attach(class aiVehicleInstance* arg1)
{
    return stub<thiscall_t<class aiVehicleActive*, aiVehicleManager*, class aiVehicleInstance*>>(0x553DC0, this, arg1);
}

void aiVehicleManager::Detach(class aiVehicleActive* arg1)
{
    return stub<thiscall_t<void, aiVehicleManager*, class aiVehicleActive*>>(0x553E30, this, arg1);
}

void aiVehicleManager::Init(char* arg1)
{
    return stub<thiscall_t<void, aiVehicleManager*, char*>>(0x553CE0, this, arg1);
}

void aiVehicleManager::Reset()
{
    return stub<thiscall_t<void, aiVehicleManager*>>(0x553D60, this);
}

void aiVehicleManager::SaveEntry()
{
    return stub<thiscall_t<void, aiVehicleManager*>>(0x5541E0, this);
}

void aiVehicleManager::Update()
{
    return stub<thiscall_t<void, aiVehicleManager*>>(0x553EA0, this);
}

define_dummy_symbol(ai_aiVehicleMGR);
