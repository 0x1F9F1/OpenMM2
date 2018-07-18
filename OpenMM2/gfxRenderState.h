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
    bool m_COLOROP[2];
    bool SpecularEnable;
    bool FogEnable;
    bool NormalizeNormals;
    bool RangeFogEnable;
    gfxTexture *m_Texture[2];
    gfxMaterial *m_Material;
};

enum TransformStateType // D3DTRANSFORMSTATETYPE
{
    TransformState_World = 1,
    TransformState_View = 2,
    TransformState_Projection = 3,
    TransformState_World1 = 4,  // 2nd matrix to blend
    TransformState_World2 = 5,  // 3rd matrix to blend
    TransformState_World3 = 6,  // 4th matrix to blend
    TransformState_Texture0 = 16,
    TransformState_Texture1 = 17,
    TransformState_Texture2 = 18,
    TransformState_Texture3 = 19,
    TransformState_Texture4 = 20,
    TransformState_Texture5 = 21,
    TransformState_Texture6 = 22,
    TransformState_Texture7 = 23,
};

class gfxRenderState
{
public:
    gfxRenderStateData State;

    static void SetCamera(const Matrix34& camera);
    static void SetCamera(const Matrix44& camera);
    static void SetTransform(int index, const Matrix44& transform);

    void Flush();
    void DoFlush(gfxRenderStateData * oldState);

    void SetTexture(int index, gfxTexture* texture);

    /*
        0x01 | State Changed
        0x02 | Texture Changed
        0x04 | Material Changed
        0x08 | Transform Changed
        0x10 | Light Changed 1 (Only seen as 0x30)
        0x20 | Light Changed 2 (Only seen as 0x30)
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