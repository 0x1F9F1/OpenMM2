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

#include "ped.h"

void pedAnimation::DrawSkeleton(i32 arg1, class crSkeleton* arg2)
{
    return stub<thiscall_t<void, pedAnimation*, i32, class crSkeleton*>>(0x57AB60, this, arg1, arg2);
}

void pedAnimation::Load(char* arg1, class Stream* arg2)
{
    return stub<thiscall_t<void, pedAnimation*, char*, class Stream*>>(0x57A800, this, arg1, arg2);
}

i32 pedAnimation::LookupSequence(char* arg1)
{
    return stub<thiscall_t<i32, pedAnimation*, char*>>(0x57A7A0, this, arg1);
}

void pedAnimation::Init()
{
    return stub<cdecl_t<void>>(0x57AB40);
}

void pedAnimationInstance::Draw(bool arg1)
{
    return stub<thiscall_t<void, pedAnimationInstance*, bool>>(0x57B370, this, arg1);
}

void pedAnimationInstance::DrawShadow()
{
    return stub<thiscall_t<void, pedAnimationInstance*>>(0x57B510, this);
}

void pedAnimationInstance::Init(char* arg1)
{
    return stub<thiscall_t<void, pedAnimationInstance*, char*>>(0x57ADB0, this, arg1);
}

void pedAnimationInstance::PreUpdate(f32 arg1)
{
    return stub<thiscall_t<void, pedAnimationInstance*, f32>>(0x57B270, this, arg1);
}

void pedAnimationInstance::Reset()
{
    return stub<thiscall_t<void, pedAnimationInstance*>>(0x57B2C0, this);
}

void pedAnimationInstance::Start(i32 arg1)
{
    return stub<thiscall_t<void, pedAnimationInstance*, i32>>(0x57B550, this, arg1);
}

void pedAnimationInstance::Update()
{
    return stub<thiscall_t<void, pedAnimationInstance*>>(0x57B2F0, this);
}

void pedAnimationInstance::VerifySeq(i32 arg1)
{
    return stub<thiscall_t<void, pedAnimationInstance*, i32>>(0x57B520, this, arg1);
}

define_dummy_symbol(ped_ped);
