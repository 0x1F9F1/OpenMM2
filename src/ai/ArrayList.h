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
    ai:ArrayList

    0x543D40 | public: __thiscall CArrayList::~CArrayList(void) | ??1CArrayList@@QAE@XZ
    0x543D50 | public: void __thiscall CArrayList::Append(int) | ?Append@CArrayList@@QAEXH@Z
    0x543DB0 | public: void __thiscall CArrayList::SaveBinary(class Stream *) | ?SaveBinary@CArrayList@@QAEXPAVStream@@@Z
    0x543DE0 | public: void __thiscall CArrayList::ReadBinary(class Stream *) | ?ReadBinary@CArrayList@@QAEXPAVStream@@@Z
*/

#include "hooking.h"
