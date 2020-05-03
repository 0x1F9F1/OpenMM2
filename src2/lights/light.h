/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 Brick

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
    0x5DDE9C | private: static float ltLight::HighlightScale | ?HighlightScale@ltLight@@0MA
    0x5DDEA0 | private: static float ltLight::HighlightIntensity | ?HighlightIntensity@ltLight@@0MA
    private: static float ltLight::HighlightMinIntensity | ?HighlightMinIntensity@ltLight@@0MA
    0x6B4B10 | bool PreviousLightingState | ?PreviousLightingState@@3_NA
    0x6B4B11 | bool PreviousZWriteState | ?PreviousZWriteState@@3_NA
    0x6B4B38 | private: static class Vector3 ltLight::SceneAmbient | ?SceneAmbient@ltLight@@0VVector3@@A
    0x6B4B54 | enum gfxCullMode PreviousCullMode | ?PreviousCullMode@@3W4gfxCullMode@@A
    0x6B4B78 | enum gfxBlendSet PreviousBlendSet | ?PreviousBlendSet@@3W4gfxBlendSet@@A
    0x6B4B9C | private: static class gfxTexture * ltLight::GlowTexture | ?GlowTexture@ltLight@@0PAVgfxTexture@@A
    0x6B4BA0 | private: static bool ltLight::SlowGfxLights | ?SlowGfxLights@ltLight@@0_NA
    0x6B4BA4 | private: static int ltLight::CullMode | ?CullMode@ltLight@@0HA
*/

class ltLight
{
public:
    // 0x59AB80 | ??0ltLight@@QAE@XZ
    ltLight();

    // 0x59ABC0 | ??1ltLight@@QAE@XZ
    // 0x4CF090 | ??_EltLight@@QAEPAXI@Z
    ~ltLight();

    // 0x59BB70 | ?ComputeDistance@ltLight@@QAEMABVVector3@@@Z
    f32 ComputeDistance(class Vector3 const& arg1);

    // 0x59BA50 | ?ComputeIntensity@ltLight@@QAEMABVVector3@@M@Z
    f32 ComputeIntensity(class Vector3 const& arg1, f32 arg2);

    // 0x59ABF0 | ?Default@ltLight@@QAEXXZ
    void Default();

    // 0x59ACB0 | ?Draw@ltLight@@QAEXM@Z
    void Draw(f32 arg1);

    // 0x59AD90 | ?DrawGlow@ltLight@@QAEXABVVector3@@@Z
    void DrawGlow(class Vector3 const& arg1);

    // 0x59AFB0 | ?DrawHighlight@ltLight@@QAEXABVVector3@@ABVMatrix34@@@Z
    void DrawHighlight(class Vector3 const& arg1, class Matrix34 const& arg2);

    // 0x59BCA0 | ?FileIO@ltLight@@QAEXAAVdatParser@@@Z
    void FileIO(class datParser& arg1);

    // 0x59B990 | ?Illuminate@ltLight@@QAEXAAVVector3@@00@Z
    void Illuminate(class Vector3& arg1, class Vector3& arg2, class Vector3& arg3);

    // 0x59AC40 | ?Random@ltLight@@QAEXXZ
    void Random();

    // 0x59B740 | ?SetGfxLight@ltLight@@QAE_NAAUgfxLight@@ABVVector3@@@Z
    bool SetGfxLight(struct gfxLight& arg1, class Vector3 const& arg2);

    // 0x59B5B0 | ?SetUpGfxLight@ltLight@@QAEXXZ
    void SetUpGfxLight();

    // 0x59BBB0 | ?SetUpProjection@ltLight@@QAEXAAVltProjection@@@Z
    void SetUpProjection(class ltProjection& arg1);

    // 0x59AE30 | ?DrawGlowBegin@ltLight@@SAXXZ
    static void DrawGlowBegin();

    // 0x59AEF0 | ?DrawGlowEnd@ltLight@@SAXXZ
    static void DrawGlowEnd();

    // 0x59B410 | ?GetClosestLight@ltLight@@SAPAV1@XZ
    static class ltLight* GetClosestLight();

    // 0x59B3E0 | ?GetNumPointLights@ltLight@@SAHXZ
    static i32 GetNumPointLights();

    // 0x59B3F0 | ?GetPointLight@ltLight@@SAPAV1@H@Z
    static class ltLight* GetPointLight(i32 arg1);

    // 0x59B390 | ?SetUpGfxLightBegin@ltLight@@SAXABVVector3@@@Z
    static void SetUpGfxLightBegin(class Vector3 const& arg1);

    // 0x59B460 | ?SetUpGfxLightEnd@ltLight@@SAXXZ
    static void SetUpGfxLightEnd();

    // 0x59ABD0 | ?ShutdownLights@ltLight@@SAXXZ
    static void ShutdownLights();

private:
    // 0x5DDEAC | ?AmbientScale@ltLight@@0MA
    static inline extern_var(0x5DDEAC, f32, AmbientScale);

    // 0x6B4BA4 | ?CullMode@ltLight@@0HA
    static inline extern_var(0x6B4BA4, i32, CullMode);

    // 0x5DDEB8 | ?DiffuseMaxIntensity@ltLight@@0MA
    static inline extern_var(0x5DDEB8, f32, DiffuseMaxIntensity);

    // 0x5DDEB4 | ?DiffuseMinIntensity@ltLight@@0MA
    static inline extern_var(0x5DDEB4, f32, DiffuseMinIntensity);

    // 0x5DDEA8 | ?GlowIntensity@ltLight@@0MA
    static inline extern_var(0x5DDEA8, f32, GlowIntensity);

    // 0x5DDEA4 | ?GlowScale@ltLight@@0MA
    static inline extern_var(0x5DDEA4, f32, GlowScale);

    // 0x6B4B9C | ?GlowTexture@ltLight@@0PAVgfxTexture@@A
    static inline extern_var(0x6B4B9C, class gfxTexture*, GlowTexture);

    // 0x5DDEA0 | ?HighlightIntensity@ltLight@@0MA
    static inline extern_var(0x5DDEA0, f32, HighlightIntensity);

    // 0x5DDE9C | ?HighlightScale@ltLight@@0MA
    static inline extern_var(0x5DDE9C, f32, HighlightScale);

    // 0x5DDEC0 | ?NumGfxLights@ltLight@@0HA
    static inline extern_var(0x5DDEC0, i32, NumGfxLights);

    // 0x6B4B38 | ?SceneAmbient@ltLight@@0VVector3@@A
    static inline extern_var(0x6B4B38, class Vector3, SceneAmbient);

    // 0x6B4BA0 | ?SlowGfxLights@ltLight@@0_NA
    static inline extern_var(0x6B4BA0, bool, SlowGfxLights);
};

check_size(ltLight, 0x4C);

// 0x6B4B78 | ?PreviousBlendSet@@3W4gfxBlendSet@@A
inline extern_var(0x6B4B78, enum gfxBlendSet, PreviousBlendSet);

// 0x6B4B54 | ?PreviousCullMode@@3W4gfxCullMode@@A
inline extern_var(0x6B4B54, enum gfxCullMode, PreviousCullMode);

// 0x6B4B10 | ?PreviousLightingState@@3_NA
inline extern_var(0x6B4B10, bool, PreviousLightingState);

// 0x6B4B11 | ?PreviousZWriteState@@3_NA
inline extern_var(0x6B4B11, bool, PreviousZWriteState);
