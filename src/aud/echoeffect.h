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
    aud:echoeffect

    0x5A2FA0 | public: __thiscall EchoEffect::EchoEffect(void) | ??0EchoEffect@@QAE@XZ
    0x5A2FE0 | public: __thiscall EchoEffect::~EchoEffect(void) | ??1EchoEffect@@QAE@XZ
    0x5A30A0 | public: int __thiscall EchoEffect::Enable(unsigned long,struct IDirectSoundBuffer *) | ?Enable@EchoEffect@@QAEHKPAUIDirectSoundBuffer@@@Z
    0x5A3120 | public: void __thiscall EchoEffect::Disable(void) | ?Disable@EchoEffect@@QAEXXZ
    0x5A3150 | public: void __thiscall EchoEffect::SetDelayTime(float) | ?SetDelayTime@EchoEffect@@QAEXM@Z
    0x5A3280 | public: void __thiscall EchoEffect::Update(void) | ?Update@EchoEffect@@QAEXXZ
    0x5A32F0 | private: void __thiscall EchoEffect::UpdatePlay(void) | ?UpdatePlay@EchoEffect@@AAEXXZ
    0x5A33B0 | private: void __thiscall EchoEffect::UpdateStop(void) | ?UpdateStop@EchoEffect@@AAEXXZ
    0x5A3460 | private: void __thiscall EchoEffect::UpdateVolume(void) | ?UpdateVolume@EchoEffect@@AAEXXZ
    0x5A3510 | private: void __thiscall EchoEffect::UpdatePitch(void) | ?UpdatePitch@EchoEffect@@AAEXXZ
    0x5A35C0 | public: void __thiscall EchoEffect::QueuePlay(unsigned long) | ?QueuePlay@EchoEffect@@QAEXK@Z
    0x5A3620 | public: void __thiscall EchoEffect::QueueStop(void) | ?QueueStop@EchoEffect@@QAEXXZ
    0x5A3650 | public: void __thiscall EchoEffect::Stop(void) | ?Stop@EchoEffect@@QAEXXZ
    0x5A3660 | public: void __thiscall EchoEffect::SetFrequency(float) | ?SetFrequency@EchoEffect@@QAEXM@Z
    0x5A3730 | public: void __thiscall EchoEffect::CalculatePan(float) | ?CalculatePan@EchoEffect@@QAEXM@Z
    0x5A3790 | public: void __thiscall EchoEffect::SetVolume(float) | ?SetVolume@EchoEffect@@QAEXM@Z
    0x5A37C0 | public: void __thiscall EchoEffect::QueueVolume(float) | ?QueueVolume@EchoEffect@@QAEXM@Z
    0x5A3810 | public: void __thiscall EchoEffect::QueueFrequency(unsigned long) | ?QueueFrequency@EchoEffect@@QAEXK@Z
    0x5A3850 | public: __thiscall EffectBase::~EffectBase(void) | ??1EffectBase@@QAE@XZ
*/

// #include "hooking.h"
