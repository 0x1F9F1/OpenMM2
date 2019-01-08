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
    mmaudio:cd

    0x51CE80 | public: __thiscall CDMan::CDMan(void) | ??0CDMan@@QAE@XZ
    0x51CEC0 | public: virtual __thiscall CDMan::~CDMan(void) | ??1CDMan@@UAE@XZ
    0x51CF00 | public: unsigned long __thiscall CDMan::Init(short) | ?Init@CDMan@@QAEKF@Z
    0x51CFC0 | public: unsigned long __thiscall CDMan::PlayTrack(unsigned char,unsigned char) | ?PlayTrack@CDMan@@QAEKEE@Z
    0x51D0B0 | public: unsigned long __thiscall CDMan::ResumePlay(void) | ?ResumePlay@CDMan@@QAEKXZ
    0x51D0D0 | public: unsigned long __thiscall CDMan::PlayTrack(unsigned char,unsigned char,unsigned char,unsigned char,unsigned char) | ?PlayTrack@CDMan@@QAEKEEEEE@Z
    0x51D1E0 | public: unsigned long __thiscall CDMan::Stop(void) | ?Stop@CDMan@@QAEKXZ
    0x51D220 | public: unsigned long __thiscall CDMan::SeekTrack(unsigned char) | ?SeekTrack@CDMan@@QAEKE@Z
    0x51D290 | public: unsigned long __thiscall CDMan::GetPosition(unsigned char *,unsigned char *,unsigned char *,unsigned char *) | ?GetPosition@CDMan@@QAEKPAE000@Z
    0x51D310 | private: virtual long __thiscall CDMan::WindowProc(struct HWND__ *,unsigned int,unsigned int,long) | ?WindowProc@CDMan@@EAEJPAUHWND__@@IIJ@Z
    0x51D380 | public: short __thiscall CDMan::GetNumTracks(void) | ?GetNumTracks@CDMan@@QAEFXZ
    public: virtual void * __thiscall CDMan::`vector deleting destructor'(unsigned int) | ??_ECDMan@@UAEPAXI@Z
    0x51D3E0 | public: virtual void * __thiscall CDMan::`scalar deleting destructor'(unsigned int) | ??_GCDMan@@UAEPAXI@Z
    0x5B4E78 | const CDMan::`vftable' | ??_7CDMan@@6B@
*/

#include "hooking.h"
