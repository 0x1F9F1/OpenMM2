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
    ageaudio:audcreatureavoid

    0x514810 | public: __thiscall AudCreatureAvoid::AudCreatureAvoid(void) | ??0AudCreatureAvoid@@QAE@XZ
    0x514850 | public: __thiscall AudCreatureAvoid::AudCreatureAvoid(class AudCreatureAvoid *) | ??0AudCreatureAvoid@@QAE@PAV0@@Z
    0x514960 | public: __thiscall AudCreatureAvoid::~AudCreatureAvoid(void) | ??1AudCreatureAvoid@@QAE@XZ
    0x5149C0 | public: int __thiscall AudCreatureAvoid::ParseCSVBuffer(class Stream *) | ?ParseCSVBuffer@AudCreatureAvoid@@QAEHPAVStream@@@Z
    0x514BF0 | public: void __thiscall AudCreatureAvoid::AssignSounds(int) | ?AssignSounds@AudCreatureAvoid@@QAEXH@Z
    0x514C40 | public: void __thiscall AudCreatureAvoid::UnAssignSounds(void) | ?UnAssignSounds@AudCreatureAvoid@@QAEXXZ
    0x514C70 | private: bool __thiscall AudCreatureAvoid::InSpeedRange(float) | ?InSpeedRange@AudCreatureAvoid@@AAE_NM@Z
    0x514CA0 | public: void __thiscall AudCreatureAvoid::SetAud3DObjectPtr(class Aud3DObject *) | ?SetAud3DObjectPtr@AudCreatureAvoid@@QAEXPAVAud3DObject@@@Z
    0x514CB0 | public: void __thiscall AudCreatureAvoid::QueuePlay(void) | ?QueuePlay@AudCreatureAvoid@@QAEXXZ
    0x514D10 | public: bool __thiscall AudCreatureAvoid::SamplePlaying(void) | ?SamplePlaying@AudCreatureAvoid@@QAE_NXZ
    0x514D30 | private: void __thiscall AudCreatureAvoid::Play(void) | ?Play@AudCreatureAvoid@@AAEXXZ
    0x514DA0 | public: void __thiscall AudCreatureAvoid::UpdateAttenuation(float,float) | ?UpdateAttenuation@AudCreatureAvoid@@QAEXMM@Z
    0x514E10 | public: void __thiscall AudCreatureAvoid::EchoOn(float) | ?EchoOn@AudCreatureAvoid@@QAEXM@Z
    0x514E70 | public: void __thiscall AudCreatureAvoid::EchoOff(void) | ?EchoOff@AudCreatureAvoid@@QAEXXZ
    0x514EA0 | public: void __thiscall AudCreatureAvoid::UpdateEcho(void) | ?UpdateEcho@AudCreatureAvoid@@QAEXXZ
    0x514ED0 | public: void __thiscall AudCreatureAvoid::Update(float) | ?Update@AudCreatureAvoid@@QAEXM@Z
    0x514F50 | public: bool __thiscall AudCreatureAvoid::IsEligible(void) | ?IsEligible@AudCreatureAvoid@@QAE_NXZ
    private: static int AudCreatureAvoid::s_iPrevPlayIndex | ?s_iPrevPlayIndex@AudCreatureAvoid@@0HA
*/

#include "hooking.h"
