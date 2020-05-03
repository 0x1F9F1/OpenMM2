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

#include "joint.h"

phJoint::phJoint()
{
    unimplemented();
}

phJoint::phJoint(class phInertialCS* arg1, class phInertialCS* arg2, class Vector3 const& arg3)
{
    unimplemented();
}

phJoint::phJoint(
    class phInertialCS* arg1, class phInertialCS* arg2, class Vector3 const& arg3, class Vector3 const& arg4)
{
    unimplemented();
}

void phJoint::Init(class phInertialCS* arg1, class phInertialCS* arg2, class Vector3 const& arg3)
{
    return stub<thiscall_t<void, phJoint*, class phInertialCS*, class phInertialCS*, class Vector3 const&>>(
        0x595C40, this, arg1, arg2, arg3);
}

void phJoint::Init(
    class phInertialCS* arg1, class phInertialCS* arg2, class Vector3 const& arg3, class Vector3 const& arg4)
{
    return stub<thiscall_t<void, phJoint*, class phInertialCS*, class phInertialCS*, class Vector3 const&,
        class Vector3 const&>>(0x595D10, this, arg1, arg2, arg3, arg4);
}

void phJoint::Reset()
{
    return stub<thiscall_t<void, phJoint*>>(0x595DB0, this);
}

void phJoint::Update()
{
    return stub<thiscall_t<void, phJoint*>>(0x595DD0, this);
}

bool phJoint::IsBroken()
{
    return stub<thiscall_t<bool, phJoint*>>(0x5961F0, this);
}

void phJoint::ComputeInvMassMatrix(class phInertialCS* arg1, class Matrix34& arg2, class Vector3 const& arg3)
{
    return stub<thiscall_t<void, phJoint*, class phInertialCS*, class Matrix34&, class Vector3 const&>>(
        0x595E90, this, arg1, arg2, arg3);
}

void phJoint::ComputeInvMassMatrix()
{
    return stub<thiscall_t<void, phJoint*>>(0x595DF0, this);
}

void phJoint::ComputeJointForce()
{
    return stub<thiscall_t<void, phJoint*>>(0x595EA0, this);
}

void phJoint::ComputeJointPush()
{
    return stub<thiscall_t<void, phJoint*>>(0x5960C0, this);
}

class Matrix34& phJoint::GetInvMassMatrix()
{
    return stub<thiscall_t<class Matrix34&, phJoint*>>(0x595AD0, this);
}

define_dummy_symbol(phinertia_joint);
