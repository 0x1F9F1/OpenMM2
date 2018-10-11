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

    uint16_t Width {0};
    uint16_t Height {0};
    uint16_t BytesPerRow {0};
    uint8_t Type {0};
    uint8_t PaletteType {0};
    uint32_t TexEnv {0};
    void *ImageData {nullptr};
    void *PaletteData {nullptr};

    uint32_t RefCount {1};
    gfxImage *Next {nullptr};

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
