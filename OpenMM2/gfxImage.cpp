#include "stdafx.h"
#include "gfxImage.h"

defnvar(0x5CD38C, gfxLoadImage);
defnvar(0x6276EC, EnableTextureVariantHandler);

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
        delete(PaletteData);
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
