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
    aud:soundbuffer

    0x5A6160 | public: class audSoundBuffer * __thiscall audSoundBuffer::Create(enum audSoundBuffer::SOUNDBUFFERTYPE,int) | ?Create@audSoundBuffer@@QAEPAV1@W4SOUNDBUFFERTYPE@1@H@Z
    0x5A61F0 | public: void __thiscall audSoundBuffer::Init(enum audSoundBuffer::SOUNDBUFFERTYPE,int,void *) | ?Init@audSoundBuffer@@QAEXW4SOUNDBUFFERTYPE@1@HPAX@Z
    0x5A6240 | public: void __thiscall audSoundBuffer::Destroy(void) | ?Destroy@audSoundBuffer@@QAEXXZ
    0x5A6260 | public: int __thiscall audSoundBuffer::GetSize(void) | ?GetSize@audSoundBuffer@@QAEHXZ
    0x5A6270 | public: enum audSoundBuffer::SOUNDBUFFERTYPE __thiscall audSoundBuffer::GetType(void) | ?GetType@audSoundBuffer@@QAE?AW4SOUNDBUFFERTYPE@1@XZ
    0x5A6280 | public: bool __thiscall audSoundBuffer::BytesAdded(int) | ?BytesAdded@audSoundBuffer@@QAE_NH@Z
    0x5A6300 | public: bool __thiscall audSoundBuffer::BytesRemoved(int) | ?BytesRemoved@audSoundBuffer@@QAE_NH@Z
    0x5A6370 | public: void __thiscall audSoundBuffer::SetIndex1(int) | ?SetIndex1@audSoundBuffer@@QAEXH@Z
    0x5A63A0 | public: void __thiscall audSoundBuffer::SetIndex2(int) | ?SetIndex2@audSoundBuffer@@QAEXH@Z
    0x5A63D0 | public: void __thiscall audSoundBuffer::SetExtra(int) | ?SetExtra@audSoundBuffer@@QAEXH@Z
    0x5A63E0 | public: void __thiscall audSoundBuffer::SetSize(int) | ?SetSize@audSoundBuffer@@QAEXH@Z
    0x5A63F0 | public: void __thiscall audSoundBuffer::SetType(enum audSoundBuffer::SOUNDBUFFERTYPE) | ?SetType@audSoundBuffer@@QAEXW4SOUNDBUFFERTYPE@1@@Z
    0x5A6400 | public: int __thiscall audSoundBuffer::GetIndex1(void) | ?GetIndex1@audSoundBuffer@@QAEHXZ
    0x5A6410 | public: int __thiscall audSoundBuffer::GetIndex2(void) | ?GetIndex2@audSoundBuffer@@QAEHXZ
    0x5A6420 | public: int __thiscall audSoundBuffer::GetExtra(void) | ?GetExtra@audSoundBuffer@@QAEHXZ
    0x5A6430 | public: void * __thiscall audSoundBuffer::GetDataPtr(void) | ?GetDataPtr@audSoundBuffer@@QAEPAXXZ
    0x5A6440 | public: void __thiscall audSoundBuffer::SetDataPtr(void *) | ?SetDataPtr@audSoundBuffer@@QAEXPAX@Z
    0x5A6450 | public: struct adpcm_state * __thiscall audSoundBuffer::GetAdpcmState(void) | ?GetAdpcmState@audSoundBuffer@@QAEPAUadpcm_state@@XZ
    0x5A6460 | public: void __thiscall audSoundBuffer::SetAdpcmState(struct adpcm_state *) | ?SetAdpcmState@audSoundBuffer@@QAEXPAUadpcm_state@@@Z
    0x5A6470 | public: void __thiscall audSoundBuffer::SetIndexes(int,int) | ?SetIndexes@audSoundBuffer@@QAEXHH@Z
    0x5A64B0 | public: bool __thiscall audSoundBuffer::IsFull(void) | ?IsFull@audSoundBuffer@@QAE_NXZ
    0x5A64D0 | public: bool __thiscall audSoundBuffer::IsEmpty(void) | ?IsEmpty@audSoundBuffer@@QAE_NXZ
    0x5A64E0 | public: int __thiscall audSoundBuffer::Used(void) | ?Used@audSoundBuffer@@QAEHXZ
    0x5A64F0 | public: int __thiscall audSoundBuffer::Unused(void) | ?Unused@audSoundBuffer@@QAEHXZ
*/

#include "hooking.h"
