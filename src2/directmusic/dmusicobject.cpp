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

#include "dmusicobject.h"

DMusicObject::DMusicObject(i32 arg1)
{
    unimplemented();
}

DMusicObject::~DMusicObject()
{
    unimplemented();
}

i32 DMusicObject::Activate(i32 arg1)
{
    return stub<thiscall_t<i32, DMusicObject*, i32>>(0x5170A0, this, arg1);
}

void DMusicObject::AllocateMotifs(i32 arg1)
{
    return stub<thiscall_t<void, DMusicObject*, i32>>(0x516CD0, this, arg1);
}

void DMusicObject::CleanUpSegmentWrappers()
{
    return stub<thiscall_t<void, DMusicObject*>>(0x515F00, this);
}

i32 DMusicObject::CreateComposer()
{
    return stub<thiscall_t<i32, DMusicObject*>>(0x516DE0, this);
}

i32 DMusicObject::FindBestPort(struct _DMUS_PORTCAPS& arg1)
{
    return stub<thiscall_t<i32, DMusicObject*, struct _DMUS_PORTCAPS&>>(0x516510, this, arg1);
}

i32 DMusicObject::FindMSSoftWareSynth(struct _DMUS_PORTCAPS& arg1)
{
    return stub<thiscall_t<i32, DMusicObject*, struct _DMUS_PORTCAPS&>>(0x516540, this, arg1);
}

class DMusicWaveBuffer* DMusicObject::GetDMusicWaveBuffer()
{
    return stub<thiscall_t<class DMusicWaveBuffer*, DMusicObject*>>(0x5170E0, this);
}

i32 DMusicObject::GetNumPorts()
{
    return stub<thiscall_t<i32, DMusicObject*>>(0x516530, this);
}

void DMusicObject::HandleNotifications()
{
    return stub<thiscall_t<void, DMusicObject*>>(0x5162D0, this);
}

i32 DMusicObject::Init(struct IDirectSound* arg1, u32 arg2, i32 arg3, u32 arg4, u32 arg5)
{
    return stub<thiscall_t<i32, DMusicObject*, struct IDirectSound*, u32, i32, u32, u32>>(
        0x515F60, this, arg1, arg2, arg3, arg4, arg5);
}

i32 DMusicObject::IsPlaying()
{
    return stub<thiscall_t<i32, DMusicObject*>>(0x5162B0, this);
}

i32 DMusicObject::LoadBand(char* arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<i32, DMusicObject*, char*, i32, i32>>(0x516BB0, this, arg1, arg2, arg3);
}

i32 DMusicObject::LoadMotif(char* arg1, char* arg2, i32 arg3)
{
    return stub<thiscall_t<i32, DMusicObject*, char*, char*, i32>>(0x516970, this, arg1, arg2, arg3);
}

i32 DMusicObject::OpenSegmentFile(char* arg1, i32 arg2, bool arg3)
{
    return stub<thiscall_t<i32, DMusicObject*, char*, i32, bool>>(0x516750, this, arg1, arg2, arg3);
}

i32 DMusicObject::PlayBand(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<i32, DMusicObject*, i32, i32>>(0x516D60, this, arg1, arg2);
}

i32 DMusicObject::PlayMotif(i32 arg1, u32 arg2)
{
    return stub<thiscall_t<i32, DMusicObject*, i32, u32>>(0x5168A0, this, arg1, arg2);
}

i32 DMusicObject::PlaySegment(u32 arg1)
{
    return stub<thiscall_t<i32, DMusicObject*, u32>>(0x516860, this, arg1);
}

i32 DMusicObject::ScaleMasterTempo(f32 arg1)
{
    return stub<thiscall_t<i32, DMusicObject*, f32>>(0x517020, this, arg1);
}

i32 DMusicObject::ScaleMasterVolume(i32 arg1)
{
    return stub<thiscall_t<i32, DMusicObject*, i32>>(0x516FB0, this, arg1);
}

i32 DMusicObject::ScanDirectory()
{
    return stub<thiscall_t<i32, DMusicObject*>>(0x516680, this);
}

i32 DMusicObject::SegmentSwitch(i32 arg1)
{
    return stub<thiscall_t<i32, DMusicObject*, i32>>(0x516E20, this, arg1);
}

i32 DMusicObject::SegmentSwitch(i32 arg1, u16 arg2, u32 arg3)
{
    return stub<thiscall_t<i32, DMusicObject*, i32, u16, u32>>(0x516E90, this, arg1, arg2, arg3);
}

i32 DMusicObject::SetSearchDirectory(char* arg1)
{
    return stub<thiscall_t<i32, DMusicObject*, char*>>(0x516610, this, arg1);
}

i32 DMusicObject::StopSegment(i32 arg1)
{
    return stub<thiscall_t<i32, DMusicObject*, i32>>(0x516900, this, arg1);
}

i32 DMusicObject::AssignPChannelBlocks(u32 arg1)
{
    return stub<thiscall_t<i32, DMusicObject*, u32>>(0x5164B0, this, arg1);
}

i32 DMusicObject::InitLoader()
{
    return stub<thiscall_t<i32, DMusicObject*>>(0x516220, this);
}

i32 DMusicObject::InitNotificationThread()
{
    return stub<thiscall_t<i32, DMusicObject*>>(0x516120, this);
}

i32 DMusicObject::InitPerformance(struct IDirectSound* arg1)
{
    return stub<thiscall_t<i32, DMusicObject*, struct IDirectSound*>>(0x516050, this, arg1);
}

i32 DMusicObject::InitPort(struct IDirectSound* arg1, u32 arg2, i32 arg3, u32 arg4, u32 arg5)
{
    return stub<thiscall_t<i32, DMusicObject*, struct IDirectSound*, u32, i32, u32, u32>>(
        0x516300, this, arg1, arg2, arg3, arg4, arg5);
}

i32 DMusicObject::RatePort(struct _DMUS_PORTCAPS& arg1)
{
    return stub<thiscall_t<i32, DMusicObject*, struct _DMUS_PORTCAPS&>>(0x516520, this, arg1);
}

i32 DMusicObject::SetGrooveLevel(u8 arg1, u8 arg2)
{
    return stub<thiscall_t<i32, DMusicObject*, u8, u8>>(0x516FF0, this, arg1, arg2);
}

void ErrorDisplay(char* arg1, char* arg2, i32 arg3)
{
    return stub<cdecl_t<void, char*, char*, i32>>(0x5170F0, arg1, arg2, arg3);
}

u32 __stdcall ThreadProc(void* arg1)
{
    return stub<stdcall_t<u32, void*>>(0x517060, arg1);
}

define_dummy_symbol(directmusic_dmusicobject);
