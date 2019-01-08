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
    private: static struct IDirectMusicPerformance * SegmentWrapper::s_pPerformance | ?s_pPerformance@SegmentWrapper@@0PAUIDirectMusicPerformance@@A
    private: static struct IDirectMusicLoader * SegmentWrapper::s_pLoader | ?s_pLoader@SegmentWrapper@@0PAUIDirectMusicLoader@@A
*/

#include "hooking.h"
