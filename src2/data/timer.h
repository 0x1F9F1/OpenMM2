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
    data:timer

    0x4C77E0 | public: static unsigned int __cdecl Timer::Ticks(void) | ?Ticks@Timer@@SAIXZ
    0x4C7810 | public: static unsigned int __cdecl Timer::QuickTicks(void) | ?QuickTicks@Timer@@SAIXZ
    0x4C7840 | public: __thiscall Timer::Timer(void) | ??0Timer@@QAE@XZ
    0x4C7980 | public: static void __cdecl Timer::BeginBenchmark(void) | ?BeginBenchmark@Timer@@SAXXZ
    0x4C79F0 | public: static void __cdecl Timer::EndBenchmark(void) | ?EndBenchmark@Timer@@SAXXZ
    0x6A3CFC | private: static float Timer::CpuSpeed | ?CpuSpeed@Timer@@0MA
    0x6A3CF0 | private: static float Timer::QuickTicksToMilliseconds | ?QuickTicksToMilliseconds@Timer@@0MA
    0x6A3D00 | private: static float Timer::TicksToSeconds | ?TicksToSeconds@Timer@@0MA
    0x6A3D04 | private: static float Timer::TicksToMilliseconds | ?TicksToMilliseconds@Timer@@0MA
*/

class Timer
{
public:
    // 0x4C7840 | ??0Timer@@QAE@XZ
    Timer();

    // 0x4C7980 | ?BeginBenchmark@Timer@@SAXXZ
    static void BeginBenchmark();

    // 0x4C79F0 | ?EndBenchmark@Timer@@SAXXZ
    static void EndBenchmark();

    // 0x4C7810 | ?QuickTicks@Timer@@SAIXZ
    static u32 QuickTicks();

    // 0x4C77E0 | ?Ticks@Timer@@SAIXZ
    static u32 Ticks();

private:
    // 0x6A3CFC | ?CpuSpeed@Timer@@0MA
    static inline extern_var(0x6A3CFC, f32, CpuSpeed);

    // 0x6A3CF0 | ?QuickTicksToMilliseconds@Timer@@0MA
    static inline extern_var(0x6A3CF0, f32, QuickTicksToMilliseconds);

    // 0x6A3D04 | ?TicksToMilliseconds@Timer@@0MA
    static inline extern_var(0x6A3D04, f32, TicksToMilliseconds);

    // 0x6A3D00 | ?TicksToSeconds@Timer@@0MA
    static inline extern_var(0x6A3D00, f32, TicksToSeconds);
};

check_size(Timer, 0x0);
