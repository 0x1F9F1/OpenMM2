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

#include "infblock.h"

i32 inflate_blocks(struct inflate_blocks_state* arg1, struct z_stream_s* arg2, i32 arg3)
{
    return stub<cdecl_t<i32, struct inflate_blocks_state*, struct z_stream_s*, i32>>(0x5746F0, arg1, arg2, arg3);
}

i32 inflate_blocks_free(struct inflate_blocks_state* arg1, struct z_stream_s* arg2)
{
    return stub<cdecl_t<i32, struct inflate_blocks_state*, struct z_stream_s*>>(0x575340, arg1, arg2);
}

struct inflate_blocks_state* inflate_blocks_new(struct z_stream_s* arg1, u32 (*arg2)(u32, u8 const*, u32), u32 arg3)
{
    return stub<cdecl_t<struct inflate_blocks_state*, struct z_stream_s*, u32 (*)(u32, u8 const*, u32), u32>>(
        0x574640, arg1, arg2, arg3);
}

void inflate_blocks_reset(struct inflate_blocks_state* arg1, struct z_stream_s* arg2, u32* arg3)
{
    return stub<cdecl_t<void, struct inflate_blocks_state*, struct z_stream_s*, u32*>>(0x5745C0, arg1, arg2, arg3);
}

i32 inflate_blocks_sync_point(struct inflate_blocks_state* arg1)
{
    return stub<cdecl_t<i32, struct inflate_blocks_state*>>(0x5753C0, arg1);
}

void inflate_set_dictionary(struct inflate_blocks_state* arg1, u8 const* arg2, u32 arg3)
{
    return stub<cdecl_t<void, struct inflate_blocks_state*, u8 const*, u32>>(0x575380, arg1, arg2, arg3);
}

define_dummy_symbol(zipfile_infblock);
