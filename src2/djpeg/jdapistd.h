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
    djpeg:jdapistd

    0x498290 | unsigned char __cdecl jpeg_start_decompress(struct jpeg_decompress_struct *) | ?jpeg_start_decompress@@YAEPAUjpeg_decompress_struct@@@Z
    0x4983A0 | unsigned int __cdecl jpeg_read_scanlines(struct jpeg_decompress_struct *,unsigned char * *,unsigned int) | ?jpeg_read_scanlines@@YAIPAUjpeg_decompress_struct@@PAPAEI@Z
    0x498440 | unsigned int __cdecl jpeg_read_raw_data(struct jpeg_decompress_struct *,unsigned char * * *,unsigned int) | ?jpeg_read_raw_data@@YAIPAUjpeg_decompress_struct@@PAPAPAEI@Z
*/

// 0x498290 | ?jpeg_start_decompress@@YAEPAUjpeg_decompress_struct@@@Z
inline uint8_t jpeg_start_decompress(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<uint8_t, struct jpeg_decompress_struct*>>(0x498290, arg1);
}

// 0x4983A0 | ?jpeg_read_scanlines@@YAIPAUjpeg_decompress_struct@@PAPAEI@Z
inline uint32_t jpeg_read_scanlines(struct jpeg_decompress_struct* arg1, uint8_t** arg2, uint32_t arg3)
{
    return stub<cdecl_t<uint32_t, struct jpeg_decompress_struct*, uint8_t**, uint32_t>>(0x4983A0, arg1, arg2, arg3);
}

// 0x498440 | ?jpeg_read_raw_data@@YAIPAUjpeg_decompress_struct@@PAPAPAEI@Z
inline uint32_t jpeg_read_raw_data(struct jpeg_decompress_struct* arg1, uint8_t*** arg2, uint32_t arg3)
{
    return stub<cdecl_t<uint32_t, struct jpeg_decompress_struct*, uint8_t***, uint32_t>>(0x498440, arg1, arg2, arg3);
}
