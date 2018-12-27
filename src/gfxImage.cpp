#include "stdafx.h"
#include "gfxImage.h"

void InstallJPEGSupport(void)
{
    return stub<cdecl_t<void>>(0x497B70);
}

void InstallTextureVariantHandler(void)
{
    return stub<cdecl_t<void>>(0x442F10);
}

gfxImage::~gfxImage()
{
    delete ImageData;

    if (Next)
    {
        Next->Release();

        Next = nullptr;
    }
    else
    {
        delete PaletteData;
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
    return stub<thiscall_t<void, gfxImage, int, int>>(0x4AEDC0, this, width, height);
}

gfxImage * gfxImage::Create(int width, int height, int type, int paletteType, int a5)
{
    return stub<cdecl_t<gfxImage*, int, int, int, int, int>>(0x4AE920, width, height, type, paletteType, a5);
}

static_var(0x5CCFA4, char[96][8], BuiltinFont);

gfxImage* gfxImage::GetFont(int & outWidth, int & outHeight)
{
    if ( !sm_Font )
    {
        outWidth = 8;
        outHeight = 8;

        gfxImage* result = gfxImage::Create(128, 64, 3, 0, 0);

        for (int i = 0; i < 96; ++i)
        {
            uint16_t* current_row = reinterpret_cast<uint16_t*>(reinterpret_cast<uint8_t*>(result->ImageData)
                + (i % 16) * 16 + ((i / 2) & 0xFFFFFFF8) * result->BytesPerRow);

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

                current_row = (uint16_t *)((uint8_t*)(current_row) + result->BytesPerRow);
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
