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
    ageaudio:audcreatureimpact

    0x512F10 | public: __thiscall AudCreatureImpact::AudCreatureImpact(void) | ??0AudCreatureImpact@@QAE@XZ
    0x512F40 | public: __thiscall AudCreatureImpact::AudCreatureImpact(class AudCreatureImpact *) | ??0AudCreatureImpact@@QAE@PAV0@@Z
    0x513030 | public: __thiscall AudCreatureImpact::~AudCreatureImpact(void) | ??1AudCreatureImpact@@QAE@XZ
    0x513090 | public: void __thiscall AudCreatureImpact::SetAud3DObjectPtr(class Aud3DObject *) | ?SetAud3DObjectPtr@AudCreatureImpact@@QAEXPAVAud3DObject@@@Z
    0x5130A0 | public: bool __thiscall AudCreatureImpact::SamplePlaying(void) | ?SamplePlaying@AudCreatureImpact@@QAE_NXZ
    0x5130C0 | public: int __thiscall AudCreatureImpact::ParseCSVBuffer(class Stream *) | ?ParseCSVBuffer@AudCreatureImpact@@QAEHPAVStream@@@Z
    0x5132D0 | public: void __thiscall AudCreatureImpact::AssignSounds(int) | ?AssignSounds@AudCreatureImpact@@QAEXH@Z
    0x513320 | public: void __thiscall AudCreatureImpact::UnAssignSounds(void) | ?UnAssignSounds@AudCreatureImpact@@QAEXXZ
    0x513350 | public: void __thiscall AudCreatureImpact::QueuePlay(float) | ?QueuePlay@AudCreatureImpact@@QAEXM@Z
    0x5133D0 | private: void __thiscall AudCreatureImpact::Play(void) | ?Play@AudCreatureImpact@@AAEXXZ
    0x513460 | public: void __thiscall AudCreatureImpact::UpdateAttenuation(float,float) | ?UpdateAttenuation@AudCreatureImpact@@QAEXMM@Z
    0x5134D0 | public: void __thiscall AudCreatureImpact::EchoOn(float) | ?EchoOn@AudCreatureImpact@@QAEXM@Z
    0x513530 | public: void __thiscall AudCreatureImpact::EchoOff(void) | ?EchoOff@AudCreatureImpact@@QAEXXZ
    0x513560 | public: void __thiscall AudCreatureImpact::UpdateEcho(void) | ?UpdateEcho@AudCreatureImpact@@QAEXXZ
    0x513590 | public: void __thiscall AudCreatureImpact::Update(void) | ?Update@AudCreatureImpact@@QAEXXZ
    0x5135D0 | public: static void __cdecl AudCreatureImpact::UpdateStatics(void) | ?UpdateStatics@AudCreatureImpact@@SAXXZ
    private: static float AudCreatureImpact::s_fTimeSincePlay | ?s_fTimeSincePlay@AudCreatureImpact@@0MA
    private: static int AudCreatureImpact::s_iPrevPlayIndex | ?s_iPrevPlayIndex@AudCreatureImpact@@0HA
*/

#include "hooking.h"
