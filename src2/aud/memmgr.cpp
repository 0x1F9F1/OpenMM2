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

#include "memmgr.h"

void audMemObj::audMemObjFree()
{
    return stub<thiscall_t<void, audMemObj*>>(0x5A5E20, this);
}

class audMemObj* audMemMgr::audAlloc(i32 arg1)
{
    return stub<cdecl_t<class audMemObj*, i32>>(0x5A5E30, arg1);
}

bool audMemMgr::audFree(class audMemObj* arg1)
{
    return stub<cdecl_t<bool, class audMemObj*>>(0x5A5E70, arg1);
}

define_dummy_symbol(aud_memmgr);
