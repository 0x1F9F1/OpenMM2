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
    crbody:bodydata

    0x57E9D0 | public: __thiscall crBodyDataBase::crBodyDataBase(class crSkeletonData &) | ??0crBodyDataBase@@QAE@AAVcrSkeletonData@@@Z
    0x57E9F0 | public: virtual __thiscall crBodyDataBase::~crBodyDataBase(void) | ??1crBodyDataBase@@UAE@XZ
    0x57EA00 | public: __thiscall crBodyData::crBodyData(class crSkeletonData &) | ??0crBodyData@@QAE@AAVcrSkeletonData@@@Z
    0x57EB80 | public: virtual __thiscall crBodyData::~crBodyData(void) | ??1crBodyData@@UAE@XZ
    0x57EC00 | public: virtual void * __thiscall crBodyDataBase::`scalar deleting destructor'(unsigned int) | ??_GcrBodyDataBase@@UAEPAXI@Z
    public: virtual void * __thiscall crBodyDataBase::`vector deleting destructor'(unsigned int) | ??_EcrBodyDataBase@@UAEPAXI@Z
    public: virtual void * __thiscall crBodyData::`vector deleting destructor'(unsigned int) | ??_EcrBodyData@@UAEPAXI@Z
    0x57EC30 | public: virtual void * __thiscall crBodyData::`scalar deleting destructor'(unsigned int) | ??_GcrBodyData@@UAEPAXI@Z
    0x5B640C | const crBodyDataBase::`vftable' | ??_7crBodyDataBase@@6B@
    0x5B6410 | const crBodyData::`vftable' | ??_7crBodyData@@6B@
*/

#include "hooking.h"
