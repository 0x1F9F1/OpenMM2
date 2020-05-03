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

#include "echoeffect.h"

EchoEffect::EchoEffect()
{
    unimplemented();
}

EchoEffect::~EchoEffect()
{
    unimplemented();
}

void EchoEffect::CalculatePan(f32 arg1)
{
    return stub<thiscall_t<void, EchoEffect*, f32>>(0x5A3730, this, arg1);
}

void EchoEffect::Disable()
{
    return stub<thiscall_t<void, EchoEffect*>>(0x5A3120, this);
}

i32 EchoEffect::Enable(u32 arg1, struct IDirectSoundBuffer* arg2)
{
    return stub<thiscall_t<i32, EchoEffect*, u32, struct IDirectSoundBuffer*>>(0x5A30A0, this, arg1, arg2);
}

void EchoEffect::QueueFrequency(u32 arg1)
{
    return stub<thiscall_t<void, EchoEffect*, u32>>(0x5A3810, this, arg1);
}

void EchoEffect::QueuePlay(u32 arg1)
{
    return stub<thiscall_t<void, EchoEffect*, u32>>(0x5A35C0, this, arg1);
}

void EchoEffect::QueueStop()
{
    return stub<thiscall_t<void, EchoEffect*>>(0x5A3620, this);
}

void EchoEffect::QueueVolume(f32 arg1)
{
    return stub<thiscall_t<void, EchoEffect*, f32>>(0x5A37C0, this, arg1);
}

void EchoEffect::SetDelayTime(f32 arg1)
{
    return stub<thiscall_t<void, EchoEffect*, f32>>(0x5A3150, this, arg1);
}

void EchoEffect::SetFrequency(f32 arg1)
{
    return stub<thiscall_t<void, EchoEffect*, f32>>(0x5A3660, this, arg1);
}

void EchoEffect::SetVolume(f32 arg1)
{
    return stub<thiscall_t<void, EchoEffect*, f32>>(0x5A3790, this, arg1);
}

void EchoEffect::Stop()
{
    return stub<thiscall_t<void, EchoEffect*>>(0x5A3650, this);
}

void EchoEffect::Update()
{
    return stub<thiscall_t<void, EchoEffect*>>(0x5A3280, this);
}

void EchoEffect::UpdatePitch()
{
    return stub<thiscall_t<void, EchoEffect*>>(0x5A3510, this);
}

void EchoEffect::UpdatePlay()
{
    return stub<thiscall_t<void, EchoEffect*>>(0x5A32F0, this);
}

void EchoEffect::UpdateStop()
{
    return stub<thiscall_t<void, EchoEffect*>>(0x5A33B0, this);
}

void EchoEffect::UpdateVolume()
{
    return stub<thiscall_t<void, EchoEffect*>>(0x5A3460, this);
}

define_dummy_symbol(aud_echoeffect);
