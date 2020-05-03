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

#include "dmusicwavebuffer.h"

DMusicWaveBuffer::DMusicWaveBuffer()
{
    unimplemented();
}

DMusicWaveBuffer::~DMusicWaveBuffer()
{
    unimplemented();
}

i32 DMusicWaveBuffer::Create(struct IDirectMusicPort* arg1, struct IDirectSound* arg2)
{
    return stub<thiscall_t<i32, DMusicWaveBuffer*, struct IDirectMusicPort*, struct IDirectSound*>>(
        0x518770, this, arg1, arg2);
}

void DMusicWaveBuffer::SetPan(f32 arg1)
{
    return stub<thiscall_t<void, DMusicWaveBuffer*, f32>>(0x5189E0, this, arg1);
}

void DMusicWaveBuffer::SetVolume(f32 arg1)
{
    return stub<thiscall_t<void, DMusicWaveBuffer*, f32>>(0x518930, this, arg1);
}

define_dummy_symbol(directmusic_dmusicwavebuffer);
