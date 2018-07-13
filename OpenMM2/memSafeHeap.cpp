#include "stdafx.h"
#include "memSafeHeap.h"

#include "Hooking.h"
#include "datArgParser.h"

#include "memMemoryAllocator.h"

memSafeHeap::memSafeHeap()
    : Allocator(nullptr)
    , Heap(0)
    , CommitedData(nullptr)
    , SomeAlignmentThingy(0)
    , AllocSize(0)
    , bool14(false)
    , bool15(false)
    , CheckAlloc(false)
    , byte17(false)
{ }

memSafeHeap::~memSafeHeap()
{
    Kill();
}

void memSafeHeap::Init(memMemoryAllocator *allocator, uint32_t heapSize, bool p3, bool p4, bool checkAlloc)
{
    this->bool14 = p3;
    this->Allocator = allocator;
    this->AllocSize = heapSize;
    this->bool15 = p4;
    this->CheckAlloc = checkAlloc;

    SYSTEM_INFO SystemInfo;
    GetSystemInfo(&SystemInfo);
    uint32_t alignedAllocSize = ~(SystemInfo.dwPageSize - 1) & (this->AllocSize + SystemInfo.dwPageSize - 1);
    this->bool14 = 0;
    this->AllocSize = alignedAllocSize;
    this->CommitedData = VirtualAlloc(0, alignedAllocSize, MEM_COMMIT, PAGE_READWRITE);

    Activate();
}

void memSafeHeap::Activate(void)
{
    void* preferredAddress = (void*)((char*)(CommitedData) + AllocSize * SomeAlignmentThingy);

    Heap = preferredAddress;

    if (bool14)
    {
        VirtualAlloc(preferredAddress, AllocSize, MEM_COMMIT, PAGE_READWRITE);
    }

    Allocator->Init(Heap, AllocSize, bool15, CheckAlloc);
}

void memSafeHeap::Deactivate(void)
{
    if (bool14)
    {
        VirtualFree(Heap, AllocSize, MEM_DECOMMIT);
    }

    this->Heap = 0;
    Allocator->Kill();
}

void memSafeHeap::Restart(void)
{
    Deactivate();

    if (this->bool14)
    {
        this->SomeAlignmentThingy = (this->SomeAlignmentThingy + 1) & 3;
    }

    Activate();
}

void memSafeHeap::Kill(void)
{
    if (this->CommitedData)
    {
        Deactivate();

        if (this->bool14)
        {
            VirtualFree(this->CommitedData, 0, MEM_RELEASE);
        }

        this->CommitedData = 0;
    }
}
