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

#include "eventq.h"

void ioEventQueue::Command(void* arg1)
{
    return stub<cdecl_t<void, void*>>(0x4BAA50, arg1);
}

bool ioEventQueue::Peek(struct ioEvent& arg1, i32& arg2)
{
    return stub<cdecl_t<bool, struct ioEvent&, i32&>>(0x4BA980, arg1, arg2);
}

bool ioEventQueue::Pop(struct ioEvent& arg1)
{
    return stub<cdecl_t<bool, struct ioEvent&>>(0x4BA930, arg1);
}

void ioEventQueue::Queue(enum ioEvent::ioEventType arg1, i32 arg2, i32 arg3, i32 arg4)
{
    return stub<cdecl_t<void, enum ioEvent::ioEventType, i32, i32, i32>>(0x4BA9D0, arg1, arg2, arg3, arg4);
}

define_dummy_symbol(input_eventq);
