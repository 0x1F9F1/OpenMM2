#include "stdafx.h"
#include "gfxTexture.h"

defnvar(0x684D34, gfxTexture::sm_EnableSetLOD);
defnvar(0x684D36, gfxTexture::sm_Allow32);
defnvar(0x684D38, gfxTexture::sm_First);

gfxTexture::gfxTexture()
{
    this->VglBindIndex = 0;
    this->Name = 0;
    this->DominantColor = 0;
    this->CacheEntry = 0;
    this->CachePool = 0;
    this->RefCount = 1;
    this->m_LOD = -1;
    this->PrevLOD = gfxTexture::sm_First;
    this->m_MaxLOD = 0;

    gfxTexture::sm_First = this;
}

gfxTexture::~gfxTexture()
{
    stub<thiscall_t<void, gfxTexture>>(0x4AC910, this);
}