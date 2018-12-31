#include "stdafx.h"
#include "mmInterface.h"

mmInterface::mmInterface()
{
    stub<member_func_t<void, mmInterface>>(0x407C80, this);
}

mmInterface::~mmInterface()
{
    stub<member_func_t<void, mmInterface>>(0x4094C0, this);
}

void mmInterface::ShowMain(int firstLoad)
{
    return stub<member_func_t<void, mmInterface, int>>(0x40A140, this, firstLoad);
}
