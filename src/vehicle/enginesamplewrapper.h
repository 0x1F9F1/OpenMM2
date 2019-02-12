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
    vehicle:enginesamplewrapper

    0x4DF550 | public: __thiscall vehEngineSampleWrapper::vehEngineSampleWrapper(void) | ??0vehEngineSampleWrapper@@QAE@XZ
    0x4DF570 | public: virtual __thiscall vehEngineSampleWrapper::~vehEngineSampleWrapper(void) | ??1vehEngineSampleWrapper@@UAE@XZ
    0x4DF580 | public: void __thiscall vehEngineSampleWrapper::SetSoundPtr(class AudSoundBase *) | ?SetSoundPtr@vehEngineSampleWrapper@@QAEXPAVAudSoundBase@@@Z
    0x4DF5B0 | public: void __thiscall vehEngineSampleWrapper::DeallocateSoundPtr(void) | ?DeallocateSoundPtr@vehEngineSampleWrapper@@QAEXXZ
    0x4DF5D0 | public: void __thiscall vehEngineSampleWrapper::Stop(void) | ?Stop@vehEngineSampleWrapper@@QAEXXZ
    0x4DF5F0 | public: void __thiscall vehEngineSampleWrapper::SetPan(float) | ?SetPan@vehEngineSampleWrapper@@QAEXM@Z
    0x4DF610 | public: void __thiscall vehEngineSampleWrapper::UpdateRPM(float,float,float,float) | ?UpdateRPM@vehEngineSampleWrapper@@QAEXMMMM@Z
    0x4DF6E0 | public: void __thiscall vehEngineSampleWrapper::UpdateRPM(float) | ?UpdateRPM@vehEngineSampleWrapper@@QAEXM@Z
    0x4DF790 | public: float __thiscall vehEngineSampleWrapper::CalculateVolumeOld(float) | ?CalculateVolumeOld@vehEngineSampleWrapper@@QAEMM@Z
    0x4DF7F0 | public: float __thiscall vehEngineSampleWrapper::CalculateVolume(float) | ?CalculateVolume@vehEngineSampleWrapper@@QAEMM@Z
    0x4DF860 | public: float __thiscall vehEngineSampleWrapper::CalculatePitch(float) | ?CalculatePitch@vehEngineSampleWrapper@@QAEMM@Z
    0x4DF8A0 | public: void __thiscall vehEngineSampleWrapper::EchoOn(float) | ?EchoOn@vehEngineSampleWrapper@@QAEXM@Z
    0x4DF8D0 | public: void __thiscall vehEngineSampleWrapper::EchoOff(void) | ?EchoOff@vehEngineSampleWrapper@@QAEXXZ
    0x4DF8F0 | public: void __thiscall vehEngineSampleWrapper::Silence(int) | ?Silence@vehEngineSampleWrapper@@QAEXH@Z
    0x4DF920 | public: void __thiscall vehEngineSampleWrapper::ParseCSVBufferOld(char *) | ?ParseCSVBufferOld@vehEngineSampleWrapper@@QAEXPAD@Z
    0x4DFA40 | public: void __thiscall vehEngineSampleWrapper::ParseCSVBuffer(char *) | ?ParseCSVBuffer@vehEngineSampleWrapper@@QAEXPAD@Z
    0x4DFC10 | public: void __thiscall vehEngineSampleWrapper::SetMaxVolume(float) | ?SetMaxVolume@vehEngineSampleWrapper@@QAEXM@Z
    public: void __thiscall vehEngineSampleWrapper::AddWidgets(class bkBank &,int) | ?AddWidgets@vehEngineSampleWrapper@@QAEXAAVbkBank@@H@Z
    public: void __thiscall vehEngineSampleWrapper::WidgetSilence(void) | ?WidgetSilence@vehEngineSampleWrapper@@QAEXXZ
    public: void __thiscall vehEngineSampleWrapper::WidgetUnSilence(void) | ?WidgetUnSilence@vehEngineSampleWrapper@@QAEXXZ
    public: void __thiscall vehEngineSampleWrapper::WidgetVolDivs(void) | ?WidgetVolDivs@vehEngineSampleWrapper@@QAEXXZ
    public: void __thiscall vehEngineSampleWrapper::WidgetAdjustPitchMult(void) | ?WidgetAdjustPitchMult@vehEngineSampleWrapper@@QAEXXZ
    public: void __thiscall vehEngineSampleWrapper::SaveParams(class Stream *) | ?SaveParams@vehEngineSampleWrapper@@QAEXPAVStream@@@Z
    public: void __thiscall vehEngineSampleWrapper::WidgetApplyGlobalAtten(float) | ?WidgetApplyGlobalAtten@vehEngineSampleWrapper@@QAEXM@Z
    public: void __thiscall vehEngineSampleWrapper::SaveWaveName(char *) | ?SaveWaveName@vehEngineSampleWrapper@@QAEXPAD@Z
    public: virtual void * __thiscall vehEngineSampleWrapper::`scalar deleting destructor'(unsigned int) | ??_GvehEngineSampleWrapper@@UAEPAXI@Z
    public: virtual void * __thiscall vehEngineSampleWrapper::`vector deleting destructor'(unsigned int) | ??_EvehEngineSampleWrapper@@UAEPAXI@Z
    const vehEngineSampleWrapper::`vftable' | ??_7vehEngineSampleWrapper@@6B@
*/

// #include "hooking.h"
