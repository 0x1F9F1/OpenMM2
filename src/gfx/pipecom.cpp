/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
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

#include "pipecom.h"

#include <d3d.h>
#include <ddraw.h>

unsigned int BaseFVFSizes[16] =
{
    0u, 0u, 12u, 0u, 16u, 0u, 16u, 0u, 20u, 0u, 24u, 0u, 28u, 0u, 32u, 0u
};

unsigned int gfxFVFSize(unsigned int flags)
{
    unsigned int result = BaseFVFSizes[flags & 0xF];

    if (flags & D3DFVF_NORMAL)
    {
        result += 12;
    }
    if (flags & D3DFVF_RESERVED1)
    {
        result += 4;
    }
    if (flags & D3DFVF_DIFFUSE)
    {
        result += 4;
    }
    if (flags & D3DFVF_SPECULAR)
    {
        result += 4;
    }
    if (flags & D3DFVF_TEX1)
    {
        result += 8;
    }
    if (flags & D3DFVF_TEX2)
    {
        result += 8;
    }

    return result;
}
