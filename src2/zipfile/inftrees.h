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
    zipfile:inftrees

    0x575B50 | int __cdecl inflate_trees_bits(unsigned int *,unsigned int *,struct inflate_huft_s * *,struct inflate_huft_s *,struct z_stream_s *) | ?inflate_trees_bits@@YAHPAI0PAPAUinflate_huft_s@@PAU1@PAUz_stream_s@@@Z
    0x576020 | int __cdecl inflate_trees_dynamic(unsigned int,unsigned int,unsigned int *,unsigned int *,unsigned int *,struct inflate_huft_s * *,struct inflate_huft_s * *,struct inflate_huft_s *,struct z_stream_s *) | ?inflate_trees_dynamic@@YAHIIPAI00PAPAUinflate_huft_s@@1PAU1@PAUz_stream_s@@@Z
    0x5761B0 | int __cdecl inflate_trees_fixed(unsigned int *,unsigned int *,struct inflate_huft_s * *,struct inflate_huft_s * *,struct z_stream_s *) | ?inflate_trees_fixed@@YAHPAI0PAPAUinflate_huft_s@@1PAUz_stream_s@@@Z
*/

// 0x575B50 | ?inflate_trees_bits@@YAHPAI0PAPAUinflate_huft_s@@PAU1@PAUz_stream_s@@@Z
inline i32 inflate_trees_bits(
    u32* arg1, u32* arg2, struct inflate_huft_s** arg3, struct inflate_huft_s* arg4, struct z_stream_s* arg5)
{
    return stub<cdecl_t<i32, u32*, u32*, struct inflate_huft_s**, struct inflate_huft_s*, struct z_stream_s*>>(
        0x575B50, arg1, arg2, arg3, arg4, arg5);
}

// 0x576020 | ?inflate_trees_dynamic@@YAHIIPAI00PAPAUinflate_huft_s@@1PAU1@PAUz_stream_s@@@Z
inline i32 inflate_trees_dynamic(u32 arg1, u32 arg2, u32* arg3, u32* arg4, u32* arg5, struct inflate_huft_s** arg6,
    struct inflate_huft_s** arg7, struct inflate_huft_s* arg8, struct z_stream_s* arg9)
{
    return stub<cdecl_t<i32, u32, u32, u32*, u32*, u32*, struct inflate_huft_s**, struct inflate_huft_s**,
        struct inflate_huft_s*, struct z_stream_s*>>(0x576020, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

// 0x5761B0 | ?inflate_trees_fixed@@YAHPAI0PAPAUinflate_huft_s@@1PAUz_stream_s@@@Z
inline i32 inflate_trees_fixed(
    u32* arg1, u32* arg2, struct inflate_huft_s** arg3, struct inflate_huft_s** arg4, struct z_stream_s* arg5)
{
    return stub<cdecl_t<i32, u32*, u32*, struct inflate_huft_s**, struct inflate_huft_s**, struct z_stream_s*>>(
        0x5761B0, arg1, arg2, arg3, arg4, arg5);
}
