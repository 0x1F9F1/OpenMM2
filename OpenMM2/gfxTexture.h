#pragma once

#include "gfxImage.h"

#include <d3d.h>

class gfxTextureCacheEntry;
class gfxTextureCachePool;

class gfxTexture
{
public:
    uint32_t VglBindIndex;
    const char *Name;
    uint16_t Width;
    uint16_t Height;
    uint32_t TexEnv;
    uint32_t DominantColor;
    IDirectDrawSurface7 *m_Surface;
    IDirectDrawPalette *m_Palette;
    gfxTextureCacheEntry *CacheEntry;
    gfxTextureCachePool *CachePool;
    uint32_t RefCount;
    gfxTexture *PrevLOD;
    gfxTexture *NextLOD;
    int8_t m_LOD;
    int8_t m_MaxLOD;

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

    declstatic(bool, sm_EnableSetLOD);
    declstatic(bool, sm_Allow32);
    declstatic(gfxTexture*, sm_First);
    declstatic(bool, sm_UseInternalCache);
    declstatic(gfxTextureCachePool*, sm_FirstPool);
    declstatic(uint8_t, sm_LOD);
    declstatic(gfxTexture*, sm_FirstActive);
};

class gfxTextureCacheEntry
{
public:
    gfxTexture *Texture;
    IDirectDrawSurface7 *Surface;
    uint32_t LastAccessTime;
    gfxTextureCacheEntry *PrevEntry;

    declstatic(uint32_t, sm_CurrentTime);

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
