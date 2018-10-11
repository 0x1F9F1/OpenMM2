#pragma once

class Timer
{
public:
    uint32_t StartTime {0};

    Timer();

    void Reset();

    uint32_t Elapsed() const;

    float ElapsedSeconds() const;
    float ElapsedMilliseconds() const;

    static uint32_t Ticks(void);

    declstatic(float, CpuSpeed);
    declstatic(float, QuickTicksToMilliseconds);
    declstatic(float, TicksToSeconds);
    declstatic(float, TicksToMilliseconds);
};
