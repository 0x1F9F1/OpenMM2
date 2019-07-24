/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
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
    dgragdoll:ragdoll

    0x5A7CC0 | public: __thiscall dgRagdoll::dgRagdoll(void) | ??0dgRagdoll@@QAE@XZ
    0x5A7D70 | public: class Matrix34 & __thiscall dgRagdoll::GetMatrix(void) | ?GetMatrix@dgRagdoll@@QAEAAVMatrix34@@XZ
    0x5A7D80 | public: void __thiscall dgRagdoll::Init(class dgRagdollData const &,class crKinematics &,class Matrix34 *) | ?Init@dgRagdoll@@QAEXABVdgRagdollData@@AAVcrKinematics@@PAVMatrix34@@@Z
    0x5A7ED0 | public: __thiscall dgRagdoll::~dgRagdoll(void) | ??1dgRagdoll@@QAE@XZ
    0x5A7EF0 | public: void __thiscall dgRagdoll::Deactivate(void) | ?Deactivate@dgRagdoll@@QAEXXZ
    0x5A7F00 | public: void __thiscall dgRagdoll::ResetGoals(void) | ?ResetGoals@dgRagdoll@@QAEXXZ
    0x5A7F10 | public: void __thiscall dgRagdoll::StartRagdoll(void) | ?StartRagdoll@dgRagdoll@@QAEXXZ
    0x5A7F60 | public: void __thiscall dgRagdoll::StopRagdoll(void) | ?StopRagdoll@dgRagdoll@@QAEXXZ
    0x5A7F70 | public: void __thiscall dgRagdoll::Reset(void) | ?Reset@dgRagdoll@@QAEXXZ
    0x5A7FB0 | public: void __thiscall dgRagdoll::Update(void) | ?Update@dgRagdoll@@QAEXXZ
    0x5A8030 | public: void __thiscall dgRagdoll::ApplyPushVelocity(class Vector3 &) | ?ApplyPushVelocity@dgRagdoll@@QAEXAAVVector3@@@Z
    public: void __thiscall dgRagdoll::AddWidgets(class bkBank &) | ?AddWidgets@dgRagdoll@@QAEXAAVbkBank@@@Z
*/

class dgRagdoll
{
public:
    // 0x5A7CC0 | ??0dgRagdoll@@QAE@XZ
    inline dgRagdoll()
    {
        stub<member_func_t<void, dgRagdoll>>(0x5A7CC0, this);
    }

    // 0x5A7D70 | ?GetMatrix@dgRagdoll@@QAEAAVMatrix34@@XZ
    inline class Matrix34& GetMatrix()
    {
        return stub<member_func_t<class Matrix34&, dgRagdoll>>(0x5A7D70, this);
    }

    // 0x5A7D80 | ?Init@dgRagdoll@@QAEXABVdgRagdollData@@AAVcrKinematics@@PAVMatrix34@@@Z
    inline void Init(class dgRagdollData const& arg1, class crKinematics& arg2, class Matrix34* arg3)
    {
        return stub<member_func_t<void, dgRagdoll, class dgRagdollData const&, class crKinematics&, class Matrix34*>>(
            0x5A7D80, this, arg1, arg2, arg3);
    }

    // 0x5A7ED0 | ??1dgRagdoll@@QAE@XZ
    inline ~dgRagdoll()
    {
        stub<member_func_t<void, dgRagdoll>>(0x5A7ED0, this);
    }

    // 0x5A7EF0 | ?Deactivate@dgRagdoll@@QAEXXZ
    inline void Deactivate()
    {
        return stub<member_func_t<void, dgRagdoll>>(0x5A7EF0, this);
    }

    // 0x5A7F00 | ?ResetGoals@dgRagdoll@@QAEXXZ
    inline void ResetGoals()
    {
        return stub<member_func_t<void, dgRagdoll>>(0x5A7F00, this);
    }

    // 0x5A7F10 | ?StartRagdoll@dgRagdoll@@QAEXXZ
    inline void StartRagdoll()
    {
        return stub<member_func_t<void, dgRagdoll>>(0x5A7F10, this);
    }

    // 0x5A7F60 | ?StopRagdoll@dgRagdoll@@QAEXXZ
    inline void StopRagdoll()
    {
        return stub<member_func_t<void, dgRagdoll>>(0x5A7F60, this);
    }

    // 0x5A7F70 | ?Reset@dgRagdoll@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, dgRagdoll>>(0x5A7F70, this);
    }

    // 0x5A7FB0 | ?Update@dgRagdoll@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, dgRagdoll>>(0x5A7FB0, this);
    }

    // 0x5A8030 | ?ApplyPushVelocity@dgRagdoll@@QAEXAAVVector3@@@Z
    inline void ApplyPushVelocity(class Vector3& arg1)
    {
        return stub<member_func_t<void, dgRagdoll, class Vector3&>>(0x5A8030, this, arg1);
    }
};
