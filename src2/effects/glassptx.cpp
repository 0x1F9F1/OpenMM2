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

#include "glassptx.h"

void ptxGlass::AddShards(class Vector3 const& arg1, class Vector3 const& arg2, class Vector3 const& arg3,
    class Vector2 const& arg4, class Vector2 const& arg5, class Vector2 const& arg6, class Vector3 const& arg7,
    class Vector3 const& arg8, class Vector3 const& arg9)
{
    return stub<thiscall_t<void, ptxGlass*, class Vector3 const&, class Vector3 const&, class Vector3 const&,
        class Vector2 const&, class Vector2 const&, class Vector2 const&, class Vector3 const&, class Vector3 const&,
        class Vector3 const&>>(0x461AC0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
}

void ptxGlass::CreateShards(f32 arg1, f32 arg2, class Vector2* const arg3, class Matrix34& arg4,
    class Vector3 const& arg5, class Vector3 const& arg6)
{
    return stub<thiscall_t<void, ptxGlass*, f32, f32, class Vector2* const, class Matrix34&, class Vector3 const&,
        class Vector3 const&>>(0x461F80, this, arg1, arg2, arg3, arg4, arg5, arg6);
}

void ptxGlass::DrawShards(i32 arg1)
{
    return stub<thiscall_t<void, ptxGlass*, i32>>(0x462AE0, this, arg1);
}

void ptxGlass::Init(i32 arg1, i32 arg2, class gfxTexture* arg3)
{
    return stub<thiscall_t<void, ptxGlass*, i32, i32, class gfxTexture*>>(0x461A10, this, arg1, arg2, arg3);
}

void ptxGlass::Update(f32 arg1)
{
    return stub<thiscall_t<void, ptxGlass*, f32>>(0x462760, this, arg1);
}

void ptxGlass::ptxShard::SetCentroidFromVerts()
{
    return stub<thiscall_t<void, ptxShard*>>(0x462CF0, this);
}

define_dummy_symbol(effects_glassptx);
