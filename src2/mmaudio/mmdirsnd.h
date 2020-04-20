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
    mmaudio:mmdirsnd

    0x51CBE0 | public: __thiscall mmDirSnd::mmDirSnd(void) | ??0mmDirSnd@@QAE@XZ
    0x51CC00 | public: __thiscall mmDirSnd::~mmDirSnd(void) | ??1mmDirSnd@@QAE@XZ
    0x51CC10 | public: void __thiscall mmDirSnd::DeInit(short,short) | ?DeInit@mmDirSnd@@QAEXFF@Z
    0x51CC50 | public: static class mmDirSnd * __cdecl mmDirSnd::Init(unsigned long,unsigned char,int,int,char *,short,short) | ?Init@mmDirSnd@@SAPAV1@KEHHPADFF@Z
    0x51CD90 | public: virtual int __thiscall mmDirSnd::InitPrimarySoundBuffer(unsigned long,unsigned char,char *) | ?InitPrimarySoundBuffer@mmDirSnd@@UAEHKEPAD@Z
    0x51CE60 | public: unsigned int __thiscall mmDirSnd::EAXEnabled(void) | ?EAXEnabled@mmDirSnd@@QAEIXZ
    0x51CE70 | public: unsigned int __thiscall mmDirSnd::DSound3DEnabled(void) | ?DSound3DEnabled@mmDirSnd@@QAEIXZ
    0x5B4E74 | const mmDirSnd::`vftable' | ??_7mmDirSnd@@6B@
*/

class mmDirSnd : DirSnd
{
public:
    // mmDirSnd::`vftable' @ 0x5B4E74

    // 0x51CBE0 | ??0mmDirSnd@@QAE@XZ
    inline mmDirSnd()
    {
        stub<member_func_t<void, mmDirSnd>>(0x51CBE0, this);
    }

    // 0x51CC00 | ??1mmDirSnd@@QAE@XZ
    inline ~mmDirSnd()
    {
        stub<member_func_t<void, mmDirSnd>>(0x51CC00, this);
    }

    // 0x51CC10 | ?DeInit@mmDirSnd@@QAEXFF@Z
    inline void DeInit(int16_t arg1, int16_t arg2)
    {
        return stub<member_func_t<void, mmDirSnd, int16_t, int16_t>>(0x51CC10, this, arg1, arg2);
    }

    // 0x51CC50 | ?Init@mmDirSnd@@SAPAV1@KEHHPADFF@Z
    static inline class mmDirSnd* Init(
        uint32_t arg1, uint8_t arg2, int32_t arg3, int32_t arg4, char* arg5, int16_t arg6, int16_t arg7)
    {
        return stub<cdecl_t<class mmDirSnd*, uint32_t, uint8_t, int32_t, int32_t, char*, int16_t, int16_t>>(
            0x51CC50, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x51CE60 | ?EAXEnabled@mmDirSnd@@QAEIXZ
    inline uint32_t EAXEnabled()
    {
        return stub<member_func_t<uint32_t, mmDirSnd>>(0x51CE60, this);
    }

    // 0x51CE70 | ?DSound3DEnabled@mmDirSnd@@QAEIXZ
    inline uint32_t DSound3DEnabled()
    {
        return stub<member_func_t<uint32_t, mmDirSnd>>(0x51CE70, this);
    }

    // 0x51CD90 | ?InitPrimarySoundBuffer@mmDirSnd@@UAEHKEPAD@Z
    inline int32_t InitPrimarySoundBuffer(uint32_t arg1, uint8_t arg2, char* arg3) override
    {
        return stub<member_func_t<int32_t, mmDirSnd, uint32_t, uint8_t, char*>>(0x51CD90, this, arg1, arg2, arg3);
    }
};
