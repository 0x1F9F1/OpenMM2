#pragma once

/* Custom implementation of D3D[T]LVERTEX */
struct vglVCT1_t
{
    float sx;
    float sy;
    float sz;
    float rhw;
    uint32_t color;
    uint32_t specular;
    float tu;
    float tv;
};

check_size(vglVCT1_t, 0x20);

/* Custom implementation of D3DVERTEX */
struct vglVNT1_t
{
    float x;             /* Homogeneous coordinates */
    float y;
    float z;
    float nx;            /* Normal */
    float ny;
    float nz;
    float tu;            /* Texture coordinates */
    float tv;
};

check_size(vglVNT1_t, 0x20);

void vglSetFormat(uint32_t format, uint32_t a2, uint32_t a3, uint32_t a4);
uint32_t gfxFVFSize(uint32_t flags);