#include "stdafx.h"
#include "gfxBitmap.h"

#include "gfxPipeline.h"

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

void gfxBitmap::SetName(const char * name)
{
    if (Name)
    {
        free(Name);
    }

    Name = _strdup(name);
}
