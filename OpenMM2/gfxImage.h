#pragma once

class gfxImage
{
public:
    uint16_t Width;
    uint16_t Height;
    uint16_t BytesPerRow;
    uint8_t Type;
    uint8_t PaletteType;
    uint32_t TexEnv;
    void *ImageData;
    void *PaletteData;
    uint32_t RefCount;
    gfxImage *Next;

    ~gfxImage();

    void Release();
};

check_size(gfxImage, 0x1C);

void InstallJPEGSupport(void);
void InstallTextureVariantHandler(void);

declvar(gfxImage*(*)(const char * fileName, bool createMipMaps), gfxLoadImage);
declvar(bool, EnableTextureVariantHandler);