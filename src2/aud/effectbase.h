/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 Brick

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
    ~EffectBase();

    // 0x5A74E0 | ?CreateDSoundBuffer@EffectBase@@QAEPAUIDirectSoundBuffer@@KPAU2@@Z
    struct IDirectSoundBuffer* CreateDSoundBuffer(u32 arg1, struct IDirectSoundBuffer* arg2);

    // 0x5A7590 | ?OriginalBufferPlaying@EffectBase@@QAEFF@Z
    i16 OriginalBufferPlaying(i16 arg1);
};

check_size(EffectBase, 0x0);
