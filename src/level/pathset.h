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
    level:pathset

    0x466B40 | public: __thiscall dgPath::dgPath(char const *) | ??0dgPath@@QAE@PBD@Z
    0x466B80 | public: void __thiscall dgPath::SetName(char const *) | ?SetName@dgPath@@QAEXPBD@Z
    0x466BC0 | public: __thiscall dgPath::~dgPath(void) | ??1dgPath@@QAE@XZ
    0x466BD0 | public: static class dgPath * __cdecl dgPath::Load(class Stream *) | ?Load@dgPath@@SAPAV1@PAVStream@@@Z
    0x466D40 | public: void __thiscall dgPath::Enumerate(void (__cdecl*)(char const *,class Matrix34 const &,bool),float,float) const | ?Enumerate@dgPath@@QBEXP6AXPBDABVMatrix34@@_N@ZMM@Z
    0x467150 | public: __thiscall dgPathSet::dgPathSet(void) | ??0dgPathSet@@QAE@XZ
    0x467170 | public: virtual __thiscall dgPathSet::~dgPathSet(void) | ??1dgPathSet@@UAE@XZ
    0x4671C0 | public: void __thiscall dgPathSet::Kill(void) | ?Kill@dgPathSet@@QAEXXZ
    0x467210 | public: bool __thiscall dgPathSet::Load(char const *,char const *) | ?Load@dgPathSet@@QAE_NPBD0@Z
    public: virtual void * __thiscall dgPathSet::`vector deleting destructor'(unsigned int) | ??_EdgPathSet@@UAEPAXI@Z
    0x4672D0 | public: virtual void * __thiscall dgPathSet::`scalar deleting destructor'(unsigned int) | ??_GdgPathSet@@UAEPAXI@Z
    public: void __thiscall Vector3::AddScaled(class Vector3 const &,float) | ?AddScaled@Vector3@@QAEXABV1@M@Z
    public: struct dgPathVertex & __thiscall dgPath::GetVert(int) const | ?GetVert@dgPath@@QBEAAUdgPathVertex@@H@Z
    0x5B1B0C | const dgPathSet::`vftable' | ??_7dgPathSet@@6B@
*/

#include "hooking.h"
