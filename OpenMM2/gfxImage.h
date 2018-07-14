#pragma once

class gfxImage
{
public:
    enum gfxImageFormat
    {
        ARGB_8888 = 1,
        RGB_0888 = 2,
        ARGB_1555 = 3,
        RGB_0555 = 4,
        Palette8 = 5,
        Palette4 = 6,
    };

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

    void Scale(int width, int height);

    static gfxImage* GetFont(int & outWidth, int & outHeight);
    static void FreeFont(void);

    declstatic(gfxImage*, sm_Font);
};

check_size(gfxImage, 0x1C);

void InstallJPEGSupport(void);
void InstallTextureVariantHandler(void);

declvar(gfxImage*(*)(const char * fileName, bool createMipMaps), gfxLoadImage);
declvar(bool, EnableTextureVariantHandler);