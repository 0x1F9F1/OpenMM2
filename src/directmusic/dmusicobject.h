/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2019 Brick

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

#pragma once

/*
    directmusic:dmusicobject

    0x515D40 | public: __thiscall DMusicObject::DMusicObject(int) | ??0DMusicObject@@QAE@H@Z
    0x515DF0 | public: __thiscall DMusicObject::~DMusicObject(void) | ??1DMusicObject@@QAE@XZ
    0x515F00 | public: void __thiscall DMusicObject::CleanUpSegmentWrappers(void) | ?CleanUpSegmentWrappers@DMusicObject@@QAEXXZ
    0x515F60 | public: int __thiscall DMusicObject::Init(struct IDirectSound *,unsigned long,int,unsigned long,unsigned long) | ?Init@DMusicObject@@QAEHPAUIDirectSound@@KHKK@Z
    0x516050 | private: int __thiscall DMusicObject::InitPerformance(struct IDirectSound *) | ?InitPerformance@DMusicObject@@AAEHPAUIDirectSound@@@Z
    0x516120 | private: int __thiscall DMusicObject::InitNotificationThread(void) | ?InitNotificationThread@DMusicObject@@AAEHXZ
    0x516220 | private: int __thiscall DMusicObject::InitLoader(void) | ?InitLoader@DMusicObject@@AAEHXZ
    0x5162B0 | public: int __thiscall DMusicObject::IsPlaying(void) | ?IsPlaying@DMusicObject@@QAEHXZ
    0x5162D0 | public: void __thiscall DMusicObject::HandleNotifications(void) | ?HandleNotifications@DMusicObject@@QAEXXZ
    0x516300 | private: int __thiscall DMusicObject::InitPort(struct IDirectSound *,unsigned long,int,unsigned long,unsigned long) | ?InitPort@DMusicObject@@AAEHPAUIDirectSound@@KHKK@Z
    0x5164B0 | private: int __thiscall DMusicObject::AssignPChannelBlocks(unsigned long) | ?AssignPChannelBlocks@DMusicObject@@AAEHK@Z
    0x516510 | public: int __thiscall DMusicObject::FindBestPort(struct _DMUS_PORTCAPS &) | ?FindBestPort@DMusicObject@@QAEHAAU_DMUS_PORTCAPS@@@Z
    0x516520 | private: int __thiscall DMusicObject::RatePort(struct _DMUS_PORTCAPS &) | ?RatePort@DMusicObject@@AAEHAAU_DMUS_PORTCAPS@@@Z
    0x516530 | public: int __thiscall DMusicObject::GetNumPorts(void) | ?GetNumPorts@DMusicObject@@QAEHXZ
    0x516540 | public: int __thiscall DMusicObject::FindMSSoftWareSynth(struct _DMUS_PORTCAPS &) | ?FindMSSoftWareSynth@DMusicObject@@QAEHAAU_DMUS_PORTCAPS@@@Z
    0x516610 | public: int __thiscall DMusicObject::SetSearchDirectory(char *) | ?SetSearchDirectory@DMusicObject@@QAEHPAD@Z
    0x516680 | public: int __thiscall DMusicObject::ScanDirectory(void) | ?ScanDirectory@DMusicObject@@QAEHXZ
    0x516750 | public: int __thiscall DMusicObject::OpenSegmentFile(char *,int,bool) | ?OpenSegmentFile@DMusicObject@@QAEHPADH_N@Z
    0x516860 | public: int __thiscall DMusicObject::PlaySegment(unsigned long) | ?PlaySegment@DMusicObject@@QAEHK@Z
    0x5168A0 | public: int __thiscall DMusicObject::PlayMotif(int,unsigned long) | ?PlayMotif@DMusicObject@@QAEHHK@Z
    0x516900 | public: int __thiscall DMusicObject::StopSegment(int) | ?StopSegment@DMusicObject@@QAEHH@Z
    0x516970 | public: int __thiscall DMusicObject::LoadMotif(char *,char *,int) | ?LoadMotif@DMusicObject@@QAEHPAD0H@Z
    0x516BB0 | public: int __thiscall DMusicObject::LoadBand(char *,int,int) | ?LoadBand@DMusicObject@@QAEHPADHH@Z
    0x516CD0 | public: void __thiscall DMusicObject::AllocateMotifs(int) | ?AllocateMotifs@DMusicObject@@QAEXH@Z
    0x516D60 | public: int __thiscall DMusicObject::PlayBand(int,int) | ?PlayBand@DMusicObject@@QAEHHH@Z
    0x516DE0 | public: int __thiscall DMusicObject::CreateComposer(void) | ?CreateComposer@DMusicObject@@QAEHXZ
    0x516E20 | public: int __thiscall DMusicObject::SegmentSwitch(int) | ?SegmentSwitch@DMusicObject@@QAEHH@Z
    0x516E90 | public: int __thiscall DMusicObject::SegmentSwitch(int,unsigned short,unsigned long) | ?SegmentSwitch@DMusicObject@@QAEHHGK@Z
    0x516FB0 | public: int __thiscall DMusicObject::ScaleMasterVolume(long) | ?ScaleMasterVolume@DMusicObject@@QAEHJ@Z
    0x516FF0 | private: int __thiscall DMusicObject::SetGrooveLevel(unsigned char,unsigned char) | ?SetGrooveLevel@DMusicObject@@AAEHEE@Z
    0x517020 | public: int __thiscall DMusicObject::ScaleMasterTempo(float) | ?ScaleMasterTempo@DMusicObject@@QAEHM@Z
    0x517060 | unsigned long __stdcall ThreadProc(void *) | ?ThreadProc@@YGKPAX@Z
    0x5170A0 | public: int __thiscall DMusicObject::Activate(int) | ?Activate@DMusicObject@@QAEHH@Z
    0x5170E0 | public: class DMusicWaveBuffer * __thiscall DMusicObject::GetDMusicWaveBuffer(void) | ?GetDMusicWaveBuffer@DMusicObject@@QAEPAVDMusicWaveBuffer@@XZ
    0x5170F0 | void __cdecl ErrorDisplay(char *,char *,long) | ?ErrorDisplay@@YAXPAD0J@Z
    0x517390 | public: void * __thiscall SegmentWrapper::`vector deleting destructor'(unsigned int) | ??_ESegmentWrapper@@QAEPAXI@Z
*/

// #include "hooking.h"
