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
    memory:allocator

    0x5766A0 | public: static void __cdecl memMemoryAllocator::LogAllocations(int) | ?LogAllocations@memMemoryAllocator@@SAXH@Z
    0x5766B0 | public: static class memMemoryAllocator * __cdecl memMemoryAllocator::FindHeap(void *) | ?FindHeap@memMemoryAllocator@@SAPAV1@PAX@Z
    0x5766F0 | public: __thiscall memMemoryAllocator::memMemoryAllocator(void) | ??0memMemoryAllocator@@QAE@XZ
    0x576720 | public: __thiscall memMemoryAllocator::~memMemoryAllocator(void) | ??1memMemoryAllocator@@QAE@XZ
    0x576730 | public: void __thiscall memMemoryAllocator::Init(void *,unsigned int,bool,bool) | ?Init@memMemoryAllocator@@QAEXPAXI_N1@Z
    0x576790 | public: void __thiscall memMemoryAllocator::Kill(void) | ?Kill@memMemoryAllocator@@QAEXXZ
    0x5767A0 | public: void * __thiscall memMemoryAllocator::Allocate(unsigned int,bool) | ?Allocate@memMemoryAllocator@@QAEPAXI_N@Z
    0x576A20 | public: void __thiscall memMemoryAllocator::CheckPointer(void *) | ?CheckPointer@memMemoryAllocator@@QAEXPAX@Z
    0x576A80 | public: void __thiscall memMemoryAllocator::Free(void *,bool) | ?Free@memMemoryAllocator@@QAEXPAX_N@Z
    0x576BD0 | private: void __thiscall memMemoryAllocator::Unlink(struct memMemoryAllocator::node *) | ?Unlink@memMemoryAllocator@@AAEXPAUnode@1@@Z
    0x576C30 | private: void __thiscall memMemoryAllocator::Link(struct memMemoryAllocator::node *) | ?Link@memMemoryAllocator@@AAEXPAUnode@1@@Z
    0x576C80 | public: void * __thiscall memMemoryAllocator::Reallocate(void *,unsigned int) | ?Reallocate@memMemoryAllocator@@QAEPAXPAXI@Z
    0x576CE0 | private: void __thiscall memMemoryAllocator::VerifyBlock(void *) | ?VerifyBlock@memMemoryAllocator@@AAEXPAX@Z
    0x576D10 | public: void __thiscall memMemoryAllocator::GetStats(struct memMemStats *,bool) | ?GetStats@memMemoryAllocator@@QAEXPAUmemMemStats@@_N@Z
    0x576DB0 | public: void __thiscall memMemoryAllocator::SanityCheck(void) | ?SanityCheck@memMemoryAllocator@@QAEXXZ
    0x577020 | public: bool __thiscall memMemoryAllocator::CopyHeap(class memMemoryAllocator *) | ?CopyHeap@memMemoryAllocator@@QAE_NPAV1@@Z
    0x577070 | public: unsigned int __thiscall memMemoryAllocator::CompareHeap(class memMemoryAllocator *) | ?CompareHeap@memMemoryAllocator@@QAEIPAV1@@Z
    0x577170 | public: static void __cdecl memMemoryAllocator::DisplayUsed(char const *) | ?DisplayUsed@memMemoryAllocator@@SAXPBD@Z
    private: static bool memMemoryAllocator::sbAllowNR | ?sbAllowNR@memMemoryAllocator@@0_NA
    0x6B46A8 | private: static class memMemoryAllocator * memMemoryAllocator::Current | ?Current@memMemoryAllocator@@0PAV1@A
    0x6B46AC | private: static class memMemoryAllocator * memMemoryAllocator::First | ?First@memMemoryAllocator@@0PAV1@A
*/

#include "hooking.h"

struct memMemStats
{
    uint32_t dword0;
    uint32_t dword4;
    uint32_t dword8;
    uint32_t dwordC;
    uint32_t dword10;
    uint32_t dword14;
};

class memMemoryAllocator
{
public:
    memMemoryAllocator* Prev {nullptr};
    void *HeapData {nullptr};
    int TotalSize {0};
    int Alignment {0};
    int Locked {0};
    bool field_14 {false};
    bool field_15 {false};
    bool CheckAlloc {false};
    bool field_17 {false};
    int Array1[32] {};
    int Array2[16] {};
    float fieldD8 {0.0f};

    memMemoryAllocator();
    ~memMemoryAllocator();

    void Init(void * heapData, uint32_t heapSize, bool a3, bool checkalloc);
    void Kill(void);

    void GetStats(memMemStats * stats, bool unused);

    static void DisplayUsed(char const* status);

    static inline extern_var(0x6B46AC, memMemoryAllocator*, First);
    static inline extern_var(0x6B46A8, memMemoryAllocator*, Current);
};

check_size(memMemoryAllocator, 0xDC);

void InitMemoryHooks();
