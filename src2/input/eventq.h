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

/*
    input:eventq

    0x4BA930 | public: static bool __cdecl ioEventQueue::Pop(struct ioEvent &) | ?Pop@ioEventQueue@@SA_NAAUioEvent@@@Z
    0x4BA980 | public: static bool __cdecl ioEventQueue::Peek(struct ioEvent &,int &) | ?Peek@ioEventQueue@@SA_NAAUioEvent@@AAH@Z
    0x4BA9D0 | public: static void __cdecl ioEventQueue::Queue(enum ioEvent::ioEventType,int,int,int) | ?Queue@ioEventQueue@@SAXW4ioEventType@ioEvent@@HHH@Z
    0x4BAA50 | public: static void __cdecl ioEventQueue::Command(void *) | ?Command@ioEventQueue@@SAXPAX@Z
    0x6A3670 | private: static int ioEventQueue::m_Tail | ?m_Tail@ioEventQueue@@0HA
    0x6A3470 | private: static struct ioEvent * ioEventQueue::Q | ?Q@ioEventQueue@@0PAUioEvent@@A
    0x6A3468 | private: static int ioEventQueue::m_Head | ?m_Head@ioEventQueue@@0HA
*/

struct ioEventQueue
{
public:
    // 0x4BAA50 | ?Command@ioEventQueue@@SAXPAX@Z
    static void Command(void* arg1);

    // 0x4BA980 | ?Peek@ioEventQueue@@SA_NAAUioEvent@@AAH@Z
    static bool Peek(struct ioEvent& arg1, i32& arg2);

    // 0x4BA930 | ?Pop@ioEventQueue@@SA_NAAUioEvent@@@Z
    static bool Pop(struct ioEvent& arg1);

    // 0x4BA9D0 | ?Queue@ioEventQueue@@SAXW4ioEventType@ioEvent@@HHH@Z
    static void Queue(enum ioEvent::ioEventType arg1, i32 arg2, i32 arg3, i32 arg4);

private:
    // 0x6A3470 | ?Q@ioEventQueue@@0PAUioEvent@@A
    static inline extern_var(0x6A3470, struct ioEvent*, Q);

    // 0x6A3468 | ?m_Head@ioEventQueue@@0HA
    static inline extern_var(0x6A3468, i32, m_Head);

    // 0x6A3670 | ?m_Tail@ioEventQueue@@0HA
    static inline extern_var(0x6A3670, i32, m_Tail);
};
