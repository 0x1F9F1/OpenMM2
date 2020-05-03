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

#include "mmgamemusicdata.h"

i16 mmGameMusicData::GetNumDMusicChoiceGroups(class Stream* arg1)
{
    return stub<thiscall_t<i16, mmGameMusicData*, class Stream*>>(0x433FB0, this, arg1);
}

bool mmGameMusicData::Load(char* arg1, char* arg2)
{
    return stub<thiscall_t<bool, mmGameMusicData*, char*, char*>>(0x433F40, this, arg1, arg2);
}

i16 mmGameMusicData::RandomizeNumber(i16 arg1)
{
    return stub<thiscall_t<i16, mmGameMusicData*, i16>>(0x434000, this, arg1);
}

bool mmGameMusicData::LoadMusic(char* arg1)
{
    return stub<thiscall_t<bool, mmGameMusicData*, char*>>(0x434250, this, arg1);
}

bool mmGameMusicData::LoadAmbientSFX(char* arg1)
{
    return stub<thiscall_t<bool, mmGameMusicData*, char*>>(0x434060, this, arg1);
}

bool mmGameMusicData::LoadAmbientSFXSegments(class Stream* arg1, i16 arg2)
{
    return stub<thiscall_t<bool, mmGameMusicData*, class Stream*, i16>>(0x434190, this, arg1, arg2);
}

define_dummy_symbol(mmgame_mmgamemusicdata);
