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

class gfxImage
{
public:
    // 0x4AE8C0 | ??1gfxImage@@AAE@XZ
    ~gfxImage()
    {
        stub<member_func_t<void, gfxImage>>(0x4AE8C0, this);
    }

    // 0x4AE920 | ?Create@gfxImage@@SAPAV1@HHW4gfxImageFormat@1@0H@Z
    static inline class gfxImage* Create(
        i32 arg1, i32 arg2, enum gfxImage::gfxImageFormat arg3, enum gfxImage::gfxImageFormat arg4, i32 arg5)
    {
        return stub<
            cdecl_t<class gfxImage*, i32, i32, enum gfxImage::gfxImageFormat, enum gfxImage::gfxImageFormat, i32>>(
            0x4AE920, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4AEA30 | ?GetFont@gfxImage@@SAPAV1@AAH0@Z
    static inline class gfxImage* GetFont(i32& arg1, i32& arg2)
    {
        return stub<cdecl_t<class gfxImage*, i32&, i32&>>(0x4AEA30, arg1, arg2);
    }

    // 0x4AEB60 | ?FreeFont@gfxImage@@SAXXZ
    static inline void FreeFont()
    {
        return stub<cdecl_t<void>>(0x4AEB60);
    }

    // 0x4AEBA0 | ?Halve@gfxImage@@QAEXXZ
    void Halve()
    {
        return stub<member_func_t<void, gfxImage>>(0x4AEBA0, this);
    }

    // 0x4AEC90 | ?GenerateMipmaps@gfxImage@@QAEXXZ
    void GenerateMipmaps()
    {
        return stub<member_func_t<void, gfxImage>>(0x4AEC90, this);
    }

    // 0x4AEDC0 | ?Scale@gfxImage@@QAEXHH@Z
    void Scale(i32 arg1, i32 arg2)
    {
        return stub<member_func_t<void, gfxImage, i32, i32>>(0x4AEDC0, this, arg1, arg2);
    }

    // 0x4AF1A0 | ?Reformat@gfxImage@@QAEXW4gfxImageFormat@1@0@Z
    void Reformat(enum gfxImage::gfxImageFormat arg1, enum gfxImage::gfxImageFormat arg2)
    {
        return stub<member_func_t<void, gfxImage, enum gfxImage::gfxImageFormat, enum gfxImage::gfxImageFormat>>(
            0x4AF1A0, this, arg1, arg2);
    }

    // 0x4AF2D0 | ?GetDominantColor@gfxImage@@QBEIXZ
    u32 GetDominantColor()
    {
        return stub<member_func_t<u32, gfxImage>>(0x4AF2D0, this);
    }

    // 0x4AF470 | ?Flip@gfxImage@@QAEXXZ
    void Flip()
    {
        return stub<member_func_t<void, gfxImage>>(0x4AF470, this);
    }

    // 0x5CCF9C | ?sm_bppByType@gfxImage@@2PAEA
    inline extern_var(0x5CCF9C, uint8_t*, sm_bppByType);

    // 0x684D44 | ?sm_Use565@gfxImage@@2_NA
    static inline extern_var(0x684D44, bool, sm_Use565);

    // 0x684D48 | ?sm_Font@gfxImage@@2PAV1@A
    inline extern_var(0x684D48, class gfxImage*, sm_Font);
};
