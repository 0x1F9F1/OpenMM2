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

#include "frame.h"

crAnimFrame::crAnimFrame(bool arg1)
{
    unimplemented();
}

crAnimFrame::crAnimFrame(class crAnimFrame const& arg1)
{
    unimplemented();
}

crAnimFrame::~crAnimFrame()
{
    unimplemented();
}

class crAnimFrame const& crAnimFrame::operator=(class crAnimFrame const& arg1)
{
    return stub<thiscall_t<class crAnimFrame const&, crAnimFrame*, class crAnimFrame const&>>(0x57DE70, this, arg1);
}

void crAnimFrame::Add(class crAnimFrame const& arg1, i32 arg2, i32 arg3)
{
    return stub<thiscall_t<void, crAnimFrame*, class crAnimFrame const&, i32, i32>>(0x57E1B0, this, arg1, arg2, arg3);
}

void crAnimFrame::AddScaled(class crAnimFrame const& arg1, f32 arg2, i32 arg3, i32 arg4)
{
    return stub<thiscall_t<void, crAnimFrame*, class crAnimFrame const&, f32, i32, i32>>(
        0x57E200, this, arg1, arg2, arg3, arg4);
}

void crAnimFrame::Blend(f32 arg1, class crAnimFrame const& arg2, class crAnimFrame const& arg3, i32 arg4, i32 arg5)
{
    return stub<thiscall_t<void, crAnimFrame*, f32, class crAnimFrame const&, class crAnimFrame const&, i32, i32>>(
        0x57E110, this, arg1, arg2, arg3, arg4, arg5);
}

void crAnimFrame::Flip()
{
    return stub<thiscall_t<void, crAnimFrame*>>(0x57E100, this);
}

void crAnimFrame::Init(i32 arg1)
{
    return stub<thiscall_t<void, crAnimFrame*, i32>>(0x57DED0, this, arg1);
}

void crAnimFrame::LoadAscii(class datTokenizer& arg1, i32 arg2)
{
    return stub<thiscall_t<void, crAnimFrame*, class datTokenizer&, i32>>(0x57DF60, this, arg1, arg2);
}

void crAnimFrame::LoadBin(class Stream* arg1, i32 arg2)
{
    return stub<thiscall_t<void, crAnimFrame*, class Stream*, i32>>(0x57DF10, this, arg1, arg2);
}

void crAnimFrame::Merge(class crAnimFrame const& arg1, f32 arg2)
{
    return stub<thiscall_t<void, crAnimFrame*, class crAnimFrame const&, f32>>(0x57E250, this, arg1, arg2);
}

void crAnimFrame::Mirror(class crSkeletonData const* arg1)
{
    return stub<thiscall_t<void, crAnimFrame*, class crSkeletonData const*>>(0x57E010, this, arg1);
}

void crAnimFrame::Pose(class crSkeleton& arg1, bool arg2)
{
    return stub<thiscall_t<void, crAnimFrame*, class crSkeleton&, bool>>(0x57E300, this, arg1, arg2);
}

void crAnimFrame::Print()
{
    return stub<thiscall_t<void, crAnimFrame*>>(0x57DFA0, this);
}

void crAnimFrame::SaveBin(class Stream* arg1)
{
    return stub<thiscall_t<void, crAnimFrame*, class Stream*>>(0x57DF40, this, arg1);
}

void crAnimFrame::Zero()
{
    return stub<thiscall_t<void, crAnimFrame*>>(0x57E2E0, this);
}

void crAnimFrame::AllocateBuffers(i32 arg1, i32 arg2)
{
    return stub<cdecl_t<void, i32, i32>>(0x57DC80, arg1, arg2);
}

void crAnimFrame::DeallocateBuffers()
{
    return stub<cdecl_t<void>>(0x57DD00);
}

void crAnimFrame::Copy(class crAnimFrame const& arg1)
{
    return stub<thiscall_t<void, crAnimFrame*, class crAnimFrame const&>>(0x57DE90, this, arg1);
}

f32* sAcquireBuffer(i32 arg1)
{
    return stub<cdecl_t<f32*, i32>>(0x57DC00, arg1);
}

bool sIsBuffer(f32* arg1)
{
    return stub<cdecl_t<bool, f32*>>(0x57DC50, arg1);
}

define_dummy_symbol(cranimation_frame);
