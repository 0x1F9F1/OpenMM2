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
    mmaudio:mixer

    0x51C100 | public: void __thiscall VolumeDW::Set(float,float) | ?Set@VolumeDW@@QAEXMM@Z
    0x51C1C0 | public: unsigned long __thiscall VolumeDW::Value(void) | ?Value@VolumeDW@@QAEKXZ
    0x51C1F0 | public: unsigned long __thiscall MixerCTL::Init(void) | ?Init@MixerCTL@@QAEKXZ
    0x51C230 | public: virtual __thiscall MixerCTL::~MixerCTL(void) | ??1MixerCTL@@UAE@XZ
    0x51C240 | public: void __thiscall MixerCTL::AssignWaveBalance(float) | ?AssignWaveBalance@MixerCTL@@QAEXM@Z
    0x51C290 | public: void __thiscall MixerCTL::AssignCDBalance(float) | ?AssignCDBalance@MixerCTL@@QAEXM@Z
    0x51C2E0 | public: void __thiscall MixerCTL::RefreshAll(unsigned long) | ?RefreshAll@MixerCTL@@QAEXK@Z
    0x51C2F0 | public: float __thiscall MixerCTL::GetWaveBalance(void) | ?GetWaveBalance@MixerCTL@@QAEMXZ
    0x51C300 | public: float __thiscall MixerCTL::GetWaveVolume(void) | ?GetWaveVolume@MixerCTL@@QAEMXZ
    0x51C310 | public: void __thiscall MixerCTL::AssignWaveVolume(float) | ?AssignWaveVolume@MixerCTL@@QAEXM@Z
    0x51C330 | public: void __thiscall MixerCTL::AssignCDVolume(float) | ?AssignCDVolume@MixerCTL@@QAEXM@Z
    0x51C350 | public: float __thiscall MixerCTL::GetCDBalance(void) | ?GetCDBalance@MixerCTL@@QAEMXZ
    0x51C360 | public: float __thiscall MixerCTL::GetCDVolume(void) | ?GetCDVolume@MixerCTL@@QAEMXZ
    0x51C370 | public: unsigned long __thiscall MixerCTL::AssignMixerVolume(float,unsigned long) | ?AssignMixerVolume@MixerCTL@@QAEKMK@Z
    0x51C5C0 | public: unsigned long __thiscall MixerCTL::AssignMixerBalance(float,unsigned long) | ?AssignMixerBalance@MixerCTL@@QAEKMK@Z
    0x51C870 | public: float __thiscall MixerCTL::GetMixerBalance(unsigned long) | ?GetMixerBalance@MixerCTL@@QAEMK@Z
    0x51CAE0 | public: void __thiscall MixerCTL::SetDeviceNum(unsigned int) | ?SetDeviceNum@MixerCTL@@QAEXI@Z
    0x51CB00 | private: char * __thiscall MixerCTL::GetErrorMessage(unsigned long) | ?GetErrorMessage@MixerCTL@@AAEPADK@Z
    0x51CBA0 | private: long __thiscall MixerCTL::WindowProc(struct HWND__ *,unsigned int,unsigned int,long) | ?WindowProc@MixerCTL@@AAEJPAUHWND__@@IIJ@Z
    0x51CBB0 | public: virtual void * __thiscall MixerCTL::`scalar deleting destructor'(unsigned int) | ??_GMixerCTL@@UAEPAXI@Z
    public: virtual void * __thiscall MixerCTL::`vector deleting destructor'(unsigned int) | ??_EMixerCTL@@UAEPAXI@Z
    0x5B4E70 | const MixerCTL::`vftable' | ??_7MixerCTL@@6B@
*/

// #include "hooking.h"
