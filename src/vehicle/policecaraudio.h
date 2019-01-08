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
    vehicle:policecaraudio

    0x4D43D0 | public: __thiscall vehPoliceCarAudio::vehPoliceCarAudio(class vehCarSim *,class vehCarDamage *,char const *,char const *,bool) | ??0vehPoliceCarAudio@@QAE@PAVvehCarSim@@PAVvehCarDamage@@PBD2_N@Z
    0x4D44C0 | public: virtual __thiscall vehPoliceCarAudio::~vehPoliceCarAudio(void) | ??1vehPoliceCarAudio@@UAE@XZ
    0x4D4590 | private: void __thiscall vehPoliceCarAudio::DeallocateSirenPlayInfo(struct tagSirenData *) | ?DeallocateSirenPlayInfo@vehPoliceCarAudio@@AAEXPAUtagSirenData@@@Z
    0x4D45F0 | public: void __thiscall vehPoliceCarAudio::EchoOn(void) | ?EchoOn@vehPoliceCarAudio@@QAEXXZ
    0x4D4670 | public: void __thiscall vehPoliceCarAudio::EchoOff(void) | ?EchoOff@vehPoliceCarAudio@@QAEXXZ
    0x4D46B0 | public: void __thiscall vehPoliceCarAudio::UpdateEcho(void) | ?UpdateEcho@vehPoliceCarAudio@@QAEXXZ
    0x4D46F0 | public: void __thiscall vehPoliceCarAudio::Init(class vehCarSim *,class vehCarDamage *,char const *,char const *,bool) | ?Init@vehPoliceCarAudio@@QAEXPAVvehCarSim@@PAVvehCarDamage@@PBD2_N@Z
    0x4D4730 | private: void __thiscall vehPoliceCarAudio::Load(char const *) | ?Load@vehPoliceCarAudio@@AAEXPBD@Z
    0x4D4800 | private: void __thiscall vehPoliceCarAudio::ReadSirenData(class Stream *) | ?ReadSirenData@vehPoliceCarAudio@@AAEXPAVStream@@@Z
    0x4D49E0 | private: void __thiscall vehPoliceCarAudio::ReadSirenData(struct tagSirenData *,char *) | ?ReadSirenData@vehPoliceCarAudio@@AAEXPAUtagSirenData@@PAD@Z
    0x4D4A50 | private: void __thiscall vehPoliceCarAudio::ReadSirenPlayInfo(struct tagSirenData *,char *) | ?ReadSirenPlayInfo@vehPoliceCarAudio@@AAEXPAUtagSirenData@@PAD@Z
    0x4D4B00 | public: int __thiscall vehPoliceCarAudio::ExplosionIsPlaying(void) | ?ExplosionIsPlaying@vehPoliceCarAudio@@QAEHXZ
    0x4D4B20 | public: void __thiscall vehPoliceCarAudio::StartSiren(int) | ?StartSiren@vehPoliceCarAudio@@QAEXH@Z
    0x4D4C20 | public: void __thiscall vehPoliceCarAudio::StopSiren(void) | ?StopSiren@vehPoliceCarAudio@@QAEXXZ
    0x4D4C90 | public: void __thiscall vehPoliceCarAudio::PlayExplosion(void) | ?PlayExplosion@vehPoliceCarAudio@@QAEXXZ
    0x4D4D50 | public: void __thiscall vehPoliceCarAudio::DamageSiren(void) | ?DamageSiren@vehPoliceCarAudio@@QAEXXZ
    0x4D4E40 | public: int __thiscall vehPoliceCarAudio::UpdateSiren(float,float,float) | ?UpdateSiren@vehPoliceCarAudio@@QAEHMMM@Z
    0x4D4F60 | public: void __thiscall vehPoliceCarAudio::UpdateSiren(void) | ?UpdateSiren@vehPoliceCarAudio@@QAEXXZ
    0x4D4FB0 | private: void __thiscall vehPoliceCarAudio::FluctuateSiren(void) | ?FluctuateSiren@vehPoliceCarAudio@@AAEXXZ
    0x4D5060 | public: int __thiscall vehPoliceCarAudio::UpdateAudio3D(float) | ?UpdateAudio3D@vehPoliceCarAudio@@QAEHM@Z
    0x4D50B0 | public: void __thiscall vehPoliceCarAudio::UpdateExplosion(float,float) | ?UpdateExplosion@vehPoliceCarAudio@@QAEXMM@Z
    0x4D5120 | public: void __thiscall vehPoliceCarAudio::PlayVoice(void) | ?PlayVoice@vehPoliceCarAudio@@QAEXXZ
    0x4D5130 | public: virtual void __thiscall vehPoliceCarAudio::AssignSounds(void) | ?AssignSounds@vehPoliceCarAudio@@UAEXXZ
    0x4D5220 | public: virtual void __thiscall vehPoliceCarAudio::UnAssignSounds(int) | ?UnAssignSounds@vehPoliceCarAudio@@UAEXH@Z
    0x4D5290 | public: void __thiscall vehPoliceCarAudio::Reset(void) | ?Reset@vehPoliceCarAudio@@QAEXXZ
    0x4D52A0 | public: virtual void __thiscall vehPoliceCarAudio::UpdateAudio(void) | ?UpdateAudio@vehPoliceCarAudio@@UAEXXZ
    0x4D52F0 | public: void __thiscall vehPoliceCarAudio::UpdateAudio3D(void) | ?UpdateAudio3D@vehPoliceCarAudio@@QAEXXZ
    0x4D53B0 | public: void __thiscall vehPoliceCarAudio::UpdateAudioNon3D(void) | ?UpdateAudioNon3D@vehPoliceCarAudio@@QAEXXZ
    0x4D5400 | public: short __thiscall vehPoliceCarAudio::RandomizeNumber(void) | ?RandomizeNumber@vehPoliceCarAudio@@QAEFXZ
    0x4D5440 | public: static int __cdecl vehPoliceCarAudio::GetNumCopsPursuingPlayer(void) | ?GetNumCopsPursuingPlayer@vehPoliceCarAudio@@SAHXZ
    0x4D5450 | public: virtual void __thiscall vehPoliceCarAudio::SetNon3DParams(void) | ?SetNon3DParams@vehPoliceCarAudio@@UAEXXZ
    0x4D54F0 | public: void __thiscall vehPoliceCarAudio::Set2DPan(float) | ?Set2DPan@vehPoliceCarAudio@@QAEXM@Z
    0x4D5570 | public: virtual void __thiscall vehPoliceCarAudio::Set3DParams(void) | ?Set3DParams@vehPoliceCarAudio@@UAEXXZ
    0x4D5580 | public: void __thiscall vehPoliceCarAudio::RemoveFromManager(void) | ?RemoveFromManager@vehPoliceCarAudio@@QAEXXZ
    0x4D5590 | public: virtual void __thiscall vehPoliceCarAudio::Update(void) | ?Update@vehPoliceCarAudio@@UAEXXZ
    public: virtual void * __thiscall vehPoliceCarAudio::`scalar deleting destructor'(unsigned int) | ??_GvehPoliceCarAudio@@UAEPAXI@Z
    public: virtual void * __thiscall vehPoliceCarAudio::`vector deleting destructor'(unsigned int) | ??_EvehPoliceCarAudio@@UAEPAXI@Z
    0x5B2E18 | const vehPoliceCarAudio::`vftable' | ??_7vehPoliceCarAudio@@6B@
    0x6AFFE4 | private: static int vehPoliceCarAudio::s_iNumCopsPursuingPlayer | ?s_iNumCopsPursuingPlayer@vehPoliceCarAudio@@0HA
*/

#include "hooking.h"
