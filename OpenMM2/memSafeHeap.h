#pragma once

class memMemoryAllocator;

class memSafeHeap
{
public:
    void Init(memMemoryAllocator *allocator, uint32_t heapSize, bool p3, bool p4, bool checkAlloc);
};