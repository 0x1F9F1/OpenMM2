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
    model:shader

    0x4A3930 | public: static struct gfxMaterial * __cdecl modShader::AddStaticMaterial(struct gfxMaterial const &) | ?AddStaticMaterial@modShader@@SAPAUgfxMaterial@@ABU2@@Z
    0x4A3B20 | public: static void __cdecl modShader::KillAll(void) | ?KillAll@modShader@@SAXXZ
    0x4A3B30 | public: void __thiscall modShader::Load(class Stream *,bool) | ?Load@modShader@@QAEXPAVStream@@_N@Z
    public: void __thiscall modShader::Save(class Stream *,bool) const | ?Save@modShader@@QBEXPAVStream@@_N@Z
    0x4A3F60 | public: static class modShader * * __cdecl modShader::LoadShaderSet(class Stream *,int *,int *,bool) | ?LoadShaderSet@modShader@@SAPAPAV1@PAVStream@@PAH1_N@Z
    0x4A40C0 | public: void __thiscall modShader::PreLoad(void) | ?PreLoad@modShader@@QAEXXZ
    0x4A41B0 | public: static void __cdecl modShader::BeginEnvMap(class gfxTexture *,class Matrix34 const &) | ?BeginEnvMap@modShader@@SAXPAVgfxTexture@@ABVMatrix34@@@Z
    0x4A4420 | public: static void __cdecl modShader::EndEnvMap(void) | ?EndEnvMap@modShader@@SAXXZ
    public: static void __cdecl modShader::SaveShaderSet(class Stream *,class modShader * *,int,int,bool) | ?SaveShaderSet@modShader@@SAXPAVStream@@PAPAV1@HH_N@Z
    private: static int modShader::sm_MaxStaticMaterials | ?sm_MaxStaticMaterials@modShader@@0HA
    public: static int modShader::sm_MaxVariants | ?sm_MaxVariants@modShader@@2HA
    public: static float modShader::sm_MaterialScale | ?sm_MaterialScale@modShader@@2MA
    private: static struct gfxMaterial * modShader::sm_Materials | ?sm_Materials@modShader@@0PAUgfxMaterial@@A
    private: static int modShader::sm_StaticMaterialCount | ?sm_StaticMaterialCount@modShader@@0HA
*/

// #include "hooking.h"
