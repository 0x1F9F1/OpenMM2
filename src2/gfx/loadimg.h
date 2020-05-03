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
    0x5CD370 | char const * const IMG | ?IMG@@3PBDB
    0x5CD38C | class gfxImage * (__cdecl* gfxLoadImage)(char const *,bool) | ?gfxLoadImage@@3P6APAVgfxImage@@PBD_N@ZA
    0x68544C | int gLoadImageMem | ?gLoadImageMem@@3HA
    0x685450 | bool g_Allow8BitImages | ?g_Allow8BitImages@@3_NA
*/

// 0x4AFA90 | ?gfxCloseRawBmpStream@@YAXPAVStream@@@Z
void gfxCloseRawBmpStream(class Stream* arg1);

// 0x4B0D50 | ?gfxLoadBmpImage@@YAPAVgfxImage@@PBD_N@Z
class gfxImage* gfxLoadBmpImage(char const* arg1, bool arg2);

// 0x4B1040 | ?gfxLoadImageAll@@YAPAVgfxImage@@PBD_N@Z
class gfxImage* gfxLoadImageAll(char const* arg1, bool arg2);

// 0x4B0BD0 | ?gfxLoadRawImage@@YAPAVgfxImage@@PBD_N@Z
class gfxImage* gfxLoadRawImage(char const* arg1, bool arg2);

// 0x4AFDE0 | ?gfxLoadTargaImage@@YAPAVgfxImage@@PBD_N@Z
class gfxImage* gfxLoadTargaImage(char const* arg1, bool arg2);

// 0x4AFFC0 | ?gfxLoadTexImage@@YAPAVgfxImage@@PBD_N@Z
class gfxImage* gfxLoadTexImage(char const* arg1, bool arg2);

// 0x4AF8F0 | ?gfxOpenRawBmpStream@@YAPAVStream@@PBDHH@Z
class Stream* gfxOpenRawBmpStream(char const* arg1, i32 arg2, i32 arg3);

// 0x4AFAB0 | ?gfxSaveBmpImage@@YA_NPBDPAVgfxImage@@@Z
bool gfxSaveBmpImage(char const* arg1, class gfxImage* arg2);

// 0x4AF4E0 | ?gfxSaveTargaImage@@YA_NPBDPAVgfxImage@@@Z
bool gfxSaveTargaImage(char const* arg1, class gfxImage* arg2);

// 0x4AFA60 | ?gfxWriteRawBmpStream@@YAXPAVStream@@PAXH@Z
void gfxWriteRawBmpStream(class Stream* arg1, void* arg2, i32 arg3);

// 0x5CD370 | ?IMG@@3PBDB
inline extern_var(0x5CD370, char const* const, IMG);

// 0x68544C | ?gLoadImageMem@@3HA
inline extern_var(0x68544C, i32, gLoadImageMem);

// 0x685450 | ?g_Allow8BitImages@@3_NA
inline extern_var(0x685450, bool, g_Allow8BitImages);

// 0x5CD38C | ?gfxLoadImage@@3P6APAVgfxImage@@PBD_N@ZA
inline extern_var(0x5CD38C, class gfxImage* (*) (char const*, bool), gfxLoadImage);
