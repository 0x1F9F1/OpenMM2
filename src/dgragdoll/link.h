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
    dgragdoll:link

    0x5A81D0 | public: __thiscall dgLink::dgLink(void) | ??0dgLink@@QAE@XZ
    0x5A8200 | public: void __thiscall dgLink::Init(class dgLinkData &,class crIKGoal &,class Vector3 &,class dgRagdoll &) | ?Init@dgLink@@QAEXAAVdgLinkData@@AAVcrIKGoal@@AAVVector3@@AAVdgRagdoll@@@Z
    0x5A8220 | public: void __thiscall dgLink::Reset(void) | ?Reset@dgLink@@QAEXXZ
    0x5A8250 | public: void __thiscall dgLink::ResetGoal(void) | ?ResetGoal@dgLink@@QAEXXZ
    0x5A8270 | public: void __thiscall dgLink::SetMode(int) | ?SetMode@dgLink@@QAEXH@Z
    0x5A82A0 | public: void __thiscall dgLink::Update(void) | ?Update@dgLink@@QAEXXZ
    0x5A82E0 | public: void __thiscall dgLink::UpdateFree(void) | ?UpdateFree@dgLink@@QAEXXZ
    0x5A8540 | public: void __thiscall dgLink::Bounce(class Vector3 &,class Vector3 &) | ?Bounce@dgLink@@QAEXAAVVector3@@0@Z
    0x5A8620 | public: void __thiscall dgLink::UpdateGrasp(void) | ?UpdateGrasp@dgLink@@QAEXXZ
    0x5A8630 | public: void __thiscall dgLink::UpdateDamping(void) | ?UpdateDamping@dgLink@@QAEXXZ
    0x5A87B0 | public: void __thiscall dgLink::UpdateTendon(void) | ?UpdateTendon@dgLink@@QAEXXZ
*/

#include "hooking.h"
