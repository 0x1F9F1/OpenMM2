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

#include "povcs.h"

camPovCS::camPovCS()
{
    unimplemented();
}

camPovCS::~camPovCS()
{
    unimplemented();
}

void camPovCS::AfterLoad()
{
    return stub<thiscall_t<void, camPovCS*>>(0x51D710, this);
}

void camPovCS::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, camPovCS*, class datParser&>>(0x51D690, this, arg1);
}

char* camPovCS::GetClassName()
{
    return stub<thiscall_t<char*, camPovCS*>>(0x51D760, this);
}

void camPovCS::MakeActive()
{
    return stub<thiscall_t<void, camPovCS*>>(0x51D530, this);
}

void camPovCS::Reset()
{
    return stub<thiscall_t<void, camPovCS*>>(0x51D540, this);
}

void camPovCS::Update()
{
    return stub<thiscall_t<void, camPovCS*>>(0x51D570, this);
}

void camPovCS::UpdateInput()
{
    return stub<thiscall_t<void, camPovCS*>>(0x51D590, this);
}

void camPovCS::UpdatePOV()
{
    return stub<thiscall_t<void, camPovCS*>>(0x51D5A0, this);
}

define_dummy_symbol(camera_povcs);
