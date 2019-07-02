/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2019 Brick

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include "allocator.h"

#include "core/output.h"
#include "data/memory.h"

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

void memMemoryAllocator::Init(void* heapData, uint32_t heapSize, bool a3, bool checkAlloc)
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

void memMemoryAllocator::DisplayUsed(char const* status)
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
    create_hook("operator new", "Custom Memory Allocator", 0x577360, &mm2_new);
    create_hook("operator new[]", "Custom Memory Allocator", 0x5773A0, &mm2_new_array);
    create_hook("operator delete", "Custom Memory Allocator", 0x577380, &mm2_delete);
    create_hook("operator delete[]", "Custom Memory Allocator", 0x5773C0, &mm2_delete_array);

    create_hook("memMemoryAllocator::GetStats", "Custom Memory Allocator", 0x576D10, &memMemoryAllocator::GetStats);

    memMemoryAllocator::First = nullptr;
    memMemoryAllocator::Current = nullptr;

    datDisplayUsed = &DisplayUsed;
}
