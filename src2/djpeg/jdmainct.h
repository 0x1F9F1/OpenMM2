/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

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
    djpeg:jdmainct

    0x49BCB0 | void __cdecl jinit_d_main_controller(struct jpeg_decompress_struct *,unsigned char) | ?jinit_d_main_controller@@YAXPAUjpeg_decompress_struct@@E@Z
*/

// 0x49BCB0 | ?jinit_d_main_controller@@YAXPAUjpeg_decompress_struct@@E@Z
inline void jinit_d_main_controller(struct jpeg_decompress_struct* arg1, uint8_t arg2)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*, uint8_t>>(0x49BCB0, arg1, arg2);
}
