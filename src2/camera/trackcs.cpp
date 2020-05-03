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

#include "trackcs.h"

camTrackCS::camTrackCS()
{
    unimplemented();
}

camTrackCS::~camTrackCS()
{
    unimplemented();
}

void camTrackCS::AfterLoad()
{
    return stub<thiscall_t<void, camTrackCS*>>(0x51DAF0, this);
}

void camTrackCS::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, camTrackCS*, class datParser&>>(0x51FA80, this, arg1);
}

char* camTrackCS::GetClassName()
{
    return stub<thiscall_t<char*, camTrackCS*>>(0x51FD60, this);
}

void camTrackCS::MakeActive()
{
    return stub<thiscall_t<void, camTrackCS*>>(0x51DAE0, this);
}

void camTrackCS::Reset()
{
    return stub<thiscall_t<void, camTrackCS*>>(0x51DB00, this);
}

void camTrackCS::SwingToRear()
{
    return stub<thiscall_t<void, camTrackCS*>>(0x51F920, this);
}

void camTrackCS::Update()
{
    return stub<thiscall_t<void, camTrackCS*>>(0x51DB50, this);
}

void camTrackCS::UpdateInput()
{
    return stub<thiscall_t<void, camTrackCS*>>(0x51DC60, this);
}

void camTrackCS::Collide(class Vector3 arg1)
{
    return stub<thiscall_t<void, camTrackCS*, class Vector3>>(0x51EED0, this, arg1);
}

void camTrackCS::Front(f32 arg1)
{
    return stub<thiscall_t<void, camTrackCS*, f32>>(0x51F980, this, arg1);
}

void camTrackCS::MinMax(class Matrix34 arg1)
{
    return stub<thiscall_t<void, camTrackCS*, class Matrix34>>(0x51ECC0, this, arg1);
}

void camTrackCS::PreApproach()
{
    return stub<thiscall_t<void, camTrackCS*>>(0x51EB40, this);
}

void camTrackCS::Rear(f32 arg1)
{
    return stub<thiscall_t<void, camTrackCS*, f32>>(0x51FA00, this, arg1);
}

void camTrackCS::UpdateCar()
{
    return stub<thiscall_t<void, camTrackCS*>>(0x51DC70, this);
}

void camTrackCS::UpdateHill()
{
    return stub<thiscall_t<void, camTrackCS*>>(0x51DEE0, this);
}

void camTrackCS::UpdateSwing()
{
    return stub<thiscall_t<void, camTrackCS*>>(0x51EB30, this);
}

void camTrackCS::UpdateTrack()
{
    return stub<thiscall_t<void, camTrackCS*>>(0x51E400, this);
}

define_dummy_symbol(camera_trackcs);
