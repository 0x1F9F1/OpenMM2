#pragma once

#include "gfxImage.h"

#include <d3d.h>

class gfxTextureCacheEntry;
class gfxTextureCachePool;

class gfxTexture
{
public:
    uint32_t VglBindIndex {0};
    char *Name {nullptr};
    uint16_t Width {0};
    uint16_t Height {0};
    uint32_t TexEnv {0};
    uint32_t DominantColor {0};
    IDirectDrawSurface7 *m_Surface {nullptr};
    IDirectDrawPalette *m_Palette {nullptr};
    gfxTextureCacheEntry *CacheEntry {nullptr};
    gfxTextureCachePool *CachePool {nullptr};
    uint32_t RefCount {1};
    gfxTexture *PrevLOD {nullptr};
    gfxTexture *NextLOD {nullptr};
    int8_t m_LOD {-1};
    int8_t m_MaxLOD {0};

    gfxTexture();
    ~gfxTexture();

    void Load(gfxImage* image);

    void SetTexEnv(int texEnv);

    IDirectDrawSurface7* FindEntry();

    IDirectDrawSurface7* GetResidentSurface();

    void MarkFirstUse();
    void MarkHigherUse();

    static gfxTexture* Create(gfxImage * image, bool mipMap);
    static gfxTexture* Create(int width, int height, gfxImage::gfxImageFormat type, gfxImage::gfxImageFormat paletteType, int mipMapCount);

    static void EnableCache(bool enabled);
    static void ShutdownCache(void);

    inline_var(0x684D34, bool, sm_EnableSetLOD);
    inline_var(0x684D36, bool, sm_Allow32);
    inline_var(0x684D38, gfxTexture*, sm_First);
    inline_var(0x684524, bool, sm_UseInternalCache);
    inline_var(0x68452C, gfxTextureCachePool*, sm_FirstPool);
    inline_var(0x684D35, uint8_t, sm_LOD);
    inline_var(0x684D3C, gfxTexture*, sm_FirstActive);
};

class gfxTextureCacheEntry
{
public:
    gfxTexture *Texture {nullptr};
    IDirectDrawSurface7 *Surface {nullptr};
    uint32_t LastAccessTime {0};
    gfxTextureCacheEntry *PrevEntry {nullptr};

    inline_var(0x684528, uint32_t, sm_CurrentTime);

    gfxTextureCacheEntry(IDirectDrawSurface7* surface, gfxTextureCacheEntry* prevEntry);
    ~gfxTextureCacheEntry();

    void Lease(gfxTexture *texture);
    void Evict();
};

class gfxTextureCachePool
{
public:
    uint16_t Width;
    uint16_t Height;
    uint16_t MipMapCount;
    uint16_t TextureCount;
    uint16_t EntryCount;
    uint16_t HasNoSurface;
    gfxTextureCacheEntry *FirstEntry;
    gfxTextureCachePool *PrevPool;
    DDPIXELFORMAT Format;

    gfxTextureCachePool(gfxTextureCachePool* prevPool);
    ~gfxTextureCachePool();

    void FindEntry(gfxTexture *texture);
};
