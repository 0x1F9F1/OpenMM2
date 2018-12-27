#pragma once

class gfxTexture;
class gfxMaterial;

class Matrix34;
class Matrix44;

class gfxRenderStateData
{
public:
    bool Clipping {false};
    bool Lighting {false};
    bool SrcBlend {false};
    bool DestBlend {false};
    bool VertexBlend {false};
    int TextureFactor {0};
    int BlendState {0};
    float FogStart {0.0f};
    float FogEnd {0.0f};
    bool ZEnable {false};
    bool Shademode {false};
    bool ZWriteEnable {false};
    bool Cullmode {false};
    bool ZFunc {false};
    bool Alpharef {false};
    uint8_t Alphafunc {0};
    bool DitherEnable {false};
    bool AlphaEnable {false};
    bool TexturePerspective {false};
    bool Fillmode {false};
    bool ZBias {false};
    bool AntiAlias {false};
    bool FogVertexMode {false};
    uint8_t AddressU[2] {0};
    uint8_t AddressV[2] {0};
    int dword2C {0};
    int Ambient {0};
    int FogColor {0};
    int FogDensity {0};
    uint8_t m_COLOROP1 {0};
    bool byte3D {false};
    bool SpecularEnable {false};
    bool FogEnable {false};
    bool NormalizeNormals {false};
    bool RangeFogEnable {false};
    gfxTexture *m_Texture[2] {nullptr};
    gfxMaterial *m_Material {nullptr};
};

enum TransformStateType // D3DTRANSFORMSTATETYPE
{
    TransformState_World = 1,
    TransformState_View = 2,
    TransformState_Projection = 3,
    TransformState_World1 = 4, // 2nd matrix to blend
    TransformState_World2 = 5, // 3rd matrix to blend
    TransformState_World3 = 6, // 4th matrix to blend
    TransformState_Texture0 = 16,
    TransformState_Texture1 = 17,
    TransformState_Texture2 = 18,
    TransformState_Texture3 = 19,
    TransformState_Texture4 = 20,
    TransformState_Texture5 = 21,
    TransformState_Texture6 = 22,
    TransformState_Texture7 = 23,
};

enum TouchMask
{
    TouchMask_State     = (1 << 0),
    TouchMask_Texture   = (1 << 1),
    TouchMask_Material  = (1 << 2),
    TouchMask_Transform = (1 << 3),
    TouchMask_Light1    = (1 << 4),
    TouchMask_Light2    = (1 << 5),

    TouchMask_Regenerate = (1 << 7)
};

class gfxRenderState
    : public gfxRenderStateData
{
public:
    static void SetCamera(const Matrix34& camera);
    static void SetCamera(const Matrix44& camera);
    static void SetTransform(int index, const Matrix44& transform);

    void Flush();
    void DoFlush(gfxRenderStateData * prevState);

    void SetTexture(int index, gfxTexture* texture);

    inline_var(0x685778, int, m_Touched);
    inline_var(0x685780, int, m_TouchedMask);

    inline_var(0x685460, Matrix44, sm_Camera);
    inline_var(0x685660, Matrix44, sm_View);
    inline_var(0x685538, Matrix44, sm_World);
    inline_var(0x685620, Matrix44, sm_FullComposite);

    inline_var(0x685788, int, sm_MaxTextures);
};

static_var(0x6856A0, gfxRenderState, RSTATE);
static_var(0x6854A0, gfxRenderStateData, LASTRSTATE);