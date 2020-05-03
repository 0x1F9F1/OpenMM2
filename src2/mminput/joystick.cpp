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

#include "joystick.h"

mmJoystick::mmJoystick()
{
    unimplemented();
}

mmJoystick::~mmJoystick()
{
    unimplemented();
}

i32 mmJoystick::DisableAutoCenter()
{
    return stub<thiscall_t<i32, mmJoystick*>>(0x530810, this);
}

f32 mmJoystick::GetAxis(i32 arg1)
{
    return stub<thiscall_t<f32, mmJoystick*, i32>>(0x530970, this, arg1);
}

f32 mmJoystick::GetButton(i32 arg1)
{
    return stub<thiscall_t<f32, mmJoystick*, i32>>(0x530A70, this, arg1);
}

class mmEffectFF* mmJoystick::GetFFEffect(i32 arg1)
{
    return stub<thiscall_t<class mmEffectFF*, mmJoystick*, i32>>(0x530EB0, this, arg1);
}

i32 mmJoystick::GetNumButtons()
{
    return stub<thiscall_t<i32, mmJoystick*>>(0x530F00, this);
}

i32 mmJoystick::Init(struct IDirectInputDevice2A* arg1, struct HWND__* arg2)
{
    return stub<thiscall_t<i32, mmJoystick*, struct IDirectInputDevice2A*, struct HWND__*>>(0x5304B0, this, arg1, arg2);
}

void mmJoystick::InputCreateEffect()
{
    return stub<thiscall_t<void, mmJoystick*>>(0x530BB0, this);
}

void mmJoystick::InputInitEffect()
{
    return stub<thiscall_t<void, mmJoystick*>>(0x530CE0, this);
}

void mmJoystick::InputStopEffect()
{
    return stub<thiscall_t<void, mmJoystick*>>(0x530D20, this);
}

i32 mmJoystick::PlayCollision()
{
    return stub<thiscall_t<i32, mmJoystick*>>(0x530DD0, this);
}

i32 mmJoystick::PlayFriction()
{
    return stub<thiscall_t<i32, mmJoystick*>>(0x530E70, this);
}

i32 mmJoystick::PlayShake()
{
    return stub<thiscall_t<i32, mmJoystick*>>(0x530D90, this);
}

i32 mmJoystick::PlaySteer()
{
    return stub<thiscall_t<i32, mmJoystick*>>(0x530E10, this);
}

u32 mmJoystick::Poll()
{
    return stub<thiscall_t<u32, mmJoystick*>>(0x530860, this);
}

void mmJoystick::PrintDeviceCaps()
{
    return stub<thiscall_t<void, mmJoystick*>>(0x530F10, this);
}

void mmJoystick::ResetAxisCapture()
{
    return stub<thiscall_t<void, mmJoystick*>>(0x530B30, this);
}

i32 mmJoystick::SetDeadZone(f32 arg1)
{
    return stub<thiscall_t<i32, mmJoystick*, f32>>(0x530770, this, arg1);
}

i32 mmJoystick::SetFriction(i32 arg1)
{
    return stub<thiscall_t<i32, mmJoystick*, i32>>(0x530E50, this, arg1);
}

i32 mmJoystick::SetShake(u32 arg1, u32 arg2)
{
    return stub<thiscall_t<i32, mmJoystick*, u32, u32>>(0x530D60, this, arg1, arg2);
}

i32 mmJoystick::SetSteer(i32 arg1)
{
    return stub<thiscall_t<i32, mmJoystick*, i32>>(0x530DF0, this, arg1);
}

i32 mmJoystick::StopFriction()
{
    return stub<thiscall_t<i32, mmJoystick*>>(0x530E90, this);
}

i32 mmJoystick::StopShake()
{
    return stub<thiscall_t<i32, mmJoystick*>>(0x530DB0, this);
}

i32 mmJoystick::StopSteer()
{
    return stub<thiscall_t<i32, mmJoystick*>>(0x530E30, this);
}

void mmJoystick::Update()
{
    return stub<thiscall_t<void, mmJoystick*>>(0x530AA0, this);
}

i32 mmJoystick::inputPrepareDevice()
{
    return stub<thiscall_t<i32, mmJoystick*>>(0x5305C0, this);
}

mmJaxis::mmJaxis()
{
    unimplemented();
}

mmJaxis::~mmJaxis()
{
    unimplemented();
}

i32 mmJaxis::Capture()
{
    return stub<thiscall_t<i32, mmJaxis*>>(0x5302E0, this);
}

void mmJaxis::Normalize(f32 arg1)
{
    return stub<thiscall_t<void, mmJaxis*, f32>>(0x530280, this, arg1);
}

void mmJaxis::NormalizePOV(u32 arg1)
{
    return stub<thiscall_t<void, mmJaxis*, u32>>(0x5302A0, this, arg1);
}

void mmJaxis::ResetCapture()
{
    return stub<thiscall_t<void, mmJaxis*>>(0x530310, this);
}

void mmJaxis::SetRange(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, mmJaxis*, f32, f32>>(0x530260, this, arg1, arg2);
}

void DecodeDIErrorMFlag(i32 arg1)
{
    return stub<cdecl_t<void, i32>>(0x5310E0, arg1);
}

define_dummy_symbol(mminput_joystick);
