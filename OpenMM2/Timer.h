#pragma once

class Timer
{
public:
    uint32_t StartTime;

    Timer();

    void Reset();

    uint32_t Elapsed();

    float ElapsedSeconds();
    float ElapsedMilliseconds();

    static uint32_t Ticks(void);

    declstatic(float, TicksToSeconds);
    declstatic(float, TicksToMilliseconds);
};
