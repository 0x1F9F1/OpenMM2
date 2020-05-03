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

#include "effectbase.h"

EffectBase::~EffectBase()
{
    unimplemented();
}

struct IDirectSoundBuffer* EffectBase::CreateDSoundBuffer(u32 arg1, struct IDirectSoundBuffer* arg2)
{
    return stub<thiscall_t<struct IDirectSoundBuffer*, EffectBase*, u32, struct IDirectSoundBuffer*>>(
        0x5A74E0, this, arg1, arg2);
}

i16 EffectBase::OriginalBufferPlaying(i16 arg1)
{
    return stub<thiscall_t<i16, EffectBase*, i16>>(0x5A7590, this, arg1);
}

define_dummy_symbol(aud_effectbase);
