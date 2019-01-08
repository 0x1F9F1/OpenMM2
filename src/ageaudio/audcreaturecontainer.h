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
    ageaudio:audcreaturecontainer

    0x5108D0 | public: __thiscall AudCreatureContainer::AudCreatureContainer(void) | ??0AudCreatureContainer@@QAE@XZ
    0x510900 | public: virtual __thiscall AudCreatureContainer::~AudCreatureContainer(void) | ??1AudCreatureContainer@@UAE@XZ
    0x510910 | public: bool __thiscall AudCreatureContainer::IsPlaying(void) | ?IsPlaying@AudCreatureContainer@@QAE_NXZ
    0x510920 | public: void __thiscall AudCreatureContainer::Init(char *,class Vector3 *) | ?Init@AudCreatureContainer@@QAEXPADPAVVector3@@@Z
    0x510950 | public: virtual void __thiscall AudCreatureContainer::Update(void) | ?Update@AudCreatureContainer@@UAEXXZ
    0x510980 | public: void __thiscall AudCreatureContainer::Reset(void) | ?Reset@AudCreatureContainer@@QAEXXZ
    0x5109A0 | public: virtual void __thiscall AudCreatureContainer::AssignSounds(void) | ?AssignSounds@AudCreatureContainer@@UAEXXZ
    0x5109E0 | public: virtual void __thiscall AudCreatureContainer::UnAssignSounds(int) | ?UnAssignSounds@AudCreatureContainer@@UAEXH@Z
    0x510A20 | public: virtual void __thiscall AudCreatureContainer::UpdateAudio(void) | ?UpdateAudio@AudCreatureContainer@@UAEXXZ
    0x510A80 | public: int __thiscall AudCreatureContainer::UpdateAudio(float) | ?UpdateAudio@AudCreatureContainer@@QAEHM@Z
    0x510B10 | public: static void __cdecl AudCreatureContainer::InitStatics(void) | ?InitStatics@AudCreatureContainer@@SAXXZ
    0x510B30 | public: static void __cdecl AudCreatureContainer::DeallocateStatics(void) | ?DeallocateStatics@AudCreatureContainer@@SAXXZ
    0x510BF0 | public: static void __cdecl AudCreatureContainer::UpdateStatics(float) | ?UpdateStatics@AudCreatureContainer@@SAXM@Z
    0x510C20 | private: static void __cdecl AudCreatureContainer::UpdateVoices(int,float) | ?UpdateVoices@AudCreatureContainer@@CAXHM@Z
    0x510C60 | public: void __thiscall AudCreatureContainer::EchoOn(void) | ?EchoOn@AudCreatureContainer@@QAEXXZ
    0x510C90 | public: void __thiscall AudCreatureContainer::EchoOff(void) | ?EchoOff@AudCreatureContainer@@QAEXXZ
    0x510CB0 | private: void __thiscall AudCreatureContainer::UpdateEcho(void) | ?UpdateEcho@AudCreatureContainer@@AAEXXZ
    0x510CC0 | public: void __thiscall AudCreatureContainer::PlayImpactReaction(float) | ?PlayImpactReaction@AudCreatureContainer@@QAEXM@Z
    0x510CF0 | public: void __thiscall AudCreatureContainer::PlayAvoidanceReaction(float) | ?PlayAvoidanceReaction@AudCreatureContainer@@QAEXM@Z
    0x510D20 | public: bool __thiscall AudCreatureContainer::LoadVoices(char *,char *) | ?LoadVoices@AudCreatureContainer@@QAE_NPAD0@Z
    0x510F50 | public: static void __cdecl AudCreatureContainer::LoadNumFileChoices(char *,int *) | ?LoadNumFileChoices@AudCreatureContainer@@SAXPADPAH@Z
    public: virtual void * __thiscall AudCreatureContainer::`vector deleting destructor'(unsigned int) | ??_EAudCreatureContainer@@UAEPAXI@Z
    public: virtual void * __thiscall AudCreatureContainer::`scalar deleting destructor'(unsigned int) | ??_GAudCreatureContainer@@UAEPAXI@Z
    0x5B4C9C | const AudCreatureContainer::`vftable' | ??_7AudCreatureContainer@@6B@
    private: static class Aud3DManagerData<class AudCreature> * * AudCreatureContainer::s_ppAudCreatureContainer | ?s_ppAudCreatureContainer@AudCreatureContainer@@0PAPAV?$Aud3DManagerData@VAudCreature@@@@A
    private: static int AudCreatureContainer::s_iNumAudCreatureContainers | ?s_iNumAudCreatureContainers@AudCreatureContainer@@0HA
    private: static float AudCreatureContainer::s_fImpactReactionTimer | ?s_fImpactReactionTimer@AudCreatureContainer@@0MA
*/

#include "hooking.h"
