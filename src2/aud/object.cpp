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

#include "object.h"

class audObject* audObject::CreateDuplicate(class audObject* arg1)
{
    return stub<thiscall_t<class audObject*, audObject*, class audObject*>>(0x5A26B0, this, arg1);
}

class audObject* audObject::CreateEmptyObject(enum audManager::AUDTYPE arg1, class audManager* arg2)
{
    return stub<thiscall_t<class audObject*, audObject*, enum audManager::AUDTYPE, class audManager*>>(
        0x5A2270, this, arg1, arg2);
}

class audFX* audObject::CreateFXControl()
{
    return stub<thiscall_t<class audFX*, audObject*>>(0x5A2780, this);
}

class audObject* audObject::CreateFromFile(
    enum audManager::AUDTYPE arg1, class audManager* arg2, char* arg3, char* arg4, u32 arg5)
{
    return stub<
        thiscall_t<class audObject*, audObject*, enum audManager::AUDTYPE, class audManager*, char*, char*, u32>>(
        0x5A2500, this, arg1, arg2, arg3, arg4, arg5);
}

class audObject* audObject::CreateFromSoundBank(
    enum audManager::AUDTYPE arg1, class audSoundBankHdr* arg2, i32 arg3, i32 arg4, i32 arg5, class audManager* arg6)
{
    return stub<thiscall_t<class audObject*, audObject*, enum audManager::AUDTYPE, class audSoundBankHdr*, i32, i32,
        i32, class audManager*>>(0x5A2470, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

class audStream* audObject::CreateStreamControl(i32 arg1)
{
    return stub<thiscall_t<class audStream*, audObject*, i32>>(0x5A2740, this, arg1);
}

class audObject* audObject::CreateStreamFromFile(
    enum audManager::AUDTYPE arg1, class audManager* arg2, i32 arg3, char* arg4, char* arg5)
{
    return stub<
        thiscall_t<class audObject*, audObject*, enum audManager::AUDTYPE, class audManager*, i32, char*, char*>>(
        0x5A2610, this, arg1, arg2, arg3, arg4, arg5);
}

class audObject* audObject::CreateVoiceOverFromFile(
    enum audManager::AUDTYPE arg1, class audManager* arg2, char* arg3, char* arg4, u32 arg5)
{
    return stub<
        thiscall_t<class audObject*, audObject*, enum audManager::AUDTYPE, class audManager*, char*, char*, u32>>(
        0x5A24E0, this, arg1, arg2, arg3, arg4, arg5);
}

void audObject::Destroy()
{
    return stub<thiscall_t<void, audObject*>>(0x5A21C0, this);
}

struct _audvector3_* audObject::Get3D()
{
    return stub<thiscall_t<struct _audvector3_*, audObject*>>(0x5A2ED0, this);
}

struct _audvector3_* audObject::Get3DPosition()
{
    return stub<thiscall_t<struct _audvector3_*, audObject*>>(0x5A2F10, this);
}

struct _audvector3_* audObject::Get3DVelocity()
{
    return stub<thiscall_t<struct _audvector3_*, audObject*>>(0x5A2F20, this);
}

i32 audObject::GetBankHandle()
{
    return stub<thiscall_t<i32, audObject*>>(0x5A2F40, this);
}

i32 audObject::GetBitsPerSample()
{
    return stub<thiscall_t<i32, audObject*>>(0x5A2F70, this);
}

class audSoundBuffer* audObject::GetBuffer()
{
    return stub<thiscall_t<class audSoundBuffer*, audObject*>>(0x5A2250, this);
}

class audControl* audObject::GetControl()
{
    return stub<thiscall_t<class audControl*, audObject*>>(0x5A2240, this);
}

bool audObject::GetCreatedBufferFlag()
{
    return stub<thiscall_t<bool, audObject*>>(0x5A2C70, this);
}

f32 audObject::GetDefaultPan()
{
    return stub<thiscall_t<f32, audObject*>>(0x5A2F00, this);
}

f32 audObject::GetDefaultPitch()
{
    return stub<thiscall_t<f32, audObject*>>(0x5A2EF0, this);
}

f32 audObject::GetDefaultVolume()
{
    return stub<thiscall_t<f32, audObject*>>(0x5A2EE0, this);
}

class audFX* audObject::GetFXControl()
{
    return stub<thiscall_t<class audFX*, audObject*>>(0x5A27A0, this);
}

class audFileSystem* audObject::GetFile()
{
    return stub<thiscall_t<class audFileSystem*, audObject*>>(0x5A27F0, this);
}

enum audObject::AUD_OBJECTFLAGS audObject::GetFlags()
{
    return stub<thiscall_t<enum audObject::AUD_OBJECTFLAGS, audObject*>>(0x5A2CE0, this);
}

i32 audObject::GetHandle()
{
    return stub<thiscall_t<i32, audObject*>>(0x5A2730, this);
}

class audManager* audObject::GetManager()
{
    return stub<thiscall_t<class audManager*, audObject*>>(0x5A2800, this);
}

i32 audObject::GetNChannels()
{
    return stub<thiscall_t<i32, audObject*>>(0x5A2F50, this);
}

f32 audObject::GetPan()
{
    return stub<thiscall_t<f32, audObject*>>(0x5A2EC0, this);
}

f32 audObject::GetPitch()
{
    return stub<thiscall_t<f32, audObject*>>(0x5A2EB0, this);
}

i32 audObject::GetPriority()
{
    return stub<thiscall_t<i32, audObject*>>(0x5A2C50, this);
}

i32 audObject::GetSamplesPerSec()
{
    return stub<thiscall_t<i32, audObject*>>(0x5A2F60, this);
}

class audSoundBankHdr* audObject::GetSoundBank()
{
    return stub<thiscall_t<class audSoundBankHdr*, audObject*>>(0x5A2F30, this);
}

enum audObject::AUD_OBJECTSTATUS audObject::GetStatus()
{
    return stub<thiscall_t<enum audObject::AUD_OBJECTSTATUS, audObject*>>(0x5A2990, this);
}

class audStream* audObject::GetStreamControl()
{
    return stub<thiscall_t<class audStream*, audObject*>>(0x5A2770, this);
}

i32 audObject::GetTotalSize()
{
    return stub<thiscall_t<i32, audObject*>>(0x5A2F80, this);
}

enum audManager::AUDTYPE audObject::GetType()
{
    return stub<thiscall_t<enum audManager::AUDTYPE, audObject*>>(0x5A2710, this);
}

f32 audObject::GetVolume()
{
    return stub<thiscall_t<f32, audObject*>>(0x5A2EA0, this);
}

void audObject::Init()
{
    return stub<thiscall_t<void, audObject*>>(0x5A2130, this);
}

bool audObject::PauseResume(bool arg1)
{
    return stub<thiscall_t<bool, audObject*, bool>>(0x5A29C0, this, arg1);
}

bool audObject::Play()
{
    return stub<thiscall_t<bool, audObject*>>(0x5A29D0, this);
}

void audObject::RewindFile()
{
    return stub<thiscall_t<void, audObject*>>(0x5A2F90, this);
}

void audObject::Set3DPosition(struct _audvector3_* arg1)
{
    return stub<thiscall_t<void, audObject*, struct _audvector3_*>>(0x5A2E40, this, arg1);
}

void audObject::Set3DVelocity(struct _audvector3_* arg1)
{
    return stub<thiscall_t<void, audObject*, struct _audvector3_*>>(0x5A2E70, this, arg1);
}

void audObject::SetBitsPerSample(i32 arg1)
{
    return stub<thiscall_t<void, audObject*, i32>>(0x5A2CA0, this, arg1);
}

void audObject::SetBuffer(class audSoundBuffer* arg1)
{
    return stub<thiscall_t<void, audObject*, class audSoundBuffer*>>(0x5A2260, this, arg1);
}

void audObject::SetControl(class audControl* arg1)
{
    return stub<thiscall_t<void, audObject*, class audControl*>>(0x5A2230, this, arg1);
}

void audObject::SetCreatedBufferFlag(bool arg1)
{
    return stub<thiscall_t<void, audObject*, bool>>(0x5A2C60, this, arg1);
}

void audObject::SetDefaultPan(f32 arg1)
{
    return stub<thiscall_t<void, audObject*, f32>>(0x5A2E20, this, arg1);
}

void audObject::SetDefaultPitch(f32 arg1)
{
    return stub<thiscall_t<void, audObject*, f32>>(0x5A2E00, this, arg1);
}

void audObject::SetDefaultVolume(f32 arg1)
{
    return stub<thiscall_t<void, audObject*, f32>>(0x5A2D40, this, arg1);
}

void audObject::SetDefaults(struct _soundattribs_* arg1)
{
    return stub<thiscall_t<void, audObject*, struct _soundattribs_*>>(0x5A2CF0, this, arg1);
}

void audObject::SetFlags(enum audObject::AUD_OBJECTFLAGS arg1, enum audObject::AUD_OBJECTFLAGS arg2)
{
    return stub<thiscall_t<void, audObject*, enum audObject::AUD_OBJECTFLAGS, enum audObject::AUD_OBJECTFLAGS>>(
        0x5A2CC0, this, arg1, arg2);
}

void audObject::SetHandle(i32 arg1)
{
    return stub<thiscall_t<void, audObject*, i32>>(0x5A2720, this, arg1);
}

void audObject::SetNbrChannels(i32 arg1)
{
    return stub<thiscall_t<void, audObject*, i32>>(0x5A2C80, this, arg1);
}

void audObject::SetNbrSamplesPerSec(i32 arg1)
{
    return stub<thiscall_t<void, audObject*, i32>>(0x5A2C90, this, arg1);
}

bool audObject::SetPan(f32 arg1)
{
    return stub<thiscall_t<bool, audObject*, f32>>(0x5A2BC0, this, arg1);
}

bool audObject::SetPitch(f32 arg1)
{
    return stub<thiscall_t<bool, audObject*, f32>>(0x5A2B60, this, arg1);
}

void audObject::SetPriority(i32 arg1)
{
    return stub<thiscall_t<void, audObject*, i32>>(0x5A2C20, this, arg1);
}

void audObject::SetTotalSize(i32 arg1)
{
    return stub<thiscall_t<void, audObject*, i32>>(0x5A2CB0, this, arg1);
}

void audObject::SetType(enum audManager::AUDTYPE arg1)
{
    return stub<thiscall_t<void, audObject*, enum audManager::AUDTYPE>>(0x5A2700, this, arg1);
}

void audObject::SetVolPCEchoBuffer(f32 arg1)
{
    return stub<thiscall_t<void, audObject*, f32>>(0x5A27D0, this, arg1);
}

bool audObject::SetVolume(f32 arg1)
{
    return stub<thiscall_t<bool, audObject*, f32>>(0x5A2A60, this, arg1);
}

bool audObject::Stop()
{
    return stub<thiscall_t<bool, audObject*>>(0x5A2A30, this);
}

void audObject::StopPCEchoBuffer()
{
    return stub<thiscall_t<void, audObject*>>(0x5A27B0, this);
}

bool audObject::Update(i32 arg1)
{
    return stub<thiscall_t<bool, audObject*, i32>>(0x5A2810, this, arg1);
}

define_dummy_symbol(aud_object);
