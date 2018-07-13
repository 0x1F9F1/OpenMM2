#pragma once

#include <ddraw.h>

class gfxBitmap
{
public:
    char* Name;
    uint16_t Width;
    uint16_t Height;
    IDirectDrawSurface7 *Surface;
    uint32_t RefCount;
    gfxBitmap *Prev;

    gfxBitmap(uint16_t width, uint16_t height);
    ~gfxBitmap();

    void SetName(const char* name);

    declstatic(gfxBitmap*, sm_First);
};

check_size(gfxBitmap, 0x14);