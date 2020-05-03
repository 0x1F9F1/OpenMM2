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

#include "soundbank.h"

i32 audSoundBankHdr::AddFromMemory(void* arg1, class audSoundBankHdr* arg2)
{
    return stub<thiscall_t<i32, audSoundBankHdr*, void*, class audSoundBankHdr*>>(0x5A7480, this, arg1, arg2);
}

class audSoundBankHdr* audSoundBankHdr::CreateEmptyBank(void** arg1)
{
    return stub<thiscall_t<class audSoundBankHdr*, audSoundBankHdr*, void**>>(0x5A7470, this, arg1);
}

class audSoundBankHdr* audSoundBankHdr::CreateFromFile(char* arg1, void** arg2, void** arg3)
{
    return stub<thiscall_t<class audSoundBankHdr*, audSoundBankHdr*, char*, void**, void**>>(
        0x5A7490, this, arg1, arg2, arg3);
}

class audSoundBankHdr* audSoundBankHdr::CreateFromMemory(
    void* arg1, i32 arg2, void* arg3, i32 arg4, struct _bank_attrib* arg5, i32 arg6, void** arg7)
{
    return stub<thiscall_t<class audSoundBankHdr*, audSoundBankHdr*, void*, i32, void*, i32, struct _bank_attrib*, i32,
        void**>>(0x5A74A0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void audSoundBankHdr::Destroy()
{
    return stub<thiscall_t<void, audSoundBankHdr*>>(0x5A7460, this);
}

i32 audSoundBankHdr::GetBankHandle()
{
    return stub<thiscall_t<i32, audSoundBankHdr*>>(0x5A74C0, this);
}

i32 audSoundBankHdr::GetNumberOfAttribs()
{
    return stub<thiscall_t<i32, audSoundBankHdr*>>(0x5A74B0, this);
}

i32 audSoundBankHdr::GetSoundIndex(char* arg1)
{
    return stub<thiscall_t<i32, audSoundBankHdr*, char*>>(0x5A74D0, this, arg1);
}

void audSoundBankHdr::Init()
{
    return stub<thiscall_t<void, audSoundBankHdr*>>(0x5A7430, this);
}

define_dummy_symbol(aud_soundbank);
