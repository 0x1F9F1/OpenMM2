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

#include "texmovie.h"

class gfxTextureMovie* gfxGetTextureMovie(class gfxTexture*& arg1, char const* arg2, bool arg3)
{
    return stub<cdecl_t<class gfxTextureMovie*, class gfxTexture*&, char const*, bool>>(0x4B48E0, arg1, arg2, arg3);
}

void gfxTextureMovie::AddClient(class gfxTexture** arg1)
{
    return stub<thiscall_t<void, gfxTextureMovie*, class gfxTexture**>>(0x4B4C00, this, arg1);
}

void gfxTextureMovie::Update(f32 arg1)
{
    return stub<thiscall_t<void, gfxTextureMovie*, f32>>(0x4B4B30, this, arg1);
}

void gfxTextureMovie::KillAll()
{
    return stub<cdecl_t<void>>(0x4B4B20);
}

void gfxTextureMovie::UpdateAll(f32 arg1)
{
    return stub<cdecl_t<void, f32>>(0x4B4AF0, arg1);
}

gfxTextureMovie::gfxTextureMovie(char const* arg1, i32 arg2)
{
    unimplemented();
}

define_dummy_symbol(gfx_texmovie);
