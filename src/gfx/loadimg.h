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

#include "hooking.h"

class gfxImage;

inline extern_var(0x5CD38C, gfxImage*(*)(const char * fileName, bool createMipMaps), gfxLoadImage);
