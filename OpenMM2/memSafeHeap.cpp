#include "stdafx.h"
#include "memSafeHeap.h"

#include "Hooking.h"
#include "datArgParser.h"

void memSafeHeap::Init(memMemoryAllocator *allocator, uint32_t heapSize, bool p3, bool p4, bool checkAlloc)
{
    int heapSizeMB = 128;
    datArgParser::Get("heapsize", 0, heapSizeMB);

    heapSize = heapSizeMB * (1024 * 1024);

    Displayf("[memSafeHeap::Init]: Allocating %dMB heap (%d bytes)\n", heapSizeMB, heapSize);

    return stub<thiscall_t<void, memSafeHeap, memMemoryAllocator*, uint32_t, bool, bool, bool>>(0x577210, this, allocator, heapSize, p3, p4, checkAlloc);
}

call_once([ ]
{
    hook::create_hook("memSafeHeap::Init", "Adds '-heapsize' parameter that takes a size in megabytes. Defaults to 128MB", 0x4015DD, &memSafeHeap::Init, HookType::CALL);
})
