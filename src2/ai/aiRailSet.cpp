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

#include "aiRailSet.h"

aiRailSet::aiRailSet()
{
    unimplemented();
}

aiRailSet::~aiRailSet()
{
    unimplemented();
}

void aiRailSet::CalcRailPosOrient(class Vector3& arg1, class Vector3& arg2, f32 arg3)
{
    return stub<thiscall_t<void, aiRailSet*, class Vector3&, class Vector3&, f32>>(0x5577A0, this, arg1, arg2, arg3);
}

void aiRailSet::CalcRailPosition(class Vector3& arg1, f32 arg2)
{
    return stub<thiscall_t<void, aiRailSet*, class Vector3&, f32>>(0x556E60, this, arg1, arg2);
}

void aiRailSet::CalcXZDirection(
    class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4, class Vector3& arg5, f32 arg6)
{
    return stub<thiscall_t<void, aiRailSet*, class Vector3&, class Vector3&, class Vector3&, class Vector3&,
        class Vector3&, f32>>(0x5585E0, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

void aiRailSet::CalcXZPosOrient(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4,
    class Vector3& arg5, class Vector3& arg6, f32 arg7)
{
    return stub<thiscall_t<void, aiRailSet*, class Vector3&, class Vector3&, class Vector3&, class Vector3&,
        class Vector3&, class Vector3&, f32>>(0x558780, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
}

void aiRailSet::CalcXZPosition(
    class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4, class Vector3& arg5, f32 arg6)
{
    return stub<thiscall_t<void, aiRailSet*, class Vector3&, class Vector3&, class Vector3&, class Vector3&,
        class Vector3&, f32>>(0x5583F0, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

void aiRailSet::ComputeXZCurve(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4)
{
    return stub<thiscall_t<void, aiRailSet*, class Vector3&, class Vector3&, class Vector3&, class Vector3&>>(
        0x558990, this, arg1, arg2, arg3, arg4);
}

void aiRailSet::ComputeXZCurve(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3, class Vector3& arg4,
    class Vector4& arg5, class Vector4& arg6)
{
    return stub<thiscall_t<void, aiRailSet*, class Vector3&, class Vector3&, class Vector3&, class Vector3&,
        class Vector4&, class Vector4&>>(0x558B40, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

void aiRailSet::Dump()
{
    return stub<thiscall_t<void, aiRailSet*>>(0x558DC0, this);
}

void aiRailSet::ReplayDebug()
{
    return stub<thiscall_t<void, aiRailSet*>>(0x558FB0, this);
}

void aiRailSet::Reset()
{
    return stub<thiscall_t<void, aiRailSet*>>(0x556E20, this);
}

i32 aiRailSet::SolveTurnType(class aiPath* arg1, class aiPath* arg2)
{
    return stub<thiscall_t<i32, aiRailSet*, class aiPath*, class aiPath*>>(0x558270, this, arg1, arg2);
}

void aiRailSet::SolveXZCurve(class Vector3& arg1, class Vector3& arg2, f32 arg3)
{
    return stub<thiscall_t<void, aiRailSet*, class Vector3&, class Vector3&, f32>>(0x558D00, this, arg1, arg2, arg3);
}

void aiRailSet::SolveXZPosition(class Vector3& arg1, f32 arg2)
{
    return stub<thiscall_t<void, aiRailSet*, class Vector3&, f32>>(0x558D80, this, arg1, arg2);
}

define_dummy_symbol(ai_aiRailSet);
