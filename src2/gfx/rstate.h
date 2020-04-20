/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

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

// 0x6854A0 | ?LASTRSTATE@@3VgfxRenderStateData@@A
inline extern_var(0x6854A0, class gfxRenderStateData, LASTRSTATE);

// 0x6856A0 | ?RSTATE@@3VgfxRenderState@@A
inline extern_var(0x6856A0, class gfxRenderState, RSTATE);

struct gfxLight
{
public:
    // 0x4B1C00 | ?Reset@gfxLight@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, gfxLight>>(0x4B1C00, this);
    }

    // 0x685578 | ?Sun@gfxLight@@2U1@A
    static inline extern_var(0x685578, struct gfxLight, Sun);
};

struct gfxMaterial
{
public:
    // 0x4B1BB0 | ?Reset@gfxMaterial@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, gfxMaterial>>(0x4B1BB0, this);
    }

    // 0x6856F0 | ?FlatWhite@gfxMaterial@@2U1@A
    static inline extern_var(0x6856F0, struct gfxMaterial, FlatWhite);
};

class gfxRenderState
{
public:
    // 0x43F480 | ?CheckSet@gfxRenderState@@AAEXAAEE@Z
    inline void CheckSet(uint8_t& arg1, uint8_t arg2)
    {
        return stub<member_func_t<void, gfxRenderState, uint8_t&, uint8_t>>(0x43F480, this, arg1, arg2);
    }

    // 0x4B1C70 | ?Init@gfxRenderState@@AAEXXZ
    inline void Init()
    {
        return stub<member_func_t<void, gfxRenderState>>(0x4B1C70, this);
    }

    // 0x4B1DA0 | ?Default@gfxRenderState@@QAEXXZ
    inline void Default()
    {
        return stub<member_func_t<void, gfxRenderState>>(0x4B1DA0, this);
    }

    // 0x4B2150 | ?LerpRGBA@gfxRenderState@@QAEIIIM@Z
    inline uint32_t LerpRGBA(uint32_t arg1, uint32_t arg2, float arg3)
    {
        return stub<member_func_t<uint32_t, gfxRenderState, uint32_t, uint32_t, float>>(
            0x4B2150, this, arg1, arg2, arg3);
    }

    // 0x4B2220 | ?LightEnable@gfxRenderState@@QAEXH_N@Z
    inline void LightEnable(int32_t arg1, bool arg2)
    {
        return stub<member_func_t<void, gfxRenderState, int32_t, bool>>(0x4B2220, this, arg1, arg2);
    }

    // 0x4B2270 | ?SetLight@gfxRenderState@@QAEXHPBUgfxLight@@@Z
    inline void SetLight(int32_t arg1, struct gfxLight const* arg2)
    {
        return stub<member_func_t<void, gfxRenderState, int32_t, struct gfxLight const*>>(0x4B2270, this, arg1, arg2);
    }

    // 0x4B22D0 | ?DisableAllLights@gfxRenderState@@QAEXXZ
    inline void DisableAllLights()
    {
        return stub<member_func_t<void, gfxRenderState>>(0x4B22D0, this);
    }

    // 0x4B2300 | ?GetLight@gfxRenderState@@QAEXHPAUgfxLight@@@Z
    inline void GetLight(int32_t arg1, struct gfxLight* arg2)
    {
        return stub<member_func_t<void, gfxRenderState, int32_t, struct gfxLight*>>(0x4B2300, this, arg1, arg2);
    }

    // 0x4B2330 | ?SetTexSource@gfxRenderState@@QAEXHH@Z
    inline void SetTexSource(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, gfxRenderState, int32_t, int32_t>>(0x4B2330, this, arg1, arg2);
    }

    // 0x4B2350 | ?SetBlendSet@gfxRenderState@@QAEXW4gfxBlendSet@@E@Z
    inline void SetBlendSet(enum gfxBlendSet arg1, uint8_t arg2)
    {
        return stub<member_func_t<void, gfxRenderState, enum gfxBlendSet, uint8_t>>(0x4B2350, this, arg1, arg2);
    }

    // 0x4B25F0 | ?SetTexTransform@gfxRenderState@@QAEXHH_N@Z
    inline void SetTexTransform(int32_t arg1, int32_t arg2, bool arg3)
    {
        return stub<member_func_t<void, gfxRenderState, int32_t, int32_t, bool>>(0x4B25F0, this, arg1, arg2, arg3);
    }

    // 0x4B2620 | ?SetTexMipmapBias@gfxRenderState@@QAEXHM@Z
    inline void SetTexMipmapBias(int32_t arg1, float arg2)
    {
        return stub<member_func_t<void, gfxRenderState, int32_t, float>>(0x4B2620, this, arg1, arg2);
    }

    // 0x4B2640 | ?SetTexMatrix@gfxRenderState@@QAEXHABVMatrix44@@@Z
    inline void SetTexMatrix(int32_t arg1, class Matrix44 const& arg2)
    {
        return stub<member_func_t<void, gfxRenderState, int32_t, class Matrix44 const&>>(0x4B2640, this, arg1, arg2);
    }

    // 0x4B2660 | ?SetBlendMatrix@gfxRenderState@@QAEXHABVMatrix44@@@Z
    inline void SetBlendMatrix(int32_t arg1, class Matrix44 const& arg2)
    {
        return stub<member_func_t<void, gfxRenderState, int32_t, class Matrix44 const&>>(0x4B2660, this, arg1, arg2);
    }

    // 0x4B2680 | ?SetCard@gfxRenderState@@SAXABVVector3@@@Z
    static inline void SetCard(class Vector3 const& arg1)
    {
        return stub<cdecl_t<void, class Vector3 const&>>(0x4B2680, arg1);
    }

    // 0x4B2750 | ?SetCard@gfxRenderState@@SAXABVVector4@@@Z
    static inline void SetCard(class Vector4 const& arg1)
    {
        return stub<cdecl_t<void, class Vector4 const&>>(0x4B2750, arg1);
    }

    // 0x4B2820 | ?Regenerate@gfxRenderState@@CAXXZ
    static inline void Regenerate()
    {
        return stub<cdecl_t<void>>(0x4B2820);
    }

    // 0x4B2970 | ?SetCamera@gfxRenderState@@SAXABVMatrix34@@@Z
    static inline void SetCamera(class Matrix34 const& arg1)
    {
        return stub<cdecl_t<void, class Matrix34 const&>>(0x4B2970, arg1);
    }

    // 0x4B2A20 | ?SetCamera@gfxRenderState@@SAXABVMatrix44@@@Z
    static inline void SetCamera(class Matrix44 const& arg1)
    {
        return stub<cdecl_t<void, class Matrix44 const&>>(0x4B2A20, arg1);
    }

    // 0x4B2A80 | ?SetCameraFull@gfxRenderState@@SAXABVMatrix34@@@Z
    static inline void SetCameraFull(class Matrix34 const& arg1)
    {
        return stub<cdecl_t<void, class Matrix34 const&>>(0x4B2A80, arg1);
    }

    // 0x5CD600 | ?sm_MaxActiveLights@gfxRenderState@@0HA
    inline extern_var(0x5CD600, int32_t, sm_MaxActiveLights);

    // 0x5CD604 | ?m_TouchedMasks@gfxRenderState@@0PAHA
    inline extern_var(0x5CD604, int32_t*, m_TouchedMasks);

    // 0x685460 | ?sm_Camera@gfxRenderState@@0VMatrix44@@A
    static inline extern_var(0x685460, class Matrix44, sm_Camera);

    // 0x6854F0 | ?sm_SupportsBlendWithOne@gfxRenderState@@0_NA
    static inline extern_var(0x6854F0, bool, sm_SupportsBlendWithOne);

    // 0x6854F8 | ?sm_Composite@gfxRenderState@@0VMatrix44@@A
    static inline extern_var(0x6854F8, class Matrix44, sm_Composite);

    // 0x685538 | ?sm_World@gfxRenderState@@0VMatrix44@@A
    static inline extern_var(0x685538, class Matrix44, sm_World);

    // 0x685620 | ?sm_FullComposite@gfxRenderState@@0VMatrix44@@A
    static inline extern_var(0x685620, class Matrix44, sm_FullComposite);

    // 0x685660 | ?sm_View@gfxRenderState@@0VMatrix44@@A
    static inline extern_var(0x685660, class Matrix44, sm_View);

    // 0x685738 | ?sm_Modelview@gfxRenderState@@0VMatrix44@@A
    static inline extern_var(0x685738, class Matrix44, sm_Modelview);

    // 0x685778 | ?m_Touched@gfxRenderState@@0HA
    inline extern_var(0x685778, int32_t, m_Touched);

    // 0x68577C | ?sm_MaxBlendMatrices@gfxRenderState@@0HA
    inline extern_var(0x68577C, int32_t, sm_MaxBlendMatrices);

    // 0x685780 | ?m_TouchedMask@gfxRenderState@@0HA
    inline extern_var(0x685780, int32_t, m_TouchedMask);

    // 0x685788 | ?sm_MaxTextures@gfxRenderState@@0HA
    inline extern_var(0x685788, int32_t, sm_MaxTextures);

    // 0x4B4C40 | ?DoFlush@gfxRenderState@@QAEXPAVgfxRenderStateData@@@Z
    inline void DoFlush(class gfxRenderStateData* arg1)
    {
        return stub<member_func_t<void, gfxRenderState, class gfxRenderStateData*>>(0x4B4C40, this, arg1);
    }
};
