#pragma once

class gfxTexture;
class gfxMaterial;

class Matrix34;
class Matrix44;

class gfxRenderStateData
{
public:
    bool Clipping;
    bool Lighting;
    bool SrcBlend;
    bool DestBlend;
    bool VertexBlend;
    int TextureFactor;
    int BlendState;
    float FogStart;
    float FogEnd;
    bool ZEnable;
    bool Shademode;
    bool ZWriteEnable;
    bool Cullmode;
    bool ZFunc;
    bool Alpharef;
    uint8_t Alphafunc;
    bool DitherEnable;
    bool AlphaEnable;
    bool TexturePerspective;
    bool Fillmode;
    bool ZBias;
    bool AntiAlias;
    bool FogVertexMode;
    char AddressU[2];
    char AddressV[2];
    int dword2C;
    int Ambient;
    int FogColor;
    int FogDensity;
    bool m_COLOROP1;
    bool byte3D;
    bool SpecularEnable;
    bool FogEnable;
    bool NormalizeNormals;
    bool RangeFogEnable;
    gfxTexture *m_Texture[2];
    gfxMaterial *m_Material;
};

class gfxRenderState
{
public:
    gfxRenderStateData State;

    static void SetCamera(const Matrix34& camera);
    static void SetCamera(const Matrix44& camera);

    void Flush();
    void DoFlush(gfxRenderStateData * oldState);

    void SetTexture(gfxTexture* texture, int index);

    /*
        0x01 | State Changed
        0x02 | Texture Changed
        0x04 | Material Changed
        0x08 | Transform Changed
        0x80 | Should Regenerate (gfxRenderState::Regenerate())
    */
    declstatic(int, m_Touched);
    declstatic(int, m_TouchedMask);

    declstatic(Matrix44, sm_Camera);
    declstatic(Matrix44, sm_View);
    declstatic(Matrix44, sm_FullComposite);
};

declvar(gfxRenderState, RSTATE);
declvar(gfxRenderStateData, LASTRSTATE);