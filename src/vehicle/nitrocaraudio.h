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
    vehicle:nitrocaraudio

    0x4DD1A0 | public: __thiscall vehNitroCarAudio::vehNitroCarAudio(class vehCarSim *,class vehCarDamage *,char *,bool,bool) | ??0vehNitroCarAudio@@QAE@PAVvehCarSim@@PAVvehCarDamage@@PAD_N3@Z
    0x4DD230 | public: virtual __thiscall vehNitroCarAudio::~vehNitroCarAudio(void) | ??1vehNitroCarAudio@@UAE@XZ
    0x4DD240 | public: void __thiscall vehNitroCarAudio::Init(class vehCarSim *,class vehCarDamage *,char *,bool,bool,bool) | ?Init@vehNitroCarAudio@@QAEXPAVvehCarSim@@PAVvehCarDamage@@PAD_N33@Z
    0x4DD2A0 | public: virtual void __thiscall vehNitroCarAudio::UpdateAudio(void) | ?UpdateAudio@vehNitroCarAudio@@UAEXXZ
    0x4DD2F0 | public: void __thiscall vehNitroCarAudio::UpdateAudio3D(void) | ?UpdateAudio3D@vehNitroCarAudio@@QAEXXZ
    0x4DD370 | public: void __thiscall vehNitroCarAudio::UpdateAudioNon3D(void) | ?UpdateAudioNon3D@vehNitroCarAudio@@QAEXXZ
    0x4DD380 | public: void __thiscall vehNitroCarAudio::Reset(void) | ?Reset@vehNitroCarAudio@@QAEXXZ
    0x4DD390 | public: virtual void __thiscall vehNitroCarAudio::AssignSounds(void) | ?AssignSounds@vehNitroCarAudio@@UAEXXZ
    0x4DD400 | public: virtual void __thiscall vehNitroCarAudio::UnAssignSounds(int) | ?UnAssignSounds@vehNitroCarAudio@@UAEXH@Z
    0x4DD450 | public: void __thiscall vehNitroCarAudio::Load(char *) | ?Load@vehNitroCarAudio@@QAEXPAD@Z
    0x4DD550 | public: void __thiscall vehNitroCarAudio::RemoveFromManager(void) | ?RemoveFromManager@vehNitroCarAudio@@QAEXXZ
    0x4DD560 | public: virtual void __thiscall vehNitroCarAudio::SetNon3DParams(void) | ?SetNon3DParams@vehNitroCarAudio@@UAEXXZ
    0x4DD5D0 | public: virtual void __thiscall vehNitroCarAudio::Set3DParams(void) | ?Set3DParams@vehNitroCarAudio@@UAEXXZ
    0x4DD5E0 | public: virtual void __thiscall vehNitroCarAudio::Update(void) | ?Update@vehNitroCarAudio@@UAEXXZ
    0x4DD5F0 | public: void __thiscall vehNitroCarAudio::EchoOn(void) | ?EchoOn@vehNitroCarAudio@@QAEXXZ
    0x4DD650 | public: void __thiscall vehNitroCarAudio::EchoOff(void) | ?EchoOff@vehNitroCarAudio@@QAEXXZ
    0x4DD670 | public: void __thiscall vehNitroCarAudio::Set2DPan(float) | ?Set2DPan@vehNitroCarAudio@@QAEXM@Z
    0x4DD6B0 | public: void __thiscall vehNitroCarAudio::UpdateEcho(void) | ?UpdateEcho@vehNitroCarAudio@@QAEXXZ
    0x4DD6D0 | public: void __thiscall vehNitroCarAudio::PlayNitro(void) | ?PlayNitro@vehNitroCarAudio@@QAEXXZ
    0x4DD760 | public: void __thiscall vehNitroCarAudio::StopNitro(void) | ?StopNitro@vehNitroCarAudio@@QAEXXZ
    public: virtual void * __thiscall vehNitroCarAudio::`scalar deleting destructor'(unsigned int) | ??_GvehNitroCarAudio@@UAEPAXI@Z
    public: virtual void * __thiscall vehNitroCarAudio::`vector deleting destructor'(unsigned int) | ??_EvehNitroCarAudio@@UAEPAXI@Z
    0x5B31D8 | const vehNitroCarAudio::`vftable' | ??_7vehNitroCarAudio@@6B@
*/

#include "hooking.h"
