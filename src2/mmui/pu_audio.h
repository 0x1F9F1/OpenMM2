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
    mmui:pu_audio

    0x50C620 | public: __thiscall PUAudioOptions::PUAudioOptions(int,float,float,float,float) | ??0PUAudioOptions@@QAE@HMMMM@Z
    0x50C8E0 | public: virtual __thiscall PUAudioOptions::~PUAudioOptions(void) | ??1PUAudioOptions@@UAE@XZ
    0x50C8F0 | public: void __thiscall PUAudioOptions::SetWaveVolume(void) | ?SetWaveVolume@PUAudioOptions@@QAEXXZ
    0x50C910 | public: void __thiscall PUAudioOptions::SetCDVolume(void) | ?SetCDVolume@PUAudioOptions@@QAEXXZ
    0x50C940 | public: void __thiscall PUAudioOptions::SetBalance(void) | ?SetBalance@PUAudioOptions@@QAEXXZ
    0x50C980 | public: virtual void __thiscall PUAudioOptions::PreSetup(void) | ?PreSetup@PUAudioOptions@@UAEXXZ
    0x50C990 | public: void __thiscall PUAudioOptions::CancelAction(void) | ?CancelAction@PUAudioOptions@@QAEXXZ
    0x50CAC0 | public: virtual void * __thiscall PUAudioOptions::`scalar deleting destructor'(unsigned int) | ??_GPUAudioOptions@@UAEPAXI@Z
    public: virtual void * __thiscall PUAudioOptions::`vector deleting destructor'(unsigned int) | ??_EPUAudioOptions@@UAEPAXI@Z
    0x5B49FC | const PUAudioOptions::`vftable' | ??_7PUAudioOptions@@6B@
    class mmPlayerConfig * PUOptionsConfig | ?PUOptionsConfig@@3PAVmmPlayerConfig@@A
*/

struct PUAudioOptions : PUMenuBase
{
public:
    // PUAudioOptions::`vftable' @ 0x5B49FC

    // 0x50C620 | ??0PUAudioOptions@@QAE@HMMMM@Z
    inline PUAudioOptions(i32 arg1, f32 arg2, f32 arg3, f32 arg4, f32 arg5)
    {
        stub<member_func_t<void, PUAudioOptions, i32, f32, f32, f32, f32>>(
            0x50C620, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x50C8F0 | ?SetWaveVolume@PUAudioOptions@@QAEXXZ
    inline void SetWaveVolume()
    {
        return stub<member_func_t<void, PUAudioOptions>>(0x50C8F0, this);
    }

    // 0x50C910 | ?SetCDVolume@PUAudioOptions@@QAEXXZ
    inline void SetCDVolume()
    {
        return stub<member_func_t<void, PUAudioOptions>>(0x50C910, this);
    }

    // 0x50C940 | ?SetBalance@PUAudioOptions@@QAEXXZ
    inline void SetBalance()
    {
        return stub<member_func_t<void, PUAudioOptions>>(0x50C940, this);
    }

    // 0x50C990 | ?CancelAction@PUAudioOptions@@QAEXXZ
    inline void CancelAction()
    {
        return stub<member_func_t<void, PUAudioOptions>>(0x50C990, this);
    }

    // 0x50C8E0 | ??1PUAudioOptions@@UAE@XZ
    inline ~PUAudioOptions() override
    {
        stub<member_func_t<void, PUAudioOptions>>(0x50C8E0, this);
    }

    // 0x50C980 | ?PreSetup@PUAudioOptions@@UAEXXZ
    inline void PreSetup() override
    {
        return stub<member_func_t<void, PUAudioOptions>>(0x50C980, this);
    }
};
