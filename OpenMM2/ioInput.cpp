#include "stdafx.h"
#include "ioInput.h"
#include "ioJoystick.h"

defnvar(0x5CDDE4, ioInput::bUseJoystick);

void ioInput::Update()
{
    return stub<cdecl_t<void>>(0x4BA910);
}

void ioInput::Poll()
{
    if (bUseJoystick)
    {
        ioJoystick::PollAll();
    }
}
