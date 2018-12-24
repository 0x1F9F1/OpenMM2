#include "stdafx.h"
#include "gfxInterface.h"

gfxResData * gfxInterface::CurrentResolution()
{
    return &Resolutions[ResolutionChoice];
}

gfxInterface * gfxInterface::Current()
{
    return &gfxInterfaces[gfxInterfaceChoice];
}
