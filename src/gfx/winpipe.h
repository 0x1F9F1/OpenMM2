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
    gfx:winpipe

    0x4A88F0 | private: static long __stdcall gfxPipeline::gfxWindowProc(struct HWND__ *,unsigned int,unsigned int,long) | ?gfxWindowProc@gfxPipeline@@CGJPAUHWND__@@IIJ@Z
    0x4A8A90 | private: static void __cdecl gfxPipeline::gfxWindowCreate(char const *) | ?gfxWindowCreate@gfxPipeline@@CAXPBD@Z
    0x4A8CA0 | public: static void __cdecl gfxPipeline::SetWindow(bool,int,int) | ?SetWindow@gfxPipeline@@SAX_NHH@Z
    0x4A8CE0 | public: static void __cdecl gfxPipeline::SetRes(int,int,int,int,bool) | ?SetRes@gfxPipeline@@SAXHHHH_N@Z
    0x4A90B0 | public: static class gfxViewport * __cdecl gfxPipeline::CreateViewport(void) | ?CreateViewport@gfxPipeline@@SAPAVgfxViewport@@XZ
    0x4A9110 | public: static void __cdecl gfxPipeline::Manage(void) | ?Manage@gfxPipeline@@SAXXZ
    0x4A9180 | public: static void __cdecl gfxPipeline::SetTitle(char const *) | ?SetTitle@gfxPipeline@@SAXPBD@Z
    float gfxDrawTime | ?gfxDrawTime@@3MA
    0x6830E4 | private: static int gfxPipeline::m_ZDepth | ?m_ZDepth@gfxPipeline@@0HA
    0x6830EC | private: static int gfxPipeline::m_X | ?m_X@gfxPipeline@@0HA
    0x6830F4 | private: static float gfxPipeline::m_fWidth | ?m_fWidth@gfxPipeline@@0MA
    0x6830F8 | private: static int gfxPipeline::m_ColorDepth | ?m_ColorDepth@gfxPipeline@@0HA
    0x6830FC | public: static class gfxViewport * gfxPipeline::VP | ?VP@gfxPipeline@@2PAVgfxViewport@@A
    0x683100 | private: static int gfxPipeline::m_iHeight | ?m_iHeight@gfxPipeline@@0HA
    0x683104 | int gfxDebug | ?gfxDebug@@3HA
    0x683108 | int gfxIcon | ?gfxIcon@@3HA
    0x68310C | public: static class gfxViewport * gfxPipeline::OrthoVP | ?OrthoVP@gfxPipeline@@2PAVgfxViewport@@A
    0x683110 | private: static int gfxPipeline::m_Y | ?m_Y@gfxPipeline@@0HA
    0x683114 | private: static unsigned int gfxPipeline::m_EvtFlags | ?m_EvtFlags@gfxPipeline@@0IA
    0x683120 | private: static float gfxPipeline::m_fHeight | ?m_fHeight@gfxPipeline@@0MA
    0x683124 | private: static class gfxViewport * gfxPipeline::m_Viewport | ?m_Viewport@gfxPipeline@@0PAVgfxViewport@@A
    0x683128 | private: static int gfxPipeline::m_iWidth | ?m_iWidth@gfxPipeline@@0HA
*/

#include "hooking.h"

inline extern_var(0x683108, int, gfxIcon);