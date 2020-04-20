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
    mmgame:mmsingleracemusicdata

    0x4336D0 | public: virtual bool __thiscall mmSingleRaceMusicData::LoadMusic(char *) | ?LoadMusic@mmSingleRaceMusicData@@UAE_NPAD@Z
    0x433890 | private: bool __thiscall mmSingleRaceMusicData::LoadMusicSegments(class Stream *,short) | ?LoadMusicSegments@mmSingleRaceMusicData@@AAE_NPAVStream@@F@Z
*/

struct mmSingleRaceMusicData
{
public:
    // mmSingleRaceMusicData::`vftable' @ 0x5B0610

    // 0x433890 | ?LoadMusicSegments@mmSingleRaceMusicData@@AAE_NPAVStream@@F@Z
    inline bool LoadMusicSegments(class Stream* arg1, int16_t arg2)
    {
        return stub<member_func_t<bool, mmSingleRaceMusicData, class Stream*, int16_t>>(0x433890, this, arg1, arg2);
    }

    // 0x4336D0 | ?LoadMusic@mmSingleRaceMusicData@@UAE_NPAD@Z
    virtual inline bool LoadMusic(char* arg1)
    {
        return stub<member_func_t<bool, mmSingleRaceMusicData, char*>>(0x4336D0, this, arg1);
    }
};
