/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
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

// 0x517060 | ?ThreadProc@@YGKPAX@Z
inline uint32_t __stdcall ThreadProc(void* arg1)
{
    return stub<stdcall_t<uint32_t, void*>>(0x517060, arg1);
}

// 0x5170F0 | ?ErrorDisplay@@YAXPAD0J@Z
inline void ErrorDisplay(char* arg1, char* arg2, int32_t arg3)
{
    return stub<cdecl_t<void, char*, char*, int32_t>>(0x5170F0, arg1, arg2, arg3);
}

class DMusicObject
{
public:
    // 0x515D40 | ??0DMusicObject@@QAE@H@Z
    inline DMusicObject(int32_t arg1)
    {
        stub<member_func_t<void, DMusicObject, int32_t>>(0x515D40, this, arg1);
    }

    // 0x515DF0 | ??1DMusicObject@@QAE@XZ
    inline ~DMusicObject()
    {
        stub<member_func_t<void, DMusicObject>>(0x515DF0, this);
    }

    // 0x515F00 | ?CleanUpSegmentWrappers@DMusicObject@@QAEXXZ
    inline void CleanUpSegmentWrappers()
    {
        return stub<member_func_t<void, DMusicObject>>(0x515F00, this);
    }

    // 0x515F60 | ?Init@DMusicObject@@QAEHPAUIDirectSound@@KHKK@Z
    inline int32_t Init(struct IDirectSound* arg1, uint32_t arg2, int32_t arg3, uint32_t arg4, uint32_t arg5)
    {
        return stub<member_func_t<int32_t, DMusicObject, struct IDirectSound*, uint32_t, int32_t, uint32_t, uint32_t>>(
            0x515F60, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x516050 | ?InitPerformance@DMusicObject@@AAEHPAUIDirectSound@@@Z
    inline int32_t InitPerformance(struct IDirectSound* arg1)
    {
        return stub<member_func_t<int32_t, DMusicObject, struct IDirectSound*>>(0x516050, this, arg1);
    }

    // 0x516120 | ?InitNotificationThread@DMusicObject@@AAEHXZ
    inline int32_t InitNotificationThread()
    {
        return stub<member_func_t<int32_t, DMusicObject>>(0x516120, this);
    }

    // 0x516220 | ?InitLoader@DMusicObject@@AAEHXZ
    inline int32_t InitLoader()
    {
        return stub<member_func_t<int32_t, DMusicObject>>(0x516220, this);
    }

    // 0x5162B0 | ?IsPlaying@DMusicObject@@QAEHXZ
    inline int32_t IsPlaying()
    {
        return stub<member_func_t<int32_t, DMusicObject>>(0x5162B0, this);
    }

    // 0x5162D0 | ?HandleNotifications@DMusicObject@@QAEXXZ
    inline void HandleNotifications()
    {
        return stub<member_func_t<void, DMusicObject>>(0x5162D0, this);
    }

    // 0x516300 | ?InitPort@DMusicObject@@AAEHPAUIDirectSound@@KHKK@Z
    inline int32_t InitPort(struct IDirectSound* arg1, uint32_t arg2, int32_t arg3, uint32_t arg4, uint32_t arg5)
    {
        return stub<member_func_t<int32_t, DMusicObject, struct IDirectSound*, uint32_t, int32_t, uint32_t, uint32_t>>(
            0x516300, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x5164B0 | ?AssignPChannelBlocks@DMusicObject@@AAEHK@Z
    inline int32_t AssignPChannelBlocks(uint32_t arg1)
    {
        return stub<member_func_t<int32_t, DMusicObject, uint32_t>>(0x5164B0, this, arg1);
    }

    // 0x516510 | ?FindBestPort@DMusicObject@@QAEHAAU_DMUS_PORTCAPS@@@Z
    inline int32_t FindBestPort(struct _DMUS_PORTCAPS& arg1)
    {
        return stub<member_func_t<int32_t, DMusicObject, struct _DMUS_PORTCAPS&>>(0x516510, this, arg1);
    }

    // 0x516520 | ?RatePort@DMusicObject@@AAEHAAU_DMUS_PORTCAPS@@@Z
    inline int32_t RatePort(struct _DMUS_PORTCAPS& arg1)
    {
        return stub<member_func_t<int32_t, DMusicObject, struct _DMUS_PORTCAPS&>>(0x516520, this, arg1);
    }

    // 0x516530 | ?GetNumPorts@DMusicObject@@QAEHXZ
    inline int32_t GetNumPorts()
    {
        return stub<member_func_t<int32_t, DMusicObject>>(0x516530, this);
    }

    // 0x516540 | ?FindMSSoftWareSynth@DMusicObject@@QAEHAAU_DMUS_PORTCAPS@@@Z
    inline int32_t FindMSSoftWareSynth(struct _DMUS_PORTCAPS& arg1)
    {
        return stub<member_func_t<int32_t, DMusicObject, struct _DMUS_PORTCAPS&>>(0x516540, this, arg1);
    }

    // 0x516610 | ?SetSearchDirectory@DMusicObject@@QAEHPAD@Z
    inline int32_t SetSearchDirectory(char* arg1)
    {
        return stub<member_func_t<int32_t, DMusicObject, char*>>(0x516610, this, arg1);
    }

    // 0x516680 | ?ScanDirectory@DMusicObject@@QAEHXZ
    inline int32_t ScanDirectory()
    {
        return stub<member_func_t<int32_t, DMusicObject>>(0x516680, this);
    }

    // 0x516750 | ?OpenSegmentFile@DMusicObject@@QAEHPADH_N@Z
    inline int32_t OpenSegmentFile(char* arg1, int32_t arg2, bool arg3)
    {
        return stub<member_func_t<int32_t, DMusicObject, char*, int32_t, bool>>(0x516750, this, arg1, arg2, arg3);
    }

    // 0x516860 | ?PlaySegment@DMusicObject@@QAEHK@Z
    inline int32_t PlaySegment(uint32_t arg1)
    {
        return stub<member_func_t<int32_t, DMusicObject, uint32_t>>(0x516860, this, arg1);
    }

    // 0x5168A0 | ?PlayMotif@DMusicObject@@QAEHHK@Z
    inline int32_t PlayMotif(int32_t arg1, uint32_t arg2)
    {
        return stub<member_func_t<int32_t, DMusicObject, int32_t, uint32_t>>(0x5168A0, this, arg1, arg2);
    }

    // 0x516900 | ?StopSegment@DMusicObject@@QAEHH@Z
    inline int32_t StopSegment(int32_t arg1)
    {
        return stub<member_func_t<int32_t, DMusicObject, int32_t>>(0x516900, this, arg1);
    }

    // 0x516970 | ?LoadMotif@DMusicObject@@QAEHPAD0H@Z
    inline int32_t LoadMotif(char* arg1, char* arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, DMusicObject, char*, char*, int32_t>>(0x516970, this, arg1, arg2, arg3);
    }

    // 0x516BB0 | ?LoadBand@DMusicObject@@QAEHPADHH@Z
    inline int32_t LoadBand(char* arg1, int32_t arg2, int32_t arg3)
    {
        return stub<member_func_t<int32_t, DMusicObject, char*, int32_t, int32_t>>(0x516BB0, this, arg1, arg2, arg3);
    }

    // 0x516CD0 | ?AllocateMotifs@DMusicObject@@QAEXH@Z
    inline void AllocateMotifs(int32_t arg1)
    {
        return stub<member_func_t<void, DMusicObject, int32_t>>(0x516CD0, this, arg1);
    }

    // 0x516D60 | ?PlayBand@DMusicObject@@QAEHHH@Z
    inline int32_t PlayBand(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, DMusicObject, int32_t, int32_t>>(0x516D60, this, arg1, arg2);
    }

    // 0x516DE0 | ?CreateComposer@DMusicObject@@QAEHXZ
    inline int32_t CreateComposer()
    {
        return stub<member_func_t<int32_t, DMusicObject>>(0x516DE0, this);
    }

    // 0x516E20 | ?SegmentSwitch@DMusicObject@@QAEHH@Z
    inline int32_t SegmentSwitch(int32_t arg1)
    {
        return stub<member_func_t<int32_t, DMusicObject, int32_t>>(0x516E20, this, arg1);
    }

    // 0x516E90 | ?SegmentSwitch@DMusicObject@@QAEHHGK@Z
    inline int32_t SegmentSwitch(int32_t arg1, uint16_t arg2, uint32_t arg3)
    {
        return stub<member_func_t<int32_t, DMusicObject, int32_t, uint16_t, uint32_t>>(
            0x516E90, this, arg1, arg2, arg3);
    }

    // 0x516FB0 | ?ScaleMasterVolume@DMusicObject@@QAEHJ@Z
    inline int32_t ScaleMasterVolume(int32_t arg1)
    {
        return stub<member_func_t<int32_t, DMusicObject, int32_t>>(0x516FB0, this, arg1);
    }

    // 0x516FF0 | ?SetGrooveLevel@DMusicObject@@AAEHEE@Z
    inline int32_t SetGrooveLevel(uint8_t arg1, uint8_t arg2)
    {
        return stub<member_func_t<int32_t, DMusicObject, uint8_t, uint8_t>>(0x516FF0, this, arg1, arg2);
    }

    // 0x517020 | ?ScaleMasterTempo@DMusicObject@@QAEHM@Z
    inline int32_t ScaleMasterTempo(float arg1)
    {
        return stub<member_func_t<int32_t, DMusicObject, float>>(0x517020, this, arg1);
    }

    // 0x5170A0 | ?Activate@DMusicObject@@QAEHH@Z
    inline int32_t Activate(int32_t arg1)
    {
        return stub<member_func_t<int32_t, DMusicObject, int32_t>>(0x5170A0, this, arg1);
    }

    // 0x5170E0 | ?GetDMusicWaveBuffer@DMusicObject@@QAEPAVDMusicWaveBuffer@@XZ
    inline class DMusicWaveBuffer* GetDMusicWaveBuffer()
    {
        return stub<member_func_t<class DMusicWaveBuffer*, DMusicObject>>(0x5170E0, this);
    }
};
