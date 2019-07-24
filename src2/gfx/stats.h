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
    gfx:stats

    int gfxLines | ?gfxLines@@3HA
    int gfxStateChanges | ?gfxStateChanges@@3HA
    int gfxTris | ?gfxTris@@3HA
    int gfxVerts | ?gfxVerts@@3HA
    float gfxFrameTime | ?gfxFrameTime@@3MA
    int gfxTextureChanges | ?gfxTextureChanges@@3HA
    int gfxPoints | ?gfxPoints@@3HA
*/

// 0x0 | ?gfxPoints@@3HA
inline extern_var(0x0, int32_t, gfxPoints);
