#pragma once

#include <ddraw.h>

class gfxImage;

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

    bool Load(gfxImage *image);

    void SetName(const char* name);

    void Release();

    static gfxBitmap* Create(gfxImage* image, bool unused);
    static gfxBitmap* Create(int width, int height, bool unused);

    declstatic(gfxBitmap*, sm_First);
};

check_size(gfxBitmap, 0x14);