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
    gfx:loadimg

    0x4AF4E0 | bool __cdecl gfxSaveTargaImage(char const *,class gfxImage *) | ?gfxSaveTargaImage@@YA_NPBDPAVgfxImage@@@Z
    0x4AF8F0 | class Stream * __cdecl gfxOpenRawBmpStream(char const *,int,int) | ?gfxOpenRawBmpStream@@YAPAVStream@@PBDHH@Z
    0x4AFA60 | void __cdecl gfxWriteRawBmpStream(class Stream *,void *,int) | ?gfxWriteRawBmpStream@@YAXPAVStream@@PAXH@Z
    0x4AFA90 | void __cdecl gfxCloseRawBmpStream(class Stream *) | ?gfxCloseRawBmpStream@@YAXPAVStream@@@Z
    0x4AFAB0 | bool __cdecl gfxSaveBmpImage(char const *,class gfxImage *) | ?gfxSaveBmpImage@@YA_NPBDPAVgfxImage@@@Z
    0x4AFDE0 | class gfxImage * __cdecl gfxLoadTargaImage(char const *,bool) | ?gfxLoadTargaImage@@YAPAVgfxImage@@PBD_N@Z
    0x4AFFC0 | class gfxImage * __cdecl gfxLoadTexImage(char const *,bool) | ?gfxLoadTexImage@@YAPAVgfxImage@@PBD_N@Z
    0x4B0BD0 | class gfxImage * __cdecl gfxLoadRawImage(char const *,bool) | ?gfxLoadRawImage@@YAPAVgfxImage@@PBD_N@Z
    0x4B0D50 | class gfxImage * __cdecl gfxLoadBmpImage(char const *,bool) | ?gfxLoadBmpImage@@YAPAVgfxImage@@PBD_N@Z
    0x4B1040 | class gfxImage * __cdecl gfxLoadImageAll(char const *,bool) | ?gfxLoadImageAll@@YAPAVgfxImage@@PBD_N@Z
    char const * const IMG | ?IMG@@3PBDB
    0x5CD38C | class gfxImage * (__cdecl* gfxLoadImage)(char const *,bool) | ?gfxLoadImage@@3P6APAVgfxImage@@PBD_N@ZA
    0x68544C | int gLoadImageMem | ?gLoadImageMem@@3HA
    0x685450 | bool g_Allow8BitImages | ?g_Allow8BitImages@@3_NA
*/

// 0x4AF4E0 | ?gfxSaveTargaImage@@YA_NPBDPAVgfxImage@@@Z
inline bool gfxSaveTargaImage(char const* arg1, class gfxImage* arg2)
{
    return stub<cdecl_t<bool, char const*, class gfxImage*>>(0x4AF4E0, arg1, arg2);
}

// 0x4AF8F0 | ?gfxOpenRawBmpStream@@YAPAVStream@@PBDHH@Z
inline class Stream* gfxOpenRawBmpStream(char const* arg1, i32 arg2, i32 arg3)
{
    return stub<cdecl_t<class Stream*, char const*, i32, i32>>(0x4AF8F0, arg1, arg2, arg3);
}

// 0x4AFA60 | ?gfxWriteRawBmpStream@@YAXPAVStream@@PAXH@Z
inline void gfxWriteRawBmpStream(class Stream* arg1, void* arg2, i32 arg3)
{
    return stub<cdecl_t<void, class Stream*, void*, i32>>(0x4AFA60, arg1, arg2, arg3);
}

// 0x4AFA90 | ?gfxCloseRawBmpStream@@YAXPAVStream@@@Z
inline void gfxCloseRawBmpStream(class Stream* arg1)
{
    return stub<cdecl_t<void, class Stream*>>(0x4AFA90, arg1);
}

// 0x4AFAB0 | ?gfxSaveBmpImage@@YA_NPBDPAVgfxImage@@@Z
inline bool gfxSaveBmpImage(char const* arg1, class gfxImage* arg2)
{
    return stub<cdecl_t<bool, char const*, class gfxImage*>>(0x4AFAB0, arg1, arg2);
}

// 0x4AFDE0 | ?gfxLoadTargaImage@@YAPAVgfxImage@@PBD_N@Z
inline class gfxImage* gfxLoadTargaImage(char const* arg1, bool arg2)
{
    return stub<cdecl_t<class gfxImage*, char const*, bool>>(0x4AFDE0, arg1, arg2);
}

// 0x4AFFC0 | ?gfxLoadTexImage@@YAPAVgfxImage@@PBD_N@Z
inline class gfxImage* gfxLoadTexImage(char const* arg1, bool arg2)
{
    return stub<cdecl_t<class gfxImage*, char const*, bool>>(0x4AFFC0, arg1, arg2);
}

// 0x4B0BD0 | ?gfxLoadRawImage@@YAPAVgfxImage@@PBD_N@Z
inline class gfxImage* gfxLoadRawImage(char const* arg1, bool arg2)
{
    return stub<cdecl_t<class gfxImage*, char const*, bool>>(0x4B0BD0, arg1, arg2);
}

// 0x4B0D50 | ?gfxLoadBmpImage@@YAPAVgfxImage@@PBD_N@Z
inline class gfxImage* gfxLoadBmpImage(char const* arg1, bool arg2)
{
    return stub<cdecl_t<class gfxImage*, char const*, bool>>(0x4B0D50, arg1, arg2);
}

// 0x4B1040 | ?gfxLoadImageAll@@YAPAVgfxImage@@PBD_N@Z
inline class gfxImage* gfxLoadImageAll(char const* arg1, bool arg2)
{
    return stub<cdecl_t<class gfxImage*, char const*, bool>>(0x4B1040, arg1, arg2);
}

// 0x5CD38C | ?gfxLoadImage@@3P6APAVgfxImage@@PBD_N@ZA
inline extern_var(0x5CD38C, class gfxImage*(__cdecl*) (char const*, bool), gfxLoadImage);

// 0x68544C | ?gLoadImageMem@@3HA
inline extern_var(0x68544C, int32_t, gLoadImageMem);

// 0x685450 | ?g_Allow8BitImages@@3_NA
inline extern_var(0x685450, bool, g_Allow8BitImages);
