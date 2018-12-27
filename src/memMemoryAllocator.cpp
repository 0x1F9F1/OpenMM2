#include "stdafx.h"
#include "memMemoryAllocator.h"

memMemoryAllocator::memMemoryAllocator()
{
    Prev = First;

    First = this;

    datDisplayUsed = DisplayUsed;
}

memMemoryAllocator::~memMemoryAllocator()
{
    memMemoryAllocator::First = Prev;

    HeapData = 0;
}

void memMemoryAllocator::Init(void * heapData, uint32_t heapSize, bool a3, bool checkAlloc)
{
    HeapData = heapData;
    TotalSize = heapSize;
    Alignment = 0;
    field_15 = 1;
    field_14 = a3;
    CheckAlloc = checkAlloc;
    fieldD8 = 0.0f;

    if (a3)
    {
        memset(Array1, 0, sizeof(Array1));
    }

    memset(Array2, 0, sizeof(Array2));
}

void memMemoryAllocator::Kill(void)
{
    this->HeapData = 0;
    this->field_15 = 0;
}

void memMemoryAllocator::GetStats(memMemStats* stats, bool)
{
    memset(stats, 0, sizeof(*stats));
}

void memMemoryAllocator::DisplayUsed(char const * status)
{
    return stub<cdecl_t<void, const char*>>(0x577170, status);
}

void* mm2_new(size_t count)
{
    return operator new(count);
}

void* mm2_new_array(size_t count)
{
    return operator new[](count);
}

void mm2_delete(void* ptr)
{
    return operator delete(ptr);
}

void mm2_delete_array(void* ptr)
{
    return operator delete[](ptr);
}

void DisplayUsed(const char* status)
{
    Displayf("%s", status);
}

void InitMemoryHooks()
{
    hook::create_hook("operator new", "Custom Memory Allocator", 0x577360, &mm2_new, HookType::JMP);
    hook::create_hook("operator new[]", "Custom Memory Allocator", 0x5773A0, &mm2_new_array, HookType::JMP);
    hook::create_hook("operator delete", "Custom Memory Allocator", 0x577380, &mm2_delete, HookType::JMP);
    hook::create_hook("operator delete[]", "Custom Memory Allocator", 0x5773C0, &mm2_delete_array, HookType::JMP);

    hook::create_hook("memMemoryAllocator::GetStats", "Custom Memory Allocator", 0x576D10, &memMemoryAllocator::GetStats, HookType::JMP);

    memMemoryAllocator::First = nullptr;
    memMemoryAllocator::Current = nullptr;

    datDisplayUsed = &DisplayUsed;
}
