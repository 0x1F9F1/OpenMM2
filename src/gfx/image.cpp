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

#include "image.h"

gfxImage::~gfxImage()
{
    delete[] ImageData;

    if (Next)
    {
        Next->Release();

        Next = nullptr;
    }
    else
    {
        delete[] PaletteData;
    }
}

void gfxImage::Release()
{
    RefCount -= 1;

    if (!RefCount)
    {
        delete this;
    }
}

void gfxImage::Scale(int width, int height)
{
    return stub<member_func_t<void, gfxImage, int, int>>(0x4AEDC0, this, width, height);
}

gfxImage* gfxImage::Create(int width, int height, int type, int paletteType, int a5)
{
    return stub<cdecl_t<gfxImage*, int, int, int, int, int>>(0x4AE920, width, height, type, paletteType, a5);
}

inline extern_var(0x5CCFA4, char[96][8], BuiltinFont);

gfxImage* gfxImage::GetFont(int& outWidth, int& outHeight)
{
    if (!sm_Font)
    {
        outWidth = 8;
        outHeight = 8;

        gfxImage* result = gfxImage::Create(128, 64, 3, 0, 0);

        for (int i = 0; i < 96; ++i)
        {
            uint16_t* current_row = reinterpret_cast<uint16_t*>(reinterpret_cast<uint8_t*>(result->ImageData) + (i % 16) * 16 + ((i / 2) & 0xFFFFFFF8) * result->BytesPerRow);

            for (int j = 0; j < 8; ++j)
            {
                uint8_t v = BuiltinFont[i][j];

                current_row[0] = -((v & 0x80) != 0);
                current_row[1] = -((v & 0x40) != 0);
                current_row[2] = -((v & 0x20) != 0);
                current_row[3] = -((v & 0x10) != 0);
                current_row[4] = -((v & 0x08) != 0);
                current_row[5] = -((v & 0x04) != 0);
                current_row[6] = -((v & 0x02) != 0);
                current_row[7] = -((v & 0x01) != 0);

                current_row = (uint16_t*) ((uint8_t*) (current_row) + result->BytesPerRow);
            }
        }

        sm_Font = result;
    }

    return sm_Font;
}

void gfxImage::FreeFont(void)
{
    if (sm_Font)
    {
        delete sm_Font;

        sm_Font = nullptr;
    }
}
