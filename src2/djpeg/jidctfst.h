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
    djpeg:jidctfst

    0x49E900 | void __cdecl jpeg_idct_ifast(struct jpeg_decompress_struct *,struct jpeg_component_info *,short *,unsigned char * *,unsigned int) | ?jpeg_idct_ifast@@YAXPAUjpeg_decompress_struct@@PAUjpeg_component_info@@PAFPAPAEI@Z
*/

// 0x49E900 | ?jpeg_idct_ifast@@YAXPAUjpeg_decompress_struct@@PAUjpeg_component_info@@PAFPAPAEI@Z
inline void jpeg_idct_ifast(
    struct jpeg_decompress_struct* arg1, struct jpeg_component_info* arg2, int16_t* arg3, uint8_t** arg4, uint32_t arg5)
{
    return stub<
        cdecl_t<void, struct jpeg_decompress_struct*, struct jpeg_component_info*, int16_t*, uint8_t**, uint32_t>>(
        0x49E900, arg1, arg2, arg3, arg4, arg5);
}
