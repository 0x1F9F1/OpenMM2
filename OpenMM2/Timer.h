#pragma once

class Timer
{
public:
    uint32_t StartTime;

    Timer();

    uint32_t Elapsed();

    static uint32_t Ticks(void);

    declstatic(float, TicksToSeconds);
    declstatic(float, TicksToMilliseconds);
};
