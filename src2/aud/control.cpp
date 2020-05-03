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

#include "control.h"

i32 audControl::Add(class audObject* arg1, i32 arg2)
{
    return stub<thiscall_t<i32, audControl*, class audObject*, i32>>(0x5A0060, this, arg1, arg2);
}

i32 audControl::Count()
{
    return stub<thiscall_t<i32, audControl*>>(0x5A0450, this);
}

class audControl* audControl::Create(enum audManager::AUDTYPE arg1, class audManager* arg2)
{
    return stub<thiscall_t<class audControl*, audControl*, enum audManager::AUDTYPE, class audManager*>>(
        0x59FFA0, this, arg1, arg2);
}

void audControl::Destroy()
{
    return stub<thiscall_t<void, audControl*>>(0x5A0B60, this);
}

void audControl::Disable3DMode(i32 arg1)
{
    return stub<thiscall_t<void, audControl*, i32>>(0x5A0A90, this, arg1);
}

void audControl::Enable3DMode(i32 arg1)
{
    return stub<thiscall_t<void, audControl*, i32>>(0x5A09F0, this, arg1);
}

class audObject* audControl::FindActiveObjectByHandle(i32 arg1)
{
    return stub<thiscall_t<class audObject*, audControl*, i32>>(0x5A03C0, this, arg1);
}

class audObject* audControl::FindObjectByHandle(i32 arg1)
{
    return stub<thiscall_t<class audObject*, audControl*, i32>>(0x5A0300, this, arg1);
}

void audControl::FreeAndDestroy()
{
    return stub<thiscall_t<void, audControl*>>(0x5A0BF0, this);
}

i32 audControl::GetAssetDbId()
{
    return stub<thiscall_t<i32, audControl*>>(0x5A0500, this);
}

i32 audControl::GetControlFlags()
{
    return stub<thiscall_t<i32, audControl*>>(0x5A0C40, this);
}

i32 audControl::GetHandle()
{
    return stub<thiscall_t<i32, audControl*>>(0x5A0440, this);
}

class audManager* audControl::GetManager()
{
    return stub<thiscall_t<class audManager*, audControl*>>(0x5A0180, this);
}

i32 audControl::GetObjectHandle(class audObject* arg1)
{
    return stub<thiscall_t<i32, audControl*, class audObject*>>(0x5A03B0, this, arg1);
}

f32 audControl::GetPan(i32 arg1)
{
    return stub<thiscall_t<f32, audControl*, i32>>(0x5A0750, this, arg1);
}

char* audControl::GetPath()
{
    return stub<thiscall_t<char*, audControl*>>(0x5A04E0, this);
}

f32 audControl::GetPitch(i32 arg1)
{
    return stub<thiscall_t<f32, audControl*, i32>>(0x5A07B0, this, arg1);
}

struct _audvector3_* audControl::GetPosition(i32 arg1)
{
    return stub<thiscall_t<struct _audvector3_*, audControl*, i32>>(0x5A0B30, this, arg1);
}

i32 audControl::GetPriority()
{
    return stub<thiscall_t<i32, audControl*>>(0x5A0C80, this);
}

f32 audControl::GetVolume(i32 arg1)
{
    return stub<thiscall_t<f32, audControl*, i32>>(0x5A06F0, this, arg1);
}

void audControl::Init(enum audManager::AUDTYPE arg1, class audManager* arg2)
{
    return stub<thiscall_t<void, audControl*, enum audManager::AUDTYPE, class audManager*>>(0x59FF40, this, arg1, arg2);
}

bool audControl::MoveFromActive(enum audManager::AUDTYPE arg1, class audObject* arg2)
{
    return stub<thiscall_t<bool, audControl*, enum audManager::AUDTYPE, class audObject*>>(0x5A0290, this, arg1, arg2);
}

bool audControl::MoveToActive(enum audManager::AUDTYPE arg1, class audObject* arg2)
{
    return stub<thiscall_t<bool, audControl*, enum audManager::AUDTYPE, class audObject*>>(0x5A0190, this, arg1, arg2);
}

bool audControl::PauseResume(bool arg1, i32 arg2)
{
    return stub<thiscall_t<bool, audControl*, bool, i32>>(0x5A0940, this, arg1, arg2);
}

bool audControl::Play(i32 arg1)
{
    return stub<thiscall_t<bool, audControl*, i32>>(0x5A0810, this, arg1);
}

bool audControl::PlayRandom(i32 arg1)
{
    return stub<thiscall_t<bool, audControl*, i32>>(0x5A0870, this, arg1);
}

bool audControl::Remove(class audObject* arg1, i32 arg2)
{
    return stub<thiscall_t<bool, audControl*, class audObject*, i32>>(0x5A00C0, this, arg1, arg2);
}

void audControl::ResetAutoHandle(i32 arg1)
{
    return stub<thiscall_t<void, audControl*, i32>>(0x5A0420, this, arg1);
}

void audControl::SetAssetDbId(i32 arg1)
{
    return stub<thiscall_t<void, audControl*, i32>>(0x5A04F0, this, arg1);
}

void audControl::SetControlFlags(enum audControl::AUDCONTROLFLAGS arg1, enum audControl::AUDCONTROLFLAGS arg2)
{
    return stub<thiscall_t<void, audControl*, enum audControl::AUDCONTROLFLAGS, enum audControl::AUDCONTROLFLAGS>>(
        0x5A0C20, this, arg1, arg2);
}

void audControl::SetHandle(i32 arg1)
{
    return stub<thiscall_t<void, audControl*, i32>>(0x5A0430, this, arg1);
}

void audControl::SetMaxConcurrent(i32 arg1)
{
    return stub<thiscall_t<void, audControl*, i32>>(0x59FFD0, this, arg1);
}

void audControl::SetPan(f32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, audControl*, f32, i32>>(0x5A05B0, this, arg1, arg2);
}

void audControl::SetPath(char const* arg1)
{
    return stub<thiscall_t<void, audControl*, char const*>>(0x5A0490, this, arg1);
}

void audControl::SetPitch(f32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, audControl*, f32, i32>>(0x5A0650, this, arg1, arg2);
}

void audControl::SetPosition(struct _audvector3_* arg1, i32 arg2)
{
    return stub<thiscall_t<void, audControl*, struct _audvector3_*, i32>>(0x5A09B0, this, arg1, arg2);
}

void audControl::SetPriority(i32 arg1)
{
    return stub<thiscall_t<void, audControl*, i32>>(0x5A0C50, this, arg1);
}

void audControl::SetVolPCEchoBuffers(f32 arg1)
{
    return stub<thiscall_t<void, audControl*, f32>>(0x5A0CF0, this, arg1);
}

void audControl::SetVolume(f32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, audControl*, f32, i32>>(0x5A0510, this, arg1, arg2);
}

bool audControl::Stop(i32 arg1)
{
    return stub<thiscall_t<bool, audControl*, i32>>(0x5A08D0, this, arg1);
}

void audControl::StopPCEchoBuffers()
{
    return stub<thiscall_t<void, audControl*>>(0x5A0C90, this);
}

void audControl::Update(i32 arg1)
{
    return stub<thiscall_t<void, audControl*, i32>>(0x5A0010, this, arg1);
}

define_dummy_symbol(aud_control);
