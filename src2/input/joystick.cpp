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

void ioJoystick::BeginAll()
{
    return stub<cdecl_t<void>>(0x4BBA00);
}

void ioJoystick::EndAll()
{
    return stub<cdecl_t<void>>(0x4BBAB0);
}

void ioJoystick::PollAll()
{
    return stub<cdecl_t<void>>(0x4BBA50);
}

void ioJoystick::UpdateAll()
{
    return stub<cdecl_t<void>>(0x4BBA80);
}

void ioJoystick::Begin()
{
    return stub<thiscall_t<void, ioJoystick*>>(0x4BBAF0, this);
}

void ioJoystick::End()
{
    return stub<thiscall_t<void, ioJoystick*>>(0x4BBD20, this);
}

void ioJoystick::Poll()
{
    return stub<thiscall_t<void, ioJoystick*>>(0x4BBC50, this);
}

void ioJoystick::Update()
{
    return stub<thiscall_t<void, ioJoystick*>>(0x4BBC60, this);
}

i32 __stdcall ioJoystick::EnumDeviceProc(struct DIDEVICEINSTANCEA const* arg1, void* arg2)
{
    return stub<stdcall_t<i32, struct DIDEVICEINSTANCEA const*, void*>>(0x4BB7F0, arg1, arg2);
}

i32 __stdcall ioJoystick::EnumObjectProc(struct DIDEVICEOBJECTINSTANCEA const* arg1, void* arg2)
{
    return stub<stdcall_t<i32, struct DIDEVICEOBJECTINSTANCEA const*, void*>>(0x4BBAE0, arg1, arg2);
}

define_dummy_symbol(input_joystick);
