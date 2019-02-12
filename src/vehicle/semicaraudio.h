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
    vehicle:semicaraudio

    0x4DC930 | public: __thiscall vehSemiCarAudio::vehSemiCarAudio(class vehCarSim *,class vehCarDamage *,char *,bool,bool) | ??0vehSemiCarAudio@@QAE@PAVvehCarSim@@PAVvehCarDamage@@PAD_N3@Z
    0x4DC9C0 | public: virtual __thiscall vehSemiCarAudio::~vehSemiCarAudio(void) | ??1vehSemiCarAudio@@UAE@XZ
    0x4DC9D0 | public: void __thiscall vehSemiCarAudio::Init(class vehCarSim *,class vehCarDamage *,char *,bool,bool,bool) | ?Init@vehSemiCarAudio@@QAEXPAVvehCarSim@@PAVvehCarDamage@@PAD_N33@Z
    0x4DCA40 | public: virtual void __thiscall vehSemiCarAudio::UpdateAudio(void) | ?UpdateAudio@vehSemiCarAudio@@UAEXXZ
    0x4DCA90 | public: void __thiscall vehSemiCarAudio::UpdateAudio3D(void) | ?UpdateAudio3D@vehSemiCarAudio@@QAEXXZ
    0x4DCB50 | public: void __thiscall vehSemiCarAudio::UpdateAudioNon3D(void) | ?UpdateAudioNon3D@vehSemiCarAudio@@QAEXXZ
    0x4DCB70 | public: void __thiscall vehSemiCarAudio::UpdateReverse(void) | ?UpdateReverse@vehSemiCarAudio@@QAEXXZ
    0x4DCBD0 | public: void __thiscall vehSemiCarAudio::UpdateAirBlow(void) | ?UpdateAirBlow@vehSemiCarAudio@@QAEXXZ
    0x4DCC40 | public: void __thiscall vehSemiCarAudio::Reset(void) | ?Reset@vehSemiCarAudio@@QAEXXZ
    0x4DCC50 | public: virtual void __thiscall vehSemiCarAudio::AssignSounds(void) | ?AssignSounds@vehSemiCarAudio@@UAEXXZ
    0x4DCCF0 | public: virtual void __thiscall vehSemiCarAudio::UnAssignSounds(int) | ?UnAssignSounds@vehSemiCarAudio@@UAEXH@Z
    0x4DCD70 | public: void __thiscall vehSemiCarAudio::Load(char *) | ?Load@vehSemiCarAudio@@QAEXPAD@Z
    0x4DCE80 | public: void __thiscall vehSemiCarAudio::RemoveFromManager(void) | ?RemoveFromManager@vehSemiCarAudio@@QAEXXZ
    0x4DCE90 | public: virtual void __thiscall vehSemiCarAudio::SetNon3DParams(void) | ?SetNon3DParams@vehSemiCarAudio@@UAEXXZ
    0x4DCF30 | public: virtual void __thiscall vehSemiCarAudio::Set3DParams(void) | ?Set3DParams@vehSemiCarAudio@@UAEXXZ
    0x4DCF40 | public: virtual void __thiscall vehSemiCarAudio::Update(void) | ?Update@vehSemiCarAudio@@UAEXXZ
    0x4DCF50 | public: void __thiscall vehSemiCarAudio::EchoOn(void) | ?EchoOn@vehSemiCarAudio@@QAEXXZ
    0x4DCFD0 | public: void __thiscall vehSemiCarAudio::EchoOff(void) | ?EchoOff@vehSemiCarAudio@@QAEXXZ
    0x4DD000 | public: void __thiscall vehSemiCarAudio::Set2DPan(float) | ?Set2DPan@vehSemiCarAudio@@QAEXM@Z
    0x4DD050 | public: void __thiscall vehSemiCarAudio::UpdateEcho(void) | ?UpdateEcho@vehSemiCarAudio@@QAEXXZ
    public: virtual void * __thiscall vehSemiCarAudio::`vector deleting destructor'(unsigned int) | ??_EvehSemiCarAudio@@UAEPAXI@Z
    public: virtual void * __thiscall vehSemiCarAudio::`scalar deleting destructor'(unsigned int) | ??_GvehSemiCarAudio@@UAEPAXI@Z
    0x5B31B4 | const vehSemiCarAudio::`vftable' | ??_7vehSemiCarAudio@@6B@
*/

// #include "hooking.h"
