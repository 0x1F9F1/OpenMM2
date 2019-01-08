/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2019 Brick

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

#pragma once

/*
    gfx:texmovie

    0x4B48E0 | class gfxTextureMovie * __cdecl gfxGetTextureMovie(class gfxTexture * &,char const *,bool) | ?gfxGetTextureMovie@@YAPAVgfxTextureMovie@@AAPAVgfxTexture@@PBD_N@Z
    0x4B4AF0 | public: static void __cdecl gfxTextureMovie::UpdateAll(float) | ?UpdateAll@gfxTextureMovie@@SAXM@Z
    0x4B4B20 | public: static void __cdecl gfxTextureMovie::KillAll(void) | ?KillAll@gfxTextureMovie@@SAXXZ
    0x4B4B30 | public: void __thiscall gfxTextureMovie::Update(float) | ?Update@gfxTextureMovie@@QAEXM@Z
    0x4B4BA0 | private: __thiscall gfxTextureMovie::gfxTextureMovie(char const *,int) | ??0gfxTextureMovie@@AAE@PBDH@Z
    0x4B4C00 | public: void __thiscall gfxTextureMovie::AddClient(class gfxTexture * *) | ?AddClient@gfxTextureMovie@@QAEXPAPAVgfxTexture@@@Z
    0x6A20F8 | class HashTable MovieHash | ?MovieHash@@3VHashTable@@A
    0x6A2110 | protected: static class gfxTextureMovie * gfxTextureMovie::sm_First | ?sm_First@gfxTextureMovie@@1PAV1@A
*/

#include "hooking.h"
