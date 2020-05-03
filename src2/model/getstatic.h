/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 Brick

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
    model:getstatic

    0x4A52E0 | class modStatic * __cdecl modGetStatic(char const *,float &,bool) | ?modGetStatic@@YAPAVmodStatic@@PBDAAM_N@Z
*/

// 0x4A52E0 | ?modGetStatic@@YAPAVmodStatic@@PBDAAM_N@Z
class modStatic* modGetStatic(char const* arg1, f32& arg2, bool arg3);
