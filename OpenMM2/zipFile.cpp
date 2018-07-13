#include "stdafx.h"
#include "zipFile.h"

void zipAutoInit(void)
{
    return stub<cdecl_t<void>>(0x572C50);
}

void zipMultiAutoInit(char const * extension)
{
    return stub<cdecl_t<void, const char*>>(0x572D20, extension);
}
