/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
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
    model:getpivot

    0x4A5280 | bool __cdecl GetPivot(class Matrix34 &,char const *,char const *) | ?GetPivot@@YA_NAAVMatrix34@@PBD1@Z
*/

// 0x4A5280 | ?GetPivot@@YA_NAAVMatrix34@@PBD1@Z
inline bool GetPivot(class Matrix34& arg1, char const* arg2, char const* arg3)
{
    return stub<cdecl_t<bool, class Matrix34&, char const*, char const*>>(0x4A5280, arg1, arg2, arg3);
}
