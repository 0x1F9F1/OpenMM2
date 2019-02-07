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
    gfx:image

    0x4AE8C0 | private: __thiscall gfxImage::~gfxImage(void) | ??1gfxImage@@AAE@XZ
    0x4AE920 | public: static class gfxImage * __cdecl gfxImage::Create(int,int,enum gfxImage::gfxImageFormat,enum gfxImage::gfxImageFormat,int) | ?Create@gfxImage@@SAPAV1@HHW4gfxImageFormat@1@0H@Z
    0x4AEA30 | public: static class gfxImage * __cdecl gfxImage::GetFont(int &,int &) | ?GetFont@gfxImage@@SAPAV1@AAH0@Z
    0x4AEB60 | public: static void __cdecl gfxImage::FreeFont(void) | ?FreeFont@gfxImage@@SAXXZ
    0x4AEBA0 | public: void __thiscall gfxImage::Halve(void) | ?Halve@gfxImage@@QAEXXZ
    0x4AEC90 | public: void __thiscall gfxImage::GenerateMipmaps(void) | ?GenerateMipmaps@gfxImage@@QAEXXZ
    0x4AEDC0 | public: void __thiscall gfxImage::Scale(int,int) | ?Scale@gfxImage@@QAEXHH@Z
    0x4AF1A0 | public: void __thiscall gfxImage::Reformat(enum gfxImage::gfxImageFormat,enum gfxImage::gfxImageFormat) | ?Reformat@gfxImage@@QAEXW4gfxImageFormat@1@0@Z
    0x4AF2D0 | public: unsigned int __thiscall gfxImage::GetDominantColor(void) const | ?GetDominantColor@gfxImage@@QBEIXZ
    0x4AF470 | public: void __thiscall gfxImage::Flip(void) | ?Flip@gfxImage@@QAEXXZ
    0x5CCF9C | public: static unsigned char * gfxImage::sm_bppByType | ?sm_bppByType@gfxImage@@2PAEA
    public: static unsigned char * gfxImage::sm_CharSet | ?sm_CharSet@gfxImage@@2PAEA
    0x684D44 | public: static bool gfxImage::sm_Use565 | ?sm_Use565@gfxImage@@2_NA
    0x684D48 | public: static class gfxImage * gfxImage::sm_Font | ?sm_Font@gfxImage@@2PAV1@A
*/

#include "hooking.h"

class gfxImage
{
public:
    enum gfxImageFormat
    {
        rif8888 = 1,
        rif888 = 2,
        rif5551 = 3,
        rif555 = 4,
        rif8 = 5,
        rif4 = 6,
    };

    uint16_t Width {0};
    uint16_t Height {0};
    uint16_t BytesPerRow {0};
    uint8_t Type {0};
    uint8_t PaletteType {0};
    uint32_t TexEnv {0};
    uint8_t *ImageData {nullptr};
    uint8_t *PaletteData {nullptr};

    uint32_t RefCount {1};
    gfxImage *Next {nullptr};

    ~gfxImage();

    void Release();

    void Scale(int width, int height);

    static gfxImage * Create(int width, int height, int type, int paletteType, int a5);
    static gfxImage* GetFont(int & outWidth, int & outHeight);
    static void FreeFont(void);

    static inline extern_var(0x684D48, gfxImage*, sm_Font);
};

check_size(gfxImage, 0x1C);
