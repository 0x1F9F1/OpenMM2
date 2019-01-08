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
    camera:viewcs

    0x51FD70 | public: __thiscall camViewCS::camViewCS(void) | ??0camViewCS@@QAE@XZ
    0x51FE20 | public: virtual __thiscall camViewCS::~camViewCS(void) | ??1camViewCS@@UAE@XZ
    0x51FE30 | public: static class camViewCS * __cdecl camViewCS::Instance(class vehCar &) | ?Instance@camViewCS@@SAPAV1@AAVvehCar@@@Z
    0x51FE90 | public: void __thiscall camViewCS::SetCam(class camCarCS *) | ?SetCam@camViewCS@@QAEXPAVcamCarCS@@@Z
    0x51FF30 | public: int __thiscall camViewCS::NewCam(class camCarCS *,int,float,class datCallback) | ?NewCam@camViewCS@@QAEHPAVcamCarCS@@HMVdatCallback@@@Z
    0x51FFC0 | public: virtual void __thiscall camViewCS::Update(void) | ?Update@camViewCS@@UAEXXZ
    0x51FFF0 | public: void __thiscall camViewCS::Init(class vehCar *) | ?Init@camViewCS@@QAEXPAVvehCar@@@Z
    0x520010 | public: virtual void __thiscall camViewCS::Reset(void) | ?Reset@camViewCS@@UAEXXZ
    0x520080 | public: void __thiscall camViewCS::ForceMatrixDelta(class Matrix34 const &) | ?ForceMatrixDelta@camViewCS@@QAEXABVMatrix34@@@Z
    0x5200A0 | public: void __thiscall camViewCS::ForceMatrixDelta(class Vector3 const &) | ?ForceMatrixDelta@camViewCS@@QAEXABVVector3@@@Z
    0x5200C0 | public: void __thiscall camViewCS::OneShot(void) | ?OneShot@camViewCS@@QAEXXZ
    0x5200D0 | public: virtual void __thiscall camViewCS::FileIO(class datParser &) | ?FileIO@camViewCS@@UAEXAAVdatParser@@@Z
    public: virtual void * __thiscall camViewCS::`vector deleting destructor'(unsigned int) | ??_EcamViewCS@@UAEPAXI@Z
    0x5200E0 | public: virtual void * __thiscall camViewCS::`scalar deleting destructor'(unsigned int) | ??_GcamViewCS@@UAEPAXI@Z
    public: virtual void __thiscall camViewCS::AddWidgets(class bkBank &) | ?AddWidgets@camViewCS@@UAEXAAVbkBank@@@Z
    0x5B4F18 | const camViewCS::`vftable' | ??_7camViewCS@@6B@
*/

#include "hooking.h"
