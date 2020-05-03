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

#include "infcodes.h"

i32 inflate_codes(struct inflate_blocks_state* arg1, struct z_stream_s* arg2, i32 arg3)
{
    return stub<cdecl_t<i32, struct inflate_blocks_state*, struct z_stream_s*, i32>>(0x575410, arg1, arg2, arg3);
}

void inflate_codes_free(struct inflate_codes_state* arg1, struct z_stream_s* arg2)
{
    return stub<cdecl_t<void, struct inflate_codes_state*, struct z_stream_s*>>(0x575B30, arg1, arg2);
}

struct inflate_codes_state* inflate_codes_new(
    u32 arg1, u32 arg2, struct inflate_huft_s* arg3, struct inflate_huft_s* arg4, struct z_stream_s* arg5)
{
    return stub<cdecl_t<struct inflate_codes_state*, u32, u32, struct inflate_huft_s*, struct inflate_huft_s*,
        struct z_stream_s*>>(0x5753D0, arg1, arg2, arg3, arg4, arg5);
}

define_dummy_symbol(zipfile_infcodes);
