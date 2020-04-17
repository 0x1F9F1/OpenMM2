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
    city:state

    0x443110 | public: __thiscall dgStatePack::dgStatePack(void) | ??0dgStatePack@@QAE@XZ
    0x443180 | public: __thiscall dgStatePack::~dgStatePack(void) | ??1dgStatePack@@QAE@XZ
    0x443190 | public: void __thiscall dgStatePack::InitFromArgs(void) | ?InitFromArgs@dgStatePack@@QAEXXZ
    0x5C56AC | char const * * dgGameModeNames | ?dgGameModeNames@@3PAPBDA
    0x6276F8 | public: static struct dgStatePack * dgStatePack::Instance | ?Instance@dgStatePack@@2PAU1@A
*/

// 0x5C56AC | ?dgGameModeNames@@3PAPBDA
inline extern_var(0x5C56AC, char const**, dgGameModeNames);

struct dgStatePack
{
public:
    // 0x443110 | ??0dgStatePack@@QAE@XZ
    dgStatePack()
    {
        stub<member_func_t<void, dgStatePack>>(0x443110, this);
    }

    // 0x443180 | ??1dgStatePack@@QAE@XZ
    ~dgStatePack()
    {
        stub<member_func_t<void, dgStatePack>>(0x443180, this);
    }

    // 0x443190 | ?InitFromArgs@dgStatePack@@QAEXXZ
    void InitFromArgs()
    {
        return stub<member_func_t<void, dgStatePack>>(0x443190, this);
    }

    // 0x6276F8 | ?Instance@dgStatePack@@2PAU1@A
    inline extern_var(0x6276F8, struct dgStatePack*, Instance);
};
