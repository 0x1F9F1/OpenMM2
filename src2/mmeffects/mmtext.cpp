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

#include "mmtext.h"

mmTextNode::mmTextNode()
{
    unimplemented();
}

mmTextNode::~mmTextNode()
{
    unimplemented();
}

i32 mmTextNode::AddText(void const* arg1, struct LocString const* arg2, i32 arg3, f32 arg4, f32 arg5)
{
    return stub<thiscall_t<i32, mmTextNode*, void const*, struct LocString const*, i32, f32, f32>>(
        0x532C70, this, arg1, arg2, arg3, arg4, arg5);
}

void mmTextNode::Cull()
{
    return stub<thiscall_t<void, mmTextNode*>>(0x533170, this);
}

i32 mmTextNode::GetEffects(i32 arg1)
{
    return stub<thiscall_t<i32, mmTextNode*, i32>>(0x532AE0, this, arg1);
}

u32 mmTextNode::GetFGColor()
{
    return stub<thiscall_t<u32, mmTextNode*>>(0x532AA0, this);
}

void mmTextNode::GetTextDimensions(void const* arg1, struct LocString const* arg2, f32& arg3, f32& arg4)
{
    return stub<thiscall_t<void, mmTextNode*, void const*, struct LocString const*, f32&, f32&>>(
        0x532B10, this, arg1, arg2, arg3, arg4);
}

void mmTextNode::Init(f32 arg1, f32 arg2, f32 arg3, f32 arg4, i32 arg5, i32 arg6)
{
    return stub<thiscall_t<void, mmTextNode*, f32, f32, f32, f32, i32, i32>>(
        0x532840, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

void mmTextNode::Init(i32 arg1, i32 arg2, i32 arg3, i32 arg4, i32 arg5, i32 arg6)
{
    return stub<thiscall_t<void, mmTextNode*, i32, i32, i32, i32, i32, i32>>(
        0x532750, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

void mmTextNode::Printf(char const* arg1, ...)
{
    unimplemented();
}

void mmTextNode::RenderText(class gfxBitmap* arg1, struct mmTextData* arg2, i32 arg3, u32 arg4)
{
    return stub<thiscall_t<void, mmTextNode*, class gfxBitmap*, struct mmTextData*, i32, u32>>(
        0x532E80, this, arg1, arg2, arg3, arg4);
}

void mmTextNode::SetBGColor(class Vector4& arg1)
{
    return stub<thiscall_t<void, mmTextNode*, class Vector4&>>(0x532970, this, arg1);
}

void mmTextNode::SetEffects(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, mmTextNode*, i32, i32>>(0x532AB0, this, arg1, arg2);
}

void mmTextNode::SetFGColor(class Vector4& arg1)
{
    return stub<thiscall_t<void, mmTextNode*, class Vector4&>>(0x5329E0, this, arg1);
}

void mmTextNode::SetHlColor(class Vector4& arg1)
{
    return stub<thiscall_t<void, mmTextNode*, class Vector4&>>(0x532A40, this, arg1);
}

void mmTextNode::SetPosition(i32 arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, mmTextNode*, i32, f32, f32>>(0x532DB0, this, arg1, arg2, arg3);
}

void mmTextNode::SetString(i32 arg1, struct LocString const* arg2)
{
    return stub<thiscall_t<void, mmTextNode*, i32, struct LocString const*>>(0x532D50, this, arg1, arg2);
}

void mmTextNode::SetTextPosition(i32 arg1, f32 arg2, f32 arg3)
{
    return stub<thiscall_t<void, mmTextNode*, i32, f32, f32>>(0x532C20, this, arg1, arg2, arg3);
}

void mmTextNode::Update()
{
    return stub<thiscall_t<void, mmTextNode*>>(0x532E50, this);
}

void ddGDIFlip()
{
    return stub<cdecl_t<void>>(0x532190);
}

mmText::mmText()
{
    unimplemented();
}

mmText::~mmText()
{
    unimplemented();
}

void mmText::Draw(class gfxBitmap* arg1, f32 arg2, f32 arg3, char const* arg4, void const* arg5)
{
    return stub<thiscall_t<void, mmText*, class gfxBitmap*, f32, f32, char const*, void const*>>(
        0x5324F0, this, arg1, arg2, arg3, arg4, arg5);
}

void mmText::Draw2(class gfxBitmap* arg1, f32 arg2, f32 arg3, char const* arg4, void const* arg5, u32 arg6)
{
    return stub<thiscall_t<void, mmText*, class gfxBitmap*, f32, f32, char const*, void const*, u32>>(
        0x532580, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

class gfxBitmap* mmText::CreateFitBitmap(char const* arg1, void const* arg2, i32 arg3, i32 arg4)
{
    return stub<cdecl_t<class gfxBitmap*, char const*, void const*, i32, i32>>(0x532310, arg1, arg2, arg3, arg4);
}

void* mmText::CreateFont(char const* arg1, i32 arg2)
{
    return stub<cdecl_t<void*, char const*, i32>>(0x532280, arg1, arg2);
}

void* mmText::CreateLocFont(struct LocString const* arg1, i32 arg2)
{
    return stub<cdecl_t<void*, struct LocString const*, i32>>(0x5321C0, arg1, arg2);
}

void mmText::DeleteFont(void* arg1)
{
    return stub<cdecl_t<void, void*>>(0x5322B0, arg1);
}

void* mmText::GetDC(class gfxBitmap* arg1)
{
    return stub<cdecl_t<void*, class gfxBitmap*>>(0x5322C0, arg1);
}

void mmText::ReleaseDC()
{
    return stub<cdecl_t<void>>(0x5322F0);
}

define_dummy_symbol(mmeffects_mmtext);
