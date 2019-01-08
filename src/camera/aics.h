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
    camera:aics

    0x520A30 | public: __thiscall camAICS::camAICS(void) | ??0camAICS@@QAE@XZ
    0x520A70 | public: void __thiscall camAICS::Init(class vehCar *) | ?Init@camAICS@@QAEXPAVvehCar@@@Z
    0x520AB0 | public: virtual void __thiscall camAICS::Reset(void) | ?Reset@camAICS@@UAEXXZ
    0x520AC0 | public: void __thiscall camAICS::SetPosition(class Vector3 &) | ?SetPosition@camAICS@@QAEXAAVVector3@@@Z
    0x520AE0 | public: void __thiscall camAICS::SetMatrix(class Matrix34 *) | ?SetMatrix@camAICS@@QAEXPAVMatrix34@@@Z
    0x520BA0 | public: virtual void __thiscall camAICS::MakeActive(void) | ?MakeActive@camAICS@@UAEXXZ
    0x520C50 | public: virtual void __thiscall camAICS::Update(void) | ?Update@camAICS@@UAEXXZ
    public: virtual void * __thiscall camAICS::`vector deleting destructor'(unsigned int) | ??_EcamAICS@@UAEPAXI@Z
    0x520F80 | public: virtual void * __thiscall camAICS::`scalar deleting destructor'(unsigned int) | ??_GcamAICS@@UAEPAXI@Z
    0x5B501C | const camAICS::`vftable' | ??_7camAICS@@6B@
*/

#include "hooking.h"
