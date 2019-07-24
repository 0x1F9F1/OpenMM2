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
    mmgame:ebola

    0x4026A0 | bool __cdecl FirstRunEula(void) | ?FirstRunEula@@YA_NXZ
    0x402780 | void __cdecl ebolaPlayMovie(char *) | ?ebolaPlayMovie@@YAXPAD@Z
*/

// 0x4026A0 | ?FirstRunEula@@YA_NXZ
inline bool FirstRunEula()
{
    return stub<cdecl_t<bool>>(0x4026A0);
}

// 0x402780 | ?ebolaPlayMovie@@YAXPAD@Z
inline void ebolaPlayMovie(char* arg1)
{
    return stub<cdecl_t<void, char*>>(0x402780, arg1);
}
