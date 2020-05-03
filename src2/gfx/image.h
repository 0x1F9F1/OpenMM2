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
    0x5CCFA4 | public: static unsigned char * gfxImage::sm_CharSet | ?sm_CharSet@gfxImage@@2PAEA
    0x684D44 | public: static bool gfxImage::sm_Use565 | ?sm_Use565@gfxImage@@2_NA
    0x684D48 | public: static class gfxImage * gfxImage::sm_Font | ?sm_Font@gfxImage@@2PAV1@A
*/

class gfxImage
{
public:
    // 0x4AF470 | ?Flip@gfxImage@@QAEXXZ
    void Flip();

    // 0x4AEC90 | ?GenerateMipmaps@gfxImage@@QAEXXZ
    void GenerateMipmaps();

    // 0x4AF2D0 | ?GetDominantColor@gfxImage@@QBEIXZ
    u32 GetDominantColor();

    // 0x4AEBA0 | ?Halve@gfxImage@@QAEXXZ
    void Halve();

    // 0x4AF1A0 | ?Reformat@gfxImage@@QAEXW4gfxImageFormat@1@0@Z
    void Reformat(enum gfxImage::gfxImageFormat arg1, enum gfxImage::gfxImageFormat arg2);

    // 0x4AEDC0 | ?Scale@gfxImage@@QAEXHH@Z
    void Scale(i32 arg1, i32 arg2);

    // 0x4AE920 | ?Create@gfxImage@@SAPAV1@HHW4gfxImageFormat@1@0H@Z
    static class gfxImage* Create(
        i32 arg1, i32 arg2, enum gfxImage::gfxImageFormat arg3, enum gfxImage::gfxImageFormat arg4, i32 arg5);

    // 0x4AEB60 | ?FreeFont@gfxImage@@SAXXZ
    static void FreeFont();

    // 0x4AEA30 | ?GetFont@gfxImage@@SAPAV1@AAH0@Z
    static class gfxImage* GetFont(i32& arg1, i32& arg2);

    // 0x5CCFA4 | ?sm_CharSet@gfxImage@@2PAEA
    static inline extern_var(0x5CCFA4, u8*, sm_CharSet);

    // 0x684D48 | ?sm_Font@gfxImage@@2PAV1@A
    static inline extern_var(0x684D48, class gfxImage*, sm_Font);

    // 0x684D44 | ?sm_Use565@gfxImage@@2_NA
    static inline extern_var(0x684D44, bool, sm_Use565);

    // 0x5CCF9C | ?sm_bppByType@gfxImage@@2PAEA
    static inline extern_var(0x5CCF9C, u8*, sm_bppByType);

private:
    // 0x4AE8C0 | ??1gfxImage@@AAE@XZ
    ~gfxImage();
};

check_size(gfxImage, 0x0);
