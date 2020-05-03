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

#include "aiCTFRacer.h"

aiCTFRacer::aiCTFRacer()
{
    unimplemented();
}

aiCTFRacer::~aiCTFRacer()
{
    unimplemented();
}

void aiCTFRacer::DrawRouteThroughTraffic()
{
    return stub<thiscall_t<void, aiCTFRacer*>>(0x554C00, this);
}

void aiCTFRacer::DropFlag(i32 arg1, f32 const* arg2)
{
    return stub<thiscall_t<void, aiCTFRacer*, i32, f32 const*>>(0x554550, this, arg1, arg2);
}

void aiCTFRacer::Init(i32 arg1, char* arg2)
{
    return stub<thiscall_t<void, aiCTFRacer*, i32, char*>>(0x554470, this, arg1, arg2);
}

void aiCTFRacer::PickupFlag()
{
    return stub<thiscall_t<void, aiCTFRacer*>>(0x554630, this);
}

void aiCTFRacer::ReleaseFlag()
{
    return stub<thiscall_t<void, aiCTFRacer*>>(0x554620, this);
}

void aiCTFRacer::Reset()
{
    return stub<thiscall_t<void, aiCTFRacer*>>(0x554510, this);
}

void aiCTFRacer::Update()
{
    return stub<thiscall_t<void, aiCTFRacer*>>(0x554580, this);
}

void aiCTFRacer::AquireFlag()
{
    return stub<thiscall_t<void, aiCTFRacer*>>(0x5547E0, this);
}

void aiCTFRacer::DeliverFlag()
{
    return stub<thiscall_t<void, aiCTFRacer*>>(0x554B00, this);
}

void aiCTFRacer::PreAquireFlag()
{
    return stub<thiscall_t<void, aiCTFRacer*>>(0x554640, this);
}

void aiCTFRacer::PreDeliverFlag()
{
    return stub<thiscall_t<void, aiCTFRacer*>>(0x554990, this);
}

define_dummy_symbol(ai_aiCTFRacer);
