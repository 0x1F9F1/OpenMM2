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
    node:eventq

    0x4A3450 | public: __thiscall eqEventQ::eqEventQ(int) | ??0eqEventQ@@QAE@H@Z
    0x4A34D0 | public: virtual __thiscall eqEventQ::~eqEventQ(void) | ??1eqEventQ@@UAE@XZ
    0x4A3540 | public: virtual void __thiscall eqEventQ::Mouse(void *,int,int,int,int,int,int,int) | ?Mouse@eqEventQ@@UAEXPAXHHHHHHH@Z
    0x4A35D0 | public: virtual void __thiscall eqEventQ::Keyboard(void *,int,int,int,int) | ?Keyboard@eqEventQ@@UAEXPAXHHHH@Z
    0x4A3630 | private: void __thiscall eqEventQ::Queue(union eqEvent &) | ?Queue@eqEventQ@@AAEXAATeqEvent@@@Z
    0x4A3670 | public: int __thiscall eqEventQ::Pop(union eqEvent *) | ?Pop@eqEventQ@@QAEHPATeqEvent@@@Z
    public: virtual void * __thiscall eqEventQ::`scalar deleting destructor'(unsigned int) | ??_GeqEventQ@@UAEPAXI@Z
    0x4A36E0 | public: virtual void * __thiscall eqEventQ::`vector deleting destructor'(unsigned int) | ??_EeqEventQ@@UAEPAXI@Z
    0x5B29E0 | const eqEventQ::`vftable' | ??_7eqEventQ@@6B@
*/

struct eqEventQ : eqEventMonitor
{
public:
    // eqEventQ::`vftable' @ 0x5B29E0

    // 0x4A3450 | ??0eqEventQ@@QAE@H@Z
    inline eqEventQ(i32 arg1)
    {
        stub<member_func_t<void, eqEventQ, i32>>(0x4A3450, this, arg1);
    }

    // 0x4A3630 | ?Queue@eqEventQ@@AAEXAATeqEvent@@@Z
    inline void Queue(union eqEvent& arg1)
    {
        return stub<member_func_t<void, eqEventQ, union eqEvent&>>(0x4A3630, this, arg1);
    }

    // 0x4A3670 | ?Pop@eqEventQ@@QAEHPATeqEvent@@@Z
    inline i32 Pop(union eqEvent* arg1)
    {
        return stub<member_func_t<i32, eqEventQ, union eqEvent*>>(0x4A3670, this, arg1);
    }

    // 0x4A34D0 | ??1eqEventQ@@UAE@XZ
    inline ~eqEventQ() override
    {
        stub<member_func_t<void, eqEventQ>>(0x4A34D0, this);
    }

    // 0x4A3540 | ?Mouse@eqEventQ@@UAEXPAXHHHHHHH@Z
    inline void Mouse(void* arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5, i32 arg6, i32 arg7, i32 arg8) override
    {
        return stub<member_func_t<void, eqEventQ, void*, i32, i32, i32, i32, i32, i32, i32>>(
            0x4A3540, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x4A35D0 | ?Keyboard@eqEventQ@@UAEXPAXHHHH@Z
    inline void Keyboard(void* arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5) override
    {
        return stub<member_func_t<void, eqEventQ, void*, i32, i32, i32, i32>>(
            0x4A35D0, this, arg1, arg2, arg3, arg4, arg5);
    }
};
