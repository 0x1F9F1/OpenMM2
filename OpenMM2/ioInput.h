#pragma once

class ioInput
{
public:
    declstatic(bool, bUseJoystick);

    static void Update();
    static void Poll(void);
};