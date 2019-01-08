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
    effects:linespark

    0x460470 | public: static class asSparkLut * __cdecl asSparkLut::Get(char *) | ?Get@asSparkLut@@SAPAV1@PAD@Z
    0x4604B0 | public: void __thiscall asSparkLut::Init(char *) | ?Init@asSparkLut@@QAEXPAD@Z
    0x460690 | public: __thiscall asLineSparks::asLineSparks(void) | ??0asLineSparks@@QAE@XZ
    0x4606B0 | public: virtual __thiscall asLineSparks::~asLineSparks(void) | ??1asLineSparks@@UAE@XZ
    0x460740 | public: void __thiscall asLineSparks::Init(int,char *) | ?Init@asLineSparks@@QAEXHPAD@Z
    public: void __thiscall asLineSparks::AddWidgets(class bkBank &) | ?AddWidgets@asLineSparks@@QAEXAAVbkBank@@@Z
    0x460830 | public: void __thiscall asLineSparks::RadialBlast(int,class Vector3 &,class Vector3 &) | ?RadialBlast@asLineSparks@@QAEXHAAVVector3@@0@Z
    0x460BE0 | public: void __thiscall asLineSparks::Update(void) | ?Update@asLineSparks@@QAEXXZ
    0x460C20 | public: void __thiscall asLineSparks::Update(float) | ?Update@asLineSparks@@QAEXM@Z
    0x460DE0 | public: void __thiscall asLineSparks::Draw(void) | ?Draw@asLineSparks@@QAEXXZ
    0x460E70 | public: virtual void * __thiscall asLineSparks::`scalar deleting destructor'(unsigned int) | ??_GasLineSparks@@UAEPAXI@Z
    public: virtual void * __thiscall asLineSparks::`vector deleting destructor'(unsigned int) | ??_EasLineSparks@@UAEPAXI@Z
    0x460EA0 | public: virtual __thiscall asCullable::~asCullable(void) | ??1asCullable@@UAE@XZ
    0x5B1968 | const asLineSparks::`vftable' | ??_7asLineSparks@@6B@
    0x5C6400 | private: static bool asLineSparks::bEnabled | ?bEnabled@asLineSparks@@0_NA
    0x5C6404 | private: static unsigned int * asSparkLut::BuiltinClut | ?BuiltinClut@asSparkLut@@0PAIA
    0x631638 | class HashTable SLH | ?SLH@@3VHashTable@@A
    0x631650 | private: static int asLineSparks::RefCount | ?RefCount@asLineSparks@@0HA
*/

#include "hooking.h"
