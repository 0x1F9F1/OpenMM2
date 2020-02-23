/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

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

class EchoEffect
{
public:
    // 0x5A2FA0 | ??0EchoEffect@@QAE@XZ
    inline EchoEffect()
    {
        stub<member_func_t<void, EchoEffect>>(0x5A2FA0, this);
    }

    // 0x5A2FE0 | ??1EchoEffect@@QAE@XZ
    inline ~EchoEffect()
    {
        stub<member_func_t<void, EchoEffect>>(0x5A2FE0, this);
    }

    // 0x5A30A0 | ?Enable@EchoEffect@@QAEHKPAUIDirectSoundBuffer@@@Z
    inline i32 Enable(u32 arg1, struct IDirectSoundBuffer* arg2)
    {
        return stub<member_func_t<i32, EchoEffect, u32, struct IDirectSoundBuffer*>>(0x5A30A0, this, arg1, arg2);
    }

    // 0x5A3120 | ?Disable@EchoEffect@@QAEXXZ
    inline void Disable()
    {
        return stub<member_func_t<void, EchoEffect>>(0x5A3120, this);
    }

    // 0x5A3150 | ?SetDelayTime@EchoEffect@@QAEXM@Z
    inline void SetDelayTime(f32 arg1)
    {
        return stub<member_func_t<void, EchoEffect, f32>>(0x5A3150, this, arg1);
    }

    // 0x5A3280 | ?Update@EchoEffect@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, EchoEffect>>(0x5A3280, this);
    }

    // 0x5A32F0 | ?UpdatePlay@EchoEffect@@AAEXXZ
    inline void UpdatePlay()
    {
        return stub<member_func_t<void, EchoEffect>>(0x5A32F0, this);
    }

    // 0x5A33B0 | ?UpdateStop@EchoEffect@@AAEXXZ
    inline void UpdateStop()
    {
        return stub<member_func_t<void, EchoEffect>>(0x5A33B0, this);
    }

    // 0x5A3460 | ?UpdateVolume@EchoEffect@@AAEXXZ
    inline void UpdateVolume()
    {
        return stub<member_func_t<void, EchoEffect>>(0x5A3460, this);
    }

    // 0x5A3510 | ?UpdatePitch@EchoEffect@@AAEXXZ
    inline void UpdatePitch()
    {
        return stub<member_func_t<void, EchoEffect>>(0x5A3510, this);
    }

    // 0x5A35C0 | ?QueuePlay@EchoEffect@@QAEXK@Z
    inline void QueuePlay(u32 arg1)
    {
        return stub<member_func_t<void, EchoEffect, u32>>(0x5A35C0, this, arg1);
    }

    // 0x5A3620 | ?QueueStop@EchoEffect@@QAEXXZ
    inline void QueueStop()
    {
        return stub<member_func_t<void, EchoEffect>>(0x5A3620, this);
    }

    // 0x5A3650 | ?Stop@EchoEffect@@QAEXXZ
    inline void Stop()
    {
        return stub<member_func_t<void, EchoEffect>>(0x5A3650, this);
    }

    // 0x5A3660 | ?SetFrequency@EchoEffect@@QAEXM@Z
    inline void SetFrequency(f32 arg1)
    {
        return stub<member_func_t<void, EchoEffect, f32>>(0x5A3660, this, arg1);
    }

    // 0x5A3730 | ?CalculatePan@EchoEffect@@QAEXM@Z
    inline void CalculatePan(f32 arg1)
    {
        return stub<member_func_t<void, EchoEffect, f32>>(0x5A3730, this, arg1);
    }

    // 0x5A3790 | ?SetVolume@EchoEffect@@QAEXM@Z
    inline void SetVolume(f32 arg1)
    {
        return stub<member_func_t<void, EchoEffect, f32>>(0x5A3790, this, arg1);
    }

    // 0x5A37C0 | ?QueueVolume@EchoEffect@@QAEXM@Z
    inline void QueueVolume(f32 arg1)
    {
        return stub<member_func_t<void, EchoEffect, f32>>(0x5A37C0, this, arg1);
    }

    // 0x5A3810 | ?QueueFrequency@EchoEffect@@QAEXK@Z
    inline void QueueFrequency(u32 arg1)
    {
        return stub<member_func_t<void, EchoEffect, u32>>(0x5A3810, this, arg1);
    }
};
