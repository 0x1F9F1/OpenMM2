/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

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

struct memSafeHeap
{
public:
    // 0x5771E0 | ??0memSafeHeap@@QAE@XZ
    memSafeHeap()
    {
        stub<member_func_t<void, memSafeHeap>>(0x5771E0, this);
    }

    // 0x577200 | ??1memSafeHeap@@QAE@XZ
    ~memSafeHeap()
    {
        stub<member_func_t<void, memSafeHeap>>(0x577200, this);
    }

    // 0x577210 | ?Init@memSafeHeap@@QAEXPAVmemMemoryAllocator@@I_N11@Z
    void Init(class memMemoryAllocator* arg1, u32 arg2, bool arg3, bool arg4, bool arg5)
    {
        return stub<member_func_t<void, memSafeHeap, class memMemoryAllocator*, u32, bool, bool, bool>>(
            0x577210, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x577280 | ?Restart@memSafeHeap@@QAEXXZ
    void Restart()
    {
        return stub<member_func_t<void, memSafeHeap>>(0x577280, this);
    }

    // 0x5772B0 | ?Kill@memSafeHeap@@QAEXXZ
    void Kill()
    {
        return stub<member_func_t<void, memSafeHeap>>(0x5772B0, this);
    }

    // 0x5772E0 | ?Activate@memSafeHeap@@IAEXXZ
    void Activate()
    {
        return stub<member_func_t<void, memSafeHeap>>(0x5772E0, this);
    }

    // 0x577330 | ?Deactivate@memSafeHeap@@IAEXXZ
    void Deactivate()
    {
        return stub<member_func_t<void, memSafeHeap>>(0x577330, this);
    }
};
