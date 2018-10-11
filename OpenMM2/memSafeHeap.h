#pragma once

class memMemoryAllocator;

class memSafeHeap
{
public:
    memMemoryAllocator * Allocator {nullptr};
    void* Heap {nullptr};
    void* CommitedData {nullptr};
    uint32_t SomeAlignmentThingy {0};
    uint32_t AllocSize {0};
    bool bool14 {false};
    bool bool15 {false};
    bool CheckAlloc {false};
    bool byte17 {false};

    memSafeHeap() = default;

    ~memSafeHeap();

    void Init(memMemoryAllocator *allocator, uint32_t heapSize, bool p3, bool p4, bool checkAlloc);

    void Activate(void);
    void Deactivate(void);

    void Restart(void);

    void Kill(void);
};