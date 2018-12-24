#pragma once

class ioInput
{
public:
    decl_static(bool, bUseJoystick);

    static void Update();
    static void Poll(void);
};