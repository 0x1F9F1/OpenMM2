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

#include "cdobject.h"

i32 audCDObject::GetCDEndPosition(struct _cd_position_* arg1)
{
    return stub<thiscall_t<i32, audCDObject*, struct _cd_position_*>>(0x5A70A0, this, arg1);
}

i32 audCDObject::GetCDPosition(struct _cd_position_* arg1)
{
    return stub<thiscall_t<i32, audCDObject*, struct _cd_position_*>>(0x5A7370, this, arg1);
}

i32 audCDObject::GetCDStartPosition(struct _cd_position_* arg1)
{
    return stub<thiscall_t<i32, audCDObject*, struct _cd_position_*>>(0x5A70F0, this, arg1);
}

i32 audCDObject::GetFramesBetween(struct _cd_position_* arg1, struct _cd_position_* arg2)
{
    return stub<thiscall_t<i32, audCDObject*, struct _cd_position_*, struct _cd_position_*>>(
        0x5A6FD0, this, arg1, arg2);
}

i32 audCDObject::GetNumCDTracks()
{
    return stub<thiscall_t<i32, audCDObject*>>(0x5A7290, this);
}

bool audCDObject::GetTrackInfo(i32 arg1)
{
    return stub<thiscall_t<bool, audCDObject*, i32>>(0x5A7140, this, arg1);
}

i32 audCDObject::GetTrackTime()
{
    return stub<thiscall_t<i32, audCDObject*>>(0x5A7060, this);
}

void audCDObject::Init()
{
    return stub<thiscall_t<void, audCDObject*>>(0x5A6F20, this);
}

bool audCDObject::SetCDPosition(struct _cd_position_* arg1)
{
    return stub<thiscall_t<bool, audCDObject*, struct _cd_position_*>>(0x5A72E0, this, arg1);
}

define_dummy_symbol(aud_cdobject);
