#include "stdafx.h"
#include "Font.h"

#include "gfxTexture.h"
#include "gfxImage.h"

struct gfxFontInfo
{
    uint8_t byte0;
    uint8_t byte1;
    uint8_t byte2;
    uint8_t Width;
    uint8_t Height;
    uint8_t byte5;
    uint8_t Width2;
    uint32_t dword8;
};

instvar(0x685454, gfxTexture*, font_texture);

instvar(0x685458, int, font_width);
instvar(0x68545C, int, font_height);

instvar(0x5CD530, gfxFontInfo, SYSFONT);

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