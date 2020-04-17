/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

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

// 0x4B48E0 | ?gfxGetTextureMovie@@YAPAVgfxTextureMovie@@AAPAVgfxTexture@@PBD_N@Z
inline class gfxTextureMovie* gfxGetTextureMovie(class gfxTexture*& arg1, char const* arg2, bool arg3)
{
    return stub<cdecl_t<class gfxTextureMovie*, class gfxTexture*&, char const*, bool>>(0x4B48E0, arg1, arg2, arg3);
}

// 0x6A20F8 | ?MovieHash@@3VHashTable@@A
inline extern_var(0x6A20F8, class HashTable, MovieHash);

class gfxTextureMovie
{
public:
    // 0x4B4AF0 | ?UpdateAll@gfxTextureMovie@@SAXM@Z
    static inline void UpdateAll(f32 arg1)
    {
        return stub<cdecl_t<void, f32>>(0x4B4AF0, arg1);
    }

    // 0x4B4B20 | ?KillAll@gfxTextureMovie@@SAXXZ
    static inline void KillAll()
    {
        return stub<cdecl_t<void>>(0x4B4B20);
    }

    // 0x4B4B30 | ?Update@gfxTextureMovie@@QAEXM@Z
    void Update(f32 arg1)
    {
        return stub<member_func_t<void, gfxTextureMovie, f32>>(0x4B4B30, this, arg1);
    }

    // 0x4B4BA0 | ??0gfxTextureMovie@@AAE@PBDH@Z
    gfxTextureMovie(char const* arg1, i32 arg2)
    {
        stub<member_func_t<void, gfxTextureMovie, char const*, i32>>(0x4B4BA0, this, arg1, arg2);
    }

    // 0x4B4C00 | ?AddClient@gfxTextureMovie@@QAEXPAPAVgfxTexture@@@Z
    void AddClient(class gfxTexture** arg1)
    {
        return stub<member_func_t<void, gfxTextureMovie, class gfxTexture**>>(0x4B4C00, this, arg1);
    }

    // 0x6A2110 | ?sm_First@gfxTextureMovie@@1PAV1@A
    inline extern_var(0x6A2110, class gfxTextureMovie*, sm_First);
};
