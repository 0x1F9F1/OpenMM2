#pragma once

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
