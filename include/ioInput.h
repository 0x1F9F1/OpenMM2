#pragma once

class ioInput
{
public:
    inline_var(0x5CDDE4, bool, bUseJoystick);

    static void Update();
    static void Poll(void);
};