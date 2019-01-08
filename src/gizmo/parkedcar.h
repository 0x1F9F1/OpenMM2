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
    gizmo:parkedcar

    0x579A20 | public: __thiscall gizParkedCarMgr::gizParkedCarMgr(void) | ??0gizParkedCarMgr@@QAE@XZ
    0x579A80 | public: virtual __thiscall gizParkedCarMgr::~gizParkedCarMgr(void) | ??1gizParkedCarMgr@@UAE@XZ
    0x579AE0 | public: virtual void __thiscall gizParkedCarMgr::Reset(void) | ?Reset@gizParkedCarMgr@@UAEXXZ
    0x579AF0 | public: bool __thiscall gizParkedCarMgr::Init(char *,char *,char *) | ?Init@gizParkedCarMgr@@QAE_NPAD00@Z
    0x579CB0 | public: virtual void __thiscall gizParkedCarMgr::Update(void) | ?Update@gizParkedCarMgr@@UAEXXZ
    0x579CC0 | private: void __thiscall gizParkedCarMgr::ApplyTuning(void) | ?ApplyTuning@gizParkedCarMgr@@AAEXXZ
    public: void __thiscall gizParkedCarMgr::AddWidgets(class bkBank *) | ?AddWidgets@gizParkedCarMgr@@QAEXPAVbkBank@@@Z
    0x579CD0 | public: virtual void * __thiscall gizParkedCarMgr::`scalar deleting destructor'(unsigned int) | ??_GgizParkedCarMgr@@UAEPAXI@Z
    public: virtual void * __thiscall gizParkedCarMgr::`vector deleting destructor'(unsigned int) | ??_EgizParkedCarMgr@@UAEPAXI@Z
    0x5B622C | const gizParkedCarMgr::`vftable' | ??_7gizParkedCarMgr@@6B@
    char * car_name_template | ?car_name_template@@3PADA
*/

#include "hooking.h"
