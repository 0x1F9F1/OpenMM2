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
    zipfile:inftrees

    0x575B50 | int __cdecl inflate_trees_bits(unsigned int *,unsigned int *,struct inflate_huft_s * *,struct inflate_huft_s *,struct z_stream_s *) | ?inflate_trees_bits@@YAHPAI0PAPAUinflate_huft_s@@PAU1@PAUz_stream_s@@@Z
    0x576020 | int __cdecl inflate_trees_dynamic(unsigned int,unsigned int,unsigned int *,unsigned int *,unsigned int *,struct inflate_huft_s * *,struct inflate_huft_s * *,struct inflate_huft_s *,struct z_stream_s *) | ?inflate_trees_dynamic@@YAHIIPAI00PAPAUinflate_huft_s@@1PAU1@PAUz_stream_s@@@Z
    0x5761B0 | int __cdecl inflate_trees_fixed(unsigned int *,unsigned int *,struct inflate_huft_s * *,struct inflate_huft_s * *,struct z_stream_s *) | ?inflate_trees_fixed@@YAHPAI0PAPAUinflate_huft_s@@1PAUz_stream_s@@@Z
*/

// 0x575B50 | ?inflate_trees_bits@@YAHPAI0PAPAUinflate_huft_s@@PAU1@PAUz_stream_s@@@Z
inline int32_t inflate_trees_bits(
    uint32_t* arg1, uint32_t* arg2, struct inflate_huft_s** arg3, struct inflate_huft_s* arg4, struct z_stream_s* arg5)
{
    return stub<
        cdecl_t<int32_t, uint32_t*, uint32_t*, struct inflate_huft_s**, struct inflate_huft_s*, struct z_stream_s*>>(
        0x575B50, arg1, arg2, arg3, arg4, arg5);
}

// 0x576020 | ?inflate_trees_dynamic@@YAHIIPAI00PAPAUinflate_huft_s@@1PAU1@PAUz_stream_s@@@Z
inline int32_t inflate_trees_dynamic(uint32_t arg1, uint32_t arg2, uint32_t* arg3, uint32_t* arg4, uint32_t* arg5,
    struct inflate_huft_s** arg6, struct inflate_huft_s** arg7, struct inflate_huft_s* arg8, struct z_stream_s* arg9)
{
    return stub<cdecl_t<int32_t, uint32_t, uint32_t, uint32_t*, uint32_t*, uint32_t*, struct inflate_huft_s**,
        struct inflate_huft_s**, struct inflate_huft_s*, struct z_stream_s*>>(
        0x576020, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

// 0x5761B0 | ?inflate_trees_fixed@@YAHPAI0PAPAUinflate_huft_s@@1PAUz_stream_s@@@Z
inline int32_t inflate_trees_fixed(
    uint32_t* arg1, uint32_t* arg2, struct inflate_huft_s** arg3, struct inflate_huft_s** arg4, struct z_stream_s* arg5)
{
    return stub<
        cdecl_t<int32_t, uint32_t*, uint32_t*, struct inflate_huft_s**, struct inflate_huft_s**, struct z_stream_s*>>(
        0x5761B0, arg1, arg2, arg3, arg4, arg5);
}
