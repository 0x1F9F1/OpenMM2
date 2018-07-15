#include "stdafx.h"

#include "gfxBitmap.h"
#include "gfxImage.h"

#include "gfxPipeline.h"
#include "d3dpipe.h"

defnvar(0x684D40, gfxBitmap::sm_First);

gfxBitmap::gfxBitmap(uint16_t width, uint16_t height)
    : Name(nullptr)
    , Width(width)
    , Height(height)
    , Surface(nullptr)
    , RefCount(1)
    , Prev(gfxBitmap::sm_First)
{
    gfxBitmap::sm_First = this;
}

gfxBitmap::~gfxBitmap()
{
    if (Name)
    {
        free(Name);
    }

    gfxBitmap ** ppNext = &gfxBitmap::sm_First;

    for (gfxBitmap* i = gfxBitmap::sm_First; i; i = i->Prev)
    {
        if (i == this)
        {
            break;
        }

        ppNext = &i->Prev;
    }

    *ppNext = Prev;

    if (Surface)
    {
        HRESULT hResult = Surface->Release();
        gfxDebugf(gfxDebug, "Releasing %s: %d", "m_Surface", hResult);
        Surface = 0;
    }
}

bool gfxBitmap::Load(gfxImage * image)
{
    return stub<thiscall_t<bool, gfxBitmap, gfxImage*>>(0x4AE5C0, this, image);
}

void gfxBitmap::SetName(const char * name)
{
    if (Name)
    {
        free(Name);
    }

    Name = _strdup(name);
}

void gfxBitmap::Release()
{
    RefCount -= 1;

    if (!RefCount)
    {
        delete this;
    }
}

gfxBitmap * gfxBitmap::Create(gfxImage* image, bool unused)
{
    gfxBitmap *result = gfxBitmap::Create(image->Width, image->Height, unused);

    if (result)
    {
        if (result->Load(image))
        {
            return result;
        }

        delete result;
    }

    return nullptr;
}

gfxBitmap * gfxBitmap::Create(int width, int height, bool unused)
{
    (void)unused;

    DDSURFACEDESC2 surfaceDesc;

    memset(&surfaceDesc, 0, sizeof(surfaceDesc));
    surfaceDesc.dwSize = sizeof(surfaceDesc);

    surfaceDesc.ddpfPixelFormat.dwSize = sizeof(surfaceDesc.ddpfPixelFormat);
    lpdsRend->GetPixelFormat(&surfaceDesc.ddpfPixelFormat);

    surfaceDesc.ddckCKSrcBlt.dwColorSpaceLowValue = 0;
    surfaceDesc.ddckCKSrcBlt.dwColorSpaceHighValue = 0;
    surfaceDesc.dwFlags = 0x11007;
    surfaceDesc.dwWidth = width;
    surfaceDesc.dwHeight = height;
    surfaceDesc.ddsCaps.dwCaps = 0x800;

    IDirectDrawSurface7 *surface = nullptr;

    if (lpDD->CreateSurface(&surfaceDesc, &surface, 0) != DD_OK)
    {
        return nullptr;
    }

    gfxBitmap* result = new gfxBitmap((uint16_t) width, (uint16_t) height);

    result->Surface = surface;

    return result;
}
