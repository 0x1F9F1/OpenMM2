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
    data:timemgr

    0x4C6300 | public: static void __cdecl datTimeManager::Reset(void) | ?Reset@datTimeManager@@SAXXZ
    0x4C6340 | public: static void __cdecl datTimeManager::Update(void) | ?Update@datTimeManager@@SAXXZ
    0x4C64F0 | public: static void __cdecl datTimeManager::SetTempOverSampling(bool,int) | ?SetTempOverSampling@datTimeManager@@SAX_NH@Z
    0x4C6580 | public: static void __cdecl datTimeManager::RealTime(float) | ?RealTime@datTimeManager@@SAXM@Z
    0x4C65D0 | public: static void __cdecl datTimeManager::FixedFrame(float,unsigned int) | ?FixedFrame@datTimeManager@@SAXMI@Z
    0x5CE820 | private: static float datTimeManager::Seconds | ?Seconds@datTimeManager@@0MA
    0x5CE824 | private: static float datTimeManager::ActualSeconds | ?ActualSeconds@datTimeManager@@0MA
    0x5CE828 | private: static float datTimeManager::InvSeconds | ?InvSeconds@datTimeManager@@0MA
    0x5CE82C | private: static float datTimeManager::FPS | ?FPS@datTimeManager@@0MA
    0x5CE830 | private: static float datTimeManager::SampleStep | ?SampleStep@datTimeManager@@0MA
    0x5CE834 | private: static float datTimeManager::ClampMax | ?ClampMax@datTimeManager@@0MA
    0x5CE838 | private: static float datTimeManager::ClampMin | ?ClampMin@datTimeManager@@0MA
    0x5CE83C | private: static unsigned int datTimeManager::OverSamples | ?OverSamples@datTimeManager@@0IA
    0x5CE840 | private: static bool datTimeManager::FirstFrame | ?FirstFrame@datTimeManager@@0_NA
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

struct datTimeManager
{
public:
    // 0x4C65D0 | ?FixedFrame@datTimeManager@@SAXMI@Z
    static void FixedFrame(f32 arg1, u32 arg2);

    // 0x4C6580 | ?RealTime@datTimeManager@@SAXM@Z
    static void RealTime(f32 arg1);

    // 0x4C6300 | ?Reset@datTimeManager@@SAXXZ
    static void Reset();

    // 0x4C64F0 | ?SetTempOverSampling@datTimeManager@@SAX_NH@Z
    static void SetTempOverSampling(bool arg1, i32 arg2);

    // 0x4C6340 | ?Update@datTimeManager@@SAXXZ
    static void Update();

private:
    // 0x5CE824 | ?ActualSeconds@datTimeManager@@0MA
    static inline extern_var(0x5CE824, f32, ActualSeconds);

    // 0x5CE834 | ?ClampMax@datTimeManager@@0MA
    static inline extern_var(0x5CE834, f32, ClampMax);

    // 0x5CE838 | ?ClampMin@datTimeManager@@0MA
    static inline extern_var(0x5CE838, f32, ClampMin);

    // 0x6A3C40 | ?ElapsedTime@datTimeManager@@0MA
    static inline extern_var(0x6A3C40, f32, ElapsedTime);

    // 0x5CE82C | ?FPS@datTimeManager@@0MA
    static inline extern_var(0x5CE82C, f32, FPS);

    // 0x5CE840 | ?FirstFrame@datTimeManager@@0_NA
    static inline extern_var(0x5CE840, bool, FirstFrame);

    // 0x6A3C50 | ?FrameCount@datTimeManager@@0IA
    static inline extern_var(0x6A3C50, u32, FrameCount);

    // 0x6A3C55 | ?FrameStep@datTimeManager@@0_NA
    static inline extern_var(0x6A3C55, bool, FrameStep);

    // 0x5CE828 | ?InvSeconds@datTimeManager@@0MA
    static inline extern_var(0x5CE828, f32, InvSeconds);

    // 0x6A3C58 | ?Mode@datTimeManager@@0W4EnumTimeMode@1@A
    static inline extern_var(0x6A3C58, enum datTimeManager::EnumTimeMode, Mode);

    // 0x5CE83C | ?OverSamples@datTimeManager@@0IA
    static inline extern_var(0x5CE83C, u32, OverSamples);

    // 0x6A3C3C | ?PrevElapsedTime@datTimeManager@@0MA
    static inline extern_var(0x6A3C3C, f32, PrevElapsedTime);

    // 0x5CE830 | ?SampleStep@datTimeManager@@0MA
    static inline extern_var(0x5CE830, f32, SampleStep);

    // 0x5CE820 | ?Seconds@datTimeManager@@0MA
    static inline extern_var(0x5CE820, f32, Seconds);

    // 0x6A3C54 | ?ShowFrame@datTimeManager@@0_NA
    static inline extern_var(0x6A3C54, bool, ShowFrame);

    // 0x6A3C44 | ?TempOverSampleAmount@datTimeManager@@0HA
    static inline extern_var(0x6A3C44, i32, TempOverSampleAmount);

    // 0x6A3C5C | ?TempOverSampling@datTimeManager@@0_NA
    static inline extern_var(0x6A3C5C, bool, TempOverSampling);

    // 0x6A3C4C | ?TempSeconds@datTimeManager@@0MA
    static inline extern_var(0x6A3C4C, f32, TempSeconds);

    // 0x6A3C48 | ?Time@datTimeManager@@0VTimer@@A
    static inline extern_var(0x6A3C48, class Timer, Time);
};
