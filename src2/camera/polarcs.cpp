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

#include "polarcs.h"

camPolarCS::camPolarCS()
{
    unimplemented();
}

camPolarCS::~camPolarCS()
{
    unimplemented();
}

void camPolarCS::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, camPolarCS*, class datParser&>>(0x521380, this, arg1);
}

char* camPolarCS::GetClassName()
{
    return stub<thiscall_t<char*, camPolarCS*>>(0x521460, this);
}

void camPolarCS::MakeActive()
{
    return stub<thiscall_t<void, camPolarCS*>>(0x521020, this);
}

void camPolarCS::Reset()
{
    return stub<thiscall_t<void, camPolarCS*>>(0x521010, this);
}

void camPolarCS::Update()
{
    return stub<thiscall_t<void, camPolarCS*>>(0x521030, this);
}

define_dummy_symbol(camera_polarcs);
