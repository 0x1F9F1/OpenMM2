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
    vehicle:surfaceaudiodata

    0x4DFD50 | public: __thiscall vehSurfaceAudioData::vehSurfaceAudioData(void) | ??0vehSurfaceAudioData@@QAE@XZ
    0x4DFD80 | public: virtual __thiscall vehSurfaceAudioData::~vehSurfaceAudioData(void) | ??1vehSurfaceAudioData@@UAE@XZ
    0x4DFDA0 | public: void __thiscall vehSurfaceAudioData::AllocateSkidSamples(int) | ?AllocateSkidSamples@vehSurfaceAudioData@@QAEXH@Z
    0x4DFDD0 | public: void __thiscall vehSurfaceAudioData::StopSkid(void) | ?StopSkid@vehSurfaceAudioData@@QAEXXZ
    0x4DFE10 | public: void __thiscall vehSurfaceAudioData::UpdateSkid(float,float,float) | ?UpdateSkid@vehSurfaceAudioData@@QAEXMMM@Z
    0x4E0010 | public: void __thiscall vehSurfaceAudioData::UpdateSkid(float) | ?UpdateSkid@vehSurfaceAudioData@@QAEXM@Z
    0x4E00C0 | public: void __thiscall vehSurfaceAudioData::UpdateSurface(float,float,float) | ?UpdateSurface@vehSurfaceAudioData@@QAEXMMM@Z
    0x4E0160 | public: void __thiscall vehSurfaceAudioData::UpdateSurface(float) | ?UpdateSurface@vehSurfaceAudioData@@QAEXM@Z
    0x4E01E0 | public: void __thiscall vehSurfaceAudioData::StopSurface(void) | ?StopSurface@vehSurfaceAudioData@@QAEXXZ
    0x4E0200 | public: bool __thiscall vehSurfaceAudioData::ParseCSVBuffer(class Stream *) | ?ParseCSVBuffer@vehSurfaceAudioData@@QAE_NPAVStream@@@Z
    public: void __thiscall vehSurfaceAudioData::SaveCSVBuffer(class Stream *) | ?SaveCSVBuffer@vehSurfaceAudioData@@QAEXPAVStream@@@Z
    0x4E04E0 | public: int __thiscall vehSurfaceAudioData::SkidPlaying(void) | ?SkidPlaying@vehSurfaceAudioData@@QAEHXZ
    0x4E0520 | public: int __thiscall vehSurfaceAudioData::SurfacePlaying(void) | ?SurfacePlaying@vehSurfaceAudioData@@QAEHXZ
    0x4E0540 | public: class AudSoundBase * __thiscall vehSurfaceAudioData::GetSurfaceSoundPtr(void) | ?GetSurfaceSoundPtr@vehSurfaceAudioData@@QAEPAVAudSoundBase@@XZ
    0x4E0550 | public: void __thiscall vehSurfaceAudioData::AssignSounds(int) | ?AssignSounds@vehSurfaceAudioData@@QAEXH@Z
    0x4E05B0 | public: void __thiscall vehSurfaceAudioData::UnAssignSounds(void) | ?UnAssignSounds@vehSurfaceAudioData@@QAEXXZ
    0x4E05E0 | public: void __thiscall vehSurfaceAudioData::SetPan(float) | ?SetPan@vehSurfaceAudioData@@QAEXM@Z
    0x4E0640 | public: void __thiscall vehSurfaceAudioData::EchoOn(float) | ?EchoOn@vehSurfaceAudioData@@QAEXM@Z
    0x4E06C0 | public: void __thiscall vehSurfaceAudioData::EchoOff(void) | ?EchoOff@vehSurfaceAudioData@@QAEXXZ
    public: void __thiscall vehSurfaceAudioData::UpdateEcho(void) | ?UpdateEcho@vehSurfaceAudioData@@QAEXXZ
    public: void __thiscall vehSurfaceAudioData::AddWidgets(class bkBank &,int) | ?AddWidgets@vehSurfaceAudioData@@QAEXAAVbkBank@@H@Z
    public: void __thiscall vehSurfaceAudioData::WidgetVolDivs(void) | ?WidgetVolDivs@vehSurfaceAudioData@@QAEXXZ
    public: void __thiscall vehSurfaceAudioData::WidgetPlaySkid(void) | ?WidgetPlaySkid@vehSurfaceAudioData@@QAEXXZ
    public: void __thiscall vehSurfaceAudioData::WidgetPlaySurface(void) | ?WidgetPlaySurface@vehSurfaceAudioData@@QAEXXZ
    public: void __thiscall vehSurfaceAudioData::WidgetStopSurface(void) | ?WidgetStopSurface@vehSurfaceAudioData@@QAEXXZ
    public: virtual void * __thiscall vehSurfaceAudioData::`vector deleting destructor'(unsigned int) | ??_EvehSurfaceAudioData@@UAEPAXI@Z
    public: virtual void * __thiscall vehSurfaceAudioData::`scalar deleting destructor'(unsigned int) | ??_GvehSurfaceAudioData@@UAEPAXI@Z
    const vehSurfaceAudioData::`vftable' | ??_7vehSurfaceAudioData@@6B@
*/

// #include "hooking.h"
