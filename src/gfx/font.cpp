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

#include "font.h"

#include "gfx/texture.h"
#include "gfx/image.h"

struct gfxFontInfo
{
    uint8_t byte0 {0x20};
    uint8_t byte1 {0x7F};
    uint8_t byte2 {1};
    uint8_t Width {8};
    uint8_t Height {8};
    uint8_t byte5 {0x10};
    uint8_t Width2 {0};
    uint32_t dword8 {0};
};

inline_var(0x685454, gfxTexture*, font_texture);

inline_var(0x685458, int, font_width);
inline_var(0x68545C, int, font_height);

inline_var(0x5CD530, gfxFontInfo, SYSFONT);

void gfxCreateFont(void)
{
    if (!font_texture)
    {
        gfxImage* fontImage = gfxImage::GetFont(font_width, font_height);

        font_texture = gfxTexture::Create(fontImage, 0);

        font_texture->SetTexEnv(font_texture->TexEnv & 0xFFFBFFFF);
    }

    SYSFONT.Height = (uint8_t)font_height;
    SYSFONT.Width = (uint8_t)font_width;
    SYSFONT.Width2 = (uint8_t)font_width;
}

void gfxReleaseFont(void)
{
    if (font_texture)
    {
        delete font_texture;

        font_texture = nullptr;
    }

    font_width = 0;
    font_height = 0;

    gfxImage::FreeFont();
}
