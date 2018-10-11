#pragma once

#include <ddraw.h>

class gfxImage;

class gfxBitmap
{
public:
    char* Name {nullptr};
    uint16_t Width {0};
    uint16_t Height {0};
    IDirectDrawSurface7 *Surface {nullptr};
    uint32_t RefCount {1};
    gfxBitmap *Prev {nullptr};

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