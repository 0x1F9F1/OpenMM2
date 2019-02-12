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
    camera:basecs

    0x521D60 | public: __thiscall camBaseCS::camBaseCS(void) | ??0camBaseCS@@QAE@XZ
    0x521DF0 | public: virtual __thiscall camBaseCS::~camBaseCS(void) | ??1camBaseCS@@UAE@XZ
    0x521E00 | public: virtual char const * __thiscall camBaseCS::GetDirName(void) | ?GetDirName@camBaseCS@@UAEPBDXZ
    0x521E10 | public: int __thiscall camBaseCS::IsViewCSInTransition(void) | ?IsViewCSInTransition@camBaseCS@@QAEHXZ
    0x521E30 | public: void __thiscall camBaseCS::UpdateView(void) | ?UpdateView@camBaseCS@@QAEXXZ
    public: virtual void __thiscall camBaseCS::AddWidgets(class bkBank &) | ?AddWidgets@camBaseCS@@UAEXAAVbkBank@@@Z
    0x521E60 | public: virtual void __thiscall camBaseCS::ForceMatrixDelta(class Vector3 const &) | ?ForceMatrixDelta@camBaseCS@@UAEXABVVector3@@@Z
    0x521EA0 | public: virtual void __thiscall camBaseCS::FileIO(class datParser &) | ?FileIO@camBaseCS@@UAEXAAVdatParser@@@Z
    0x521F30 | public: virtual void __thiscall camBaseCS::AfterLoad(void) | ?AfterLoad@camBaseCS@@UAEXXZ
    0x521F40 | public: virtual void * __thiscall camBaseCS::`scalar deleting destructor'(unsigned int) | ??_GcamBaseCS@@UAEPAXI@Z
    public: virtual void * __thiscall camBaseCS::`vector deleting destructor'(unsigned int) | ??_EcamBaseCS@@UAEPAXI@Z
    0x5B5130 | const camBaseCS::`vftable' | ??_7camBaseCS@@6B@
    public: static float camBaseCS::sm_cameraFar | ?sm_cameraFar@camBaseCS@@2MA
*/

// #include "hooking.h"
