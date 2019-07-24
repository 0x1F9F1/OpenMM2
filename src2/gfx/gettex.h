/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
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
    gfx:gettex

    0x4B3020 | int __cdecl gfxSetTexReduceSize(int) | ?gfxSetTexReduceSize@@YAHH@Z
    0x4B3040 | class gfxImage * __cdecl gfxDefaultPrepareImage(class gfxImage *,char const *,bool) | ?gfxDefaultPrepareImage@@YAPAVgfxImage@@PAV1@PBD_N@Z
    void __cdecl DisplayTexMemUsage(char *) | ?DisplayTexMemUsage@@YAXPAD@Z
    void __cdecl gfxImageSetPixel(class gfxImage *,int,int,int,int) | ?gfxImageSetPixel@@YAXPAVgfxImage@@HHHH@Z
    0x4B30A0 | void __cdecl gfxAnnotateImage(class gfxImage *,char const *) | ?gfxAnnotateImage@@YAXPAVgfxImage@@PBD@Z
    0x4B30F0 | class gfxTexture * __cdecl gfxGetTexture(char const *,bool) | ?gfxGetTexture@@YAPAVgfxTexture@@PBD_N@Z
    0x4B31D0 | void __cdecl gfxFreeTexture(class gfxTexture *) | ?gfxFreeTexture@@YAXPAVgfxTexture@@@Z
    0x4B3210 | class gfxBitmap * __cdecl gfxGetBitmap(char const *,bool,bool) | ?gfxGetBitmap@@YAPAVgfxBitmap@@PBD_N1@Z
    0x4B32D0 | void __cdecl gfxFreeBitmap(class gfxBitmap *) | ?gfxFreeBitmap@@YAXPAVgfxBitmap@@@Z
    0x5CD680 | class gfxImage * (__cdecl* gfxPrepareImage)(class gfxImage *,char const *,bool) | ?gfxPrepareImage@@3P6APAVgfxImage@@PAV1@PBD_N@ZA
    float gfxGetTextureTime | ?gfxGetTextureTime@@3MA
    0x6857A0 | class HashTable TexHash | ?TexHash@@3VHashTable@@A
    0x6857B8 | class HashTable BitmapHash | ?BitmapHash@@3VHashTable@@A
    float gfxLoadImageTime | ?gfxLoadImageTime@@3MA
*/

// 0x4B3020 | ?gfxSetTexReduceSize@@YAHH@Z
inline int32_t gfxSetTexReduceSize(int32_t arg1)
{
    return stub<cdecl_t<int32_t, int32_t>>(0x4B3020, arg1);
}

// 0x4B3040 | ?gfxDefaultPrepareImage@@YAPAVgfxImage@@PAV1@PBD_N@Z
inline class gfxImage* gfxDefaultPrepareImage(class gfxImage* arg1, char const* arg2, bool arg3)
{
    return stub<cdecl_t<class gfxImage*, class gfxImage*, char const*, bool>>(0x4B3040, arg1, arg2, arg3);
}

// 0x4B30A0 | ?gfxAnnotateImage@@YAXPAVgfxImage@@PBD@Z
inline void gfxAnnotateImage(class gfxImage* arg1, char const* arg2)
{
    return stub<cdecl_t<void, class gfxImage*, char const*>>(0x4B30A0, arg1, arg2);
}

// 0x4B30F0 | ?gfxGetTexture@@YAPAVgfxTexture@@PBD_N@Z
inline class gfxTexture* gfxGetTexture(char const* arg1, bool arg2)
{
    return stub<cdecl_t<class gfxTexture*, char const*, bool>>(0x4B30F0, arg1, arg2);
}

// 0x4B31D0 | ?gfxFreeTexture@@YAXPAVgfxTexture@@@Z
inline void gfxFreeTexture(class gfxTexture* arg1)
{
    return stub<cdecl_t<void, class gfxTexture*>>(0x4B31D0, arg1);
}

// 0x4B3210 | ?gfxGetBitmap@@YAPAVgfxBitmap@@PBD_N1@Z
inline class gfxBitmap* gfxGetBitmap(char const* arg1, bool arg2, bool arg3)
{
    return stub<cdecl_t<class gfxBitmap*, char const*, bool, bool>>(0x4B3210, arg1, arg2, arg3);
}

// 0x4B32D0 | ?gfxFreeBitmap@@YAXPAVgfxBitmap@@@Z
inline void gfxFreeBitmap(class gfxBitmap* arg1)
{
    return stub<cdecl_t<void, class gfxBitmap*>>(0x4B32D0, arg1);
}

// 0x5CD680 | ?gfxPrepareImage@@3P6APAVgfxImage@@PAV1@PBD_N@ZA
inline extern_var(0x5CD680, class gfxImage*(__cdecl*) (class gfxImage*, char const*, bool), gfxPrepareImage);

// 0x6857A0 | ?TexHash@@3VHashTable@@A
inline extern_var(0x6857A0, class HashTable, TexHash);

// 0x6857B8 | ?BitmapHash@@3VHashTable@@A
inline extern_var(0x6857B8, class HashTable, BitmapHash);
