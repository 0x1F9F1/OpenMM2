/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2019 Brick

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
    mmui:pu_replay

    0x50B270 | public: __thiscall PUReplay::PUReplay(int,float,float,float,float,char *) | ??0PUReplay@@QAE@HMMMMPAD@Z
    0x50B530 | public: virtual __thiscall PUReplay::~PUReplay(void) | ??1PUReplay@@UAE@XZ
    0x50B540 | public: void __thiscall PUReplay::SaveRO(int) | ?SaveRO@PUReplay@@QAEXH@Z
    0x50B560 | public: int __thiscall PUReplay::GetSaveRO(void) | ?GetSaveRO@PUReplay@@QAEHXZ
    public: virtual void * __thiscall PUReplay::`vector deleting destructor'(unsigned int) | ??_EPUReplay@@UAEPAXI@Z
    0x50B570 | public: virtual void * __thiscall PUReplay::`scalar deleting destructor'(unsigned int) | ??_GPUReplay@@UAEPAXI@Z
    0x5B47F8 | const PUReplay::`vftable' | ??_7PUReplay@@6B@
*/

struct PUReplay : PUMenuBase
{
public:
    // PUReplay::`vftable' @ 0x5B47F8

    // 0x50B270 | ??0PUReplay@@QAE@HMMMMPAD@Z
    inline PUReplay(int32_t arg1, float arg2, float arg3, float arg4, float arg5, char* arg6)
    {
        stub<member_func_t<void, PUReplay, int32_t, float, float, float, float, char*>>(
            0x50B270, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x50B540 | ?SaveRO@PUReplay@@QAEXH@Z
    inline void SaveRO(int32_t arg1)
    {
        return stub<member_func_t<void, PUReplay, int32_t>>(0x50B540, this, arg1);
    }

    // 0x50B560 | ?GetSaveRO@PUReplay@@QAEHXZ
    inline int32_t GetSaveRO()
    {
        return stub<member_func_t<int32_t, PUReplay>>(0x50B560, this);
    }

    // 0x50B530 | ??1PUReplay@@UAE@XZ
    inline ~PUReplay() override
    {
        stub<member_func_t<void, PUReplay>>(0x50B530, this);
    }
};
