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

#include "view.h"

asViewCS::asViewCS()
{
    unimplemented();
}

asViewCS::~asViewCS()
{
    unimplemented();
}

void asViewCS::Reset()
{
    return stub<thiscall_t<void, asViewCS*>>(0x596390, this);
}

void asViewCS::SetAzimuth()
{
    return stub<thiscall_t<void, asViewCS*>>(0x596330, this);
}

void asViewCS::Update()
{
    return stub<thiscall_t<void, asViewCS*>>(0x596500, this);
}

void asViewCS::UpdateLookAt()
{
    return stub<thiscall_t<void, asViewCS*>>(0x596880, this);
}

void asViewCS::UpdatePOV()
{
    return stub<thiscall_t<void, asViewCS*>>(0x5967E0, this);
}

void asViewCS::UpdatePolar()
{
    return stub<thiscall_t<void, asViewCS*>>(0x596580, this);
}

void asViewCS::UpdateRoam()
{
    return stub<thiscall_t<void, asViewCS*>>(0x5966E0, this);
}

void asViewCS::UpdateStereo()
{
    return stub<thiscall_t<void, asViewCS*>>(0x596C80, this);
}

void asViewCS::UpdateTrack()
{
    return stub<thiscall_t<void, asViewCS*>>(0x5968E0, this);
}

define_dummy_symbol(node_view);
