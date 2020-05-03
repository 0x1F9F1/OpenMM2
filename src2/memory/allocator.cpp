/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 Brick

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

memMemoryAllocator::memMemoryAllocator()
{
    unimplemented();
}

memMemoryAllocator::~memMemoryAllocator()
{
    unimplemented();
}

void* memMemoryAllocator::Allocate(u32 arg1, bool arg2)
{
    return stub<thiscall_t<void*, memMemoryAllocator*, u32, bool>>(0x5767A0, this, arg1, arg2);
}

void memMemoryAllocator::CheckPointer(void* arg1)
{
    return stub<thiscall_t<void, memMemoryAllocator*, void*>>(0x576A20, this, arg1);
}

u32 memMemoryAllocator::CompareHeap(class memMemoryAllocator* arg1)
{
    return stub<thiscall_t<u32, memMemoryAllocator*, class memMemoryAllocator*>>(0x577070, this, arg1);
}

bool memMemoryAllocator::CopyHeap(class memMemoryAllocator* arg1)
{
    return stub<thiscall_t<bool, memMemoryAllocator*, class memMemoryAllocator*>>(0x577020, this, arg1);
}

void memMemoryAllocator::Free(void* arg1, bool arg2)
{
    return stub<thiscall_t<void, memMemoryAllocator*, void*, bool>>(0x576A80, this, arg1, arg2);
}

void memMemoryAllocator::GetStats(struct memMemStats* arg1, bool arg2)
{
    return stub<thiscall_t<void, memMemoryAllocator*, struct memMemStats*, bool>>(0x576D10, this, arg1, arg2);
}

void memMemoryAllocator::Init(void* arg1, u32 arg2, bool arg3, bool arg4)
{
    return stub<thiscall_t<void, memMemoryAllocator*, void*, u32, bool, bool>>(0x576730, this, arg1, arg2, arg3, arg4);
}

void memMemoryAllocator::Kill()
{
    return stub<thiscall_t<void, memMemoryAllocator*>>(0x576790, this);
}

void* memMemoryAllocator::Reallocate(void* arg1, u32 arg2)
{
    return stub<thiscall_t<void*, memMemoryAllocator*, void*, u32>>(0x576C80, this, arg1, arg2);
}

void memMemoryAllocator::SanityCheck()
{
    return stub<thiscall_t<void, memMemoryAllocator*>>(0x576DB0, this);
}

void memMemoryAllocator::DisplayUsed(char const* arg1)
{
    return stub<cdecl_t<void, char const*>>(0x577170, arg1);
}

class memMemoryAllocator* memMemoryAllocator::FindHeap(void* arg1)
{
    return stub<cdecl_t<class memMemoryAllocator*, void*>>(0x5766B0, arg1);
}

void memMemoryAllocator::LogAllocations(i32 arg1)
{
    return stub<cdecl_t<void, i32>>(0x5766A0, arg1);
}

void memMemoryAllocator::Link(struct memMemoryAllocator::node* arg1)
{
    return stub<thiscall_t<void, memMemoryAllocator*, struct memMemoryAllocator::node*>>(0x576C30, this, arg1);
}

void memMemoryAllocator::Unlink(struct memMemoryAllocator::node* arg1)
{
    return stub<thiscall_t<void, memMemoryAllocator*, struct memMemoryAllocator::node*>>(0x576BD0, this, arg1);
}

void memMemoryAllocator::VerifyBlock(void* arg1)
{
    return stub<thiscall_t<void, memMemoryAllocator*, void*>>(0x576CE0, this, arg1);
}

define_dummy_symbol(memory_allocator);
