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
    model:static2

    0x4A49A0 | public: void __thiscall modStatic::Optimize(class modShader *) | ?Optimize@modStatic@@QAEXPAVmodShader@@@Z
    0x4A4A20 | public: void __thiscall modStatic::DrawNoAlpha(class modShader *) const | ?DrawNoAlpha@modStatic@@QBEXPAVmodShader@@@Z
    0x4A4A50 | public: void __thiscall modStatic::DrawEnvMapped(class modShader *,class gfxTexture *,float) const | ?DrawEnvMapped@modStatic@@QBEXPAVmodShader@@PAVgfxTexture@@M@Z
    0x4A4B30 | public: void __thiscall modStatic::DrawOrthoMapped(class modShader *,class gfxTexture *,float,unsigned int) const | ?DrawOrthoMapped@modStatic@@QBEXPAVmodShader@@PAVgfxTexture@@MI@Z
    0x4A4C50 | public: void __thiscall modStatic::DrawWithTexGenAndTexMatrix(void) const | ?DrawWithTexGenAndTexMatrix@modStatic@@QBEXXZ
    0x4A4CA0 | public: class modStatic * __thiscall modStatic::Clone(void) const | ?Clone@modStatic@@QBEPAV1@XZ
    0x4A4D60 | public: void __thiscall modStatic::CopyFrom(class modStatic const *) | ?CopyFrom@modStatic@@QAEXPBV1@@Z
    0x4A4DB0 | public: int __thiscall modStatic::GetAdjunctCount(void) const | ?GetAdjunctCount@modStatic@@QBEHXZ
    0x4A4DE0 | public: int __thiscall modStatic::GetTriCount(void) const | ?GetTriCount@modStatic@@QBEHXZ
    0x4A4E30 | class modStatic * __cdecl modGetStatic(char const *,void (__cdecl*)(class Vector3 &,void *),void *,bool) | ?modGetStatic@@YAPAVmodStatic@@PBDP6AXAAVVector3@@PAX@Z2_N@Z
    public: static bool modStatic::sm_Packing | ?sm_Packing@modStatic@@2_NA
*/

#include "hooking.h"
