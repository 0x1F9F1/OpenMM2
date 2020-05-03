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

#include "segmentwrapper.h"

SegmentWrapper::SegmentWrapper()
{
    unimplemented();
}

SegmentWrapper::~SegmentWrapper()
{
    unimplemented();
}

void SegmentWrapper::CleanUp()
{
    return stub<thiscall_t<void, SegmentWrapper*>>(0x517B40, this);
}

bool SegmentWrapper::IsPlaying()
{
    return stub<thiscall_t<bool, SegmentWrapper*>>(0x517A00, this);
}

bool SegmentWrapper::LoadBand(char* arg1)
{
    return stub<thiscall_t<bool, SegmentWrapper*, char*>>(0x5178C0, this, arg1);
}

bool SegmentWrapper::LoadSegmentBands()
{
    return stub<thiscall_t<bool, SegmentWrapper*>>(0x517750, this);
}

bool SegmentWrapper::OpenSegmentFile(char* arg1, bool arg2)
{
    return stub<thiscall_t<bool, SegmentWrapper*, char*, bool>>(0x5175C0, this, arg1, arg2);
}

bool SegmentWrapper::Play(u32 arg1, u32 arg2)
{
    return stub<thiscall_t<bool, SegmentWrapper*, u32, u32>>(0x517A40, this, arg1, arg2);
}

bool SegmentWrapper::PlayBand()
{
    return stub<thiscall_t<bool, SegmentWrapper*>>(0x5179A0, this);
}

bool SegmentWrapper::SetGrooveLevel(u8 arg1, u8 arg2)
{
    return stub<thiscall_t<bool, SegmentWrapper*, u8, u8>>(0x517AE0, this, arg1, arg2);
}

bool SegmentWrapper::Stop()
{
    return stub<thiscall_t<bool, SegmentWrapper*>>(0x517890, this);
}

bool SegmentWrapper::UnloadSegmentBands()
{
    return stub<thiscall_t<bool, SegmentWrapper*>>(0x5177F0, this);
}

void SegmentWrapper::SetLoaderPtr(struct IDirectMusicLoader* arg1)
{
    return stub<cdecl_t<void, struct IDirectMusicLoader*>>(0x517580, arg1);
}

void SegmentWrapper::SetPerformancePtr(struct IDirectMusicPerformance* arg1)
{
    return stub<cdecl_t<void, struct IDirectMusicPerformance*>>(0x517570, arg1);
}

define_dummy_symbol(directmusic_segmentwrapper);
