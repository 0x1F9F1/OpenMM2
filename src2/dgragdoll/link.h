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
    dgragdoll:link

    0x5A81D0 | public: __thiscall dgLink::dgLink(void) | ??0dgLink@@QAE@XZ
    0x5A8200 | public: void __thiscall dgLink::Init(class dgLinkData &,class crIKGoal &,class Vector3 &,class dgRagdoll &) | ?Init@dgLink@@QAEXAAVdgLinkData@@AAVcrIKGoal@@AAVVector3@@AAVdgRagdoll@@@Z
    0x5A8220 | public: void __thiscall dgLink::Reset(void) | ?Reset@dgLink@@QAEXXZ
    0x5A8250 | public: void __thiscall dgLink::ResetGoal(void) | ?ResetGoal@dgLink@@QAEXXZ
    0x5A8270 | public: void __thiscall dgLink::SetMode(int) | ?SetMode@dgLink@@QAEXH@Z
    0x5A82A0 | public: void __thiscall dgLink::Update(void) | ?Update@dgLink@@QAEXXZ
    0x5A82E0 | public: void __thiscall dgLink::UpdateFree(void) | ?UpdateFree@dgLink@@QAEXXZ
    0x5A8540 | public: void __thiscall dgLink::Bounce(class Vector3 &,class Vector3 &) | ?Bounce@dgLink@@QAEXAAVVector3@@0@Z
    0x5A8620 | public: void __thiscall dgLink::UpdateGrasp(void) | ?UpdateGrasp@dgLink@@QAEXXZ
    0x5A8630 | public: void __thiscall dgLink::UpdateDamping(void) | ?UpdateDamping@dgLink@@QAEXXZ
    0x5A87B0 | public: void __thiscall dgLink::UpdateTendon(void) | ?UpdateTendon@dgLink@@QAEXXZ
*/

struct dgLink
{
public:
    // 0x5A81D0 | ??0dgLink@@QAE@XZ
    inline dgLink()
    {
        stub<member_func_t<void, dgLink>>(0x5A81D0, this);
    }

    // 0x5A8200 | ?Init@dgLink@@QAEXAAVdgLinkData@@AAVcrIKGoal@@AAVVector3@@AAVdgRagdoll@@@Z
    inline void Init(class dgLinkData& arg1, class crIKGoal& arg2, class Vector3& arg3, class dgRagdoll& arg4)
    {
        return stub<member_func_t<void, dgLink, class dgLinkData&, class crIKGoal&, class Vector3&, class dgRagdoll&>>(
            0x5A8200, this, arg1, arg2, arg3, arg4);
    }

    // 0x5A8220 | ?Reset@dgLink@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, dgLink>>(0x5A8220, this);
    }

    // 0x5A8250 | ?ResetGoal@dgLink@@QAEXXZ
    inline void ResetGoal()
    {
        return stub<member_func_t<void, dgLink>>(0x5A8250, this);
    }

    // 0x5A8270 | ?SetMode@dgLink@@QAEXH@Z
    inline void SetMode(int32_t arg1)
    {
        return stub<member_func_t<void, dgLink, int32_t>>(0x5A8270, this, arg1);
    }

    // 0x5A82A0 | ?Update@dgLink@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, dgLink>>(0x5A82A0, this);
    }

    // 0x5A82E0 | ?UpdateFree@dgLink@@QAEXXZ
    inline void UpdateFree()
    {
        return stub<member_func_t<void, dgLink>>(0x5A82E0, this);
    }

    // 0x5A8540 | ?Bounce@dgLink@@QAEXAAVVector3@@0@Z
    inline void Bounce(class Vector3& arg1, class Vector3& arg2)
    {
        return stub<member_func_t<void, dgLink, class Vector3&, class Vector3&>>(0x5A8540, this, arg1, arg2);
    }

    // 0x5A8620 | ?UpdateGrasp@dgLink@@QAEXXZ
    inline void UpdateGrasp()
    {
        return stub<member_func_t<void, dgLink>>(0x5A8620, this);
    }

    // 0x5A8630 | ?UpdateDamping@dgLink@@QAEXXZ
    inline void UpdateDamping()
    {
        return stub<member_func_t<void, dgLink>>(0x5A8630, this);
    }

    // 0x5A87B0 | ?UpdateTendon@dgLink@@QAEXXZ
    inline void UpdateTendon()
    {
        return stub<member_func_t<void, dgLink>>(0x5A87B0, this);
    }
};
