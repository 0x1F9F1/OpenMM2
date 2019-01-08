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
    data:memstream

    0x4C9280 | public: int __thiscall datMemStream::Read(void *,int) | ?Read@datMemStream@@QAEHPAXH@Z
    0x4C92D0 | public: int __thiscall datMemStream::Write(void const *,int) | ?Write@datMemStream@@QAEHPBXH@Z
    0x4C9330 | public: int __thiscall datMemStream::GetCh(void) | ?GetCh@datMemStream@@QAEHXZ
    0x4C9360 | public: int __thiscall datMemStream::PutCh(unsigned char) | ?PutCh@datMemStream@@QAEHE@Z
    0x4C9390 | public: int __thiscall datMemStream::Close(void) | ?Close@datMemStream@@QAEHXZ
    0x4C93A0 | public: int __thiscall datMemStream::Size(void) | ?Size@datMemStream@@QAEHXZ
*/

#include "hooking.h"
