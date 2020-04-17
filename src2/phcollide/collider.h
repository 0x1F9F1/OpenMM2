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
    phcollide:collider

    public: void __thiscall phCollider::DebugReplay(void) | ?DebugReplay@phCollider@@QAEXXZ
    0x46D610 | public: static void __cdecl phCollider::InitArray(class phCollider * const,int) | ?InitArray@phCollider@@SAXQAV1@H@Z
    0x46D6E0 | public: void __thiscall phCollider::Init(class phBound const *,class InstanceData *,class phInertialCS *,class phSleep *) | ?Init@phCollider@@QAEXPBVphBound@@PAVInstanceData@@PAVphInertialCS@@PAVphSleep@@@Z
    0x46D740 | public: void __thiscall phCollider::Init(class phBound const *,class phInertialCS *,class phSleep *) | ?Init@phCollider@@QAEXPBVphBound@@PAVphInertialCS@@PAVphSleep@@@Z
    0x46D7A0 | public: void __thiscall phCollider::Init(class phBound const *,class Matrix34 *,class phInertialCS *,class phSleep *) | ?Init@phCollider@@QAEXPBVphBound@@PAVMatrix34@@PAVphInertialCS@@PAVphSleep@@@Z
    0x46D800 | public: void __thiscall phCollider::Init(class phBound const *,class Matrix34 *) | ?Init@phCollider@@QAEXPBVphBound@@PAVMatrix34@@@Z
    0x46D870 | public: void __thiscall phCollider::Init(class Matrix34 *,class phBound const *) | ?Init@phCollider@@QAEXPAVMatrix34@@PBVphBound@@@Z
    0x46D8D0 | public: void __thiscall phCollider::Reset(void) | ?Reset@phCollider@@QAEXXZ
*/

class phCollider : phColliderBase
{
public:
    // phCollider::`vftable' @ 0x5B1CB0

    // 0x46D610 | ?InitArray@phCollider@@SAXQAV1@H@Z
    static inline void InitArray(class phCollider* const arg1, i32 arg2)
    {
        return stub<cdecl_t<void, class phCollider* const, i32>>(0x46D610, arg1, arg2);
    }

    // 0x46D6E0 | ?Init@phCollider@@QAEXPBVphBound@@PAVInstanceData@@PAVphInertialCS@@PAVphSleep@@@Z
    void Init(class phBound const* arg1, class InstanceData* arg2, class phInertialCS* arg3, class phSleep* arg4)
    {
        return stub<member_func_t<void, phCollider, class phBound const*, class InstanceData*, class phInertialCS*,
            class phSleep*>>(0x46D6E0, this, arg1, arg2, arg3, arg4);
    }

    // 0x46D740 | ?Init@phCollider@@QAEXPBVphBound@@PAVphInertialCS@@PAVphSleep@@@Z
    void Init(class phBound const* arg1, class phInertialCS* arg2, class phSleep* arg3)
    {
        return stub<member_func_t<void, phCollider, class phBound const*, class phInertialCS*, class phSleep*>>(
            0x46D740, this, arg1, arg2, arg3);
    }

    // 0x46D7A0 | ?Init@phCollider@@QAEXPBVphBound@@PAVMatrix34@@PAVphInertialCS@@PAVphSleep@@@Z
    void Init(class phBound const* arg1, class Matrix34* arg2, class phInertialCS* arg3, class phSleep* arg4)
    {
        return stub<member_func_t<void, phCollider, class phBound const*, class Matrix34*, class phInertialCS*,
            class phSleep*>>(0x46D7A0, this, arg1, arg2, arg3, arg4);
    }

    // 0x46D800 | ?Init@phCollider@@QAEXPBVphBound@@PAVMatrix34@@@Z
    void Init(class phBound const* arg1, class Matrix34* arg2)
    {
        return stub<member_func_t<void, phCollider, class phBound const*, class Matrix34*>>(0x46D800, this, arg1, arg2);
    }

    // 0x46D870 | ?Init@phCollider@@QAEXPAVMatrix34@@PBVphBound@@@Z
    void Init(class Matrix34* arg1, class phBound const* arg2)
    {
        return stub<member_func_t<void, phCollider, class Matrix34*, class phBound const*>>(0x46D870, this, arg1, arg2);
    }

    // 0x46D8D0 | ?Reset@phCollider@@QAEXXZ
    void Reset()
    {
        return stub<member_func_t<void, phCollider>>(0x46D8D0, this);
    }
};
