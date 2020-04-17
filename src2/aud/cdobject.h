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
    aud:cdobject

    0x5A6F20 | public: void __thiscall audCDObject::Init(void) | ?Init@audCDObject@@QAEXXZ
    0x5A6FD0 | public: int __thiscall audCDObject::GetFramesBetween(struct _cd_position_ *,struct _cd_position_ *) | ?GetFramesBetween@audCDObject@@QAEHPAU_cd_position_@@0@Z
    0x5A7060 | public: int __thiscall audCDObject::GetTrackTime(void) | ?GetTrackTime@audCDObject@@QAEHXZ
    0x5A70A0 | public: int __thiscall audCDObject::GetCDEndPosition(struct _cd_position_ *) | ?GetCDEndPosition@audCDObject@@QAEHPAU_cd_position_@@@Z
    0x5A70F0 | public: int __thiscall audCDObject::GetCDStartPosition(struct _cd_position_ *) | ?GetCDStartPosition@audCDObject@@QAEHPAU_cd_position_@@@Z
    0x5A7140 | public: bool __thiscall audCDObject::GetTrackInfo(int) | ?GetTrackInfo@audCDObject@@QAE_NH@Z
    0x5A7290 | public: int __thiscall audCDObject::GetNumCDTracks(void) | ?GetNumCDTracks@audCDObject@@QAEHXZ
    0x5A72E0 | public: bool __thiscall audCDObject::SetCDPosition(struct _cd_position_ *) | ?SetCDPosition@audCDObject@@QAE_NPAU_cd_position_@@@Z
    0x5A7370 | public: int __thiscall audCDObject::GetCDPosition(struct _cd_position_ *) | ?GetCDPosition@audCDObject@@QAEHPAU_cd_position_@@@Z
*/

struct audCDObject
{
public:
    // 0x5A6F20 | ?Init@audCDObject@@QAEXXZ
    void Init()
    {
        return stub<member_func_t<void, audCDObject>>(0x5A6F20, this);
    }

    // 0x5A6FD0 | ?GetFramesBetween@audCDObject@@QAEHPAU_cd_position_@@0@Z
    i32 GetFramesBetween(struct _cd_position_* arg1, struct _cd_position_* arg2)
    {
        return stub<member_func_t<i32, audCDObject, struct _cd_position_*, struct _cd_position_*>>(
            0x5A6FD0, this, arg1, arg2);
    }

    // 0x5A7060 | ?GetTrackTime@audCDObject@@QAEHXZ
    i32 GetTrackTime()
    {
        return stub<member_func_t<i32, audCDObject>>(0x5A7060, this);
    }

    // 0x5A70A0 | ?GetCDEndPosition@audCDObject@@QAEHPAU_cd_position_@@@Z
    i32 GetCDEndPosition(struct _cd_position_* arg1)
    {
        return stub<member_func_t<i32, audCDObject, struct _cd_position_*>>(0x5A70A0, this, arg1);
    }

    // 0x5A70F0 | ?GetCDStartPosition@audCDObject@@QAEHPAU_cd_position_@@@Z
    i32 GetCDStartPosition(struct _cd_position_* arg1)
    {
        return stub<member_func_t<i32, audCDObject, struct _cd_position_*>>(0x5A70F0, this, arg1);
    }

    // 0x5A7140 | ?GetTrackInfo@audCDObject@@QAE_NH@Z
    bool GetTrackInfo(i32 arg1)
    {
        return stub<member_func_t<bool, audCDObject, i32>>(0x5A7140, this, arg1);
    }

    // 0x5A7290 | ?GetNumCDTracks@audCDObject@@QAEHXZ
    i32 GetNumCDTracks()
    {
        return stub<member_func_t<i32, audCDObject>>(0x5A7290, this);
    }

    // 0x5A72E0 | ?SetCDPosition@audCDObject@@QAE_NPAU_cd_position_@@@Z
    bool SetCDPosition(struct _cd_position_* arg1)
    {
        return stub<member_func_t<bool, audCDObject, struct _cd_position_*>>(0x5A72E0, this, arg1);
    }

    // 0x5A7370 | ?GetCDPosition@audCDObject@@QAEHPAU_cd_position_@@@Z
    i32 GetCDPosition(struct _cd_position_* arg1)
    {
        return stub<member_func_t<i32, audCDObject, struct _cd_position_*>>(0x5A7370, this, arg1);
    }
};
