#pragma once

struct memMemStats
{
    uint32_t dword0;
    uint32_t dword4;
    uint32_t dword8;
    uint32_t dwordC;
    uint32_t dword10;
    uint32_t dword14;
};

class memMemoryAllocator
{
public:
    memMemoryAllocator* Prev {nullptr};
    void *HeapData {nullptr};
    int TotalSize {0};
    int Alignment {0};
    int Locked {0};
    bool field_14 {false};
    bool field_15 {false};
    bool CheckAlloc {false};
    bool field_17 {false};
    int Array1[32] {};
    int Array2[16] {};
    float fieldD8 {0.0f};

    memMemoryAllocator();
    ~memMemoryAllocator();

    void Init(void * heapData, uint32_t heapSize, bool a3, bool checkalloc);
    void Kill(void);

    void GetStats(memMemStats * stats, bool unused);

    static void DisplayUsed(char const* status);

    inline_var(0x6B46AC, memMemoryAllocator*, First);
    inline_var(0x6B46A8, memMemoryAllocator*, Current);
};

static_var(0x5CE81C, void(*)(char const *), datDisplayUsed);

static_var(0x6A3C34, int, datCurrentMemoryAlign);
static_var(0x6A3C38, int, datCurrentMemoryBucket);

check_size(memMemoryAllocator, 0xDC);

void InitMemoryHooks();