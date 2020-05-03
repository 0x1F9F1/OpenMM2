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

#include "valloc.h"

memSafeHeap::memSafeHeap()
{
    unimplemented();
}

memSafeHeap::~memSafeHeap()
{
    unimplemented();
}

void memSafeHeap::Init(class memMemoryAllocator* arg1, u32 arg2, bool arg3, bool arg4, bool arg5)
{
    return stub<thiscall_t<void, memSafeHeap*, class memMemoryAllocator*, u32, bool, bool, bool>>(
        0x577210, this, arg1, arg2, arg3, arg4, arg5);
}

void memSafeHeap::Kill()
{
    return stub<thiscall_t<void, memSafeHeap*>>(0x5772B0, this);
}

void memSafeHeap::Restart()
{
    return stub<thiscall_t<void, memSafeHeap*>>(0x577280, this);
}

void memSafeHeap::Activate()
{
    return stub<thiscall_t<void, memSafeHeap*>>(0x5772E0, this);
}

void memSafeHeap::Deactivate()
{
    return stub<thiscall_t<void, memSafeHeap*>>(0x577330, this);
}

define_dummy_symbol(memory_valloc);
