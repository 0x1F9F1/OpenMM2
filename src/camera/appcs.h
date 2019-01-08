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
    camera:appcs

    0x521F70 | public: __thiscall camAppCS::camAppCS(void) | ??0camAppCS@@QAE@XZ
    0x522050 | public: virtual __thiscall camAppCS::~camAppCS(void) | ??1camAppCS@@UAE@XZ
    0x522060 | protected: void __thiscall camAppCS::ApproachIt(void) | ?ApproachIt@camAppCS@@IAEXXZ
    0x522090 | private: void __thiscall camAppCS::UpdateApproach(void) | ?UpdateApproach@camAppCS@@AAEXXZ
    0x522650 | private: void __thiscall camAppCS::UpdateMaxDist(void) | ?UpdateMaxDist@camAppCS@@AAEXXZ
    0x522880 | private: int __thiscall camAppCS::DApproach(float &,float,float,float,float &,float) | ?DApproach@camAppCS@@AAEHAAMMMM0M@Z
    public: virtual void __thiscall camAppCS::AddWidgets(class bkBank &) | ?AddWidgets@camAppCS@@UAEXAAVbkBank@@@Z
    0x5229D0 | public: virtual void __thiscall camAppCS::FileIO(class datParser &) | ?FileIO@camAppCS@@UAEXAAVdatParser@@@Z
    0x522B50 | public: virtual void * __thiscall camAppCS::`scalar deleting destructor'(unsigned int) | ??_GcamAppCS@@UAEPAXI@Z
    public: virtual void * __thiscall camAppCS::`vector deleting destructor'(unsigned int) | ??_EcamAppCS@@UAEPAXI@Z
    0x522B80 | public: bool __thiscall Vector3::IsEqual(class Vector3 const &) const | ?IsEqual@Vector3@@QBE_NABV1@@Z
    0x5B5174 | const camAppCS::`vftable' | ??_7camAppCS@@6B@
*/

#include "hooking.h"
