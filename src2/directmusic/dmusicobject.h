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

class DMusicObject
{
public:
    // 0x515D40 | ??0DMusicObject@@QAE@H@Z
    DMusicObject(i32 arg1);

    // 0x515DF0 | ??1DMusicObject@@QAE@XZ
    ~DMusicObject();

    // 0x5170A0 | ?Activate@DMusicObject@@QAEHH@Z
    i32 Activate(i32 arg1);

    // 0x516CD0 | ?AllocateMotifs@DMusicObject@@QAEXH@Z
    void AllocateMotifs(i32 arg1);

    // 0x515F00 | ?CleanUpSegmentWrappers@DMusicObject@@QAEXXZ
    void CleanUpSegmentWrappers();

    // 0x516DE0 | ?CreateComposer@DMusicObject@@QAEHXZ
    i32 CreateComposer();

    // 0x516510 | ?FindBestPort@DMusicObject@@QAEHAAU_DMUS_PORTCAPS@@@Z
    i32 FindBestPort(struct _DMUS_PORTCAPS& arg1);

    // 0x516540 | ?FindMSSoftWareSynth@DMusicObject@@QAEHAAU_DMUS_PORTCAPS@@@Z
    i32 FindMSSoftWareSynth(struct _DMUS_PORTCAPS& arg1);

    // 0x5170E0 | ?GetDMusicWaveBuffer@DMusicObject@@QAEPAVDMusicWaveBuffer@@XZ
    class DMusicWaveBuffer* GetDMusicWaveBuffer();

    // 0x516530 | ?GetNumPorts@DMusicObject@@QAEHXZ
    i32 GetNumPorts();

    // 0x5162D0 | ?HandleNotifications@DMusicObject@@QAEXXZ
    void HandleNotifications();

    // 0x515F60 | ?Init@DMusicObject@@QAEHPAUIDirectSound@@KHKK@Z
    i32 Init(struct IDirectSound* arg1, u32 arg2, i32 arg3, u32 arg4, u32 arg5);

    // 0x5162B0 | ?IsPlaying@DMusicObject@@QAEHXZ
    i32 IsPlaying();

    // 0x516BB0 | ?LoadBand@DMusicObject@@QAEHPADHH@Z
    i32 LoadBand(char* arg1, i32 arg2, i32 arg3);

    // 0x516970 | ?LoadMotif@DMusicObject@@QAEHPAD0H@Z
    i32 LoadMotif(char* arg1, char* arg2, i32 arg3);

    // 0x516750 | ?OpenSegmentFile@DMusicObject@@QAEHPADH_N@Z
    i32 OpenSegmentFile(char* arg1, i32 arg2, bool arg3);

    // 0x516D60 | ?PlayBand@DMusicObject@@QAEHHH@Z
    i32 PlayBand(i32 arg1, i32 arg2);

    // 0x5168A0 | ?PlayMotif@DMusicObject@@QAEHHK@Z
    i32 PlayMotif(i32 arg1, u32 arg2);

    // 0x516860 | ?PlaySegment@DMusicObject@@QAEHK@Z
    i32 PlaySegment(u32 arg1);

    // 0x517020 | ?ScaleMasterTempo@DMusicObject@@QAEHM@Z
    i32 ScaleMasterTempo(f32 arg1);

    // 0x516FB0 | ?ScaleMasterVolume@DMusicObject@@QAEHJ@Z
    i32 ScaleMasterVolume(i32 arg1);

    // 0x516680 | ?ScanDirectory@DMusicObject@@QAEHXZ
    i32 ScanDirectory();

    // 0x516E20 | ?SegmentSwitch@DMusicObject@@QAEHH@Z
    i32 SegmentSwitch(i32 arg1);

    // 0x516E90 | ?SegmentSwitch@DMusicObject@@QAEHHGK@Z
    i32 SegmentSwitch(i32 arg1, u16 arg2, u32 arg3);

    // 0x516610 | ?SetSearchDirectory@DMusicObject@@QAEHPAD@Z
    i32 SetSearchDirectory(char* arg1);

    // 0x516900 | ?StopSegment@DMusicObject@@QAEHH@Z
    i32 StopSegment(i32 arg1);

private:
    // 0x5164B0 | ?AssignPChannelBlocks@DMusicObject@@AAEHK@Z
    i32 AssignPChannelBlocks(u32 arg1);

    // 0x516220 | ?InitLoader@DMusicObject@@AAEHXZ
    i32 InitLoader();

    // 0x516120 | ?InitNotificationThread@DMusicObject@@AAEHXZ
    i32 InitNotificationThread();

    // 0x516050 | ?InitPerformance@DMusicObject@@AAEHPAUIDirectSound@@@Z
    i32 InitPerformance(struct IDirectSound* arg1);

    // 0x516300 | ?InitPort@DMusicObject@@AAEHPAUIDirectSound@@KHKK@Z
    i32 InitPort(struct IDirectSound* arg1, u32 arg2, i32 arg3, u32 arg4, u32 arg5);

    // 0x516520 | ?RatePort@DMusicObject@@AAEHAAU_DMUS_PORTCAPS@@@Z
    i32 RatePort(struct _DMUS_PORTCAPS& arg1);

    // 0x516FF0 | ?SetGrooveLevel@DMusicObject@@AAEHEE@Z
    i32 SetGrooveLevel(u8 arg1, u8 arg2);
};

check_size(DMusicObject, 0x38);

// 0x5170F0 | ?ErrorDisplay@@YAXPAD0J@Z
void ErrorDisplay(char* arg1, char* arg2, i32 arg3);

// 0x517060 | ?ThreadProc@@YGKPAX@Z
u32 __stdcall ThreadProc(void* arg1);
