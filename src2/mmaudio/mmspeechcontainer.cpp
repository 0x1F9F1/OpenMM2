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

#include "mmspeechcontainer.h"

mmSpeechContainer::mmSpeechContainer(i32 arg1, i32 arg2, char* arg3)
{
    unimplemented();
}

mmSpeechContainer::~mmSpeechContainer()
{
    unimplemented();
}

class mmCCSpeech* mmSpeechContainer::GetCCSpeechPtr()
{
    return stub<thiscall_t<class mmCCSpeech*, mmSpeechContainer*>>(0x51B7F0, this);
}

class mmRaceSpeech* mmSpeechContainer::GetRaceSpeechPtr()
{
    return stub<thiscall_t<class mmRaceSpeech*, mmSpeechContainer*>>(0x51B7E0, this);
}

void mmSpeechContainer::Stop()
{
    return stub<thiscall_t<void, mmSpeechContainer*>>(0x51B7A0, this);
}

void mmSpeechContainer::Update()
{
    return stub<thiscall_t<void, mmSpeechContainer*>>(0x51B7B0, this);
}

void mmSpeechContainer::InitCC(i32 arg1, char* arg2)
{
    return stub<thiscall_t<void, mmSpeechContainer*, i32, char*>>(0x51B6A0, this, arg1, arg2);
}

void mmSpeechContainer::InitRace(i32 arg1, i32 arg2, char* arg3)
{
    return stub<thiscall_t<void, mmSpeechContainer*, i32, i32, char*>>(0x51B5C0, this, arg1, arg2, arg3);
}

define_dummy_symbol(mmaudio_mmspeechcontainer);
