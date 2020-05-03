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

#include "manager.h"

i32 audManager::AddControl(enum audManager::AUDTYPE arg1, class audControl* arg2)
{
    return stub<thiscall_t<i32, audManager*, enum audManager::AUDTYPE, class audControl*>>(0x5A12E0, this, arg1, arg2);
}

i32 audManager::AddHead(class audHead* arg1)
{
    return stub<thiscall_t<i32, audManager*, class audHead*>>(0x5A1160, this, arg1);
}

class audControl* audManager::AllocControl(enum audManager::AUDTYPE arg1)
{
    return stub<thiscall_t<class audControl*, audManager*, enum audManager::AUDTYPE>>(0x5A1C80, this, arg1);
}

class audFX* audManager::AllocFXNode()
{
    return stub<thiscall_t<class audFX*, audManager*>>(0x5A1E60, this);
}

class audFileSystem* audManager::AllocFileNode()
{
    return stub<thiscall_t<class audFileSystem*, audManager*>>(0x5A1EC0, this);
}

class audHead* audManager::AllocHeadNode()
{
    return stub<thiscall_t<class audHead*, audManager*>>(0x5A1E00, this);
}

class audStream* audManager::AllocStreamNode()
{
    return stub<thiscall_t<class audStream*, audManager*>>(0x5A1DA0, this);
}

class audTimeNode* audManager::AllocTimeNode()
{
    return stub<thiscall_t<class audTimeNode*, audManager*>>(0x5A1D20, this);
}

i32 audManager::CountActiveSounds(enum audManager::AUDTYPE arg1)
{
    return stub<thiscall_t<i32, audManager*, enum audManager::AUDTYPE>>(0x5A1950, this, arg1);
}

i32 audManager::CountSounds(enum audManager::AUDTYPE arg1)
{
    return stub<thiscall_t<i32, audManager*, enum audManager::AUDTYPE>>(0x5A18E0, this, arg1);
}

class audManager* audManager::Create(i32 arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5, i32 arg6, i32 arg7, i32 arg8,
    i32 arg9, i32 arg10, i32 arg11, enum audManager::SOUNDFLAG arg12)
{
    return stub<thiscall_t<class audManager*, audManager*, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32, i32,
        enum audManager::SOUNDFLAG>>(
        0x5A0D60, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
}

void audManager::Destroy()
{
    return stub<thiscall_t<void, audManager*>>(0x5A0FE0, this);
}

void audManager::Enable(bool arg1)
{
    return stub<thiscall_t<void, audManager*, bool>>(0x5A1060, this, arg1);
}

void audManager::FreeAndDestroyAllSounds()
{
    return stub<thiscall_t<void, audManager*>>(0x5A1810, this);
}

void audManager::FreeControl(enum audManager::AUDTYPE arg1, class audControl* arg2)
{
    return stub<thiscall_t<void, audManager*, enum audManager::AUDTYPE, class audControl*>>(0x5A1F20, this, arg1, arg2);
}

void audManager::FreeFXNode(class audFX* arg1)
{
    return stub<thiscall_t<void, audManager*, class audFX*>>(0x5A2090, this, arg1);
}

void audManager::FreeFileNode(class audFileSystem* arg1)
{
    return stub<thiscall_t<void, audManager*, class audFileSystem*>>(0x5A20E0, this, arg1);
}

void audManager::FreeHeadNode(class audHead* arg1)
{
    return stub<thiscall_t<void, audManager*, class audHead*>>(0x5A2040, this, arg1);
}

void audManager::FreeStreamNode(class audStream* arg1)
{
    return stub<thiscall_t<void, audManager*, class audStream*>>(0x5A1FF0, this, arg1);
}

void audManager::FreeTimeNode(class audTimeNode* arg1)
{
    return stub<thiscall_t<void, audManager*, class audTimeNode*>>(0x5A1FA0, this, arg1);
}

class audControl* audManager::GetActiveControlListPtr(enum audManager::AUDTYPE arg1)
{
    return stub<thiscall_t<class audControl*, audManager*, enum audManager::AUDTYPE>>(0x5A1C20, this, arg1);
}

class audHead* audManager::GetActiveHead(i32 arg1)
{
    return stub<thiscall_t<class audHead*, audManager*, i32>>(0x5A1270, this, arg1);
}

class audControl* audManager::GetControlListPtr(enum audManager::AUDTYPE arg1)
{
    return stub<thiscall_t<class audControl*, audManager*, enum audManager::AUDTYPE>>(0x5A1BC0, this, arg1);
}

f32 audManager::GetMasterVolume(enum audManager::AUDTYPE arg1)
{
    return stub<thiscall_t<f32, audManager*, enum audManager::AUDTYPE>>(0x5A1AB0, this, arg1);
}

bool audManager::IsEnabled()
{
    return stub<thiscall_t<bool, audManager*>>(0x5A1090, this);
}

bool audManager::IsSoundFlags(enum audManager::SOUNDFLAG arg1)
{
    return stub<thiscall_t<bool, audManager*, enum audManager::SOUNDFLAG>>(0x5A1B40, this, arg1);
}

bool audManager::MoveActiveToBottom(enum audManager::AUDTYPE arg1, class audControl* arg2)
{
    return stub<thiscall_t<bool, audManager*, enum audManager::AUDTYPE, class audControl*>>(0x5A16B0, this, arg1, arg2);
}

bool audManager::MoveActiveToTop(enum audManager::AUDTYPE arg1, class audControl* arg2)
{
    return stub<thiscall_t<bool, audManager*, enum audManager::AUDTYPE, class audControl*>>(0x5A15F0, this, arg1, arg2);
}

bool audManager::MoveFromActive(enum audManager::AUDTYPE arg1, class audControl* arg2)
{
    return stub<thiscall_t<bool, audManager*, enum audManager::AUDTYPE, class audControl*>>(0x5A1560, this, arg1, arg2);
}

bool audManager::MoveToActive(enum audManager::AUDTYPE arg1, class audControl* arg2)
{
    return stub<thiscall_t<bool, audManager*, enum audManager::AUDTYPE, class audControl*>>(0x5A1430, this, arg1, arg2);
}

bool audManager::RemoveControl(enum audManager::AUDTYPE arg1, class audControl* arg2)
{
    return stub<thiscall_t<bool, audManager*, enum audManager::AUDTYPE, class audControl*>>(0x5A1380, this, arg1, arg2);
}

bool audManager::RemoveHead(class audHead* arg1)
{
    return stub<thiscall_t<bool, audManager*, class audHead*>>(0x5A11B0, this, arg1);
}

void audManager::RestartAudio(i32 arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, audManager*, i32, i32, i32>>(0x5A0F80, this, arg1, arg2, arg3);
}

void audManager::SetMaxConcurrent(enum audManager::AUDTYPE arg1, i32 arg2)
{
    return stub<thiscall_t<void, audManager*, enum audManager::AUDTYPE, i32>>(0x5A1B60, this, arg1, arg2);
}

void audManager::SetSoundFlags(enum audManager::SOUNDFLAG arg1, enum audManager::SOUNDFLAG arg2)
{
    return stub<thiscall_t<void, audManager*, enum audManager::SOUNDFLAG, enum audManager::SOUNDFLAG>>(
        0x5A1B10, this, arg1, arg2);
}

void audManager::SetVolAllSounds(enum audManager::AUDTYPE arg1, f32 arg2)
{
    return stub<thiscall_t<void, audManager*, enum audManager::AUDTYPE, f32>>(0x5A19C0, this, arg1, arg2);
}

void audManager::ShutDownAudio()
{
    return stub<thiscall_t<void, audManager*>>(0x5A0F90, this);
}

bool audManager::StopAllSounds(enum audManager::AUDTYPE arg1)
{
    return stub<thiscall_t<bool, audManager*, enum audManager::AUDTYPE>>(0x5A1730, this, arg1);
}

void audManager::Update(i32 arg1)
{
    return stub<thiscall_t<void, audManager*, i32>>(0x5A10B0, this, arg1);
}

bool audManager::InitControlStruct(class audSoundHeap* arg1, struct _controlptrs_* arg2, i32 arg3)
{
    return stub<thiscall_t<bool, audManager*, class audSoundHeap*, struct _controlptrs_*, i32>>(
        0x5A0FF0, this, arg1, arg2, arg3);
}

define_dummy_symbol(aud_manager);
