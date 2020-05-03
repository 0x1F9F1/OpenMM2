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

#include "trailerjoint.h"

dgTrailerJoint::dgTrailerJoint()
{
    unimplemented();
}

dgTrailerJoint::~dgTrailerJoint()
{
    unimplemented();
}

void dgTrailerJoint::BreakJoint()
{
    return stub<thiscall_t<void, dgTrailerJoint*>>(0x5942D0, this);
}

void dgTrailerJoint::ComputeInvMassMatrix(class phInertialCS* arg1, class Matrix34& arg2, class Vector3 const& arg3)
{
    return stub<thiscall_t<void, dgTrailerJoint*, class phInertialCS*, class Matrix34&, class Vector3 const&>>(
        0x595080, this, arg1, arg2, arg3);
}

void dgTrailerJoint::ComputeInvMassMatrix(
    class phInertialCS* arg1, class phInertialCS* arg2, class Matrix34& arg3, class Vector3 const& arg4)
{
    return stub<thiscall_t<void, dgTrailerJoint*, class phInertialCS*, class phInertialCS*, class Matrix34&,
        class Vector3 const&>>(0x595390, this, arg1, arg2, arg3, arg4);
}

void dgTrailerJoint::DoJointLimits(f32 arg1, class Vector3 const& arg2, f32 arg3, class Vector3 const& arg4,
    class Vector3& arg5, class Matrix34 const& arg6, class Matrix34 const& arg7, class Matrix34 const& arg8,
    class Matrix34 const& arg9, class Matrix34 const& arg10)
{
    return stub<thiscall_t<void, dgTrailerJoint*, f32, class Vector3 const&, f32, class Vector3 const&, class Vector3&,
        class Matrix34 const&, class Matrix34 const&, class Matrix34 const&, class Matrix34 const&,
        class Matrix34 const&>>(0x5949B0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
}

void dgTrailerJoint::DoJointTorque(class Matrix34 const& arg1, class Matrix34 const& arg2, class Matrix34 const& arg3,
    class Matrix34 const& arg4, f32& arg5, f32& arg6, class Vector3& arg7, f32& arg8, f32& arg9)
{
    return stub<thiscall_t<void, dgTrailerJoint*, class Matrix34 const&, class Matrix34 const&, class Matrix34 const&,
        class Matrix34 const&, f32&, f32&, class Vector3&, f32&, f32&>>(
        0x5942F0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

void dgTrailerJoint::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, dgTrailerJoint*, class datParser&>>(0x595970, this, arg1);
}

char const* dgTrailerJoint::GetClassName()
{
    return stub<thiscall_t<char const*, dgTrailerJoint*>>(0x595B00, this);
}

char const* dgTrailerJoint::GetDirName()
{
    return stub<thiscall_t<char const*, dgTrailerJoint*>>(0x592D10, this);
}

void dgTrailerJoint::Init(char const* arg1, class phInertialCS* arg2, class phInertialCS* arg3,
    class Vector3 const& arg4, class Vector3 const& arg5)
{
    return stub<thiscall_t<void, dgTrailerJoint*, char const*, class phInertialCS*, class phInertialCS*,
        class Vector3 const&, class Vector3 const&>>(0x592D20, this, arg1, arg2, arg3, arg4, arg5);
}

bool dgTrailerJoint::IsBroken()
{
    return stub<thiscall_t<bool, dgTrailerJoint*>>(0x595B30, this);
}

bool dgTrailerJoint::Load()
{
    return stub<thiscall_t<bool, dgTrailerJoint*>>(0x595B10, this);
}

void dgTrailerJoint::MoveICS()
{
    return stub<thiscall_t<void, dgTrailerJoint*>>(0x5942B0, this);
}

void dgTrailerJoint::Reset()
{
    return stub<thiscall_t<void, dgTrailerJoint*>>(0x592E50, this);
}

bool dgTrailerJoint::Save()
{
    return stub<thiscall_t<bool, dgTrailerJoint*>>(0x595B20, this);
}

void dgTrailerJoint::SetCosFreeLean()
{
    return stub<thiscall_t<void, dgTrailerJoint*>>(0x592FF0, this);
}

void dgTrailerJoint::SetForceLimit(f32 arg1)
{
    return stub<thiscall_t<void, dgTrailerJoint*, f32>>(0x593200, this, arg1);
}

void dgTrailerJoint::SetFrictionLean(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, dgTrailerJoint*, f32, f32, f32>>(0x593040, this, arg1, arg2, arg3);
}

void dgTrailerJoint::SetFrictionRoll(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, dgTrailerJoint*, f32, f32, f32>>(0x593070, this, arg1, arg2, arg3);
}

void dgTrailerJoint::SetJointForceFlag()
{
    return stub<thiscall_t<void, dgTrailerJoint*>>(0x593210, this);
}

void dgTrailerJoint::SetLeanLimit(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, dgTrailerJoint*, f32, f32>>(0x5930A0, this, arg1, arg2);
}

void dgTrailerJoint::SetPosition(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, dgTrailerJoint*, class Vector3 const&>>(0x592EC0, this, arg1);
}

void dgTrailerJoint::SetRestOrientMat(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, dgTrailerJoint*, class Matrix34 const&>>(0x593170, this, arg1);
}

void dgTrailerJoint::SetRestOrientMat(class Matrix34 const& arg1, class Matrix34 const& arg2)
{
    return stub<thiscall_t<void, dgTrailerJoint*, class Matrix34 const&, class Matrix34 const&>>(
        0x5931B0, this, arg1, arg2);
}

void dgTrailerJoint::SetRestOrientation()
{
    return stub<thiscall_t<void, dgTrailerJoint*>>(0x593110, this);
}

void dgTrailerJoint::SetRollLimit(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, dgTrailerJoint*, f32, f32>>(0x5930C0, this, arg1, arg2);
}

void dgTrailerJoint::SetRollLimit(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, dgTrailerJoint*, f32, f32, f32>>(0x5930E0, this, arg1, arg2, arg3);
}

void dgTrailerJoint::SetRotate1(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, dgTrailerJoint*, class Matrix34 const&>>(0x593000, this, arg1);
}

void dgTrailerJoint::SetRotate2(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, dgTrailerJoint*, class Matrix34 const&>>(0x593020, this, arg1);
}

void dgTrailerJoint::UnbreakJoint()
{
    return stub<thiscall_t<void, dgTrailerJoint*>>(0x5942E0, this);
}

void dgTrailerJoint::Update()
{
    return stub<thiscall_t<void, dgTrailerJoint*>>(0x5932B0, this);
}

define_dummy_symbol(phys_trailerjoint);
