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
    phinertia:joint

    0x595B90 | public: __thiscall phJoint::phJoint(void) | ??0phJoint@@QAE@XZ
    0x595BE0 | public: __thiscall phJoint::phJoint(class phInertialCS *,class phInertialCS *,class Vector3 const &,class Vector3 const &) | ??0phJoint@@QAE@PAVphInertialCS@@0ABVVector3@@1@Z
    0x595C10 | public: __thiscall phJoint::phJoint(class phInertialCS *,class phInertialCS *,class Vector3 const &) | ??0phJoint@@QAE@PAVphInertialCS@@0ABVVector3@@@Z
    0x595C40 | public: void __thiscall phJoint::Init(class phInertialCS *,class phInertialCS *,class Vector3 const &) | ?Init@phJoint@@QAEXPAVphInertialCS@@0ABVVector3@@@Z
    0x595D10 | public: void __thiscall phJoint::Init(class phInertialCS *,class phInertialCS *,class Vector3 const &,class Vector3 const &) | ?Init@phJoint@@QAEXPAVphInertialCS@@0ABVVector3@@1@Z
    0x595DB0 | public: void __thiscall phJoint::Reset(void) | ?Reset@phJoint@@QAEXXZ
    0x595DD0 | public: void __thiscall phJoint::Update(void) | ?Update@phJoint@@QAEXXZ
    0x595DF0 | public: virtual void __thiscall phJoint::ComputeInvMassMatrix(void) | ?ComputeInvMassMatrix@phJoint@@UAEXXZ
    0x595E90 | public: virtual void __thiscall phJoint::ComputeInvMassMatrix(class phInertialCS *,class Matrix34 &,class Vector3 const &) const | ?ComputeInvMassMatrix@phJoint@@UBEXPAVphInertialCS@@AAVMatrix34@@ABVVector3@@@Z
    0x595EA0 | public: virtual void __thiscall phJoint::ComputeJointForce(void) | ?ComputeJointForce@phJoint@@UAEXXZ
    0x5960C0 | public: virtual void __thiscall phJoint::ComputeJointPush(void) | ?ComputeJointPush@phJoint@@UAEXXZ
    public: virtual void __thiscall phJoint::DrawPhysics(class Vector3 const &) const | ?DrawPhysics@phJoint@@UBEXABVVector3@@@Z
    public: void __thiscall phJoint::AddWidgets(class bkBank *) | ?AddWidgets@phJoint@@QAEXPAVbkBank@@@Z
    0x5961F0 | public: virtual bool __thiscall phJoint::IsBroken(void) const | ?IsBroken@phJoint@@UBE_NXZ
    0x5B8690 | const phJoint::`vftable' | ??_7phJoint@@6B@
*/

class phJoint
{
public:
    // phJoint::`vftable' @ 0x5B8690

    // 0x595B90 | ??0phJoint@@QAE@XZ
    inline phJoint()
    {
        stub<member_func_t<void, phJoint>>(0x595B90, this);
    }

    // 0x595BE0 | ??0phJoint@@QAE@PAVphInertialCS@@0ABVVector3@@1@Z
    inline phJoint(
        class phInertialCS* arg1, class phInertialCS* arg2, class Vector3 const& arg3, class Vector3 const& arg4)
    {
        stub<member_func_t<void, phJoint, class phInertialCS*, class phInertialCS*, class Vector3 const&,
            class Vector3 const&>>(0x595BE0, this, arg1, arg2, arg3, arg4);
    }

    // 0x595C10 | ??0phJoint@@QAE@PAVphInertialCS@@0ABVVector3@@@Z
    inline phJoint(class phInertialCS* arg1, class phInertialCS* arg2, class Vector3 const& arg3)
    {
        stub<member_func_t<void, phJoint, class phInertialCS*, class phInertialCS*, class Vector3 const&>>(
            0x595C10, this, arg1, arg2, arg3);
    }

    // 0x595C40 | ?Init@phJoint@@QAEXPAVphInertialCS@@0ABVVector3@@@Z
    inline void Init(class phInertialCS* arg1, class phInertialCS* arg2, class Vector3 const& arg3)
    {
        return stub<member_func_t<void, phJoint, class phInertialCS*, class phInertialCS*, class Vector3 const&>>(
            0x595C40, this, arg1, arg2, arg3);
    }

    // 0x595D10 | ?Init@phJoint@@QAEXPAVphInertialCS@@0ABVVector3@@1@Z
    inline void Init(
        class phInertialCS* arg1, class phInertialCS* arg2, class Vector3 const& arg3, class Vector3 const& arg4)
    {
        return stub<member_func_t<void, phJoint, class phInertialCS*, class phInertialCS*, class Vector3 const&,
            class Vector3 const&>>(0x595D10, this, arg1, arg2, arg3, arg4);
    }

    // 0x595DB0 | ?Reset@phJoint@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, phJoint>>(0x595DB0, this);
    }

    // 0x595DD0 | ?Update@phJoint@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, phJoint>>(0x595DD0, this);
    }

    // 0x5961F0 | ?IsBroken@phJoint@@UBE_NXZ
    virtual inline bool IsBroken()
    {
        return stub<member_func_t<bool, phJoint>>(0x5961F0, this);
    }

    // 0x595E90 | ?ComputeInvMassMatrix@phJoint@@UBEXPAVphInertialCS@@AAVMatrix34@@ABVVector3@@@Z
    virtual inline void ComputeInvMassMatrix(class phInertialCS* arg1, class Matrix34& arg2, class Vector3 const& arg3)
    {
        return stub<member_func_t<void, phJoint, class phInertialCS*, class Matrix34&, class Vector3 const&>>(
            0x595E90, this, arg1, arg2, arg3);
    }

    // 0x595DF0 | ?ComputeInvMassMatrix@phJoint@@UAEXXZ
    virtual inline void ComputeInvMassMatrix()
    {
        return stub<member_func_t<void, phJoint>>(0x595DF0, this);
    }

    // 0x595EA0 | ?ComputeJointForce@phJoint@@UAEXXZ
    virtual inline void ComputeJointForce()
    {
        return stub<member_func_t<void, phJoint>>(0x595EA0, this);
    }

    // 0x5960C0 | ?ComputeJointPush@phJoint@@UAEXXZ
    virtual inline void ComputeJointPush()
    {
        return stub<member_func_t<void, phJoint>>(0x5960C0, this);
    }

    // 0x595AD0 | ?GetInvMassMatrix@phJoint@@UAEAAVMatrix34@@XZ
    virtual inline class Matrix34& GetInvMassMatrix()
    {
        return stub<member_func_t<class Matrix34&, phJoint>>(0x595AD0, this);
    }
};
