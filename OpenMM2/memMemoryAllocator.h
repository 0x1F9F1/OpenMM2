#pragma once

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

    void Init(void * heapData, unsigned int heapSize, BOOL a3, BOOL checkalloc);

    static void DisplayUsed(char const* status);

    declstatic(memMemoryAllocator*, First);
    declstatic(memMemoryAllocator*, Current);
};

declvar(void(*)(char const *), datDisplayUsed);

check_size(memMemoryAllocator, 0xDC);