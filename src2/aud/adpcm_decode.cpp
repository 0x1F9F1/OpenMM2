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

#include "adpcm_decode.h"

void adpcm_decoder(char const* const arg1, i16* const arg2, i32 arg3, struct adpcm_state* arg4)
{
    return stub<cdecl_t<void, char const* const, i16* const, i32, struct adpcm_state*>>(
        0x5A7600, arg1, arg2, arg3, arg4);
}

define_dummy_symbol(aud_adpcm_decode);
