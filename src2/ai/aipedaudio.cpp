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

#include "aipedaudio.h"

aiPedAudio::aiPedAudio()
{
    unimplemented();
}

aiPedAudio::~aiPedAudio()
{
    unimplemented();
}

bool aiPedAudio::LoadFemaleVoices(char* arg1, bool arg2)
{
    return stub<thiscall_t<bool, aiPedAudio*, char*, bool>>(0x53CD90, this, arg1, arg2);
}

bool aiPedAudio::LoadMaleVoices(char* arg1, bool arg2)
{
    return stub<thiscall_t<bool, aiPedAudio*, char*, bool>>(0x53CE00, this, arg1, arg2);
}

void aiPedAudio::LoadNumFemaleChoices(char* arg1)
{
    return stub<cdecl_t<void, char*>>(0x53CEA0, arg1);
}

void aiPedAudio::LoadNumMaleChoices(char* arg1)
{
    return stub<cdecl_t<void, char*>>(0x53CEE0, arg1);
}

void aiPedAudio::SetCSVCatString(char* arg1)
{
    return stub<cdecl_t<void, char*>>(0x53CE70, arg1);
}

define_dummy_symbol(ai_aipedaudio);
