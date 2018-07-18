#include "stdafx.h"
#include "ioJoystick.h"

void ioJoystick::PollAll()
{
    return stub<cdecl_t<void>>(0x4BBA50);
}
