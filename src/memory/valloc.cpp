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

#include "valloc.h"

#include "data/args.h"

#include "memory/allocator.h"

#define WIN32_LEAN_AND_MEAN
#include <Windows.h>

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
#pragma warning(suppress: 6250)
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
