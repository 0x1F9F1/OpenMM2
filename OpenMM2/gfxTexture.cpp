#include "stdafx.h"
#include "gfxTexture.h"

defnvar(0x684D34, gfxTexture::sm_EnableSetLOD);
defnvar(0x684D36, gfxTexture::sm_Allow32);
defnvar(0x684D38, gfxTexture::sm_First);

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