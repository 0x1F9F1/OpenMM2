#include "stdafx.h"
#include "gfxTexture.h"

#include "gfxImage.h"

defnvar(0x684D34, gfxTexture::sm_EnableSetLOD);
defnvar(0x684D36, gfxTexture::sm_Allow32);
defnvar(0x684D38, gfxTexture::sm_First);
defnvar(0x684524, gfxTexture::sm_UseInternalCache);

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

gfxTexture * gfxTexture::Create(int width, int height, gfxImage::gfxImageFormat type, gfxImage::gfxImageFormat paletteType, int mipMapCount)
{
    return stub<cdecl_t<gfxTexture*, int, int, gfxImage::gfxImageFormat, gfxImage::gfxImageFormat, int>>(0x4ACA90, width, height, type, paletteType, mipMapCount);
}

void gfxTexture::EnableCache(bool enabled)
{
    if (gfxTexture::sm_First)
    {
        Quitf("Can't call EnableCache if you already have textures defined.");
    }

    gfxTexture::sm_UseInternalCache = enabled;
}
