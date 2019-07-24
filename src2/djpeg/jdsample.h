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
    djpeg:jdsample

    0x49D5D0 | void __cdecl jinit_upsampler(struct jpeg_decompress_struct *) | ?jinit_upsampler@@YAXPAUjpeg_decompress_struct@@@Z
*/

// 0x49D5D0 | ?jinit_upsampler@@YAXPAUjpeg_decompress_struct@@@Z
inline void jinit_upsampler(struct jpeg_decompress_struct* arg1)
{
    return stub<cdecl_t<void, struct jpeg_decompress_struct*>>(0x49D5D0, arg1);
}
