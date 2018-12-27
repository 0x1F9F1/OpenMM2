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

    inline_var(0x6A3CF0, float, CpuSpeed);
    inline_var(0x6A3CFC, float, QuickTicksToMilliseconds);
    inline_var(0x6A3D00, float, TicksToSeconds);
    inline_var(0x6A3D04, float, TicksToMilliseconds);
};
