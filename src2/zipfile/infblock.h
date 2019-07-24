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
    zipfile:infblock

    0x5745C0 | void __cdecl inflate_blocks_reset(struct inflate_blocks_state *,struct z_stream_s *,unsigned long *) | ?inflate_blocks_reset@@YAXPAUinflate_blocks_state@@PAUz_stream_s@@PAK@Z
    0x574640 | struct inflate_blocks_state * __cdecl inflate_blocks_new(struct z_stream_s *,unsigned long (__cdecl*)(unsigned long,unsigned char const *,unsigned int),unsigned int) | ?inflate_blocks_new@@YAPAUinflate_blocks_state@@PAUz_stream_s@@P6AKKPBEI@ZI@Z
    0x5746F0 | int __cdecl inflate_blocks(struct inflate_blocks_state *,struct z_stream_s *,int) | ?inflate_blocks@@YAHPAUinflate_blocks_state@@PAUz_stream_s@@H@Z
    0x575340 | int __cdecl inflate_blocks_free(struct inflate_blocks_state *,struct z_stream_s *) | ?inflate_blocks_free@@YAHPAUinflate_blocks_state@@PAUz_stream_s@@@Z
    0x575380 | void __cdecl inflate_set_dictionary(struct inflate_blocks_state *,unsigned char const *,unsigned int) | ?inflate_set_dictionary@@YAXPAUinflate_blocks_state@@PBEI@Z
    0x5753C0 | int __cdecl inflate_blocks_sync_point(struct inflate_blocks_state *) | ?inflate_blocks_sync_point@@YAHPAUinflate_blocks_state@@@Z
*/

// 0x5745C0 | ?inflate_blocks_reset@@YAXPAUinflate_blocks_state@@PAUz_stream_s@@PAK@Z
inline void inflate_blocks_reset(struct inflate_blocks_state* arg1, struct z_stream_s* arg2, uint32_t* arg3)
{
    return stub<cdecl_t<void, struct inflate_blocks_state*, struct z_stream_s*, uint32_t*>>(0x5745C0, arg1, arg2, arg3);
}

// 0x574640 | ?inflate_blocks_new@@YAPAUinflate_blocks_state@@PAUz_stream_s@@P6AKKPBEI@ZI@Z
inline struct inflate_blocks_state* inflate_blocks_new(
    struct z_stream_s* arg1, uint32_t(__cdecl* arg2)(uint32_t, uint8_t const*, uint32_t), uint32_t arg3)
{
    return stub<cdecl_t<struct inflate_blocks_state*, struct z_stream_s*,
        uint32_t(__cdecl*)(uint32_t, uint8_t const*, uint32_t), uint32_t>>(0x574640, arg1, arg2, arg3);
}

// 0x5746F0 | ?inflate_blocks@@YAHPAUinflate_blocks_state@@PAUz_stream_s@@H@Z
inline int32_t inflate_blocks(struct inflate_blocks_state* arg1, struct z_stream_s* arg2, int32_t arg3)
{
    return stub<cdecl_t<int32_t, struct inflate_blocks_state*, struct z_stream_s*, int32_t>>(
        0x5746F0, arg1, arg2, arg3);
}

// 0x575340 | ?inflate_blocks_free@@YAHPAUinflate_blocks_state@@PAUz_stream_s@@@Z
inline int32_t inflate_blocks_free(struct inflate_blocks_state* arg1, struct z_stream_s* arg2)
{
    return stub<cdecl_t<int32_t, struct inflate_blocks_state*, struct z_stream_s*>>(0x575340, arg1, arg2);
}

// 0x575380 | ?inflate_set_dictionary@@YAXPAUinflate_blocks_state@@PBEI@Z
inline void inflate_set_dictionary(struct inflate_blocks_state* arg1, uint8_t const* arg2, uint32_t arg3)
{
    return stub<cdecl_t<void, struct inflate_blocks_state*, uint8_t const*, uint32_t>>(0x575380, arg1, arg2, arg3);
}

// 0x5753C0 | ?inflate_blocks_sync_point@@YAHPAUinflate_blocks_state@@@Z
inline int32_t inflate_blocks_sync_point(struct inflate_blocks_state* arg1)
{
    return stub<cdecl_t<int32_t, struct inflate_blocks_state*>>(0x5753C0, arg1);
}
