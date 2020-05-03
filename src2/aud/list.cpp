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

#include "list.h"

i32 audList::Count()
{
    return stub<thiscall_t<i32, audList*>>(0x5A5D60, this);
}

class audList* audList::FindObject(void* arg1)
{
    return stub<thiscall_t<class audList*, audList*, void*>>(0x5A5DA0, this, arg1);
}

void* audList::FindObjectAt(i32 arg1)
{
    return stub<thiscall_t<void*, audList*, i32>>(0x5A5D80, this, arg1);
}

i32 audList::FindObjectPos(void* arg1)
{
    return stub<thiscall_t<i32, audList*, void*>>(0x5A5DE0, this, arg1);
}

class audList* audList::GetNext()
{
    return stub<thiscall_t<class audList*, audList*>>(0x5A5CD0, this);
}

class audList* audList::GetPrev()
{
    return stub<thiscall_t<class audList*, audList*>>(0x5A5CE0, this);
}

void audList::Init()
{
    return stub<thiscall_t<void, audList*>>(0x5A5C30, this);
}

class audList* audList::LinkNext(class audList* arg1)
{
    return stub<thiscall_t<class audList*, audList*, class audList*>>(0x5A5C40, this, arg1);
}

class audList* audList::LinkPrev(class audList* arg1)
{
    return stub<thiscall_t<class audList*, audList*, class audList*>>(0x5A5CB0, this, arg1);
}

class audList* audList::SetNext(class audList* arg1)
{
    return stub<thiscall_t<class audList*, audList*, class audList*>>(0x5A5CF0, this, arg1);
}

class audList* audList::SetPrev(class audList* arg1)
{
    return stub<thiscall_t<class audList*, audList*, class audList*>>(0x5A5D10, this, arg1);
}

bool audList::Unlink()
{
    return stub<thiscall_t<bool, audList*>>(0x5A5D30, this);
}

define_dummy_symbol(aud_list);
