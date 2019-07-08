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

#include "eventq.h"

void ioEventQueue::Queue(ioEvent::ioEventType type, int x, int y, int modifiers)
{
    if ((m_Tail == m_Head) || (type != ioEvent::MouseMove) || (Q[m_Tail].Type != ioEvent::MouseMove))
    {
        int i = (m_Tail + 1) % 32;

        if (i != m_Head)
        {
            m_Tail = i;

            Q[i].Type = type;
            Q[i].X = x;
            Q[i].Y = y;
            Q[i].Modifiers = modifiers;
        }
    }
    else
    {
        Q[m_Tail].X = x;
        Q[m_Tail].Y = y;
    }
}

bool ioEventQueue::Peek(ioEvent& event, int& index)
{
    int i = (m_Head + index) % 32;

    if (i == m_Tail)
    {
        return false;
    }

    event = Q[i];
    ++index;
    return true;
}

bool ioEventQueue::Pop(ioEvent& event)
{
    if (m_Tail == m_Head)
    {
        return false;
    }

    int i = (m_Head + 1) % 32;
    m_Head = i;
    event = Q[i];

    return true;
}