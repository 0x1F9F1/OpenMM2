/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

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
    // 0x4C77E0 | ?Ticks@Timer@@SAIXZ
    static inline u32 Ticks()
    {
        return stub<cdecl_t<u32>>(0x4C77E0);
    }

    // 0x4C7810 | ?QuickTicks@Timer@@SAIXZ
    static inline u32 QuickTicks()
    {
        return stub<cdecl_t<u32>>(0x4C7810);
    }

    // 0x4C7840 | ??0Timer@@QAE@XZ
    Timer()
    {
        stub<member_func_t<void, Timer>>(0x4C7840, this);
    }

    // 0x4C7980 | ?BeginBenchmark@Timer@@SAXXZ
    static inline void BeginBenchmark()
    {
        return stub<cdecl_t<void>>(0x4C7980);
    }

    // 0x4C79F0 | ?EndBenchmark@Timer@@SAXXZ
    static inline void EndBenchmark()
    {
        return stub<cdecl_t<void>>(0x4C79F0);
    }

    // 0x6A3CFC | ?CpuSpeed@Timer@@0MA
    inline extern_var(0x6A3CFC, float, CpuSpeed);

    // 0x6A3CF0 | ?QuickTicksToMilliseconds@Timer@@0MA
    inline extern_var(0x6A3CF0, float, QuickTicksToMilliseconds);

    // 0x6A3D00 | ?TicksToSeconds@Timer@@0MA
    inline extern_var(0x6A3D00, float, TicksToSeconds);

    // 0x6A3D04 | ?TicksToMilliseconds@Timer@@0MA
    inline extern_var(0x6A3D04, float, TicksToMilliseconds);
};
