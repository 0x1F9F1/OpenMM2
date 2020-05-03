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

#include "aud3dobjectmanager.h"

Aud3DObjectManager::Aud3DObjectManager(i32 arg1)
{
    unimplemented();
}

Aud3DObjectManager::~Aud3DObjectManager()
{
    unimplemented();
}

i32 Aud3DObjectManager::Add(class Aud3DObject* arg1)
{
    return stub<thiscall_t<i32, Aud3DObjectManager*, class Aud3DObject*>>(0x50F6E0, this, arg1);
}

i32 Aud3DObjectManager::AllocateSample(char* arg1, u32 arg2)
{
    return stub<thiscall_t<i32, Aud3DObjectManager*, char*, u32>>(0x50FCB0, this, arg1, arg2);
}

i32 Aud3DObjectManager::AllocateSample(char* arg1, i32 arg2, u32 arg3)
{
    return stub<thiscall_t<i32, Aud3DObjectManager*, char*, i32, u32>>(0x50FE20, this, arg1, arg2, arg3);
}

void Aud3DObjectManager::EchoOff()
{
    return stub<thiscall_t<void, Aud3DObjectManager*>>(0x50F9E0, this);
}

void Aud3DObjectManager::EchoOn(f32 arg1)
{
    return stub<thiscall_t<void, Aud3DObjectManager*, f32>>(0x50F9C0, this, arg1);
}

i32 Aud3DObjectManager::FindGreatestDistance(class Aud3DObject* arg1)
{
    return stub<thiscall_t<i32, Aud3DObjectManager*, class Aud3DObject*>>(0x50F790, this, arg1);
}

i32 Aud3DObjectManager::FindUnusedSlot()
{
    return stub<thiscall_t<i32, Aud3DObjectManager*>>(0x50F8A0, this);
}

i32 Aud3DObjectManager::GetClosestCop()
{
    return stub<thiscall_t<i32, Aud3DObjectManager*>>(0x50FFD0, this);
}

class Matrix34** Aud3DObjectManager::GetLeftHeadPtrPtr()
{
    return stub<thiscall_t<class Matrix34**, Aud3DObjectManager*>>(0x50FFE0, this);
}

class Matrix34** Aud3DObjectManager::GetRightHeadPtrPtr()
{
    return stub<thiscall_t<class Matrix34**, Aud3DObjectManager*>>(0x510000, this);
}

class AudSoundBase* Aud3DObjectManager::GetSample(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<class AudSoundBase*, Aud3DObjectManager*, i32, i32>>(0x50F9F0, this, arg1, arg2);
}

class Aud3DSampleWrapper* Aud3DObjectManager::GetSampleWrapper(i32 arg1)
{
    return stub<thiscall_t<class Aud3DSampleWrapper*, Aud3DObjectManager*, i32>>(0x50FF90, this, arg1);
}

void Aud3DObjectManager::InitAmbObjContainer(char* arg1)
{
    return stub<thiscall_t<void, Aud3DObjectManager*, char*>>(0x50F650, this, arg1);
}

i32 Aud3DObjectManager::PlayCopVoice()
{
    return stub<thiscall_t<i32, Aud3DObjectManager*>>(0x50FFC0, this);
}

void Aud3DObjectManager::Process3D(bool arg1)
{
    return stub<thiscall_t<void, Aud3DObjectManager*, bool>>(0x50F8D0, this, arg1);
}

i32 Aud3DObjectManager::QueueInCopVoice(f32 arg1)
{
    return stub<thiscall_t<i32, Aud3DObjectManager*, f32>>(0x50FFB0, this, arg1);
}

void Aud3DObjectManager::Remove(class Aud3DObject* arg1, i32 arg2)
{
    return stub<thiscall_t<void, Aud3DObjectManager*, class Aud3DObject*, i32>>(0x50F760, this, arg1, arg2);
}

void Aud3DObjectManager::SetLeftHeadPtr(class Matrix34* arg1, i32 arg2)
{
    return stub<thiscall_t<void, Aud3DObjectManager*, class Matrix34*, i32>>(0x510020, this, arg1, arg2);
}

void Aud3DObjectManager::SetNumScreenSplits(i32 arg1)
{
    return stub<thiscall_t<void, Aud3DObjectManager*, i32>>(0x50FA20, this, arg1);
}

void Aud3DObjectManager::SetRightHeadPtr(class Matrix34* arg1, i32 arg2)
{
    return stub<thiscall_t<void, Aud3DObjectManager*, class Matrix34*, i32>>(0x510040, this, arg1, arg2);
}

void Aud3DObjectManager::Update(f32 arg1)
{
    return stub<thiscall_t<void, Aud3DObjectManager*, f32>>(0x50F910, this, arg1);
}

char* Aud3DObjectManager::CatName(char* arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<char*, Aud3DObjectManager*, char*, i32, i32>>(0x50FAB0, this, arg1, arg2, arg3);
}

define_dummy_symbol(ageaudio_aud3dobjectmanager);
