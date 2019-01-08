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
    vehicle:caraudio

    0x4DB810 | public: __thiscall vehCarAudio::vehCarAudio(class vehCarSim *,class vehCarDamage *,char const *,bool,bool) | ??0vehCarAudio@@QAE@PAVvehCarSim@@PAVvehCarDamage@@PBD_N3@Z
    0x4DB890 | public: virtual __thiscall vehCarAudio::~vehCarAudio(void) | ??1vehCarAudio@@UAE@XZ
    0x4DB900 | public: void __thiscall vehCarAudio::Init(class vehCarSim *,class vehCarDamage *,char const *,bool,bool,bool) | ?Init@vehCarAudio@@QAEXPAVvehCarSim@@PAVvehCarDamage@@PBD_N33@Z
    public: void __thiscall vehCarAudio::AddWidgets(class bkBank &) | ?AddWidgets@vehCarAudio@@QAEXAAVbkBank@@@Z
    public: void __thiscall vehCarAudio::Toggle3D(void) | ?Toggle3D@vehCarAudio@@QAEXXZ
    0x4DBB50 | public: int __thiscall vehCarAudio::GetCurrentGear(void) | ?GetCurrentGear@vehCarAudio@@QAEHXZ
    0x4DBB60 | public: void __thiscall vehCarAudio::UpdateGear(void) | ?UpdateGear@vehCarAudio@@QAEXXZ
    0x4DBBB0 | public: virtual void __thiscall vehCarAudio::UpdateAudio(void) | ?UpdateAudio@vehCarAudio@@UAEXXZ
    0x4DBC10 | public: int __thiscall vehCarAudio::UpdateAudio3D(void) | ?UpdateAudio3D@vehCarAudio@@QAEHXZ
    0x4DBCB0 | public: void __thiscall vehCarAudio::UpdateAudioNon3D(void) | ?UpdateAudioNon3D@vehCarAudio@@QAEXXZ
    0x4DBD00 | public: int __thiscall vehCarAudio::UpdateAudio3D(float) | ?UpdateAudio3D@vehCarAudio@@QAEHM@Z
    0x4DBE30 | public: void __thiscall vehCarAudio::Reset(void) | ?Reset@vehCarAudio@@QAEXXZ
    0x4DBE40 | public: virtual void __thiscall vehCarAudio::AssignSounds(void) | ?AssignSounds@vehCarAudio@@UAEXXZ
    0x4DBF80 | public: virtual void __thiscall vehCarAudio::UnAssignSounds(int) | ?UnAssignSounds@vehCarAudio@@UAEXH@Z
    0x4DC000 | public: void __thiscall vehCarAudio::SetMinAmpSpeed(float) | ?SetMinAmpSpeed@vehCarAudio@@QAEXM@Z
    0x4DC020 | public: int __thiscall vehCarAudio::Load(char const *,bool) | ?Load@vehCarAudio@@QAEHPBD_N@Z
    0x4DC1C0 | public: void __thiscall vehCarAudio::RemoveFromManager(void) | ?RemoveFromManager@vehCarAudio@@QAEXXZ
    0x4DC1D0 | public: void __thiscall vehCarAudio::PlayHorn(void) | ?PlayHorn@vehCarAudio@@QAEXXZ
    0x4DC210 | public: void __thiscall vehCarAudio::StopHorn(void) | ?StopHorn@vehCarAudio@@QAEXXZ
    0x4DC240 | public: virtual void __thiscall vehCarAudio::SetNon3DParams(void) | ?SetNon3DParams@vehCarAudio@@UAEXXZ
    0x4DC300 | public: virtual void __thiscall vehCarAudio::Set3DParams(void) | ?Set3DParams@vehCarAudio@@UAEXXZ
    0x4DC320 | public: virtual void __thiscall vehCarAudio::Update(void) | ?Update@vehCarAudio@@UAEXXZ
    0x4DC340 | public: bool __thiscall vehCarAudio::IsAirBorne(void) | ?IsAirBorne@vehCarAudio@@QAE_NXZ
    0x4DC350 | public: void __thiscall vehCarAudio::EchoOn(void) | ?EchoOn@vehCarAudio@@QAEXXZ
    0x4DC400 | public: void __thiscall vehCarAudio::EchoOff(void) | ?EchoOff@vehCarAudio@@QAEXXZ
    0x4DC450 | public: void __thiscall vehCarAudio::Set2DPan(float) | ?Set2DPan@vehCarAudio@@QAEXM@Z
    0x4DC4C0 | public: void __thiscall vehCarAudio::UpdateEcho(void) | ?UpdateEcho@vehCarAudio@@QAEXXZ
    0x4DC4F0 | public: bool __thiscall vehCarAudio::IsBrakeing(void) | ?IsBrakeing@vehCarAudio@@QAE_NXZ
    0x4DC500 | public: float __thiscall vehCarAudio::GetSpeed(void) | ?GetSpeed@vehCarAudio@@QAEMXZ
    0x4DC510 | private: bool __thiscall vehCarAudio::LoadImpacts(char *,char *) | ?LoadImpacts@vehCarAudio@@AAE_NPAD0@Z
    0x4DC730 | public: class AudImpact * __thiscall vehCarAudio::GetAudImpactPtr(void) | ?GetAudImpactPtr@vehCarAudio@@QAEPAVAudImpact@@XZ
    0x4DC740 | public: static void __cdecl vehCarAudio::InitStatics(void) | ?InitStatics@vehCarAudio@@SAXXZ
    0x4DC750 | public: static void __cdecl vehCarAudio::DeallocateStatics(void) | ?DeallocateStatics@vehCarAudio@@SAXXZ
    public: virtual void * __thiscall vehCarAudio::`vector deleting destructor'(unsigned int) | ??_EvehCarAudio@@UAEPAXI@Z
    public: virtual void * __thiscall vehCarAudio::`scalar deleting destructor'(unsigned int) | ??_GvehCarAudio@@UAEPAXI@Z
    0x5B3190 | const vehCarAudio::`vftable' | ??_7vehCarAudio@@6B@
    private: static class Aud3DManagerData<class AudImpact> * * vehCarAudio::s_ppAudImpactContainer | ?s_ppAudImpactContainer@vehCarAudio@@0PAPAV?$Aud3DManagerData@VAudImpact@@@@A
    private: static int vehCarAudio::s_iNumAudImpactContainers | ?s_iNumAudImpactContainers@vehCarAudio@@0HA
*/

#include "hooking.h"
