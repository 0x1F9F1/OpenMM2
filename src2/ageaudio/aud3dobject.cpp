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

#include "aud3dobject.h"

Aud3DObject::Aud3DObject()
{
    unimplemented();
}

Aud3DObject::~Aud3DObject()
{
    unimplemented();
}

void Aud3DObject::AddTo3DMgr()
{
    return stub<thiscall_t<void, Aud3DObject*>>(0x512230, this);
}

void Aud3DObject::CalcDistToClosestHeads2()
{
    return stub<thiscall_t<void, Aud3DObject*>>(0x511C10, this);
}

void Aud3DObject::CalcMultiPlayerPan()
{
    return stub<thiscall_t<void, Aud3DObject*>>(0x511F30, this);
}

void Aud3DObject::CalcSinglePlayerPan()
{
    return stub<thiscall_t<void, Aud3DObject*>>(0x511F40, this);
}

f32 Aud3DObject::CalculateAttenuation()
{
    return stub<thiscall_t<f32, Aud3DObject*>>(0x512280, this);
}

f32 Aud3DObject::CalculateDoppler(f32 arg1)
{
    return stub<thiscall_t<f32, Aud3DObject*, f32>>(0x512000, this, arg1);
}

f32 Aud3DObject::CalculatePan()
{
    return stub<thiscall_t<f32, Aud3DObject*>>(0x5122C0, this);
}

f32 Aud3DObject::GetDistToClosestHead2()
{
    return stub<thiscall_t<f32, Aud3DObject*>>(0x512200, this);
}

class Vector3* Aud3DObject::GetLeftPositionPtr()
{
    return stub<thiscall_t<class Vector3*, Aud3DObject*>>(0x512040, this);
}

i32 Aud3DObject::GetPriority()
{
    return stub<thiscall_t<i32, Aud3DObject*>>(0x512380, this);
}

class Vector3* Aud3DObject::GetRightPositionPtr()
{
    return stub<thiscall_t<class Vector3*, Aud3DObject*>>(0x512050, this);
}

bool Aud3DObject::PastMaxDistance()
{
    return stub<thiscall_t<bool, Aud3DObject*>>(0x512090, this);
}

bool Aud3DObject::ReadVectorPoints(class Stream* arg1)
{
    return stub<thiscall_t<bool, Aud3DObject*, class Stream*>>(0x512400, this, arg1);
}

void Aud3DObject::RemoveFrom3DMgr()
{
    return stub<thiscall_t<void, Aud3DObject*>>(0x512250, this);
}

void Aud3DObject::Reset()
{
    return stub<thiscall_t<void, Aud3DObject*>>(0x511BB0, this);
}

void Aud3DObject::Set3D(bool arg1)
{
    return stub<thiscall_t<void, Aud3DObject*, bool>>(0x512320, this, arg1);
}

void Aud3DObject::SetDropOffs(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, Aud3DObject*, f32, f32>>(0x512060, this, arg1, arg2);
}

void Aud3DObject::SetPositionPtr(class Vector3* arg1)
{
    return stub<thiscall_t<void, Aud3DObject*, class Vector3*>>(0x511B80, this, arg1);
}

void Aud3DObject::UpdateNonVirtual()
{
    return stub<thiscall_t<void, Aud3DObject*>>(0x5123D0, this);
}

bool Aud3DObject::WithinMaxDistance()
{
    return stub<thiscall_t<bool, Aud3DObject*>>(0x512130, this);
}

bool Aud3DObject::WithinMaxDistance(f32 arg1)
{
    return stub<thiscall_t<bool, Aud3DObject*, f32>>(0x5121C0, this, arg1);
}

void Aud3DObject::AssignSounds()
{
    return stub<thiscall_t<void, Aud3DObject*>>(0x5122F0, this);
}

void Aud3DObject::UnAssignSounds(i32 arg1)
{
    return stub<thiscall_t<void, Aud3DObject*, i32>>(0x512300, this, arg1);
}

void Aud3DObject::UpdateAudio()
{
    return stub<thiscall_t<void, Aud3DObject*>>(0x512310, this);
}

void Aud3DObject::Update()
{
    return stub<thiscall_t<void, Aud3DObject*>>(0x512390, this);
}

void Aud3DObject::SetNon3DParams()
{
    return stub<thiscall_t<void, Aud3DObject*>>(0x512360, this);
}

void Aud3DObject::Set3DParams()
{
    return stub<thiscall_t<void, Aud3DObject*>>(0x512370, this);
}

f32 Aud3DObject::CalcDistToClosestHead2(class Matrix34** arg1, class Vector3* arg2, i32 arg3)
{
    return stub<thiscall_t<f32, Aud3DObject*, class Matrix34**, class Vector3*, i32>>(0x511E10, this, arg1, arg2, arg3);
}

f32 Aud3DObject::CalcDistToHead2(class Matrix34* arg1, class Vector3* arg2)
{
    return stub<thiscall_t<f32, Aud3DObject*, class Matrix34*, class Vector3*>>(0x511E90, this, arg1, arg2);
}

f32 Aud3DObject::CalcPercentToMaxDist2(f32 arg1)
{
    return stub<thiscall_t<f32, Aud3DObject*, f32>>(0x511ED0, this, arg1);
}

f32 Aud3DObject::CalcPseudoDistToClosestHead(class Matrix34** arg1, class Vector3* arg2, i32 arg3)
{
    return stub<thiscall_t<f32, Aud3DObject*, class Matrix34**, class Vector3*, i32>>(0x512620, this, arg1, arg2, arg3);
}

f32 Aud3DObject::CalcPseudoDistToHead(class Matrix34* arg1, class Vector3* arg2)
{
    return stub<thiscall_t<f32, Aud3DObject*, class Matrix34*, class Vector3*>>(0x5126A0, this, arg1, arg2);
}

class Vector3* Aud3DObject::GetClosestPositionPtr(class Matrix34** arg1, i32 arg2)
{
    return stub<thiscall_t<class Vector3*, Aud3DObject*, class Matrix34**, i32>>(0x5125A0, this, arg1, arg2);
}

void Aud3DObject::SetClosestPositionPtr()
{
    return stub<thiscall_t<void, Aud3DObject*>>(0x512550, this);
}

define_dummy_symbol(ageaudio_aud3dobject);
