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
    gfx:pipecom

    0x4B2CE0 | public: static void __cdecl gfxPipeline::StartFade(unsigned int,float) | ?StartFade@gfxPipeline@@SAXIM@Z
    0x4B2D20 | public: static void __cdecl gfxPipeline::SetFade(unsigned int) | ?SetFade@gfxPipeline@@SAXI@Z
    0x4B2D40 | public: static bool __cdecl gfxPipeline::CopyClippedBitmap(int,int,class gfxBitmap *,int,int,int,int,bool) | ?CopyClippedBitmap@gfxPipeline@@SA_NHHPAVgfxBitmap@@HHHH_N@Z
    0x4B2D80 | public: static bool __cdecl gfxPipeline::CopyClippedBitmap(int,int,class gfxBitmap *,int,int,int,int,int,int,int,int,bool) | ?CopyClippedBitmap@gfxPipeline@@SA_NHHPAVgfxBitmap@@HHHHHHHH_N@Z
    0x4B2E30 | unsigned int __cdecl gfxFVFSize(unsigned int) | ?gfxFVFSize@@YAII@Z
    0x4B2E80 | unsigned int __cdecl gfxFVFOffset(unsigned int,unsigned int) | ?gfxFVFOffset@@YAIII@Z
    0x4B2EE0 | private: static void __cdecl gfxPipeline::ForceSetViewport(class gfxViewport *) | ?ForceSetViewport@gfxPipeline@@CAXPAVgfxViewport@@@Z
    private: static void __cdecl gfxPipeline::DefaultSaveScreenShot(void) | ?DefaultSaveScreenShot@gfxPipeline@@CAXXZ
    public: static void __cdecl gfxPipeline::RequestScreenShot(char const *) | ?RequestScreenShot@gfxPipeline@@SAXPBD@Z
    public: static void __cdecl gfxPipeline::SaveShotDialog(void) | ?SaveShotDialog@gfxPipeline@@SAXXZ
    unsigned int gfxDepthComplexityColor | ?gfxDepthComplexityColor@@3IA
    0x68578C | private: static float gfxPipeline::FadeValue | ?FadeValue@gfxPipeline@@0MA
    0x685790 | private: static unsigned int gfxPipeline::StartFadeColor | ?StartFadeColor@gfxPipeline@@0IA
    0x685794 | private: static unsigned int gfxPipeline::EndFadeColor | ?EndFadeColor@gfxPipeline@@0IA
    0x685798 | private: static float gfxPipeline::FadeSpeed | ?FadeSpeed@gfxPipeline@@0MA
    0x68579C | private: static unsigned int gfxPipeline::FadeColor | ?FadeColor@gfxPipeline@@0IA
    private: static char * gfxPipeline::m_FBDump | ?m_FBDump@gfxPipeline@@0PADA
*/

// 0x4B2E30 | ?gfxFVFSize@@YAII@Z
inline uint32_t gfxFVFSize(uint32_t arg1)
{
    return stub<cdecl_t<uint32_t, uint32_t>>(0x4B2E30, arg1);
}

// 0x4B2E80 | ?gfxFVFOffset@@YAIII@Z
inline uint32_t gfxFVFOffset(uint32_t arg1, uint32_t arg2)
{
    return stub<cdecl_t<uint32_t, uint32_t, uint32_t>>(0x4B2E80, arg1, arg2);
}
