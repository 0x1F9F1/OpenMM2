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

#pragma once

/*
    gfx:rstate

    0x4B1BB0 | public: void __thiscall gfxMaterial::Reset(void) | ?Reset@gfxMaterial@@QAEXXZ
    0x4B1C00 | public: void __thiscall gfxLight::Reset(void) | ?Reset@gfxLight@@QAEXXZ
    0x4B1C70 | private: void __thiscall gfxRenderState::Init(void) | ?Init@gfxRenderState@@AAEXXZ
    0x4B1DA0 | public: void __thiscall gfxRenderState::Default(void) | ?Default@gfxRenderState@@QAEXXZ
    0x4B2150 | public: unsigned int __thiscall gfxRenderState::LerpRGBA(unsigned int,unsigned int,float) | ?LerpRGBA@gfxRenderState@@QAEIIIM@Z
    0x4B2220 | public: void __thiscall gfxRenderState::LightEnable(int,bool) | ?LightEnable@gfxRenderState@@QAEXH_N@Z
    0x4B2270 | public: void __thiscall gfxRenderState::SetLight(int,struct gfxLight const *) | ?SetLight@gfxRenderState@@QAEXHPBUgfxLight@@@Z
    0x4B22D0 | public: void __thiscall gfxRenderState::DisableAllLights(void) | ?DisableAllLights@gfxRenderState@@QAEXXZ
    0x4B2300 | public: void __thiscall gfxRenderState::GetLight(int,struct gfxLight *) | ?GetLight@gfxRenderState@@QAEXHPAUgfxLight@@@Z
    0x4B2330 | public: void __thiscall gfxRenderState::SetTexSource(int,int) | ?SetTexSource@gfxRenderState@@QAEXHH@Z
    0x4B2350 | public: void __thiscall gfxRenderState::SetBlendSet(enum gfxBlendSet,unsigned char) | ?SetBlendSet@gfxRenderState@@QAEXW4gfxBlendSet@@E@Z
    0x4B25F0 | public: void __thiscall gfxRenderState::SetTexTransform(int,int,bool) | ?SetTexTransform@gfxRenderState@@QAEXHH_N@Z
    0x4B2620 | public: void __thiscall gfxRenderState::SetTexMipmapBias(int,float) | ?SetTexMipmapBias@gfxRenderState@@QAEXHM@Z
    0x4B2640 | public: void __thiscall gfxRenderState::SetTexMatrix(int,class Matrix44 const &) | ?SetTexMatrix@gfxRenderState@@QAEXHABVMatrix44@@@Z
    0x4B2660 | public: void __thiscall gfxRenderState::SetBlendMatrix(int,class Matrix44 const &) | ?SetBlendMatrix@gfxRenderState@@QAEXHABVMatrix44@@@Z
    0x4B2680 | public: static void __cdecl gfxRenderState::SetCard(class Vector3 const &) | ?SetCard@gfxRenderState@@SAXABVVector3@@@Z
    0x4B2750 | public: static void __cdecl gfxRenderState::SetCard(class Vector4 const &) | ?SetCard@gfxRenderState@@SAXABVVector4@@@Z
    0x4B2820 | private: static void __cdecl gfxRenderState::Regenerate(void) | ?Regenerate@gfxRenderState@@CAXXZ
    0x4B2970 | public: static void __cdecl gfxRenderState::SetCamera(class Matrix34 const &) | ?SetCamera@gfxRenderState@@SAXABVMatrix34@@@Z
    0x4B2A20 | public: static void __cdecl gfxRenderState::SetCamera(class Matrix44 const &) | ?SetCamera@gfxRenderState@@SAXABVMatrix44@@@Z
    public: static void __cdecl gfxRenderState::_SetView(class Matrix34 const &) | ?_SetView@gfxRenderState@@SAXABVMatrix34@@@Z
    0x4B2A80 | public: static void __cdecl gfxRenderState::SetCameraFull(class Matrix34 const &) | ?SetCameraFull@gfxRenderState@@SAXABVMatrix34@@@Z
    public: static void __cdecl gfxPipeline::AddPackedColor(class bkBank &,char const *,unsigned int *) | ?AddPackedColor@gfxPipeline@@SAXAAVbkBank@@PBDPAI@Z
    public: static void __cdecl gfxPipeline::AddPackedColor(class bkBank &,char const *,unsigned int *,class datCallback &) | ?AddPackedColor@gfxPipeline@@SAXAAVbkBank@@PBDPAIAAVdatCallback@@@Z
    public: static void __cdecl gfxPipeline::AddWidgets(class bkBank &) | ?AddWidgets@gfxPipeline@@SAXAAVbkBank@@@Z
    public: void __thiscall gfxMaterial::AddWidgets(class bkBank &) | ?AddWidgets@gfxMaterial@@QAEXAAVbkBank@@@Z
    public: void __thiscall gfxLight::AddWidgets(class bkBank &) | ?AddWidgets@gfxLight@@QAEXAAVbkBank@@@Z
    public: static bool gfxRenderState::sm_EnableTextures | ?sm_EnableTextures@gfxRenderState@@2_NA
    unsigned int g_PlaneMask | ?g_PlaneMask@@3IA
    0x5CD600 | private: static int gfxRenderState::sm_MaxActiveLights | ?sm_MaxActiveLights@gfxRenderState@@0HA
    0x5CD604 | private: static int * gfxRenderState::m_TouchedMasks | ?m_TouchedMasks@gfxRenderState@@0PAHA
    bool gfxEnablePreLoad | ?gfxEnablePreLoad@@3_NA
    0x685460 | private: static class Matrix44 gfxRenderState::sm_Camera | ?sm_Camera@gfxRenderState@@0VMatrix44@@A
    0x6854A0 | class gfxRenderStateData LASTRSTATE | ?LASTRSTATE@@3VgfxRenderStateData@@A
    0x6854F0 | private: static bool gfxRenderState::sm_SupportsBlendWithOne | ?sm_SupportsBlendWithOne@gfxRenderState@@0_NA
    0x6854F8 | private: static class Matrix44 gfxRenderState::sm_Composite | ?sm_Composite@gfxRenderState@@0VMatrix44@@A
    0x685538 | private: static class Matrix44 gfxRenderState::sm_World | ?sm_World@gfxRenderState@@0VMatrix44@@A
    0x685578 | public: static struct gfxLight gfxLight::Sun | ?Sun@gfxLight@@2U1@A
    0x685620 | private: static class Matrix44 gfxRenderState::sm_FullComposite | ?sm_FullComposite@gfxRenderState@@0VMatrix44@@A
    0x685660 | private: static class Matrix44 gfxRenderState::sm_View | ?sm_View@gfxRenderState@@0VMatrix44@@A
    0x6856A0 | class gfxRenderState RSTATE | ?RSTATE@@3VgfxRenderState@@A
    0x6856F0 | public: static struct gfxMaterial gfxMaterial::FlatWhite | ?FlatWhite@gfxMaterial@@2U1@A
    0x685738 | private: static class Matrix44 gfxRenderState::sm_Modelview | ?sm_Modelview@gfxRenderState@@0VMatrix44@@A
    0x685778 | private: static int gfxRenderState::m_Touched | ?m_Touched@gfxRenderState@@0HA
    0x68577C | private: static int gfxRenderState::sm_MaxBlendMatrices | ?sm_MaxBlendMatrices@gfxRenderState@@0HA
    0x685780 | private: static int gfxRenderState::m_TouchedMask | ?m_TouchedMask@gfxRenderState@@0HA
    private: static int gfxRenderState::sm_MaxLights | ?sm_MaxLights@gfxRenderState@@0HA
    0x685788 | private: static int gfxRenderState::sm_MaxTextures | ?sm_MaxTextures@gfxRenderState@@0HA
    bool gfxEnableDepthComplexity | ?gfxEnableDepthComplexity@@3_NA
    bool sm_ValidateDevice | ?sm_ValidateDevice@@3_NA
*/

#include "hooking.h"

class gfxTexture;
class gfxMaterial;

#include "vector/matrix34.h"
#include "vector/matrix44.h"

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

    static inline extern_var(0x685778, int, m_Touched);
    static inline extern_var(0x685780, int, m_TouchedMask);

    static inline extern_var(0x685460, Matrix44, sm_Camera);
    static inline extern_var(0x685660, Matrix44, sm_View);
    static inline extern_var(0x685538, Matrix44, sm_World);
    static inline extern_var(0x685620, Matrix44, sm_FullComposite);

    static inline extern_var(0x685788, int, sm_MaxTextures);
};

inline extern_var(0x6856A0, gfxRenderState, RSTATE);
inline extern_var(0x6854A0, gfxRenderStateData, LASTRSTATE);
