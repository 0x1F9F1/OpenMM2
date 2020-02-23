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
    djpeg:jdmarker

    0x498E10 | unsigned char __cdecl jpeg_resync_to_restart(struct jpeg_decompress_struct *,int) | ?jpeg_resync_to_restart@@YAEPAUjpeg_decompress_struct@@H@Z
    0x499030 | void __cdecl jinit_marker_reader(struct jpeg_decompress_struct *) | ?jinit_marker_reader@@YAXPAUjpeg_decompress_struct@@@Z
    0x49A900 | void __cdecl jpeg_set_marker_processor(struct jpeg_decompress_struct *,int,unsigned char (__cdecl*)(struct jpeg_decompress_struct *)) | ?jpeg_set_marker_processor@@YAXPAUjpeg_decompress_struct@@HP6AE0@Z@Z
*/

// 0x498E10 | ?jpeg_resync_to_restart@@YAEPAUjpeg_decompress_struct@@H@Z
inline u8 jpeg_resync_to_restart(struct jpeg_decompress_struct* arg1, i32 arg2)
{
    return stub<cdecl_t<u8, struct jpeg_decompress_struct*, i32>>(0x498E10, arg1, arg2);
}

// 0x499030 | ?jinit_marker_reader@@YAXPAUjpeg_decompress_struct@@@Z
inline void jinit_marker_reader(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x499030, arg1);
}

// 0x49A900 | ?jpeg_set_marker_processor@@YAXPAUjpeg_decompress_struct@@HP6AE0@Z@Z
inline void jpeg_set_marker_processor(
    struct jpeg_decompress_struct* arg1, i32 arg2, u8(__cdecl* arg3)(struct jpeg_decompress_struct*))
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*, i32, u8(__cdecl*)(struct jpeg_decompress_struct*)>>(
        0x49A900, arg1, arg2, arg3);
}
