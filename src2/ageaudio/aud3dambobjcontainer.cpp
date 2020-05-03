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

#include "aud3dambobjcontainer.h"

Aud3DAmbObjContainer::Aud3DAmbObjContainer()
{
    unimplemented();
}

Aud3DAmbObjContainer::~Aud3DAmbObjContainer()
{
    unimplemented();
}

bool Aud3DAmbObjContainer::Init(char* arg1)
{
    return stub<thiscall_t<bool, Aud3DAmbObjContainer*, char*>>(0x5137C0, this, arg1);
}

void Aud3DAmbObjContainer::Update(f32 arg1)
{
    return stub<thiscall_t<void, Aud3DAmbObjContainer*, f32>>(0x513970, this, arg1);
}

void Aud3DAmbObjContainer::CreateAmbientObject(char* arg1)
{
    return stub<thiscall_t<void, Aud3DAmbObjContainer*, char*>>(0x5138A0, this, arg1);
}

bool Aud3DAmbObjContainer::FileValid(char* arg1)
{
    return stub<thiscall_t<bool, Aud3DAmbObjContainer*, char*>>(0x513780, this, arg1);
}

define_dummy_symbol(ageaudio_aud3dambobjcontainer);
