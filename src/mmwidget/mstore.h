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
    mmwidget:mstore

    0x4F0D20 | public: __thiscall MArray::MArray(void) | ??0MArray@@QAE@XZ
    0x4F0D30 | public: __thiscall MArray::~MArray(void) | ??1MArray@@QAE@XZ
    0x4F0D40 | public: void __thiscall MArray::Init(int) | ?Init@MArray@@QAEXH@Z
    0x4F0D80 | public: void __thiscall MArray::Write(char *) | ?Write@MArray@@QAEXPAD@Z
    0x4F0F30 | public: void __thiscall MArray::Flush(void) | ?Flush@MArray@@QAEXXZ
    0x4F0F40 | public: void __thiscall MArray::Read(char *) | ?Read@MArray@@QAEXPAD@Z
    0x4F10E0 | public: void __thiscall MArray::AddMenuData(int,class Vector4 &,char *) | ?AddMenuData@MArray@@QAEXHAAVVector4@@PAD@Z
    0x4F1130 | public: int __thiscall MArray::RetrieveMenuData(int,float &,float &,float &,float &) | ?RetrieveMenuData@MArray@@QAEHHAAM000@Z
*/

#include "hooking.h"
