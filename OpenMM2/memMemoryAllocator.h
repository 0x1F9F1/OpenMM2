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
    memMemoryAllocator* Prev;
    void *HeapData;
    int TotalSize;
    int Alignment;
    int Locked;
    bool field_14;
    bool field_15;
    bool CheckAlloc;
    bool field_17;
    int Array1[32];
    int Array2[16];
    float fieldD8;

    memMemoryAllocator();
    ~memMemoryAllocator();

    void Init(void * heapData, uint32_t heapSize, bool a3, bool checkalloc);
    void Kill(void);

    void GetStats(memMemStats * stats, bool unused);

    static void DisplayUsed(char const* status);

    declstatic(memMemoryAllocator*, First);
    declstatic(memMemoryAllocator*, Current);
};

declvar(void(*)(char const *), datDisplayUsed);

declvar(int, datCurrentMemoryAlign);
declvar(int, datCurrentMemoryBucket);

check_size(memMemoryAllocator, 0xDC);

void InitMemoryHooks();