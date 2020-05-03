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

#pragma once

#include "event.h"

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

class eqEventQ : public eqEventMonitor
{
    // const eqEventQ::`vftable' @ 0x5B29E0

public:
    // 0x4A3450 | ??0eqEventQ@@QAE@H@Z
    eqEventQ(i32 arg1);

    // 0x4A36E0 | ??_EeqEventQ@@UAEPAXI@Z
    // 0x4A34D0 | ??1eqEventQ@@UAE@XZ
    ~eqEventQ() override;

    // 0x4A35D0 | ?Keyboard@eqEventQ@@UAEXPAXHHHH@Z
    void Keyboard(void* arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5) override;

    // 0x4A3540 | ?Mouse@eqEventQ@@UAEXPAXHHHHHHH@Z
    void Mouse(void* arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5, i32 arg6, i32 arg7, i32 arg8) override;

    // 0x4A3670 | ?Pop@eqEventQ@@QAEHPATeqEvent@@@Z
    i32 Pop(union eqEvent* arg1);

private:
    // 0x4A3630 | ?Queue@eqEventQ@@AAEXAATeqEvent@@@Z
    void Queue(union eqEvent& arg1);
};

check_size(eqEventQ, 0x24);
