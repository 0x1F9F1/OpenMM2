#include "stdafx.h"
#include "vgl.h"

#include <d3d.h>
#include <ddraw.h>

static_var(0x661970, void(*)(float, float, float), vglVertex);
static_var(0x681B44, uint32_t, currentVertexType);
static_var(0x661978, uint32_t, currentVertexSize);

static_var(0x661974, uint32_t, vglCurrentColor);
static_var(0x682B5C, float, vglCurrentT);
static_var(0x682B60, float, vglCurrentS);

static_var(0x682B48, vglVCT1_t*, vglVCT1);
static_var(0x682B68, vglVNT1_t*, vglVNT1);

static_var(0x682B58, int, vglCount);

static_var(0x682B4C, float, vglCurrentNZ);
static_var(0x682B50, float, vglCurrentNX);
static_var(0x682B54, float, vglCurrentNY);

void vgl_VERTEX_VCT1(float x, float y, float z)
{
    if (vglCount >= 4096)
    {
        Warningf(__FUNCTION__ " : Overflow");

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
        Warningf(__FUNCTION__ " : Overflow");

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

void vglSetFormat(uint32_t format, uint32_t a2, uint32_t a3, uint32_t a4)
{
    (void)a2, a3, a4;

    vglVertex = (format & D3DFVF_DIFFUSE) ? &vgl_VERTEX_VCT1 : &vgl_VERTEX_VNT1;

    format = D3DFVF_LVERTEX;

    currentVertexType = format;
    currentVertexSize = gfxFVFSize(format);
}

uint32_t BaseFVFSizes[16] =
{
    0u, 0u, 12u, 0u, 16u, 0u, 16u, 0u, 20u, 0u, 24u, 0u, 28u, 0u, 32u, 0u
};

uint32_t gfxFVFSize(uint32_t flags)
{
    uint32_t result = BaseFVFSizes[flags & 0xF];

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
