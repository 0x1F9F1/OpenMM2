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
    data:replay

    0x4C9040 | public: static void __cdecl datReplay::Reset(void) | ?Reset@datReplay@@SAXXZ
    0x4C9060 | public: static int __cdecl datReplay::GetByte(void) | ?GetByte@datReplay@@SAHXZ
    0x4C9080 | public: static int __cdecl datReplay::GetInt(void) | ?GetInt@datReplay@@SAHXZ
    0x4C90B0 | public: static void __cdecl datReplay::RecordByte(unsigned char) | ?RecordByte@datReplay@@SAXE@Z
    0x4C90E0 | public: static void __cdecl datReplay::RecordInt(int) | ?RecordInt@datReplay@@SAXH@Z
    0x4C9110 | public: static bool __cdecl datReplay::BeginRecord(class datMemStream *) | ?BeginRecord@datReplay@@SA_NPAVdatMemStream@@@Z
    0x4C9150 | public: static bool __cdecl datReplay::BeginPlayback(class datMemStream *) | ?BeginPlayback@datReplay@@SA_NPAVdatMemStream@@@Z
    0x4C91B0 | public: static void __cdecl datReplay::Close(void) | ?Close@datReplay@@SAXXZ
    0x4C91E0 | public: static void __cdecl datReplay::BeginFrame(void) | ?BeginFrame@datReplay@@SAXXZ
    0x4C91F0 | public: static bool __cdecl datReplay::EndFrame(void) | ?EndFrame@datReplay@@SA_NXZ
    0x6A3D28 | private: static bool datReplay::sm_InFrame | ?sm_InFrame@datReplay@@0_NA
    0x6A3D29 | private: static bool datReplay::sm_Playback | ?sm_Playback@datReplay@@0_NA
    0x6A3D2C | private: static class datMemStream * datReplay::sm_ReplayFile | ?sm_ReplayFile@datReplay@@0PAVdatMemStream@@A
    0x6A3D30 | private: static int datReplay::sm_FrameSize | ?sm_FrameSize@datReplay@@0HA
    0x6A3D34 | private: static int datReplay::sm_Remaining | ?sm_Remaining@datReplay@@0HA
*/
