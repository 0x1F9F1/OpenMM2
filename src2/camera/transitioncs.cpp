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

#include "transitioncs.h"

camTransitionCS::camTransitionCS()
{
    unimplemented();
}

camTransitionCS::~camTransitionCS()
{
    unimplemented();
}

void camTransitionCS::ForceMatrixDelta(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, camTransitionCS*, class Vector3 const&>>(0x521B90, this, arg1);
}

void camTransitionCS::Init(class vehCar* arg1)
{
    return stub<thiscall_t<void, camTransitionCS*, class vehCar*>>(0x5215D0, this, arg1);
}

void camTransitionCS::NewTransition(class camCarCS* arg1, class camCarCS* arg2)
{
    return stub<thiscall_t<void, camTransitionCS*, class camCarCS*, class camCarCS*>>(0x521BC0, this, arg1, arg2);
}

void camTransitionCS::NextTransition(class camCarCS* arg1)
{
    return stub<thiscall_t<void, camTransitionCS*, class camCarCS*>>(0x521BF0, this, arg1);
}

void camTransitionCS::Reset()
{
    return stub<thiscall_t<void, camTransitionCS*>>(0x521600, this);
}

void camTransitionCS::ReverseTransition()
{
    return stub<thiscall_t<void, camTransitionCS*>>(0x521CE0, this);
}

void camTransitionCS::StartNextTransition()
{
    return stub<thiscall_t<void, camTransitionCS*>>(0x521CA0, this);
}

void camTransitionCS::StartTransition()
{
    return stub<thiscall_t<void, camTransitionCS*>>(0x521C30, this);
}

void camTransitionCS::Update()
{
    return stub<thiscall_t<void, camTransitionCS*>>(0x521610, this);
}

define_dummy_symbol(camera_transitioncs);
