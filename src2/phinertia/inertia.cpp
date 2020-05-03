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

#include "inertia.h"

phInertialCS::phInertialCS()
{
    unimplemented();
}

class Matrix34 phInertialCS::AddInertia(f32 arg1, class Vector3 const& arg2, class Matrix34 const& arg3)
{
    return stub<thiscall_t<class Matrix34, phInertialCS*, f32, class Vector3 const&, class Matrix34 const&>>(
        0x476DD0, this, arg1, arg2, arg3);
}

class Matrix34 phInertialCS::AddInertia(f32 arg1, class Vector3 const& arg2, class Vector3 const& arg3)
{
    return stub<thiscall_t<class Matrix34, phInertialCS*, f32, class Vector3 const&, class Vector3 const&>>(
        0x476B40, this, arg1, arg2, arg3);
}

void phInertialCS::ApplyContactForce(class Vector3 const& arg1, class Vector3 const& arg2, class Matrix34 const& arg3)
{
    return stub<thiscall_t<void, phInertialCS*, class Vector3 const&, class Vector3 const&, class Matrix34 const&>>(
        0x478940, this, arg1, arg2, arg3);
}

void phInertialCS::CalcNetPush(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, phInertialCS*, class Vector3 const&>>(0x478700, this, arg1);
}

void phInertialCS::CalcNetTurn(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, phInertialCS*, class Vector3 const&>>(0x478820, this, arg1);
}

void phInertialCS::ClearInertialValues()
{
    return stub<thiscall_t<void, phInertialCS*>>(0x476B20, this);
}

class Matrix34 phInertialCS::FindPrincipalAxes(f32 arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<class Matrix34, phInertialCS*, f32, f32, f32>>(0x4773E0, this, arg1, arg2, arg3);
}

void phInertialCS::Freeze()
{
    return stub<thiscall_t<void, phInertialCS*>>(0x475E20, this);
}

void phInertialCS::GetCMDisp(class Vector3& arg1)
{
    return stub<thiscall_t<void, phInertialCS*, class Vector3&>>(0x4792A0, this, arg1);
}

void phInertialCS::GetCMFilteredVelocity(class Vector3& arg1)
{
    return stub<thiscall_t<void, phInertialCS*, class Vector3&>>(0x479240, this, arg1);
}

void phInertialCS::GetForce(f32 arg1, class Vector3* arg2)
{
    return stub<thiscall_t<void, phInertialCS*, f32, class Vector3*>>(0x476A80, this, arg1, arg2);
}

void phInertialCS::GetInertiaMatrix(class Matrix34* arg1)
{
    return stub<thiscall_t<void, phInertialCS*, class Matrix34*>>(0x478B30, this, arg1);
}

void phInertialCS::GetInertiaMatrix(class Vector3 const& arg1, class Matrix34* arg2)
{
    return stub<thiscall_t<void, phInertialCS*, class Vector3 const&, class Matrix34*>>(0x478BA0, this, arg1, arg2);
}

void phInertialCS::GetInvMassMatrix(class Vector3 const& arg1, class Matrix34& arg2)
{
    return stub<thiscall_t<void, phInertialCS*, class Vector3 const&, class Matrix34&>>(0x478CD0, this, arg1, arg2);
}

void phInertialCS::GetInvMassMatrix(class Vector3 const& arg1, class Vector3 const& arg2, class Matrix34& arg3)
{
    return stub<thiscall_t<void, phInertialCS*, class Vector3 const&, class Vector3 const&, class Matrix34&>>(
        0x478DC0, this, arg1, arg2, arg3);
}

void phInertialCS::GetInverseInertiaMatrix(class Matrix34* arg1)
{
    return stub<thiscall_t<void, phInertialCS*, class Matrix34*>>(0x478C40, this, arg1);
}

void phInertialCS::GetLocalAcceleration(class Vector3 const& arg1, class Vector3& arg2)
{
    return stub<thiscall_t<void, phInertialCS*, class Vector3 const&, class Vector3&>>(0x4792F0, this, arg1, arg2);
}

void phInertialCS::GetLocalDisp(class Vector3 const& arg1, class Vector3& arg2)
{
    return stub<thiscall_t<void, phInertialCS*, class Vector3 const&, class Vector3&>>(0x4791B0, this, arg1, arg2);
}

void phInertialCS::GetLocalFilteredDisp(class Vector3 const& arg1, class Vector3& arg2)
{
    return stub<thiscall_t<void, phInertialCS*, class Vector3 const&, class Vector3&>>(0x4791E0, this, arg1, arg2);
}

void phInertialCS::GetLocalFilteredVelocity(class Vector3 const& arg1, class Vector3& arg2)
{
    return stub<thiscall_t<void, phInertialCS*, class Vector3 const&, class Vector3&>>(0x478FD0, this, arg1, arg2);
}

void phInertialCS::GetLocalFilteredVelocity2(class Vector3 const& arg1, class Vector3& arg2)
{
    return stub<thiscall_t<void, phInertialCS*, class Vector3 const&, class Vector3&>>(0x4790F0, this, arg1, arg2);
}

void phInertialCS::GetLocalVelocity(class Vector3 const& arg1, class Vector3& arg2)
{
    return stub<thiscall_t<void, phInertialCS*, class Vector3 const&, class Vector3&>>(0x478F40, this, arg1, arg2);
}

void phInertialCS::GetOffsetVelocity(class Vector3 const& arg1, class Vector3& arg2)
{
    return stub<thiscall_t<void, phInertialCS*, class Vector3 const&, class Vector3&>>(0x479020, this, arg1, arg2);
}

void phInertialCS::GetTorque(f32 arg1, class Vector3* arg2)
{
    return stub<thiscall_t<void, phInertialCS*, f32, class Vector3*>>(0x476AD0, this, arg1, arg2);
}

void phInertialCS::Init(f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
    return stub<thiscall_t<void, phInertialCS*, f32, f32, f32, f32>>(0x475FC0, this, arg1, arg2, arg3, arg4);
}

void phInertialCS::InitBoxDensity(f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
    return stub<thiscall_t<void, phInertialCS*, f32, f32, f32, f32>>(0x476140, this, arg1, arg2, arg3, arg4);
}

void phInertialCS::InitBoxMass(f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
    return stub<thiscall_t<void, phInertialCS*, f32, f32, f32, f32>>(0x4760D0, this, arg1, arg2, arg3, arg4);
}

void phInertialCS::InitCylinderDensity(f32 arg1, f32 arg2, f32 arg3, char arg4)
{
    return stub<thiscall_t<void, phInertialCS*, f32, f32, f32, char>>(0x476260, this, arg1, arg2, arg3, arg4);
}

void phInertialCS::InitCylinderMass(f32 arg1, f32 arg2, f32 arg3, char arg4)
{
    return stub<thiscall_t<void, phInertialCS*, f32, f32, f32, char>>(0x4761D0, this, arg1, arg2, arg3, arg4);
}

void phInertialCS::InitFromGeometry(
    f32 arg1, class Vector3 const* arg2, class phPolygon const* arg3, i32 arg4, class Matrix34* arg5)
{
    return stub<
        thiscall_t<void, phInertialCS*, f32, class Vector3 const*, class phPolygon const*, i32, class Matrix34*>>(
        0x476440, this, arg1, arg2, arg3, arg4, arg5);
}

void phInertialCS::InitFromValues(f32 arg1, f32 arg2, class Vector3 const& arg3, class Vector3 const& arg4)
{
    return stub<thiscall_t<void, phInertialCS*, f32, f32, class Vector3 const&, class Vector3 const&>>(
        0x476080, this, arg1, arg2, arg3, arg4);
}

void phInertialCS::InitHotdogDensity(f32 arg1, f32 arg2, f32 arg3, char arg4)
{
    return stub<thiscall_t<void, phInertialCS*, f32, f32, f32, char>>(0x476400, this, arg1, arg2, arg3, arg4);
}

void phInertialCS::InitHotdogMass(f32 arg1, f32 arg2, f32 arg3, char arg4)
{
    return stub<thiscall_t<void, phInertialCS*, f32, f32, f32, char>>(0x476290, this, arg1, arg2, arg3, arg4);
}

void phInertialCS::InitSphereDensity(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, phInertialCS*, f32, f32>>(0x4761A0, this, arg1, arg2);
}

void phInertialCS::InitSphereMass(f32 arg1, f32 arg2)
{
    return stub<thiscall_t<void, phInertialCS*, f32, f32>>(0x476170, this, arg1, arg2);
}

void phInertialCS::MoveICS()
{
    return stub<thiscall_t<void, phInertialCS*>>(0x478680, this);
}

class Vector3 phInertialCS::PrincipalAxis(f32 arg1, f32 arg2, f32 arg3, f32 arg4)
{
    return stub<thiscall_t<class Vector3, phInertialCS*, f32, f32, f32, f32>>(0x477D60, this, arg1, arg2, arg3, arg4);
}

void phInertialCS::Reset()
{
    return stub<thiscall_t<void, phInertialCS*>>(0x475E10, this);
}

void phInertialCS::Rotate(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, phInertialCS*, class Vector3 const&>>(0x476A00, this, arg1);
}

class Matrix34 phInertialCS::SubtractInertia(f32 arg1, class Vector3 const& arg2, class Matrix34 const& arg3)
{
    return stub<thiscall_t<class Matrix34, phInertialCS*, f32, class Vector3 const&, class Matrix34 const&>>(
        0x477120, this, arg1, arg2, arg3);
}

class Matrix34 phInertialCS::SubtractInertia(f32 arg1, class Vector3 const& arg2, class Vector3 const& arg3)
{
    return stub<thiscall_t<class Matrix34, phInertialCS*, f32, class Vector3 const&, class Vector3 const&>>(
        0x4770C0, this, arg1, arg2, arg3);
}

class Matrix34 phInertialCS::SubtractInertia(
    f32 arg1, class Vector3 const& arg2, class Matrix34 const& arg3, class phInertialCS* arg4)
{
    return stub<thiscall_t<class Matrix34, phInertialCS*, f32, class Vector3 const&, class Matrix34 const&,
        class phInertialCS*>>(0x4772B0, this, arg1, arg2, arg3, arg4);
}

class Matrix34 phInertialCS::SubtractInertia(
    f32 arg1, class Vector3 const& arg2, class Vector3 const& arg3, class phInertialCS* arg4)
{
    return stub<thiscall_t<class Matrix34, phInertialCS*, f32, class Vector3 const&, class Vector3 const&,
        class phInertialCS*>>(0x477180, this, arg1, arg2, arg3, arg4);
}

void phInertialCS::TetrahedronAngInertia(
    class Vector3* arg1, f32* arg2, f32* arg3, f32* arg4, f32* arg5, f32* arg6, f32* arg7)
{
    return stub<thiscall_t<void, phInertialCS*, class Vector3*, f32*, f32*, f32*, f32*, f32*, f32*>>(
        0x476780, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void phInertialCS::Update()
{
    return stub<thiscall_t<void, phInertialCS*>>(0x477DF0, this);
}

void phInertialCS::UpdateOversample(f32 arg1)
{
    return stub<thiscall_t<void, phInertialCS*, f32>>(0x477F40, this, arg1);
}

void phInertialCS::UpdateOversampleDone()
{
    return stub<thiscall_t<void, phInertialCS*>>(0x478040, this);
}

void phInertialCS::Zero()
{
    return stub<thiscall_t<void, phInertialCS*>>(0x475DE0, this);
}

void phInertialCS::ZeroForces()
{
    return stub<thiscall_t<void, phInertialCS*>>(0x475E60, this);
}

void phInertialCS::InitArray(class phInertialCS* const arg1, i32 arg2)
{
    return stub<cdecl_t<void, class phInertialCS* const, i32>>(0x475CB0, arg1, arg2);
}

void phInertialCS::Update(f32 arg1)
{
    return stub<thiscall_t<void, phInertialCS*, f32>>(0x478060, this, arg1);
}

phInertialCS::TerrainContact::TerrainContact()
{
    unimplemented();
}

define_dummy_symbol(phinertia_inertia);
