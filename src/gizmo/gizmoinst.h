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
    gizmo:gizmoinst

    0x579DB0 | public: __thiscall gizInstance::gizInstance(void) | ??0gizInstance@@QAE@XZ
    0x579E10 | public: __thiscall gizInstance::~gizInstance(void) | ??1gizInstance@@QAE@XZ
    0x579E30 | public: virtual class Vector3 const & __thiscall gizInstance::GetPosition(void) | ?GetPosition@gizInstance@@UAEABVVector3@@XZ
    0x579E40 | public: virtual class Matrix34 const & __thiscall gizInstance::GetMatrix(class Matrix34 &) | ?GetMatrix@gizInstance@@UAEABVMatrix34@@AAV2@@Z
    0x579E60 | public: virtual void __thiscall gizInstance::SetMatrix(class Matrix34 const &) | ?SetMatrix@gizInstance@@UAEXABVMatrix34@@@Z
    0x579E90 | public: void __thiscall gizInstance::Init(char *,int) | ?Init@gizInstance@@QAEXPADH@Z
    0x579F30 | public: virtual void __thiscall gizInstance::Draw(int) | ?Draw@gizInstance@@UAEXH@Z
    0x5B6278 | const gizInstance::`vftable' | ??_7gizInstance@@6B@
*/

#include "hooking.h"
