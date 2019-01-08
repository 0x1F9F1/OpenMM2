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
    vehicle:aiambientvehicleaudio

    0x4CF890 | public: __thiscall aiAmbientVehicleAudio::aiAmbientVehicleAudio(void) | ??0aiAmbientVehicleAudio@@QAE@XZ
    0x4CF8E0 | public: virtual __thiscall aiAmbientVehicleAudio::~aiAmbientVehicleAudio(void) | ??1aiAmbientVehicleAudio@@UAE@XZ
    0x4CF8F0 | public: void __thiscall aiAmbientVehicleAudio::Init(char *,class Vector3 *) | ?Init@aiAmbientVehicleAudio@@QAEXPADPAVVector3@@@Z
    0x4CF9B0 | public: void __thiscall aiAmbientVehicleAudio::Reset(void) | ?Reset@aiAmbientVehicleAudio@@QAEXXZ
    0x4CF9D0 | public: virtual void __thiscall aiAmbientVehicleAudio::AssignSounds(void) | ?AssignSounds@aiAmbientVehicleAudio@@UAEXXZ
    0x4CFA50 | public: virtual void __thiscall aiAmbientVehicleAudio::UnAssignSounds(int) | ?UnAssignSounds@aiAmbientVehicleAudio@@UAEXH@Z
    0x4CFAB0 | public: bool __thiscall aiAmbientVehicleAudio::PlayAvoidanceHorn(void) | ?PlayAvoidanceHorn@aiAmbientVehicleAudio@@QAE_NXZ
    0x4CFAD0 | public: void __thiscall aiAmbientVehicleAudio::PlayImpactHorn(float) | ?PlayImpactHorn@aiAmbientVehicleAudio@@QAEXM@Z
    0x4CFAF0 | public: void __thiscall aiAmbientVehicleAudio::UpdateHorn(void) | ?UpdateHorn@aiAmbientVehicleAudio@@QAEXXZ
    0x4CFB10 | public: class AudImpact * __thiscall aiAmbientVehicleAudio::GetAudImpactPtr(void) | ?GetAudImpactPtr@aiAmbientVehicleAudio@@QAEPAVAudImpact@@XZ
    0x4CFB20 | public: virtual void __thiscall aiAmbientVehicleAudio::UpdateAudio(void) | ?UpdateAudio@aiAmbientVehicleAudio@@UAEXXZ
    0x4CFB90 | public: int __thiscall aiAmbientVehicleAudio::UpdateAudio(float) | ?UpdateAudio@aiAmbientVehicleAudio@@QAEHM@Z
    0x4CFCC0 | public: static void __cdecl aiAmbientVehicleAudio::InitStatics(void) | ?InitStatics@aiAmbientVehicleAudio@@SAXXZ
    0x4CFD00 | public: static void __cdecl aiAmbientVehicleAudio::DeallocateStatics(void) | ?DeallocateStatics@aiAmbientVehicleAudio@@SAXXZ
    0x4CFF00 | public: static void __cdecl aiAmbientVehicleAudio::UpdateStatics(float) | ?UpdateStatics@aiAmbientVehicleAudio@@SAXM@Z
    0x4CFF30 | private: static void __cdecl aiAmbientVehicleAudio::UpdateVoices(int,float) | ?UpdateVoices@aiAmbientVehicleAudio@@CAXHM@Z
    0x4CFF70 | public: static void __cdecl aiAmbientVehicleAudio::SetCSVCatString(char *) | ?SetCSVCatString@aiAmbientVehicleAudio@@SAXPAD@Z
    0x4CFFA0 | public: static void __cdecl aiAmbientVehicleAudio::LoadNumVFileChoices(char *) | ?LoadNumVFileChoices@aiAmbientVehicleAudio@@SAXPAD@Z
    0x4CFFE0 | public: void __thiscall aiAmbientVehicleAudio::EchoOn(void) | ?EchoOn@aiAmbientVehicleAudio@@QAEXXZ
    0x4D0030 | public: void __thiscall aiAmbientVehicleAudio::EchoOff(void) | ?EchoOff@aiAmbientVehicleAudio@@QAEXXZ
    0x4D0060 | private: void __thiscall aiAmbientVehicleAudio::UpdateEcho(void) | ?UpdateEcho@aiAmbientVehicleAudio@@AAEXXZ
    0x4D0090 | public: void __thiscall aiAmbientVehicleAudio::PlayImpactReaction(float) | ?PlayImpactReaction@aiAmbientVehicleAudio@@QAEXM@Z
    0x4D00B0 | public: void __thiscall aiAmbientVehicleAudio::PlayAvoidanceReaction(float) | ?PlayAvoidanceReaction@aiAmbientVehicleAudio@@QAEXM@Z
    0x4D00D0 | public: bool __thiscall aiAmbientVehicleAudio::LoadEngine(char *,char *) | ?LoadEngine@aiAmbientVehicleAudio@@QAE_NPAD0@Z
    0x4D0300 | public: bool __thiscall aiAmbientVehicleAudio::LoadHorn(char *,char *) | ?LoadHorn@aiAmbientVehicleAudio@@QAE_NPAD0@Z
    0x4D0530 | public: bool __thiscall aiAmbientVehicleAudio::LoadVoices(char *,char *,bool) | ?LoadVoices@aiAmbientVehicleAudio@@QAE_NPAD0_N@Z
    0x4D07B0 | public: bool __thiscall aiAmbientVehicleAudio::LoadImpacts(char *,char *) | ?LoadImpacts@aiAmbientVehicleAudio@@QAE_NPAD0@Z
    public: virtual void * __thiscall aiAmbientVehicleAudio::`scalar deleting destructor'(unsigned int) | ??_GaiAmbientVehicleAudio@@UAEPAXI@Z
    public: virtual void * __thiscall aiAmbientVehicleAudio::`vector deleting destructor'(unsigned int) | ??_EaiAmbientVehicleAudio@@UAEPAXI@Z
    0x4D0B00 | void __cdecl DeallocateAudioData(class aiEngineAudio * * *,int *) | ?DeallocateAudioData@@YAXPAPAPAVaiEngineAudio@@PAH@Z
    0x4D0B70 | void __cdecl DeallocateAudioData(class AudCreature * * *,int *) | ?DeallocateAudioData@@YAXPAPAPAVAudCreature@@PAH@Z
    0x4D0BE0 | void __cdecl DeallocateAudioData(class AudImpact * * *,int *) | ?DeallocateAudioData@@YAXPAPAPAVAudImpact@@PAH@Z
    0x4D0C50 | public: void * __thiscall vehHornAudio::`scalar deleting destructor'(unsigned int) | ??_GvehHornAudio@@QAEPAXI@Z
    0x5B2D74 | const aiAmbientVehicleAudio::`vftable' | ??_7aiAmbientVehicleAudio@@6B@
    0x6AFEF4 | private: static char * aiAmbientVehicleAudio::s_CSVCatString | ?s_CSVCatString@aiAmbientVehicleAudio@@0PADA
    0x6AFF08 | private: static class Aud3DManagerData<class vehHornAudio> * * aiAmbientVehicleAudio::s_ppHornAudioContainer | ?s_ppHornAudioContainer@aiAmbientVehicleAudio@@0PAPAV?$Aud3DManagerData@VvehHornAudio@@@@A
    0x6AFF0C | private: static class Aud3DManagerData<class AudCreature> * * aiAmbientVehicleAudio::s_ppAudCreatureContainer | ?s_ppAudCreatureContainer@aiAmbientVehicleAudio@@0PAPAV?$Aud3DManagerData@VAudCreature@@@@A
    0x6AFF10 | private: static class Aud3DManagerData<class aiEngineAudio> * * aiAmbientVehicleAudio::s_ppEngineAudioContainer | ?s_ppEngineAudioContainer@aiAmbientVehicleAudio@@0PAPAV?$Aud3DManagerData@VaiEngineAudio@@@@A
    0x6AFF14 | private: static class Aud3DManagerData<class AudImpact> * * aiAmbientVehicleAudio::s_ppAudImpactContainer | ?s_ppAudImpactContainer@aiAmbientVehicleAudio@@0PAPAV?$Aud3DManagerData@VAudImpact@@@@A
    0x6AFF18 | private: static int aiAmbientVehicleAudio::s_iNumHornAudioContainers | ?s_iNumHornAudioContainers@aiAmbientVehicleAudio@@0HA
    0x6AFF1C | private: static int aiAmbientVehicleAudio::s_iNumEngineAudioContainers | ?s_iNumEngineAudioContainers@aiAmbientVehicleAudio@@0HA
    0x6AFF20 | private: static int aiAmbientVehicleAudio::s_iNumAudCreatureContainers | ?s_iNumAudCreatureContainers@aiAmbientVehicleAudio@@0HA
    0x6AFF24 | private: static int aiAmbientVehicleAudio::s_iNumAudImpactContainers | ?s_iNumAudImpactContainers@aiAmbientVehicleAudio@@0HA
    0x6AFF28 | private: static int aiAmbientVehicleAudio::s_iVoiceFileNum | ?s_iVoiceFileNum@aiAmbientVehicleAudio@@0HA
    private: static float aiAmbientVehicleAudio::s_fImpactReactionTimer | ?s_fImpactReactionTimer@aiAmbientVehicleAudio@@0MA
*/

#include "hooking.h"
