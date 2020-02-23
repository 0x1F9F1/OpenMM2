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
    mmgame:rainaudio

    0x430050 | public: __thiscall mmRainAudio::mmRainAudio(void) | ??0mmRainAudio@@QAE@XZ
    0x430220 | public: __thiscall mmRainAudio::~mmRainAudio(void) | ??1mmRainAudio@@QAE@XZ
    0x430260 | public: void __thiscall mmRainAudio::SetInterior(unsigned char) | ?SetInterior@mmRainAudio@@QAEXE@Z
    0x4302F0 | public: void __thiscall mmRainAudio::ShelterOn(void) | ?ShelterOn@mmRainAudio@@QAEXXZ
    0x430350 | public: void __thiscall mmRainAudio::ShelterOff(void) | ?ShelterOff@mmRainAudio@@QAEXXZ
    0x4303C0 | public: void __thiscall mmRainAudio::Update(void) | ?Update@mmRainAudio@@QAEXXZ
*/

struct mmRainAudio
{
public:
    // 0x430050 | ??0mmRainAudio@@QAE@XZ
    inline mmRainAudio()
    {
        stub<member_func_t<void, mmRainAudio>>(0x430050, this);
    }

    // 0x430220 | ??1mmRainAudio@@QAE@XZ
    inline ~mmRainAudio()
    {
        stub<member_func_t<void, mmRainAudio>>(0x430220, this);
    }

    // 0x430260 | ?SetInterior@mmRainAudio@@QAEXE@Z
    inline void SetInterior(u8 arg1)
    {
        return stub<member_func_t<void, mmRainAudio, u8>>(0x430260, this, arg1);
    }

    // 0x4302F0 | ?ShelterOn@mmRainAudio@@QAEXXZ
    inline void ShelterOn()
    {
        return stub<member_func_t<void, mmRainAudio>>(0x4302F0, this);
    }

    // 0x430350 | ?ShelterOff@mmRainAudio@@QAEXXZ
    inline void ShelterOff()
    {
        return stub<member_func_t<void, mmRainAudio>>(0x430350, this);
    }

    // 0x4303C0 | ?Update@mmRainAudio@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, mmRainAudio>>(0x4303C0, this);
    }
};
