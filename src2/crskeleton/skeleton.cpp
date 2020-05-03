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

#include "skeleton.h"

crSkeleton::crSkeleton()
{
    unimplemented();
}

crSkeleton::~crSkeleton()
{
    unimplemented();
}

void crSkeleton::Attach(class Matrix34* const arg1)
{
    return stub<thiscall_t<void, crSkeleton*, class Matrix34* const>>(0x57C650, this, arg1);
}

void crSkeleton::Attach(class Matrix44* const arg1)
{
    return stub<thiscall_t<void, crSkeleton*, class Matrix44* const>>(0x57C690, this, arg1);
}

void crSkeleton::Init(class crSkeletonData const& arg1, class Matrix34* arg2)
{
    return stub<thiscall_t<void, crSkeleton*, class crSkeletonData const&, class Matrix34*>>(
        0x57C5D0, this, arg1, arg2);
}

void crSkeleton::Update()
{
    return stub<thiscall_t<void, crSkeleton*>>(0x57C630, this);
}

define_dummy_symbol(crskeleton_skeleton);
