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
    directmusic:segmentwrapper

    0x517570 | public: static void __cdecl SegmentWrapper::SetPerformancePtr(struct IDirectMusicPerformance *) | ?SetPerformancePtr@SegmentWrapper@@SAXPAUIDirectMusicPerformance@@@Z
    0x517580 | public: static void __cdecl SegmentWrapper::SetLoaderPtr(struct IDirectMusicLoader *) | ?SetLoaderPtr@SegmentWrapper@@SAXPAUIDirectMusicLoader@@@Z
    0x517590 | public: __thiscall SegmentWrapper::SegmentWrapper(void) | ??0SegmentWrapper@@QAE@XZ
    0x5175B0 | public: __thiscall SegmentWrapper::~SegmentWrapper(void) | ??1SegmentWrapper@@QAE@XZ
    0x5175C0 | public: bool __thiscall SegmentWrapper::OpenSegmentFile(char *,bool) | ?OpenSegmentFile@SegmentWrapper@@QAE_NPAD_N@Z
    0x517750 | public: bool __thiscall SegmentWrapper::LoadSegmentBands(void) | ?LoadSegmentBands@SegmentWrapper@@QAE_NXZ
    0x5177F0 | public: bool __thiscall SegmentWrapper::UnloadSegmentBands(void) | ?UnloadSegmentBands@SegmentWrapper@@QAE_NXZ
    0x517890 | public: bool __thiscall SegmentWrapper::Stop(void) | ?Stop@SegmentWrapper@@QAE_NXZ
    0x5178C0 | public: bool __thiscall SegmentWrapper::LoadBand(char *) | ?LoadBand@SegmentWrapper@@QAE_NPAD@Z
    0x5179A0 | public: bool __thiscall SegmentWrapper::PlayBand(void) | ?PlayBand@SegmentWrapper@@QAE_NXZ
    0x517A00 | public: bool __thiscall SegmentWrapper::IsPlaying(void) | ?IsPlaying@SegmentWrapper@@QAE_NXZ
    0x517A40 | public: bool __thiscall SegmentWrapper::Play(unsigned long,unsigned long) | ?Play@SegmentWrapper@@QAE_NKK@Z
    0x517AE0 | public: bool __thiscall SegmentWrapper::SetGrooveLevel(unsigned char,unsigned char) | ?SetGrooveLevel@SegmentWrapper@@QAE_NEE@Z
    0x517B40 | public: void __thiscall SegmentWrapper::CleanUp(void) | ?CleanUp@SegmentWrapper@@QAEXXZ
    0x6B1594 | private: static struct IDirectMusicPerformance * SegmentWrapper::s_pPerformance | ?s_pPerformance@SegmentWrapper@@0PAUIDirectMusicPerformance@@A
    0x6B1598 | private: static struct IDirectMusicLoader * SegmentWrapper::s_pLoader | ?s_pLoader@SegmentWrapper@@0PAUIDirectMusicLoader@@A
*/

struct SegmentWrapper
{
public:
    // 0x517590 | ??0SegmentWrapper@@QAE@XZ
    SegmentWrapper();

    // 0x5175B0 | ??1SegmentWrapper@@QAE@XZ
    // 0x517390 | ??_ESegmentWrapper@@QAEPAXI@Z
    ~SegmentWrapper();

    // 0x517B40 | ?CleanUp@SegmentWrapper@@QAEXXZ
    void CleanUp();

    // 0x517A00 | ?IsPlaying@SegmentWrapper@@QAE_NXZ
    bool IsPlaying();

    // 0x5178C0 | ?LoadBand@SegmentWrapper@@QAE_NPAD@Z
    bool LoadBand(char* arg1);

    // 0x517750 | ?LoadSegmentBands@SegmentWrapper@@QAE_NXZ
    bool LoadSegmentBands();

    // 0x5175C0 | ?OpenSegmentFile@SegmentWrapper@@QAE_NPAD_N@Z
    bool OpenSegmentFile(char* arg1, bool arg2);

    // 0x517A40 | ?Play@SegmentWrapper@@QAE_NKK@Z
    bool Play(u32 arg1, u32 arg2);

    // 0x5179A0 | ?PlayBand@SegmentWrapper@@QAE_NXZ
    bool PlayBand();

    // 0x517AE0 | ?SetGrooveLevel@SegmentWrapper@@QAE_NEE@Z
    bool SetGrooveLevel(u8 arg1, u8 arg2);

    // 0x517890 | ?Stop@SegmentWrapper@@QAE_NXZ
    bool Stop();

    // 0x5177F0 | ?UnloadSegmentBands@SegmentWrapper@@QAE_NXZ
    bool UnloadSegmentBands();

    // 0x517580 | ?SetLoaderPtr@SegmentWrapper@@SAXPAUIDirectMusicLoader@@@Z
    static void SetLoaderPtr(struct IDirectMusicLoader* arg1);

    // 0x517570 | ?SetPerformancePtr@SegmentWrapper@@SAXPAUIDirectMusicPerformance@@@Z
    static void SetPerformancePtr(struct IDirectMusicPerformance* arg1);

private:
    // 0x6B1598 | ?s_pLoader@SegmentWrapper@@0PAUIDirectMusicLoader@@A
    static inline extern_var(0x6B1598, struct IDirectMusicLoader*, s_pLoader);

    // 0x6B1594 | ?s_pPerformance@SegmentWrapper@@0PAUIDirectMusicPerformance@@A
    static inline extern_var(0x6B1594, struct IDirectMusicPerformance*, s_pPerformance);
};

check_size(SegmentWrapper, 0x18);
