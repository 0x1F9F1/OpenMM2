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
    effects:ptx

    0x460EB0 | public: __thiscall asParticles::asParticles(void) | ??0asParticles@@QAE@XZ
    0x460F20 | public: virtual __thiscall asParticles::~asParticles(void) | ??1asParticles@@UAE@XZ
    0x460FB0 | public: void __thiscall asParticles::Init(int,int,int,int,struct asMeshCardVertex *) | ?Init@asParticles@@QAEXHHHHPAUasMeshCardVertex@@@Z
    0x461040 | public: void __thiscall asParticles::Reset(void) | ?Reset@asParticles@@QAEXXZ
    0x461050 | public: void __thiscall asParticles::SetTexture(class gfxTexture *) | ?SetTexture@asParticles@@QAEXPAVgfxTexture@@@Z
    0x461090 | public: void __thiscall asParticles::SetTexture(char const *) | ?SetTexture@asParticles@@QAEXPBD@Z
    0x4610F0 | public: void __thiscall asParticles::Update(void) | ?Update@asParticles@@QAEXXZ
    0x461490 | public: void __thiscall asParticles::Blast(int,class asBirthRule *) | ?Blast@asParticles@@QAEXHPAVasBirthRule@@@Z
    0x461580 | int __cdecl cmpPtx(void const *,void const *) | ?cmpPtx@@YAHPBX0@Z
    0x4615A0 | public: virtual void __thiscall asParticles::Cull(void) | ?Cull@asParticles@@UAEXXZ
    0x461600 | public: void __thiscall asMeshCardInfo::Init(int,struct asMeshCardVertex *,int,int,int) | ?Init@asMeshCardInfo@@QAEXHPAUasMeshCardVertex@@HHH@Z
    0x461770 | public: void __thiscall asMeshCardInfo::Draw(struct asSparkPos const *,int) | ?Draw@asMeshCardInfo@@QAEXPBUasSparkPos@@H@Z
    0x461890 | public: void __thiscall asMeshCardInfo::DrawShadows(struct asSparkPos const *,int) | ?DrawShadows@asMeshCardInfo@@QAEXPBUasSparkPos@@H@Z
    public: void __thiscall asParticles::AddWidgets(class bkBank &) | ?AddWidgets@asParticles@@QAEXAAVbkBank@@@Z
    public: virtual void * __thiscall asParticles::`vector deleting destructor'(unsigned int) | ??_EasParticles@@UAEPAXI@Z
    0x4619E0 | public: virtual void * __thiscall asParticles::`scalar deleting destructor'(unsigned int) | ??_GasParticles@@UAEPAXI@Z
    0x5B1974 | const asParticles::`vftable' | ??_7asParticles@@6B@
    public: static struct asMeshCardVertex * asMeshCardInfo::sQuad | ?sQuad@asMeshCardInfo@@2PAUasMeshCardVertex@@A
*/

#include "hooking.h"
