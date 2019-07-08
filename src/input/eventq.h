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
    input:eventq

    0x4BA930 | public: static bool __cdecl ioEventQueue::Pop(struct ioEvent &) | ?Pop@ioEventQueue@@SA_NAAUioEvent@@@Z
    0x4BA980 | public: static bool __cdecl ioEventQueue::Peek(struct ioEvent &,int &) | ?Peek@ioEventQueue@@SA_NAAUioEvent@@AAH@Z
    0x4BA9D0 | public: static void __cdecl ioEventQueue::Queue(enum ioEvent::ioEventType,int,int,int) | ?Queue@ioEventQueue@@SAXW4ioEventType@ioEvent@@HHH@Z
    0x4BAA50 | public: static void __cdecl ioEventQueue::Command(void *) | ?Command@ioEventQueue@@SAXPAX@Z
    0x6A3670 | private: static int ioEventQueue::m_Tail | ?m_Tail@ioEventQueue@@0HA
    0x6A3470 | private: static struct ioEvent * ioEventQueue::Q | ?Q@ioEventQueue@@0PAUioEvent@@A
    0x6A3468 | private: static int ioEventQueue::m_Head | ?m_Head@ioEventQueue@@0HA
*/

#include "hooking.h"

struct ioEvent
{
    enum ioEventType
    {
        MouseMove = 0,

        LButtonDown = 1,
        LButtonUp = 2,

        RButtonDown = 3,
        RButtonUp = 4,

        MButtonDown = 5,
        MButtonUp = 6,

        KeyDown = 7,
        Char = 8,
        KeyUp = 9,

        // Unused
        Command = 10,
    };

    ioEventType Type;
    int X;
    int Y;
    int Modifiers;
};

class ioEventQueue
{
public:
    static void Queue(ioEvent::ioEventType type, int x, int y, int modifiers);
    static bool Peek(ioEvent& event, int& index);
    static bool Pop(ioEvent& event);

    static inline extern_var(0x6A3468, int, m_Head);
    static inline extern_var(0x6A3670, int, m_Tail);
    static inline extern_var(0x6A3470, ioEvent[32], Q);
};