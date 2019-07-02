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
    zipfile:autoinit

    0x572C50 | void __cdecl zipAutoInit(void) | ?zipAutoInit@@YAXXZ
    0x572D20 | void __cdecl zipMultiAutoInit(char const *) | ?zipMultiAutoInit@@YAXPBD@Z
*/

#include "hooking.h"

void zipAutoInit(void);
void zipMultiAutoInit(char const* extension);