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

#include "aiRouteRacer.h"

aiRouteRacer::aiRouteRacer()
{
    unimplemented();
}

aiRouteRacer::~aiRouteRacer()
{
    unimplemented();
}

void aiRouteRacer::DrawRouteThroughTraffic()
{
    return stub<thiscall_t<void, aiRouteRacer*>>(0x53D900, this);
}

i32 aiRouteRacer::Finished()
{
    return stub<thiscall_t<i32, aiRouteRacer*>>(0x53D6E0, this);
}

void aiRouteRacer::Init(i32 arg1, char* arg2)
{
    return stub<thiscall_t<void, aiRouteRacer*, i32, char*>>(0x53D060, this, arg1, arg2);
}

void aiRouteRacer::Reset()
{
    return stub<thiscall_t<void, aiRouteRacer*>>(0x53D390, this);
}

void aiRouteRacer::Update()
{
    return stub<thiscall_t<void, aiRouteRacer*>>(0x53D3B0, this);
}

void aiRouteRacer::Disabled()
{
    return stub<thiscall_t<void, aiRouteRacer*>>(0x53D6B0, this);
}

void aiRouteRacer::DriveRoute()
{
    return stub<thiscall_t<void, aiRouteRacer*>>(0x53D4B0, this);
}

define_dummy_symbol(ai_aiRouteRacer);
