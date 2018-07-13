#include "stdafx.h"
#include "localize.h"

#include "Main.h"

LocString* AngelReadString(uint32_t index)
{
    return stub<cdecl_t<LocString*, uint32_t>>(0x534790, index);
}
