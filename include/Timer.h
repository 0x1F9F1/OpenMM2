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

    decl_static(float, CpuSpeed);
    decl_static(float, QuickTicksToMilliseconds);
    decl_static(float, TicksToSeconds);
    decl_static(float, TicksToMilliseconds);
};
