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
    mmgame:mmgamemusicdata

    0x433F40 | public: bool __thiscall mmGameMusicData::Load(char *,char *) | ?Load@mmGameMusicData@@QAE_NPAD0@Z
    0x433FB0 | public: short __thiscall mmGameMusicData::GetNumDMusicChoiceGroups(class Stream *) | ?GetNumDMusicChoiceGroups@mmGameMusicData@@QAEFPAVStream@@@Z
    0x434000 | public: short __thiscall mmGameMusicData::RandomizeNumber(short) | ?RandomizeNumber@mmGameMusicData@@QAEFF@Z
    0x434060 | private: bool __thiscall mmGameMusicData::LoadAmbientSFX(char *) | ?LoadAmbientSFX@mmGameMusicData@@AAE_NPAD@Z
    0x434190 | private: bool __thiscall mmGameMusicData::LoadAmbientSFXSegments(class Stream *,short) | ?LoadAmbientSFXSegments@mmGameMusicData@@AAE_NPAVStream@@F@Z
    0x434250 | public: virtual bool __thiscall mmGameMusicData::LoadMusic(char *) | ?LoadMusic@mmGameMusicData@@UAE_NPAD@Z
*/

struct mmGameMusicData
{
    // const mmGameMusicData::`vftable' @ 0x5B0614

public:
    // 0x433FB0 | ?GetNumDMusicChoiceGroups@mmGameMusicData@@QAEFPAVStream@@@Z
    i16 GetNumDMusicChoiceGroups(class Stream* arg1);

    // 0x433F40 | ?Load@mmGameMusicData@@QAE_NPAD0@Z
    bool Load(char* arg1, char* arg2);

    // 0x434000 | ?RandomizeNumber@mmGameMusicData@@QAEFF@Z
    i16 RandomizeNumber(i16 arg1);

    // 0x434250 | ?LoadMusic@mmGameMusicData@@UAE_NPAD@Z
    virtual bool LoadMusic(char* arg1);

private:
    // 0x434060 | ?LoadAmbientSFX@mmGameMusicData@@AAE_NPAD@Z
    bool LoadAmbientSFX(char* arg1);

    // 0x434190 | ?LoadAmbientSFXSegments@mmGameMusicData@@AAE_NPAVStream@@F@Z
    bool LoadAmbientSFXSegments(class Stream* arg1, i16 arg2);
};

check_size(mmGameMusicData, 0x0);
