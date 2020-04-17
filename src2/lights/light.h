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
    lights:light

    0x59AB80 | public: __thiscall ltLight::ltLight(void) | ??0ltLight@@QAE@XZ
    0x59ABC0 | public: __thiscall ltLight::~ltLight(void) | ??1ltLight@@QAE@XZ
    0x59ABD0 | public: static void __cdecl ltLight::ShutdownLights(void) | ?ShutdownLights@ltLight@@SAXXZ
    0x59ABF0 | public: void __thiscall ltLight::Default(void) | ?Default@ltLight@@QAEXXZ
    0x59AC40 | public: void __thiscall ltLight::Random(void) | ?Random@ltLight@@QAEXXZ
    0x59ACB0 | public: void __thiscall ltLight::Draw(float) | ?Draw@ltLight@@QAEXM@Z
    0x59AD90 | public: void __thiscall ltLight::DrawGlow(class Vector3 const &) | ?DrawGlow@ltLight@@QAEXABVVector3@@@Z
    0x59AE30 | public: static void __cdecl ltLight::DrawGlowBegin(void) | ?DrawGlowBegin@ltLight@@SAXXZ
    0x59AEF0 | public: static void __cdecl ltLight::DrawGlowEnd(void) | ?DrawGlowEnd@ltLight@@SAXXZ
    0x59AFB0 | public: void __thiscall ltLight::DrawHighlight(class Vector3 const &,class Matrix34 const &) | ?DrawHighlight@ltLight@@QAEXABVVector3@@ABVMatrix34@@@Z
    0x59B390 | public: static void __cdecl ltLight::SetUpGfxLightBegin(class Vector3 const &) | ?SetUpGfxLightBegin@ltLight@@SAXABVVector3@@@Z
    0x59B3E0 | public: static int __cdecl ltLight::GetNumPointLights(void) | ?GetNumPointLights@ltLight@@SAHXZ
    0x59B3F0 | public: static class ltLight * __cdecl ltLight::GetPointLight(int) | ?GetPointLight@ltLight@@SAPAV1@H@Z
    0x59B410 | public: static class ltLight * __cdecl ltLight::GetClosestLight(void) | ?GetClosestLight@ltLight@@SAPAV1@XZ
    0x59B460 | public: static void __cdecl ltLight::SetUpGfxLightEnd(void) | ?SetUpGfxLightEnd@ltLight@@SAXXZ
    0x59B5B0 | public: void __thiscall ltLight::SetUpGfxLight(void) | ?SetUpGfxLight@ltLight@@QAEXXZ
    0x59B740 | public: bool __thiscall ltLight::SetGfxLight(struct gfxLight &,class Vector3 const &) | ?SetGfxLight@ltLight@@QAE_NAAUgfxLight@@ABVVector3@@@Z
    0x59B990 | public: void __thiscall ltLight::Illuminate(class Vector3 &,class Vector3 &,class Vector3 &) | ?Illuminate@ltLight@@QAEXAAVVector3@@00@Z
    0x59BA50 | public: float __thiscall ltLight::ComputeIntensity(class Vector3 const &,float) | ?ComputeIntensity@ltLight@@QAEMABVVector3@@M@Z
    0x59BB70 | public: float __thiscall ltLight::ComputeDistance(class Vector3 const &) | ?ComputeDistance@ltLight@@QAEMABVVector3@@@Z
    0x59BBB0 | public: void __thiscall ltLight::SetUpProjection(class ltProjection &) | ?SetUpProjection@ltLight@@QAEXAAVltProjection@@@Z
    public: static void __cdecl ltLight::AddStaticWidgets(class bkBank &) | ?AddStaticWidgets@ltLight@@SAXAAVbkBank@@@Z
    public: void __thiscall ltLight::AddWidgets(class bkBank &) | ?AddWidgets@ltLight@@QAEXAAVbkBank@@@Z
    0x59BCA0 | public: void __thiscall ltLight::FileIO(class datParser &) | ?FileIO@ltLight@@QAEXAAVdatParser@@@Z
    0x5DDEA4 | private: static float ltLight::GlowScale | ?GlowScale@ltLight@@0MA
    0x5DDEA8 | private: static float ltLight::GlowIntensity | ?GlowIntensity@ltLight@@0MA
    0x5DDEAC | private: static float ltLight::AmbientScale | ?AmbientScale@ltLight@@0MA
    0x5DDEB4 | private: static float ltLight::DiffuseMinIntensity | ?DiffuseMinIntensity@ltLight@@0MA
    0x5DDEB8 | private: static float ltLight::DiffuseMaxIntensity | ?DiffuseMaxIntensity@ltLight@@0MA
    0x5DDEC0 | private: static int ltLight::NumGfxLights | ?NumGfxLights@ltLight@@0HA
    private: static float ltLight::HighlightScale | ?HighlightScale@ltLight@@0MA
    private: static float ltLight::HighlightIntensity | ?HighlightIntensity@ltLight@@0MA
    private: static float ltLight::HighlightMinIntensity | ?HighlightMinIntensity@ltLight@@0MA
    bool PreviousLightingState | ?PreviousLightingState@@3_NA
    bool PreviousZWriteState | ?PreviousZWriteState@@3_NA
    private: static class Vector3 ltLight::SceneAmbient | ?SceneAmbient@ltLight@@0VVector3@@A
    enum gfxCullMode PreviousCullMode | ?PreviousCullMode@@3W4gfxCullMode@@A
    enum gfxBlendSet PreviousBlendSet | ?PreviousBlendSet@@3W4gfxBlendSet@@A
    private: static class gfxTexture * ltLight::GlowTexture | ?GlowTexture@ltLight@@0PAVgfxTexture@@A
    private: static bool ltLight::SlowGfxLights | ?SlowGfxLights@ltLight@@0_NA
    private: static int ltLight::CullMode | ?CullMode@ltLight@@0HA
*/

class ltLight
{
public:
    // 0x4CF090 | ??_EltLight@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)

    // 0x59AB80 | ??0ltLight@@QAE@XZ
    ltLight()
    {
        stub<member_func_t<void, ltLight>>(0x59AB80, this);
    }

    // 0x59ABC0 | ??1ltLight@@QAE@XZ
    ~ltLight()
    {
        stub<member_func_t<void, ltLight>>(0x59ABC0, this);
    }

    // 0x59ABD0 | ?ShutdownLights@ltLight@@SAXXZ
    static inline void ShutdownLights()
    {
        return stub<cdecl_t<void>>(0x59ABD0);
    }

    // 0x59ABF0 | ?Default@ltLight@@QAEXXZ
    void Default()
    {
        return stub<member_func_t<void, ltLight>>(0x59ABF0, this);
    }

    // 0x59AC40 | ?Random@ltLight@@QAEXXZ
    void Random()
    {
        return stub<member_func_t<void, ltLight>>(0x59AC40, this);
    }

    // 0x59ACB0 | ?Draw@ltLight@@QAEXM@Z
    void Draw(f32 arg1)
    {
        return stub<member_func_t<void, ltLight, f32>>(0x59ACB0, this, arg1);
    }

    // 0x59AD90 | ?DrawGlow@ltLight@@QAEXABVVector3@@@Z
    void DrawGlow(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, ltLight, class Vector3 const&>>(0x59AD90, this, arg1);
    }

    // 0x59AE30 | ?DrawGlowBegin@ltLight@@SAXXZ
    static inline void DrawGlowBegin()
    {
        return stub<cdecl_t<void>>(0x59AE30);
    }

    // 0x59AEF0 | ?DrawGlowEnd@ltLight@@SAXXZ
    static inline void DrawGlowEnd()
    {
        return stub<cdecl_t<void>>(0x59AEF0);
    }

    // 0x59AFB0 | ?DrawHighlight@ltLight@@QAEXABVVector3@@ABVMatrix34@@@Z
    void DrawHighlight(class Vector3 const& arg1, class Matrix34 const& arg2)
    {
        return stub<member_func_t<void, ltLight, class Vector3 const&, class Matrix34 const&>>(
            0x59AFB0, this, arg1, arg2);
    }

    // 0x59B390 | ?SetUpGfxLightBegin@ltLight@@SAXABVVector3@@@Z
    static inline void SetUpGfxLightBegin(class Vector3 const& arg1)
    {
        return stub<cdecl_t<void, class Vector3 const&>>(0x59B390, arg1);
    }

    // 0x59B3E0 | ?GetNumPointLights@ltLight@@SAHXZ
    static inline i32 GetNumPointLights()
    {
        return stub<cdecl_t<i32>>(0x59B3E0);
    }

    // 0x59B3F0 | ?GetPointLight@ltLight@@SAPAV1@H@Z
    static inline class ltLight* GetPointLight(i32 arg1)
    {
        return stub<cdecl_t<class ltLight*, i32>>(0x59B3F0, arg1);
    }

    // 0x59B410 | ?GetClosestLight@ltLight@@SAPAV1@XZ
    static inline class ltLight* GetClosestLight()
    {
        return stub<cdecl_t<class ltLight*>>(0x59B410);
    }

    // 0x59B460 | ?SetUpGfxLightEnd@ltLight@@SAXXZ
    static inline void SetUpGfxLightEnd()
    {
        return stub<cdecl_t<void>>(0x59B460);
    }

    // 0x59B5B0 | ?SetUpGfxLight@ltLight@@QAEXXZ
    void SetUpGfxLight()
    {
        return stub<member_func_t<void, ltLight>>(0x59B5B0, this);
    }

    // 0x59B740 | ?SetGfxLight@ltLight@@QAE_NAAUgfxLight@@ABVVector3@@@Z
    bool SetGfxLight(struct gfxLight& arg1, class Vector3 const& arg2)
    {
        return stub<member_func_t<bool, ltLight, struct gfxLight&, class Vector3 const&>>(0x59B740, this, arg1, arg2);
    }

    // 0x59B990 | ?Illuminate@ltLight@@QAEXAAVVector3@@00@Z
    void Illuminate(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3)
    {
        return stub<member_func_t<void, ltLight, class Vector3&, class Vector3&, class Vector3&>>(
            0x59B990, this, arg1, arg2, arg3);
    }

    // 0x59BA50 | ?ComputeIntensity@ltLight@@QAEMABVVector3@@M@Z
    f32 ComputeIntensity(class Vector3 const& arg1, f32 arg2)
    {
        return stub<member_func_t<f32, ltLight, class Vector3 const&, f32>>(0x59BA50, this, arg1, arg2);
    }

    // 0x59BB70 | ?ComputeDistance@ltLight@@QAEMABVVector3@@@Z
    f32 ComputeDistance(class Vector3 const& arg1)
    {
        return stub<member_func_t<f32, ltLight, class Vector3 const&>>(0x59BB70, this, arg1);
    }

    // 0x59BBB0 | ?SetUpProjection@ltLight@@QAEXAAVltProjection@@@Z
    void SetUpProjection(class ltProjection& arg1)
    {
        return stub<member_func_t<void, ltLight, class ltProjection&>>(0x59BBB0, this, arg1);
    }

    // 0x59BCA0 | ?FileIO@ltLight@@QAEXAAVdatParser@@@Z
    void FileIO(class datParser& arg1)
    {
        return stub<member_func_t<void, ltLight, class datParser&>>(0x59BCA0, this, arg1);
    }

    // 0x5DDEA4 | ?GlowScale@ltLight@@0MA
    inline extern_var(0x5DDEA4, float, GlowScale);

    // 0x5DDEA8 | ?GlowIntensity@ltLight@@0MA
    inline extern_var(0x5DDEA8, float, GlowIntensity);

    // 0x5DDEAC | ?AmbientScale@ltLight@@0MA
    inline extern_var(0x5DDEAC, float, AmbientScale);

    // 0x5DDEB4 | ?DiffuseMinIntensity@ltLight@@0MA
    inline extern_var(0x5DDEB4, float, DiffuseMinIntensity);

    // 0x5DDEB8 | ?DiffuseMaxIntensity@ltLight@@0MA
    inline extern_var(0x5DDEB8, float, DiffuseMaxIntensity);

    // 0x5DDEC0 | ?NumGfxLights@ltLight@@0HA
    inline extern_var(0x5DDEC0, int32_t, NumGfxLights);
};
