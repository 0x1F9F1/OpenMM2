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
    vehicle:caraudiocontainer

    0x4D0C80 | public: static void __cdecl vehCarAudioContainer::SetSirenCSVName(char const *) | ?SetSirenCSVName@vehCarAudioContainer@@SAXPBD@Z
    0x4D0CB0 | public: static void __cdecl vehCarAudioContainer::RegisterTypes(char const *) | ?RegisterTypes@vehCarAudioContainer@@SAXPBD@Z
    0x4D0E30 | private: static void __cdecl vehCarAudioContainer::RegisterSemiNames(class Stream *,char *) | ?RegisterSemiNames@vehCarAudioContainer@@CAXPAVStream@@PAD@Z
    0x4D0F10 | private: static void __cdecl vehCarAudioContainer::RegisterPoliceNames(class Stream *,char *) | ?RegisterPoliceNames@vehCarAudioContainer@@CAXPAVStream@@PAD@Z
    0x4D0FF0 | public: static void __cdecl vehCarAudioContainer::InitStatics(void) | ?InitStatics@vehCarAudioContainer@@SAXXZ
    0x4D1020 | public: static void __cdecl vehCarAudioContainer::DeallocateStatics(void) | ?DeallocateStatics@vehCarAudioContainer@@SAXXZ
    0x4D10F0 | public: __thiscall vehCarAudioContainer::vehCarAudioContainer(void) | ??0vehCarAudioContainer@@QAE@XZ
    0x4D1110 | public: __thiscall vehCarAudioContainer::vehCarAudioContainer(char const *,class vehCarSim *,class vehCarDamage *,int) | ??0vehCarAudioContainer@@QAE@PBDPAVvehCarSim@@PAVvehCarDamage@@H@Z
    0x4D11D0 | public: void __thiscall vehCarAudioContainer::Init(char const *,class vehCarSim *,class vehCarDamage *,int) | ?Init@vehCarAudioContainer@@QAEXPBDPAVvehCarSim@@PAVvehCarDamage@@H@Z
    0x4D12E0 | public: void __thiscall vehCarAudioContainer::InitPolice(char const *,class vehCarSim *,class vehCarDamage *,int) | ?InitPolice@vehCarAudioContainer@@QAEXPBDPAVvehCarSim@@PAVvehCarDamage@@H@Z
    0x4D13D0 | public: void __thiscall vehCarAudioContainer::InitSemi(char const *,class vehCarSim *,class vehCarDamage *,int) | ?InitSemi@vehCarAudioContainer@@QAEXPBDPAVvehCarSim@@PAVvehCarDamage@@H@Z
    0x4D14E0 | public: void __thiscall vehCarAudioContainer::InitNitro(char const *,class vehCarSim *,class vehCarDamage *,int) | ?InitNitro@vehCarAudioContainer@@QAEXPBDPAVvehCarSim@@PAVvehCarDamage@@H@Z
    0x4D15F0 | public: __thiscall vehCarAudioContainer::~vehCarAudioContainer(void) | ??1vehCarAudioContainer@@QAE@XZ
    0x4D1660 | public: void __thiscall vehCarAudioContainer::Set2DPan(float) | ?Set2DPan@vehCarAudioContainer@@QAEXM@Z
    0x4D16C0 | public: bool __thiscall vehCarAudioContainer::Is3D(void) | ?Is3D@vehCarAudioContainer@@QAE_NXZ
    0x4D16F0 | public: bool __thiscall vehCarAudioContainer::IsAirBorne(void) | ?IsAirBorne@vehCarAudioContainer@@QAE_NXZ
    0x4D1730 | public: class AudImpact * __thiscall vehCarAudioContainer::GetAudImpactPtr(void) | ?GetAudImpactPtr@vehCarAudioContainer@@QAEPAVAudImpact@@XZ
    0x4D1770 | public: class vehCarAudio * __thiscall vehCarAudioContainer::GetCarAudioPtr(void) | ?GetCarAudioPtr@vehCarAudioContainer@@QAEPAVvehCarAudio@@XZ
    0x4D1780 | public: class vehNitroCarAudio * __thiscall vehCarAudioContainer::GetNitroCarAudioPtr(void) | ?GetNitroCarAudioPtr@vehCarAudioContainer@@QAEPAVvehNitroCarAudio@@XZ
    0x4D1790 | public: class vehPoliceCarAudio * __thiscall vehCarAudioContainer::GetPoliceCarAudioPtr(void) | ?GetPoliceCarAudioPtr@vehCarAudioContainer@@QAEPAVvehPoliceCarAudio@@XZ
    0x4D17A0 | public: class vehSemiCarAudio * __thiscall vehCarAudioContainer::GetSemiCarAudioPtr(void) | ?GetSemiCarAudioPtr@vehCarAudioContainer@@QAEPAVvehSemiCarAudio@@XZ
    0x4D17B0 | public: bool __thiscall vehCarAudioContainer::IsPlayer(void) | ?IsPlayer@vehCarAudioContainer@@QAE_NXZ
    0x4D17C0 | public: void __thiscall vehCarAudioContainer::PlayHorn(void) | ?PlayHorn@vehCarAudioContainer@@QAEXXZ
    0x4D1800 | public: void __thiscall vehCarAudioContainer::StopHorn(void) | ?StopHorn@vehCarAudioContainer@@QAEXXZ
    0x4D1840 | public: void __thiscall vehCarAudioContainer::Set3D(bool) | ?Set3D@vehCarAudioContainer@@QAEX_N@Z
    0x4D1890 | public: void __thiscall vehCarAudioContainer::PlayNitro(void) | ?PlayNitro@vehCarAudioContainer@@QAEXXZ
    0x4D18A0 | public: void __thiscall vehCarAudioContainer::StopNitro(void) | ?StopNitro@vehCarAudioContainer@@QAEXXZ
    0x4D18B0 | public: void __thiscall vehCarAudioContainer::StartSiren(void) | ?StartSiren@vehCarAudioContainer@@QAEXXZ
    0x4D18C0 | public: void __thiscall vehCarAudioContainer::StopSiren(void) | ?StopSiren@vehCarAudioContainer@@QAEXXZ
    0x4D18D0 | public: void __thiscall vehCarAudioContainer::RemoveNetVehicleAudio(void) | ?RemoveNetVehicleAudio@vehCarAudioContainer@@QAEXXZ
    0x4D1910 | public: void __thiscall vehCarAudioContainer::SilenceEngine(int) | ?SilenceEngine@vehCarAudioContainer@@QAEXH@Z
    0x4D1980 | public: void __thiscall vehCarAudioContainer::Update(void) | ?Update@vehCarAudioContainer@@QAEXXZ
    0x4D19C0 | public: void __thiscall vehCarAudioContainer::Reset(void) | ?Reset@vehCarAudioContainer@@QAEXXZ
    0x4D1A00 | public: static bool __cdecl vehCarAudioContainer::IsSemiOrBus(char const *) | ?IsSemiOrBus@vehCarAudioContainer@@SA_NPBD@Z
    0x4D1A70 | public: static bool __cdecl vehCarAudioContainer::IsPolice(char const *) | ?IsPolice@vehCarAudioContainer@@SA_NPBD@Z
    0x6AFF34 | private: static int vehCarAudioContainer::s_iNumPoliceNames | ?s_iNumPoliceNames@vehCarAudioContainer@@0HA
    0x6AFF38 | private: static int vehCarAudioContainer::s_iNumSemiNames | ?s_iNumSemiNames@vehCarAudioContainer@@0HA
    0x6AFF40 | private: static char * vehCarAudioContainer::s_acSirenCSVName | ?s_acSirenCSVName@vehCarAudioContainer@@0PADA
    0x6AFFA0 | private: static bool vehCarAudioContainer::s_bTypesRegistered | ?s_bTypesRegistered@vehCarAudioContainer@@0_NA
    0x6AFFA1 | private: static bool vehCarAudioContainer::s_bAlwaysNitro | ?s_bAlwaysNitro@vehCarAudioContainer@@0_NA
    0x6AFFA4 | private: static char * * vehCarAudioContainer::s_ppSemiName | ?s_ppSemiName@vehCarAudioContainer@@0PAPADA
    0x6AFFA8 | private: static char * * vehCarAudioContainer::s_ppPoliceName | ?s_ppPoliceName@vehCarAudioContainer@@0PAPADA
*/

#include "hooking.h"

class Stream;

class vehCarAudioContainer
{
public:
    static void RegisterTypes(char const* fileName);
    static void RegisterTypes2(Stream* stream, void* context);

    static void RegisterSemiNames(Stream* stream, char* names);
    static void RegisterPoliceNames(Stream* stream, char* names);

    static inline extern_var(0x6AFFA1, bool, s_bAlwaysNitro);

    static inline extern_var(0x6AFF34, int, s_iNumPoliceNames);
    static inline extern_var(0x6AFF38, int, s_iNumSemiNames);

    static inline extern_var(0x6AFFA8, char**, s_ppPoliceName);
    static inline extern_var(0x6AFFA4, char**, s_ppSemiName);
};
