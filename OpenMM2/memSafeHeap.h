#pragma once

class memMemoryAllocator;

class memSafeHeap
{
public:
    memMemoryAllocator * Allocator;
    void* Heap;
    void *CommitedData;
    uint32_t SomeAlignmentThingy;
    uint32_t AllocSize;
    bool bool14;
    bool bool15;
    bool CheckAlloc;
    bool byte17;

    memSafeHeap();
    ~memSafeHeap();

    void Init(memMemoryAllocator *allocator, uint32_t heapSize, bool p3, bool p4, bool checkAlloc);

    void Activate(void);
    void Deactivate(void);

    void Restart(void);

    void Kill(void);
};