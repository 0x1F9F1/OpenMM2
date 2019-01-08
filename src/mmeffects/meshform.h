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
    mmeffects:meshform

    0x533600 | public: __thiscall asMeshSetForm::asMeshSetForm(void) | ??0asMeshSetForm@@QAE@XZ
    0x533660 | public: void __thiscall asMeshSetForm::SetShape(char *,char *,bool,class Vector3 *) | ?SetShape@asMeshSetForm@@QAEXPAD0_NPAVVector3@@@Z
    0x533770 | public: void __thiscall asMeshSetForm::SetZRead(bool) | ?SetZRead@asMeshSetForm@@QAEX_N@Z
    0x533790 | public: void __thiscall asMeshSetForm::SetZWrite(bool) | ?SetZWrite@asMeshSetForm@@QAEX_N@Z
    0x5337B0 | public: void __thiscall asMeshSetForm::EnableLighting(bool) | ?EnableLighting@asMeshSetForm@@QAEX_N@Z
    0x5337D0 | public: void __thiscall asMeshSetForm::EnableAlpha(bool) | ?EnableAlpha@asMeshSetForm@@QAEX_N@Z
    0x5337F0 | public: virtual void __thiscall asMeshSetForm::Update(void) | ?Update@asMeshSetForm@@UAEXXZ
    0x533810 | public: virtual void __thiscall asMeshSetForm::Cull(void) | ?Cull@asMeshSetForm@@UAEXXZ
    public: virtual void * __thiscall asMeshSetForm::`scalar deleting destructor'(unsigned int) | ??_GasMeshSetForm@@UAEPAXI@Z
    0x5339A0 | public: virtual void * __thiscall asMeshSetForm::`vector deleting destructor'(unsigned int) | ??_EasMeshSetForm@@UAEPAXI@Z
    0x5339D0 | public: virtual __thiscall asMeshSetForm::~asMeshSetForm(void) | ??1asMeshSetForm@@UAE@XZ
    0x5B5358 | const asMeshSetForm::`vftable' | ??_7asMeshSetForm@@6B@
    public: static class gfxTexture * asMeshSetForm::SphMapTex | ?SphMapTex@asMeshSetForm@@2PAVgfxTexture@@A
*/

#include "hooking.h"
