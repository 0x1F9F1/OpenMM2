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

#include "mirror.h"

mmMirror::mmMirror()
{
    unimplemented();
}

mmMirror::~mmMirror()
{
    unimplemented();
}

void mmMirror::Cull()
{
    return stub<thiscall_t<void, mmMirror*>>(0x42B8C0, this);
}

void mmMirror::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, mmMirror*, class datParser&>>(0x42B9E0, this, arg1);
}

char* mmMirror::GetClassName()
{
    return stub<thiscall_t<char*, mmMirror*>>(0x42CBD0, this);
}

void mmMirror::Init()
{
    return stub<thiscall_t<void, mmMirror*>>(0x42B7C0, this);
}

void mmMirror::Reset()
{
    return stub<thiscall_t<void, mmMirror*>>(0x42B840, this);
}

void mmMirror::Update()
{
    return stub<thiscall_t<void, mmMirror*>>(0x42B8B0, this);
}

vehCar::vehCar(i32 arg1)
{
    unimplemented();
}

vehCar::~vehCar()
{
    unimplemented();
}

void vehCar::ClearDamage()
{
    return stub<thiscall_t<void, vehCar*>>(0x42C450, this);
}

void vehCar::DrawTracks()
{
    return stub<thiscall_t<void, vehCar*>>(0x42C5E0, this);
}

class phInertialCS* vehCar::GetICS()
{
    return stub<thiscall_t<class phInertialCS*, vehCar*>>(0x42CA70, this);
}

class vehInput* vehCar::GetInput()
{
    return stub<thiscall_t<class vehInput*, vehCar*>>(0x42C2A0, this);
}

class lvlInstance* vehCar::GetInst()
{
    return stub<thiscall_t<class lvlInstance*, vehCar*>>(0x42CA80, this);
}

void vehCar::Init(char const* arg1, i32 arg2, i32 arg3, bool arg4)
{
    return stub<thiscall_t<void, vehCar*, char const*, i32, i32, bool>>(0x42BE10, this, arg1, arg2, arg3, arg4);
}

void vehCar::InitAudio(char const* arg1, i32 arg2)
{
    return stub<thiscall_t<void, vehCar*, char const*, i32>>(0x42C1F0, this, arg1, arg2);
}

i32 vehCar::IsPlayer()
{
    return stub<thiscall_t<i32, vehCar*>>(0x42C890, this);
}

void vehCar::PostUpdate()
{
    return stub<thiscall_t<void, vehCar*>>(0x42C8B0, this);
}

void vehCar::PreUpdate()
{
    return stub<thiscall_t<void, vehCar*>>(0x42C480, this);
}

bool vehCar::RequiresTerrainCollision()
{
    return stub<thiscall_t<bool, vehCar*>>(0x42CA90, this);
}

void vehCar::Reset()
{
    return stub<thiscall_t<void, vehCar*>>(0x42C330, this);
}

void vehCar::SetAudio(class vehCarAudioContainer* arg1)
{
    return stub<thiscall_t<void, vehCar*, class vehCarAudioContainer*>>(0x42C1E0, this, arg1);
}

void vehCar::SetColliderID(i32 arg1)
{
    return stub<thiscall_t<void, vehCar*, i32>>(0x42C1D0, this, arg1);
}

void vehCar::SetDrivable(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, vehCar*, i32, i32>>(0x42C2C0, this, arg1, arg2);
}

void vehCar::SetDriver(class vehDriver* arg1)
{
    return stub<thiscall_t<void, vehCar*, class vehDriver*>>(0x42C2B0, this, arg1);
}

void vehCar::SetInput(class vehInput* arg1)
{
    return stub<thiscall_t<void, vehCar*, class vehInput*>>(0x42C290, this, arg1);
}

void vehCar::Update()
{
    return stub<thiscall_t<void, vehCar*>>(0x42C690, this);
}

void vehCar::UpdateTrack(class lvlTrackManager& arg1, class vehWheel const& arg2)
{
    return stub<thiscall_t<void, vehCar*, class lvlTrackManager&, class vehWheel const&>>(0x42C570, this, arg1, arg2);
}

dgPhysEntity::~dgPhysEntity()
{
    unimplemented();
}

void dgPhysEntity::PreUpdate()
{
    return stub<thiscall_t<void, dgPhysEntity*>>(0x42CBE0, this);
}

void dgPhysEntity::Update()
{
    return stub<thiscall_t<void, dgPhysEntity*>>(0x46A120, this);
}

void dgPhysEntity::PostUpdate()
{
    return stub<thiscall_t<void, dgPhysEntity*>>(0x0, this);
}

class phInertialCS* dgPhysEntity::GetICS()
{
    return stub<thiscall_t<class phInertialCS*, dgPhysEntity*>>(0x0, this);
}

class phCollider* dgPhysEntity::GetCollider()
{
    return stub<thiscall_t<class phCollider*, dgPhysEntity*>>(0x42CBF0, this);
}

class lvlInstance* dgPhysEntity::GetInst()
{
    return stub<thiscall_t<class lvlInstance*, dgPhysEntity*>>(0x0, this);
}

void dgPhysEntity::DetachMe()
{
    return stub<thiscall_t<void, dgPhysEntity*>>(0x42CC00, this);
}

bool dgPhysEntity::RequiresTerrainCollision()
{
    return stub<thiscall_t<bool, dgPhysEntity*>>(0x42CC10, this);
}

void dgPhysEntity::FirstImpactCallback()
{
    return stub<thiscall_t<void, dgPhysEntity*>>(0x42CC20, this);
}

define_dummy_symbol(mmgame_mirror);
