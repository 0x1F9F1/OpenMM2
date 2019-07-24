/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
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

class memMemoryAllocator
{
public:
    // 0x5766A0 | ?LogAllocations@memMemoryAllocator@@SAXH@Z
    static inline void LogAllocations(int32_t arg1)
    {
        return stub<cdecl_t<void, int32_t>>(0x5766A0, arg1);
    }

    // 0x5766B0 | ?FindHeap@memMemoryAllocator@@SAPAV1@PAX@Z
    static inline class memMemoryAllocator* FindHeap(void* arg1)
    {
        return stub<cdecl_t<class memMemoryAllocator*, void*>>(0x5766B0, arg1);
    }

    // 0x5766F0 | ??0memMemoryAllocator@@QAE@XZ
    inline memMemoryAllocator()
    {
        stub<member_func_t<void, memMemoryAllocator>>(0x5766F0, this);
    }

    // 0x576720 | ??1memMemoryAllocator@@QAE@XZ
    inline ~memMemoryAllocator()
    {
        stub<member_func_t<void, memMemoryAllocator>>(0x576720, this);
    }

    // 0x576730 | ?Init@memMemoryAllocator@@QAEXPAXI_N1@Z
    inline void Init(void* arg1, uint32_t arg2, bool arg3, bool arg4)
    {
        return stub<member_func_t<void, memMemoryAllocator, void*, uint32_t, bool, bool>>(
            0x576730, this, arg1, arg2, arg3, arg4);
    }

    // 0x576790 | ?Kill@memMemoryAllocator@@QAEXXZ
    inline void Kill()
    {
        return stub<member_func_t<void, memMemoryAllocator>>(0x576790, this);
    }

    // 0x5767A0 | ?Allocate@memMemoryAllocator@@QAEPAXI_N@Z
    inline void* Allocate(uint32_t arg1, bool arg2)
    {
        return stub<member_func_t<void*, memMemoryAllocator, uint32_t, bool>>(0x5767A0, this, arg1, arg2);
    }

    // 0x576A20 | ?CheckPointer@memMemoryAllocator@@QAEXPAX@Z
    inline void CheckPointer(void* arg1)
    {
        return stub<member_func_t<void, memMemoryAllocator, void*>>(0x576A20, this, arg1);
    }

    // 0x576A80 | ?Free@memMemoryAllocator@@QAEXPAX_N@Z
    inline void Free(void* arg1, bool arg2)
    {
        return stub<member_func_t<void, memMemoryAllocator, void*, bool>>(0x576A80, this, arg1, arg2);
    }

    // 0x576BD0 | ?Unlink@memMemoryAllocator@@AAEXPAUnode@1@@Z
    inline void Unlink(struct memMemoryAllocator::node* arg1)
    {
        return stub<member_func_t<void, memMemoryAllocator, struct memMemoryAllocator::node*>>(0x576BD0, this, arg1);
    }

    // 0x576C30 | ?Link@memMemoryAllocator@@AAEXPAUnode@1@@Z
    inline void Link(struct memMemoryAllocator::node* arg1)
    {
        return stub<member_func_t<void, memMemoryAllocator, struct memMemoryAllocator::node*>>(0x576C30, this, arg1);
    }

    // 0x576C80 | ?Reallocate@memMemoryAllocator@@QAEPAXPAXI@Z
    inline void* Reallocate(void* arg1, uint32_t arg2)
    {
        return stub<member_func_t<void*, memMemoryAllocator, void*, uint32_t>>(0x576C80, this, arg1, arg2);
    }

    // 0x576CE0 | ?VerifyBlock@memMemoryAllocator@@AAEXPAX@Z
    inline void VerifyBlock(void* arg1)
    {
        return stub<member_func_t<void, memMemoryAllocator, void*>>(0x576CE0, this, arg1);
    }

    // 0x576D10 | ?GetStats@memMemoryAllocator@@QAEXPAUmemMemStats@@_N@Z
    inline void GetStats(struct memMemStats* arg1, bool arg2)
    {
        return stub<member_func_t<void, memMemoryAllocator, struct memMemStats*, bool>>(0x576D10, this, arg1, arg2);
    }

    // 0x576DB0 | ?SanityCheck@memMemoryAllocator@@QAEXXZ
    inline void SanityCheck()
    {
        return stub<member_func_t<void, memMemoryAllocator>>(0x576DB0, this);
    }

    // 0x577020 | ?CopyHeap@memMemoryAllocator@@QAE_NPAV1@@Z
    inline bool CopyHeap(class memMemoryAllocator* arg1)
    {
        return stub<member_func_t<bool, memMemoryAllocator, class memMemoryAllocator*>>(0x577020, this, arg1);
    }

    // 0x577070 | ?CompareHeap@memMemoryAllocator@@QAEIPAV1@@Z
    inline uint32_t CompareHeap(class memMemoryAllocator* arg1)
    {
        return stub<member_func_t<uint32_t, memMemoryAllocator, class memMemoryAllocator*>>(0x577070, this, arg1);
    }

    // 0x577170 | ?DisplayUsed@memMemoryAllocator@@SAXPBD@Z
    static inline void DisplayUsed(char const* arg1)
    {
        return stub<cdecl_t<void, char const*>>(0x577170, arg1);
    }

    // 0x6B46A8 | ?Current@memMemoryAllocator@@0PAV1@A
    static inline extern_var(0x6B46A8, class memMemoryAllocator*, Current);

    // 0x6B46AC | ?First@memMemoryAllocator@@0PAV1@A
    static inline extern_var(0x6B46AC, class memMemoryAllocator*, First);
};
