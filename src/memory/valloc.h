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

#pragma once

/*
    memory:valloc

    0x5771E0 | public: __thiscall memSafeHeap::memSafeHeap(void) | ??0memSafeHeap@@QAE@XZ
    0x577200 | public: __thiscall memSafeHeap::~memSafeHeap(void) | ??1memSafeHeap@@QAE@XZ
    0x577210 | public: void __thiscall memSafeHeap::Init(class memMemoryAllocator *,unsigned int,bool,bool,bool) | ?Init@memSafeHeap@@QAEXPAVmemMemoryAllocator@@I_N11@Z
    0x577280 | public: void __thiscall memSafeHeap::Restart(void) | ?Restart@memSafeHeap@@QAEXXZ
    0x5772B0 | public: void __thiscall memSafeHeap::Kill(void) | ?Kill@memSafeHeap@@QAEXXZ
    0x5772E0 | protected: void __thiscall memSafeHeap::Activate(void) | ?Activate@memSafeHeap@@IAEXXZ
    0x577330 | protected: void __thiscall memSafeHeap::Deactivate(void) | ?Deactivate@memSafeHeap@@IAEXXZ
*/

#include "hooking.h"

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
