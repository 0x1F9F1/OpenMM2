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

#include "vgl.h"

#include "gfx/pipecom.h"
#include "core/output.h"

#include <d3d.h>
#include <ddraw.h>

inline extern_var(0x661970, void(*)(float, float, float), vglVertex);
inline extern_var(0x681B44, unsigned int, currentVertexType);
inline extern_var(0x661978, unsigned int, currentVertexSize);

inline extern_var(0x661974, unsigned int, vglCurrentColor);
inline extern_var(0x682B5C, float, vglCurrentT);
inline extern_var(0x682B60, float, vglCurrentS);

inline extern_var(0x682B48, vglVCT1_t*, vglVCT1);
inline extern_var(0x682B68, vglVNT1_t*, vglVNT1);

inline extern_var(0x682B58, int, vglCount);

inline extern_var(0x682B4C, float, vglCurrentNZ);
inline extern_var(0x682B50, float, vglCurrentNX);
inline extern_var(0x682B54, float, vglCurrentNY);

void vgl_VERTEX_VCT1(float x, float y, float z)
{
    if (vglCount >= 4096)
    {
        Warningf("vgl_VERTEX_VCT1 Overflow");

        return;
    }

    vglVCT1->sx = x;
    vglVCT1->sy = y;
    vglVCT1->sz = z;
    vglVCT1->rhw = 0.0f;

    vglVCT1->color = vglCurrentColor;
    vglVCT1->specular = 0;

    vglVCT1->tu = vglCurrentS;
    vglVCT1->tv = vglCurrentT;

    ++vglVCT1;
    ++vglCount;
}

void vgl_VERTEX_VNT1(float x, float y, float z)
{
    if (vglCount >= 4096)
    {
        Warningf("vgl_VERTEX_VNT1 Overflow");

        return;
    }

    vglVNT1->x = x;
    vglVNT1->y = y;
    vglVNT1->z = z;

    vglVNT1->nx = vglCurrentNX;
    vglVNT1->ny = vglCurrentNY;
    vglVNT1->nz = vglCurrentNZ;
    vglVNT1->tu = vglCurrentS;
    vglVNT1->tv = vglCurrentT;

    ++vglVNT1;
    ++vglCount;
}

void vglSetFormat(unsigned int format, unsigned int a2, unsigned int a3, unsigned int a4)
{
    (void)a2;
    (void)a3;
    (void)a4;

    vglVertex = (format & D3DFVF_DIFFUSE) ? &vgl_VERTEX_VCT1 : &vgl_VERTEX_VNT1;

    format = D3DFVF_LVERTEX;

    currentVertexType = format;
    currentVertexSize = gfxFVFSize(format);
}

run_once([ ]
{
    create_hook("vgl_VERTEX_VCT1", "", 0x4A5370, &vgl_VERTEX_VCT1);
    create_hook("vgl_VERTEX_VNT1", "", 0x4A5400, &vgl_VERTEX_VNT1);
    create_hook("vglSetFormat", "", 0x4A5490, &vglSetFormat);
});
