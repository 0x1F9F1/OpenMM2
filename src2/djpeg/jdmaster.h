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
    djpeg:jdmaster

    0x49B680 | void __cdecl jpeg_calc_output_dimensions(struct jpeg_decompress_struct *) | ?jpeg_calc_output_dimensions@@YAXPAUjpeg_decompress_struct@@@Z
    0x49B740 | void __cdecl jinit_master_decompress(struct jpeg_decompress_struct *) | ?jinit_master_decompress@@YAXPAUjpeg_decompress_struct@@@Z
*/

// 0x49B680 | ?jpeg_calc_output_dimensions@@YAXPAUjpeg_decompress_struct@@@Z
inline void jpeg_calc_output_dimensions(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x49B680, arg1);
}

// 0x49B740 | ?jinit_master_decompress@@YAXPAUjpeg_decompress_struct@@@Z
inline void jinit_master_decompress(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x49B740, arg1);
}
