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

#include "aud/dirsnd.h"

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

class mmDirSnd : public DirSnd
{
    // const mmDirSnd::`vftable' @ 0x5B4E74

public:
    // 0x51CBE0 | ??0mmDirSnd@@QAE@XZ
    mmDirSnd();

    // 0x51CC00 | ??1mmDirSnd@@QAE@XZ
    ~mmDirSnd();

    // 0x51CE70 | ?DSound3DEnabled@mmDirSnd@@QAEIXZ
    u32 DSound3DEnabled();

    // 0x51CC10 | ?DeInit@mmDirSnd@@QAEXFF@Z
    void DeInit(i16 arg1, i16 arg2);

    // 0x51CE60 | ?EAXEnabled@mmDirSnd@@QAEIXZ
    u32 EAXEnabled();

    // 0x51CD90 | ?InitPrimarySoundBuffer@mmDirSnd@@UAEHKEPAD@Z
    i32 InitPrimarySoundBuffer(u32 arg1, u8 arg2, char* arg3) override;

    // 0x51CC50 | ?Init@mmDirSnd@@SAPAV1@KEHHPADFF@Z
    static class mmDirSnd* Init(u32 arg1, u8 arg2, i32 arg3, i32 arg4, char* arg5, i16 arg6, i16 arg7);
};

check_size(mmDirSnd, 0x44);
