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

#include "kinematics.h"

crKinematicsBase::crKinematicsBase()
{
    unimplemented();
}

crKinematicsBase::~crKinematicsBase()
{
    unimplemented();
}

void crKinematicsBase::Init(class crSkeleton& arg1, class crBodyDataBase const& arg2)
{
    return stub<thiscall_t<void, crKinematicsBase*, class crSkeleton&, class crBodyDataBase const&>>(
        0x57E3F0, this, arg1, arg2);
}

void crKinematicsBase::Reset()
{
    return stub<thiscall_t<void, crKinematicsBase*>>(0x57E410, this);
}

void crKinematicsBase::Update()
{
    return stub<thiscall_t<void, crKinematicsBase*>>(0x57E420, this);
}

void crKinematicsBase::MatchPose()
{
    return stub<thiscall_t<void, crKinematicsBase*>>(0x57E430, this);
}

void crKinematicsBase::SetIKBlend(f32 arg1)
{
    return stub<thiscall_t<void, crKinematicsBase*, f32>>(0x57E440, this, arg1);
}

void crKinematicsBase::SetLimp(bool arg1)
{
    return stub<thiscall_t<void, crKinematicsBase*, bool>>(0x57E450, this, arg1);
}

crKinematics::crKinematics()
{
    unimplemented();
}

crKinematics::~crKinematics()
{
    unimplemented();
}

void crKinematics::MatchPose()
{
    return stub<thiscall_t<void, crKinematics*>>(0x57E6E0, this);
}

void crKinematics::Reset()
{
    return stub<thiscall_t<void, crKinematics*>>(0x57E600, this);
}

void crKinematics::SetIKBlend(f32 arg1)
{
    return stub<thiscall_t<void, crKinematics*, f32>>(0x57E620, this, arg1);
}

void crKinematics::SetLimp(bool arg1)
{
    return stub<thiscall_t<void, crKinematics*, bool>>(0x57E680, this, arg1);
}

void crKinematics::TestPose()
{
    return stub<thiscall_t<void, crKinematics*>>(0x57E790, this);
}

void crKinematics::Update()
{
    return stub<thiscall_t<void, crKinematics*>>(0x57E880, this);
}

define_dummy_symbol(crbody_kinematics);
