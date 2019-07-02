/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
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

#include "hooking.h"

#include "aud/dirsnd.h"

class mmDirSnd : public DirSnd
{
public:
    int EAXEnabled {0};
    int DSound3DEnabled {0};

    mmDirSnd() = default;

    virtual int InitPrimarySoundBuffer(uint32_t sampleRate, bool enableStero, const char* deviceName) override;

    static mmDirSnd* Init(
        int sampleRate, bool enableStero, int a4, float volume, const char* deviceName, bool enable3D);
};

check_size(mmDirSnd, 0x44);
