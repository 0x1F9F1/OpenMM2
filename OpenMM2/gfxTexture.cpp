#include "stdafx.h"
#include "gfxTexture.h"

#include "gfxImage.h"
#include "gfxPipeline.h"
#include "d3dpipe.h"

defnvar(0x684D34, gfxTexture::sm_EnableSetLOD);
defnvar(0x684D36, gfxTexture::sm_Allow32);
defnvar(0x684D38, gfxTexture::sm_First);
defnvar(0x684524, gfxTexture::sm_UseInternalCache);
defnvar(0x68452C, gfxTexture::sm_FirstPool);

defnvar(0x684528, gfxTextureCacheEntry::sm_CurrentTime);

instvar(0x6844C4, bool, g_Tex565);

DDPIXELFORMAT ddPixelFormat_8888 =
{ 32u, 65u, 0u,{ 32u },{ 16711680u },{ 65280u },{ 255u },{ 4278190080u } };

DDPIXELFORMAT ddPixelFormat_0888 =
{ 32u, 64u, 0u,{ 32u },{ 16711680u },{ 65280u },{ 255u },{ 0u } };

DDPIXELFORMAT ddPixelFormat_1555 =
{ 32u, 65u, 0u,{ 16u },{ 31744u },{ 992u },{ 31u },{ 32768u } };

DDPIXELFORMAT ddPixelFormat_4444 =
{ 32u, 65u, 0u,{ 16u },{ 3840u },{ 240u },{ 15u },{ 61440u } };

DDPIXELFORMAT ddPixelFormat_0565 =
{ 32u, 64u, 0u,{ 16u },{ 63488u },{ 2016u },{ 31u },{ 0u } };

DDPIXELFORMAT ddPixelFormat_0555 =
{ 32u, 64u, 0u,{ 16u },{ 31744u },{ 992u },{ 31u },{ 0u } };

DDPIXELFORMAT ddPixelFormat_Pallete8 =
{ 32u, 96u, 0u,{ 8u },{ 0u },{ 0u },{ 0u },{ 0u } };

DDPIXELFORMAT ddPixelFormat_Pallete4 =
{ 32u, 72u, 0u,{ 4u },{ 0u },{ 0u },{ 0u },{ 0u } };

PALETTEENTRY paletteEntry;

gfxTexture::gfxTexture()
    : VglBindIndex(0)
    , Name(nullptr)
    , Width(0)
    , Height(0)
    , TexEnv(0)
    , DominantColor(0)
    , m_Surface(nullptr)
    , m_Palette(nullptr)
    , CacheEntry(0)
    , CachePool(0)
    , RefCount(1)
    , PrevLOD(gfxTexture::sm_First)
    , NextLOD(nullptr)
    , m_LOD(-1)
    , m_MaxLOD(0)
{
    gfxTexture::sm_First = this;
}

gfxTexture::~gfxTexture()
{
    stub<thiscall_t<void, gfxTexture>>(0x4AC910, this);
}

void gfxTexture::Load(gfxImage * image)
{
    return stub<thiscall_t<void, gfxTexture, gfxImage*>>(0x4AD100, this, image);
}

void gfxTexture::SetTexEnv(int texEnv)
{
    TexEnv = texEnv;
}

gfxTexture * gfxTexture::Create(gfxImage * image, bool mipMap)
{
    if (image == nullptr)
    {
        return nullptr;
    }

    int mipMapCount = 0;

    if (mipMap)
    {
        for (gfxImage* i = image; i; i = i->Next)
        {
            ++mipMapCount;
        }
    }

    gfxTexture* texture = Create(
        image->Width,
        image->Height,
        (gfxImage::gfxImageFormat) image->Type,
        (gfxImage::gfxImageFormat) image->PaletteType,
        mipMapCount);

    if (texture)
    {
        texture->Load(image);

        texture->SetTexEnv(image->TexEnv | texture->TexEnv);
    }
    return texture;
}

uint32_t ToPow2(uint32_t size)
{
    if (size < 4)
    {
        return 4;
    }

    if (size < 8)
    {
        return 8;
    }

    if (size < 16)
    {
        return 16;
    }

    if (size < 32)
    {
        return 32;
    }

    if (size < 64)
    {
        return 64;
    }

    if (size < 128)
    {
        return 128;
    }

    if (size < 256)
    {
        return 256;
    }

    if (size < 512)
    {
        return 512;
    }

    if (size < 1024)
    {
        return 1024;
    }

    return 2048;
}

gfxTexture * gfxTexture::Create(int width, int height, gfxImage::gfxImageFormat type, gfxImage::gfxImageFormat paletteType, int mipMapCount)
{
    (void)paletteType;

    if (!lpDD)
    {
        Warningf("PIPE not started, cannot create textures.");

        return 0;
    }

    gfxTexture::ShutdownCache();

    IDirectDrawSurface7 *ddrawSurface = nullptr;
    IDirectDrawPalette *ddrawPalette = nullptr;
    DDPIXELFORMAT *pixelFormat = nullptr;

    DDSURFACEDESC2 ddSurfaceDesc;
    memset(&ddSurfaceDesc, 0, sizeof(ddSurfaceDesc));
    ddSurfaceDesc.dwSize = sizeof(DDSURFACEDESC2);
    ddSurfaceDesc.dwFlags = 0x1007;
    ddSurfaceDesc.dwWidth = ToPow2(width);
    ddSurfaceDesc.dwHeight = ToPow2(height);
    ddSurfaceDesc.ddsCaps.dwCaps = 0x1000;

    if (useSoftware || gfxTexture::sm_UseInternalCache)
    {
        ddSurfaceDesc.ddsCaps.dwCaps = 0x1800;
    }
    else
    {
        ddSurfaceDesc.ddsCaps.dwCaps2 = 0x20000;
    }

    if (mipMapCount)
    {
        ddSurfaceDesc.ddsCaps.dwCaps |= 0x400008;
        ddSurfaceDesc.dwFlags |= 0x20000u;
        ddSurfaceDesc.dwMipMapCount = mipMapCount;
    }

    bool hasAlpha = 0;

    switch (type)
    {
    case gfxImage::ARGB_8888:
        memcpy(&ddSurfaceDesc.ddpfPixelFormat, &ddPixelFormat_8888, sizeof(ddSurfaceDesc.ddpfPixelFormat));

        if (!gfxTexture::sm_Allow32 || lpDD->CreateSurface(&ddSurfaceDesc, &ddrawSurface, 0) != DD_OK)
        {
            memcpy(&ddSurfaceDesc.ddpfPixelFormat, &ddPixelFormat_4444, sizeof(ddSurfaceDesc.ddpfPixelFormat));

            DX_ASSERT(lpDD->CreateSurface(&ddSurfaceDesc, &ddrawSurface, 0));
        }
        hasAlpha = 1;
        break;
    case gfxImage::RGB_0888:
        memcpy(&ddSurfaceDesc.ddpfPixelFormat, &ddPixelFormat_0888, sizeof(ddSurfaceDesc.ddpfPixelFormat));
        if (!gfxTexture::sm_Allow32 || lpDD->CreateSurface(&ddSurfaceDesc, &ddrawSurface, 0) != DD_OK)
        {
            pixelFormat = &ddPixelFormat_0565;

            if (!g_Tex565)
            {
                pixelFormat = &ddPixelFormat_0555;
            }

            memcpy(&ddSurfaceDesc.ddpfPixelFormat, pixelFormat, sizeof(ddSurfaceDesc.ddpfPixelFormat));

            DX_ASSERT(lpDD->CreateSurface(&ddSurfaceDesc, &ddrawSurface, 0));
        }
        break;
    case gfxImage::RGB_0555:
        pixelFormat = &ddPixelFormat_0565;

        if (!g_Tex565)
        {
            pixelFormat = &ddPixelFormat_0555;
        }

        memcpy(&ddSurfaceDesc.ddpfPixelFormat, pixelFormat, sizeof(ddSurfaceDesc.ddpfPixelFormat));

        DX_ASSERT(lpDD->CreateSurface(&ddSurfaceDesc, &ddrawSurface, 0));
        break;
    case gfxImage::ARGB_1555:
        memcpy(&ddSurfaceDesc.ddpfPixelFormat, &ddPixelFormat_1555, sizeof(ddSurfaceDesc.ddpfPixelFormat));
        lpDD->CreateSurface(&ddSurfaceDesc, &ddrawSurface, 0);
        hasAlpha = 1;
        break;
    case gfxImage::Palette8:
        memcpy(&ddSurfaceDesc.ddpfPixelFormat, &ddPixelFormat_Pallete8, sizeof(ddSurfaceDesc.ddpfPixelFormat));
        if (lpDD->CreateSurface(&ddSurfaceDesc, &ddrawSurface, 0) != DD_OK)
        {
            memcpy(&ddSurfaceDesc.ddpfPixelFormat, &ddPixelFormat_0555, sizeof(ddSurfaceDesc.ddpfPixelFormat));

            lpDD->CreateSurface(&ddSurfaceDesc, &ddrawSurface, 0);
        }
        else
        {
            DX_ASSERT(lpDD->CreatePalette(68, &paletteEntry, &ddrawPalette, 0));
            DX_ASSERT(ddrawSurface->SetPalette(ddrawPalette));
        }
        break;
    case gfxImage::Palette4:
        memcpy(&ddSurfaceDesc.ddpfPixelFormat, &ddPixelFormat_Pallete4, sizeof(ddSurfaceDesc.ddpfPixelFormat));
        if (lpDD->CreateSurface(&ddSurfaceDesc, &ddrawSurface, 0) != DD_OK)
        {
            memcpy(&ddSurfaceDesc.ddpfPixelFormat, &ddPixelFormat_Pallete8, sizeof(ddSurfaceDesc.ddpfPixelFormat));
            if (lpDD->CreateSurface(&ddSurfaceDesc, &ddrawSurface, 0) != DD_OK)
            {
                memcpy(&ddSurfaceDesc.ddpfPixelFormat, &ddPixelFormat_0555, sizeof(ddSurfaceDesc.ddpfPixelFormat));

                lpDD->CreateSurface(&ddSurfaceDesc, &ddrawSurface, 0);
            }
            else
            {
                DX_ASSERT(lpDD->CreatePalette(68, &paletteEntry, &ddrawPalette, 0));
                DX_ASSERT(ddrawSurface->SetPalette(ddrawPalette));
            }
        }
        else
        {
            DX_ASSERT(lpDD->CreatePalette(1, &paletteEntry, &ddrawPalette, 0));
            DX_ASSERT(ddrawSurface->SetPalette(ddrawPalette));
        }
        break;
    default:
        Abortf("Unsupported texture format!");
        break;
    }

    if (!ddrawSurface)
    {
        return 0;
    }

    gfxTexture* texture = new gfxTexture();
    texture->Width = (uint16_t) ddSurfaceDesc.dwWidth;
    texture->Height = (uint16_t) ddSurfaceDesc.dwHeight;
    texture->m_Surface = ddrawSurface;
    texture->m_Palette = ddrawPalette;

    uint32_t texEnv = useSoftware != 0 ? 0 : 0x40000;

    if (hasAlpha)
    {
        texEnv |= 0x20000u;
    }

    texture->TexEnv = texEnv;

    if (mipMapCount)
    {
        if (!useSoftware)
        {
            texture->TexEnv = texEnv | 0x80000;
        }
    }

    texture->m_MaxLOD = (int8_t) mipMapCount;

    return texture;
}

void gfxTexture::EnableCache(bool enabled)
{
    if (gfxTexture::sm_First)
    {
        Quitf("Can't call EnableCache if you already have textures defined.");
    }

    gfxTexture::sm_UseInternalCache = enabled;
}

void gfxTexture::ShutdownCache(void)
{

    if (gfxTexture::sm_FirstPool)
    {
        Warningf("gfxTexture::ShutdownCache: Shutting down texture cache.");

        lpD3DDev->SetTexture(0, 0);
        lpD3DDev->SetTexture(1, 0);

        for (gfxTexture* i = gfxTexture::sm_First; i; i = i->PrevLOD)
        {
            gfxTextureCacheEntry* cacheEntry = i->CacheEntry;

            if (cacheEntry)
            {
                cacheEntry->Evict();
            }

            i->CachePool = nullptr;
        }

        gfxTextureCachePool *currentPool = gfxTexture::sm_FirstPool;

        while (currentPool)
        {
            currentPool = currentPool->PrevPool;
            gfxTexture::sm_FirstPool = currentPool;

            if (currentPool)
            {
                delete currentPool;

                currentPool = gfxTexture::sm_FirstPool;
            }
        }

        gfxTextureCacheEntry::sm_CurrentTime = 0;
    }
}

gfxTextureCachePool::gfxTextureCachePool(gfxTextureCachePool* prevPool)
{
    memset(this, 0, sizeof(gfxTextureCachePool));

    PrevPool = prevPool;
}

gfxTextureCachePool::~gfxTextureCachePool()
{
    for (gfxTextureCacheEntry* i = FirstEntry; i; i = FirstEntry)
    {
        FirstEntry = i->PrevEntry;

        if (i)
        {
            delete i;
        }
    }
}

gfxTextureCacheEntry::gfxTextureCacheEntry(IDirectDrawSurface7 * surface, gfxTextureCacheEntry * prevEntry)
{
    Texture = nullptr;
    Surface = surface;
    LastAccessTime = 0;
    PrevEntry = prevEntry;
}

gfxTextureCacheEntry::~gfxTextureCacheEntry()
{
    Evict();

    Surface->Release();
    Surface = nullptr;
}

void gfxTextureCacheEntry::Evict()
{
    if (Texture)
    {
        Texture->m_Surface->Release();
        Texture->CacheEntry = nullptr;
        Texture = nullptr;
    }
}
