#include "stdafx.h"
#include "gfxImage.h"

defnvar(0x5CD38C, gfxLoadImage);
defnvar(0x6276EC, EnableTextureVariantHandler);

defnvar(0x684D48, gfxImage::sm_Font);

void InstallJPEGSupport(void)
{
    return stub<cdecl_t<void>>(0x497B70);
}

void InstallTextureVariantHandler(void)
{
    return stub<cdecl_t<void>>(0x442F10);
}

gfxImage::~gfxImage()
{
    delete ImageData;

    if (Next)
    {
        Next->Release();

        Next = nullptr;
    }
    else
    {
        delete PaletteData;
    }
}

void gfxImage::Release()
{
    RefCount -= 1;

    if (!RefCount)
    {
        delete this;
    }
}

void gfxImage::Scale(int width, int height)
{
    return stub<thiscall_t<void, gfxImage, int, int>>(0x4AEDC0, this, width, height);
}

gfxImage* gfxImage::GetFont(int & outWidth, int & outHeight)
{
    return stub<cdecl_t<gfxImage*, int&, int&>>(0x4AEA30, outWidth, outHeight);
}

void gfxImage::FreeFont(void)
{
    if (sm_Font)
    {
        delete sm_Font;

        sm_Font = nullptr;
    }
}
