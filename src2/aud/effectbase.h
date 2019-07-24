/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
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
    aud:effectbase

    0x5A74E0 | public: struct IDirectSoundBuffer * __thiscall EffectBase::CreateDSoundBuffer(unsigned long,struct IDirectSoundBuffer *) | ?CreateDSoundBuffer@EffectBase@@QAEPAUIDirectSoundBuffer@@KPAU2@@Z
    0x5A7590 | public: short __thiscall EffectBase::OriginalBufferPlaying(short) | ?OriginalBufferPlaying@EffectBase@@QAEFF@Z
*/

struct EffectBase
{
public:
    // 0x5A3850 | ??1EffectBase@@QAE@XZ
    inline ~EffectBase()
    {
        stub<member_func_t<void, EffectBase>>(0x5A3850, this);
    }

    // 0x5A74E0 | ?CreateDSoundBuffer@EffectBase@@QAEPAUIDirectSoundBuffer@@KPAU2@@Z
    inline struct IDirectSoundBuffer* CreateDSoundBuffer(uint32_t arg1, struct IDirectSoundBuffer* arg2)
    {
        return stub<member_func_t<struct IDirectSoundBuffer*, EffectBase, uint32_t, struct IDirectSoundBuffer*>>(
            0x5A74E0, this, arg1, arg2);
    }

    // 0x5A7590 | ?OriginalBufferPlaying@EffectBase@@QAEFF@Z
    inline int16_t OriginalBufferPlaying(int16_t arg1)
    {
        return stub<member_func_t<int16_t, EffectBase, int16_t>>(0x5A7590, this, arg1);
    }
};
