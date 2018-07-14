#pragma once

class Timer
{
public:
    uint32_t StartTime;

    Timer();

    void Reset();

    uint32_t Elapsed();

    double ElapsedSeconds();
    double ElapsedMilliseconds();

    static uint32_t Ticks(void);

    declstatic(float, TicksToSeconds);
    declstatic(float, TicksToMilliseconds);
};
