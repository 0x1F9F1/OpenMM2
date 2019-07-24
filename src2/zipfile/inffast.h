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
    zipfile:inffast

    0x576320 | int __cdecl inflate_fast(unsigned int,unsigned int,struct inflate_huft_s *,struct inflate_huft_s *,struct inflate_blocks_state *,struct z_stream_s *) | ?inflate_fast@@YAHIIPAUinflate_huft_s@@0PAUinflate_blocks_state@@PAUz_stream_s@@@Z
*/

// 0x576320 | ?inflate_fast@@YAHIIPAUinflate_huft_s@@0PAUinflate_blocks_state@@PAUz_stream_s@@@Z
inline int32_t inflate_fast(uint32_t arg1, uint32_t arg2, struct inflate_huft_s* arg3, struct inflate_huft_s* arg4,
    struct inflate_blocks_state* arg5, struct z_stream_s* arg6)
{
    return stub<cdecl_t<int32_t, uint32_t, uint32_t, struct inflate_huft_s*, struct inflate_huft_s*,
        struct inflate_blocks_state*, struct z_stream_s*>>(0x576320, arg1, arg2, arg3, arg4, arg5, arg6);
}
