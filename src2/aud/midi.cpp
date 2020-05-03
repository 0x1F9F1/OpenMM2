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

#include "midi.h"

void audMIDI::Destroy()
{
    return stub<thiscall_t<void, audMIDI*>>(0x5A4A40, this);
}

i32 audMIDI::GetMIDIHandle()
{
    return stub<thiscall_t<i32, audMIDI*>>(0x5A4C70, this);
}

i32 audMIDI::GetNumSeqTracks()
{
    return stub<thiscall_t<i32, audMIDI*>>(0x5A4B70, this);
}

i32 audMIDI::GetSeqEndPosition(i32* arg1)
{
    return stub<thiscall_t<i32, audMIDI*, i32*>>(0x5A4A90, this, arg1);
}

i32 audMIDI::GetSeqPosition(i32* arg1)
{
    return stub<thiscall_t<i32, audMIDI*, i32*>>(0x5A4C00, this, arg1);
}

i32 audMIDI::GetSeqStartPosition(i32* arg1)
{
    return stub<thiscall_t<i32, audMIDI*, i32*>>(0x5A4AC0, this, arg1);
}

enum audObject::AUD_OBJECTSTATUS audMIDI::GetStatus()
{
    return stub<thiscall_t<enum audObject::AUD_OBJECTSTATUS, audMIDI*>>(0x5A47E0, this);
}

bool audMIDI::GetTrackInfo()
{
    return stub<thiscall_t<bool, audMIDI*>>(0x5A4AF0, this);
}

i32 audMIDI::GetTrackTime()
{
    return stub<thiscall_t<i32, audMIDI*>>(0x5A4A70, this);
}

void audMIDI::Init()
{
    return stub<thiscall_t<void, audMIDI*>>(0x5A46B0, this);
}

bool audMIDI::LoadMIDIFile(char* arg1, i32 arg2, void** arg3)
{
    return stub<thiscall_t<bool, audMIDI*, char*, i32, void**>>(0x5A46F0, this, arg1, arg2, arg3);
}

bool audMIDI::PauseResume(bool arg1)
{
    return stub<thiscall_t<bool, audMIDI*, bool>>(0x5A4990, this, arg1);
}

bool audMIDI::Play()
{
    return stub<thiscall_t<bool, audMIDI*>>(0x5A4870, this);
}

bool audMIDI::SetPan(f32 arg1)
{
    return stub<thiscall_t<bool, audMIDI*, f32>>(0x5A4930, this, arg1);
}

bool audMIDI::SetPitch(f32 arg1)
{
    return stub<thiscall_t<bool, audMIDI*, f32>>(0x5A4920, this, arg1);
}

bool audMIDI::SetSeqPosition(i32 arg1)
{
    return stub<thiscall_t<bool, audMIDI*, i32>>(0x5A4BC0, this, arg1);
}

bool audMIDI::SetTempo(f32 arg1)
{
    return stub<thiscall_t<bool, audMIDI*, f32>>(0x5A49F0, this, arg1);
}

bool audMIDI::SetVolume(f32 arg1)
{
    return stub<thiscall_t<bool, audMIDI*, f32>>(0x5A48E0, this, arg1);
}

bool audMIDI::Stop()
{
    return stub<thiscall_t<bool, audMIDI*>>(0x5A48B0, this);
}

bool audMIDI::Update(i32 arg1)
{
    return stub<thiscall_t<bool, audMIDI*, i32>>(0x5A47D0, this, arg1);
}

define_dummy_symbol(aud_midi);
