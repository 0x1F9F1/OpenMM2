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

#include "feedback.h"

vehFeedback::vehFeedback()
{
    unimplemented();
}

vehFeedback::~vehFeedback()
{
    unimplemented();
}

class ioPad* vehFeedback::GetPad()
{
    return stub<thiscall_t<class ioPad*, vehFeedback*>>(0x4D5750, this);
}

i32 vehFeedback::GetPadID()
{
    return stub<thiscall_t<i32, vehFeedback*>>(0x4D5770, this);
}

void vehFeedback::SetPad(class ioPad* arg1)
{
    return stub<thiscall_t<void, vehFeedback*, class ioPad*>>(0x4D5760, this, arg1);
}

void vehFeedback::SetPadID(i32 arg1)
{
    return stub<thiscall_t<void, vehFeedback*, i32>>(0x4D5780, this, arg1);
}

i32 vehFeedback::SetFeedback(bool arg1)
{
    return stub<thiscall_t<i32, vehFeedback*, bool>>(0x4D57A0, this, arg1);
}

i32 vehFeedback::SetTimingUnit(f32 arg1)
{
    return stub<thiscall_t<i32, vehFeedback*, f32>>(0x4D57B0, this, arg1);
}

i32 vehFeedback::GetNumActuators()
{
    return stub<thiscall_t<i32, vehFeedback*>>(0x4D57E0, this);
}

i32 vehFeedback::SetActuatorValue(i32 arg1, f32 arg2)
{
    return stub<thiscall_t<i32, vehFeedback*, i32, f32>>(0x4D57F0, this, arg1, arg2);
}

i32 vehFeedback::PlayFeedbackSample(i32 arg1, i32 arg2, f32* arg3, i32* arg4)
{
    return stub<thiscall_t<i32, vehFeedback*, i32, i32, f32*, i32*>>(0x4D5830, this, arg1, arg2, arg3, arg4);
}

i32 vehFeedback::PlayFeedbackSampleID(i32 arg1)
{
    return stub<thiscall_t<i32, vehFeedback*, i32>>(0x4D58B0, this, arg1);
}

f32 vehFeedback::GetNextUnit(i32 arg1)
{
    return stub<thiscall_t<f32, vehFeedback*, i32>>(0x4D5980, this, arg1);
}

i32 vehFeedback::Update()
{
    return stub<thiscall_t<i32, vehFeedback*>>(0x4D5A80, this);
}

i32 vehFeedback::ClearAllSamples(bool arg1)
{
    return stub<thiscall_t<i32, vehFeedback*, bool>>(0x4D5910, this, arg1);
}

define_dummy_symbol(vehicle_feedback);
