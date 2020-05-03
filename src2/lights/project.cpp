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

#include "project.h"

ltProjection::ltProjection(i32 arg1)
{
    unimplemented();
}

ltProjection::~ltProjection()
{
    unimplemented();
}

void ltProjection::DrawAmbient(class Vector3 const& arg1)
{
    return stub<thiscall_t<void, ltProjection*, class Vector3 const&>>(0x59D030, this, arg1);
}

void ltProjection::DrawBegin(class Matrix34 const& arg1)
{
    return stub<thiscall_t<void, ltProjection*, class Matrix34 const&>>(0x59C770, this, arg1);
}

void ltProjection::DrawDebug()
{
    return stub<thiscall_t<void, ltProjection*>>(0x59D230, this);
}

void ltProjection::DrawEnd()
{
    return stub<thiscall_t<void, ltProjection*>>(0x59C950, this);
}

void ltProjection::DrawMultiStageBegin(i32 arg1, class Matrix34 const& arg2)
{
    return stub<thiscall_t<void, ltProjection*, i32, class Matrix34 const&>>(0x59C9C0, this, arg1, arg2);
}

void ltProjection::DrawMultiStageEnd(i32 arg1)
{
    return stub<thiscall_t<void, ltProjection*, i32>>(0x59CB20, this, arg1);
}

void ltProjection::MakeOrthoMatrix(
    class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3, f32 arg4)
{
    return stub<thiscall_t<void, ltProjection*, class Vector3 const&, class Vector3 const&, class Vector3 const&, f32>>(
        0x59C5B0, this, arg1, arg2, arg3, arg4);
}

void ltProjection::OffScreenBegin(bool arg1)
{
    return stub<thiscall_t<void, ltProjection*, bool>>(0x59CB80, this, arg1);
}

void ltProjection::OffScreenEnd()
{
    return stub<thiscall_t<void, ltProjection*>>(0x59CE10, this);
}

define_dummy_symbol(lights_project);
