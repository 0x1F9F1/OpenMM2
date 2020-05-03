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

#include "aud3dsamplewrapper.h"

Aud3DSampleWrapper::Aud3DSampleWrapper(char* arg1, i32 arg2, u32 arg3)
{
    unimplemented();
}

Aud3DSampleWrapper::Aud3DSampleWrapper(i32 arg1, i32 arg2, u32 arg3)
{
    unimplemented();
}

Aud3DSampleWrapper::~Aud3DSampleWrapper()
{
    unimplemented();
}

class AudSoundBase* Aud3DSampleWrapper::GetSoundPtr(i16 arg1)
{
    return stub<thiscall_t<class AudSoundBase*, Aud3DSampleWrapper*, i16>>(0x513CA0, this, arg1);
}

void Aud3DSampleWrapper::Load(char* arg1, i32 arg2)
{
    return stub<thiscall_t<void, Aud3DSampleWrapper*, char*, i32>>(0x513C40, this, arg1, arg2);
}

void Aud3DSampleWrapper::SetSampleName(char* arg1)
{
    return stub<thiscall_t<void, Aud3DSampleWrapper*, char*>>(0x513C20, this, arg1);
}

void Aud3DSampleWrapper::Update()
{
    return stub<thiscall_t<void, Aud3DSampleWrapper*>>(0x513CC0, this);
}

define_dummy_symbol(ageaudio_aud3dsamplewrapper);
