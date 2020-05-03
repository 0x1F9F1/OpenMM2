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

#include "input.h"

void testsuperq()
{
    return stub<cdecl_t<void>>(0x52A950);
}

mmInput::mmInput()
{
    unimplemented();
}

mmInput::~mmInput()
{
    unimplemented();
}

void mmInput::AssignIO(class mmIO* arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, mmInput*, class mmIO*, i32, i32>>(0x52C920, this, arg1, arg2, arg3);
}

i32 mmInput::AttachToPipe()
{
    return stub<thiscall_t<i32, mmInput*>>(0x52ACB0, this);
}

void mmInput::AutoSetup()
{
    return stub<thiscall_t<void, mmInput*>>(0x52B1E0, this);
}

i32 mmInput::BinaryLoadConfig(class Stream* arg1)
{
    return stub<thiscall_t<i32, mmInput*, class Stream*>>(0x52E440, this, arg1);
}

i32 mmInput::BinarySaveConfig(class Stream* arg1)
{
    return stub<thiscall_t<i32, mmInput*, class Stream*>>(0x52E580, this, arg1);
}

i32 mmInput::BuildCaptureIO(i32 arg1, class mmIO* arg2, union eqEvent arg3)
{
    return stub<thiscall_t<i32, mmInput*, i32, class mmIO*, union eqEvent>>(0x52C5E0, this, arg1, arg2, arg3);
}

void mmInput::CaptureState(i32 arg1)
{
    return stub<thiscall_t<void, mmInput*, i32>>(0x52C5B0, this, arg1);
}

void mmInput::ClearEventHitFlags()
{
    return stub<thiscall_t<void, mmInput*>>(0x52CBF0, this);
}

i32 mmInput::DeviceConnected()
{
    return stub<thiscall_t<i32, mmInput*>>(0x52E0A0, this);
}

i32 mmInput::DoingFF()
{
    return stub<thiscall_t<i32, mmInput*>>(0x52E1A0, this);
}

i32 mmInput::FFIsPlaying(i32 arg1)
{
    return stub<thiscall_t<i32, mmInput*, i32>>(0x52E310, this, arg1);
}

i32 mmInput::FFPlay(i32 arg1)
{
    return stub<thiscall_t<i32, mmInput*, i32>>(0x52E2B0, this, arg1);
}

i32 mmInput::FFSetValues(i32 arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<i32, mmInput*, i32, f32, f32>>(0x52E340, this, arg1, arg2, arg3);
}

i32 mmInput::FFStop(i32 arg1)
{
    return stub<thiscall_t<i32, mmInput*, i32>>(0x52E2E0, this, arg1);
}

f32 mmInput::FilterGamepadSteering()
{
    return stub<thiscall_t<f32, mmInput*>>(0x52DC80, this);
}

void mmInput::FlagIODevChanged()
{
    return stub<thiscall_t<void, mmInput*>>(0x52C570, this);
}

void mmInput::Flush()
{
    return stub<thiscall_t<void, mmInput*>>(0x52CB90, this);
}

void mmInput::ForceAssignment(class mmIO* arg1)
{
    return stub<thiscall_t<void, mmInput*, class mmIO*>>(0x52C7A0, this, arg1);
}

i32 mmInput::GamepadConnected()
{
    return stub<thiscall_t<i32, mmInput*>>(0x52E0D0, this);
}

f32 mmInput::GetBrakes()
{
    return stub<thiscall_t<f32, mmInput*>>(0x52D9E0, this);
}

f32 mmInput::GetBrakesVal()
{
    return stub<thiscall_t<f32, mmInput*>>(0x52DA00, this);
}

f32 mmInput::GetCamPan()
{
    return stub<thiscall_t<f32, mmInput*>>(0x52DF60, this);
}

f32 mmInput::GetHandBrake()
{
    return stub<thiscall_t<f32, mmInput*>>(0x52DA70, this);
}

f32 mmInput::GetSteering(f32 (*arg1)(f32))
{
    return stub<thiscall_t<f32, mmInput*, f32 (*)(f32)>>(0x52DE90, this, arg1);
}

f32 mmInput::GetThrottle()
{
    return stub<thiscall_t<f32, mmInput*>>(0x52D950, this);
}

f32 mmInput::GetThrottleVal()
{
    return stub<thiscall_t<f32, mmInput*>>(0x52D970, this);
}

void mmInput::IOInit(i32 arg1, struct LocString* arg2, i32 arg3)
{
    return stub<thiscall_t<void, mmInput*, i32, struct LocString*, i32>>(0x52B1B0, this, arg1, arg2, arg3);
}

void mmInput::Init(i32 arg1)
{
    return stub<thiscall_t<void, mmInput*, i32>>(0x52C380, this, arg1);
}

i32 mmInput::IsAlreadyAssigned(class mmIO* arg1, i32 arg2, i32 arg3, i32 arg4)
{
    return stub<thiscall_t<i32, mmInput*, class mmIO*, i32, i32, i32>>(0x52C830, this, arg1, arg2, arg3, arg4);
}

i32 mmInput::JoystickConnected()
{
    return stub<thiscall_t<i32, mmInput*>>(0x52E0C0, this);
}

i32 mmInput::JoystickHasCoolie()
{
    return stub<thiscall_t<i32, mmInput*>>(0x52E120, this);
}

i32 mmInput::JoystickHasThrottle()
{
    return stub<thiscall_t<i32, mmInput*>>(0x52E140, this);
}

i32 mmInput::LoadConfig(class Stream* arg1)
{
    return stub<thiscall_t<i32, mmInput*, class Stream*>>(0x52E3B0, this, arg1);
}

i32 mmInput::PollStates()
{
    return stub<thiscall_t<i32, mmInput*>>(0x52CA80, this);
}

i32 mmInput::PollSuperQ()
{
    return stub<thiscall_t<i32, mmInput*>>(0x52CB40, this);
}

i32 mmInput::PopEvent(i32* arg1)
{
    return stub<thiscall_t<i32, mmInput*, i32*>>(0x52E380, this, arg1);
}

void mmInput::PrintIODev()
{
    return stub<thiscall_t<void, mmInput*>>(0x52E610, this);
}

void mmInput::Reset()
{
    return stub<thiscall_t<void, mmInput*>>(0x52B170, this);
}

void mmInput::RestoreDefaultConfig(i32 arg1)
{
    return stub<thiscall_t<void, mmInput*, i32>>(0x52B240, this, arg1);
}

i32 mmInput::ReturnStateCaptured()
{
    return stub<thiscall_t<i32, mmInput*>>(0x52C590, this);
}

i32 mmInput::SanityCheck(class mmIO* arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<i32, mmInput*, class mmIO*, i32, i32>>(0x52C7C0, this, arg1, arg2, arg3);
}

void mmInput::SaveCB()
{
    return stub<thiscall_t<void, mmInput*>>(0x52B200, this);
}

i32 mmInput::SaveCodeConfig(class Stream* arg1)
{
    return stub<thiscall_t<i32, mmInput*, class Stream*>>(0x52E6E0, this, arg1);
}

i32 mmInput::SaveConfig(class Stream* arg1)
{
    return stub<thiscall_t<i32, mmInput*, class Stream*>>(0x52E500, this, arg1);
}

void mmInput::SetDeadZone(f32 arg1)
{
    return stub<thiscall_t<void, mmInput*, f32>>(0x52E0F0, this, arg1);
}

void mmInput::SetDefaultConfig(i32 arg1)
{
    return stub<thiscall_t<void, mmInput*, i32>>(0x52B290, this, arg1);
}

void mmInput::SetForceFeedbackScale(f32 arg1)
{
    return stub<thiscall_t<void, mmInput*, f32>>(0x52E1E0, this, arg1);
}

void mmInput::SetRoadForceScale(f32 arg1)
{
    return stub<thiscall_t<void, mmInput*, f32>>(0x52E230, this, arg1);
}

void mmInput::StopAllFF()
{
    return stub<thiscall_t<void, mmInput*>>(0x52E1D0, this);
}

i32 mmInput::ToggleFFEnabled(i32 arg1)
{
    return stub<thiscall_t<i32, mmInput*, i32>>(0x52E280, this, arg1);
}

void mmInput::Update()
{
    return stub<thiscall_t<void, mmInput*>>(0x52C9B0, this);
}

i32 mmInput::WheelConnected()
{
    return stub<thiscall_t<i32, mmInput*>>(0x52E0E0, this);
}

i32 mmInput::WheelHas3Axis()
{
    return stub<thiscall_t<i32, mmInput*>>(0x52E160, this);
}

i32 mmInput::EventToButton(i32 arg1)
{
    return stub<thiscall_t<i32, mmInput*, i32>>(0x52CFE0, this, arg1);
}

f32 mmInput::FilterDiscreteSteering(f32 arg1)
{
    return stub<thiscall_t<f32, mmInput*, f32>>(0x52DAF0, this, arg1);
}

void mmInput::GetBufferedKeyboardData()
{
    return stub<thiscall_t<void, mmInput*>>(0x52CCC0, this);
}

i32 mmInput::GetNextKeyboardEvent(union eqEvent* arg1)
{
    return stub<thiscall_t<i32, mmInput*, union eqEvent*>>(0x52CCE0, this, arg1);
}

void mmInput::PollContinuous(class mmIO* arg1)
{
    return stub<thiscall_t<void, mmInput*, class mmIO*>>(0x52D610, this, arg1);
}

void mmInput::ProcessEvents()
{
    return stub<thiscall_t<void, mmInput*>>(0x52CD30, this);
}

void mmInput::ProcessJoyEvents()
{
    return stub<thiscall_t<void, mmInput*>>(0x52D010, this);
}

void mmInput::ProcessKeyboardEvents()
{
    return stub<thiscall_t<void, mmInput*>>(0x52CC70, this);
}

void mmInput::ProcessMouseEvents()
{
    return stub<thiscall_t<void, mmInput*>>(0x52CC10, this);
}

i64 mmInput::ProcessStates()
{
    return stub<thiscall_t<i64, mmInput*>>(0x52CD50, this);
}

void mmInput::PutEventInQueue(i64 arg1)
{
    return stub<thiscall_t<void, mmInput*, i64>>(0x52D5E0, this, arg1);
}

i64 mmInput::ScanForEvent(union eqEvent* arg1)
{
    return stub<thiscall_t<i64, mmInput*, union eqEvent*>>(0x52D520, this, arg1);
}

i64 mmInput::ScanState(class mmIO* arg1)
{
    return stub<thiscall_t<i64, mmInput*, class mmIO*>>(0x52CE30, this, arg1);
}

define_dummy_symbol(mminput_input);
