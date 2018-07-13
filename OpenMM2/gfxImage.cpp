#include "stdafx.h"
#include "gfxImage.h"

void InstallJPEGSupport(void)
{
    return stub<cdecl_t<void>>(0x497B70);
}

void InstallTextureVariantHandler(void)
{
    return stub<cdecl_t<void>>(0x442F10);
}
