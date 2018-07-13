#pragma once

class Timer
{
public:
    uint32_t StartTime;

    Timer();

    static uint32_t Ticks(void);
};
