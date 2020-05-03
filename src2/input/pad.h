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
    input:pad

    0x4BB4E0 | private: void __thiscall ioPad::Begin(int) | ?Begin@ioPad@@AAEXH@Z
    0x4BB520 | private: void __thiscall ioPad::End(void) | ?End@ioPad@@AAEXXZ
    0x4BB530 | private: void __thiscall ioPad::Update(void) | ?Update@ioPad@@AAEXXZ
    0x4BB710 | float __cdecl AddDeadZone(float,float) | ?AddDeadZone@@YAMMM@Z
    0x4BB760 | public: static void __cdecl ioPad::BeginAll(void) | ?BeginAll@ioPad@@SAXXZ
    0x4BB780 | public: static void __cdecl ioPad::EndAll(void) | ?EndAll@ioPad@@SAXXZ
    0x4BB7A0 | public: static void __cdecl ioPad::UpdateAll(void) | ?UpdateAll@ioPad@@SAXXZ
    private: void __thiscall ioPad::UpdateDebug(void) | ?UpdateDebug@ioPad@@AAEXXZ
    0x4BB7C0 | public: __thiscall ioPad::ioPad(void) | ??0ioPad@@QAE@XZ
    0x4BB7E0 | public: __thiscall ioPad::~ioPad(void) | ??1ioPad@@QAE@XZ
    0x6A3900 | private: static class ioPad * ioPad::PADS | ?PADS@ioPad@@0PAV1@A
    0x6A3961 | private: static bool ioPad::sm_UseKeymap | ?sm_UseKeymap@ioPad@@0_NA
*/

class ioPad
{
public:
    // 0x4BB7C0 | ??0ioPad@@QAE@XZ
    ioPad();

    // 0x4BB7E0 | ??1ioPad@@QAE@XZ
    ~ioPad();

    // 0x4BB760 | ?BeginAll@ioPad@@SAXXZ
    static void BeginAll();

    // 0x4BB780 | ?EndAll@ioPad@@SAXXZ
    static void EndAll();

    // 0x4BB7A0 | ?UpdateAll@ioPad@@SAXXZ
    static void UpdateAll();

private:
    // 0x4BB4E0 | ?Begin@ioPad@@AAEXH@Z
    void Begin(i32 arg1);

    // 0x4BB520 | ?End@ioPad@@AAEXXZ
    void End();

    // 0x4BB530 | ?Update@ioPad@@AAEXXZ
    void Update();

    // 0x6A3900 | ?PADS@ioPad@@0PAV1@A
    static inline extern_var(0x6A3900, class ioPad*, PADS);

    // 0x6A3961 | ?sm_UseKeymap@ioPad@@0_NA
    static inline extern_var(0x6A3961, bool, sm_UseKeymap);
};

check_size(ioPad, 0x18);

// 0x4BB710 | ?AddDeadZone@@YAMMM@Z
f32 AddDeadZone(f32 arg1, f32 arg2);
