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
    data:timemgr

    0x4C6300 | public: static void __cdecl datTimeManager::Reset(void) | ?Reset@datTimeManager@@SAXXZ
    0x4C6340 | public: static void __cdecl datTimeManager::Update(void) | ?Update@datTimeManager@@SAXXZ
    0x4C64F0 | public: static void __cdecl datTimeManager::SetTempOverSampling(bool,int) | ?SetTempOverSampling@datTimeManager@@SAX_NH@Z
    0x4C6580 | public: static void __cdecl datTimeManager::RealTime(float) | ?RealTime@datTimeManager@@SAXM@Z
    0x4C65D0 | public: static void __cdecl datTimeManager::FixedFrame(float,unsigned int) | ?FixedFrame@datTimeManager@@SAXMI@Z
    private: static float datTimeManager::Seconds | ?Seconds@datTimeManager@@0MA
    private: static float datTimeManager::ActualSeconds | ?ActualSeconds@datTimeManager@@0MA
    private: static float datTimeManager::InvSeconds | ?InvSeconds@datTimeManager@@0MA
    private: static float datTimeManager::FPS | ?FPS@datTimeManager@@0MA
    private: static float datTimeManager::SampleStep | ?SampleStep@datTimeManager@@0MA
    private: static float datTimeManager::ClampMax | ?ClampMax@datTimeManager@@0MA
    private: static float datTimeManager::ClampMin | ?ClampMin@datTimeManager@@0MA
    private: static unsigned int datTimeManager::OverSamples | ?OverSamples@datTimeManager@@0IA
    private: static bool datTimeManager::FirstFrame | ?FirstFrame@datTimeManager@@0_NA
    0x6A3C3C | private: static float datTimeManager::PrevElapsedTime | ?PrevElapsedTime@datTimeManager@@0MA
    0x6A3C40 | private: static float datTimeManager::ElapsedTime | ?ElapsedTime@datTimeManager@@0MA
    0x6A3C44 | private: static int datTimeManager::TempOverSampleAmount | ?TempOverSampleAmount@datTimeManager@@0HA
    0x6A3C48 | private: static class Timer datTimeManager::Time | ?Time@datTimeManager@@0VTimer@@A
    0x6A3C4C | private: static float datTimeManager::TempSeconds | ?TempSeconds@datTimeManager@@0MA
    0x6A3C50 | private: static unsigned int datTimeManager::FrameCount | ?FrameCount@datTimeManager@@0IA
    0x6A3C54 | private: static bool datTimeManager::ShowFrame | ?ShowFrame@datTimeManager@@0_NA
    0x6A3C55 | private: static bool datTimeManager::FrameStep | ?FrameStep@datTimeManager@@0_NA
    0x6A3C58 | private: static enum datTimeManager::EnumTimeMode datTimeManager::Mode | ?Mode@datTimeManager@@0W4EnumTimeMode@1@A
    0x6A3C5C | private: static bool datTimeManager::TempOverSampling | ?TempOverSampling@datTimeManager@@0_NA
*/

#include "hooking.h"

class datTimeManager
{
public:
    static void RealTime(float time);

    static void Update(void);
};
