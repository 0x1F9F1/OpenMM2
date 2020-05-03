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

#include "node/cullable.h"

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
    0x5C6520 | public: static struct asMeshCardVertex * asMeshCardInfo::sQuad | ?sQuad@asMeshCardInfo@@2PAUasMeshCardVertex@@A
*/

class asParticles : public asCullable
{
    // const asParticles::`vftable' @ 0x5B1974

public:
    // 0x460EB0 | ??0asParticles@@QAE@XZ
    asParticles();

    // 0x4619E0 | ??_GasParticles@@UAEPAXI@Z
    // 0x460F20 | ??1asParticles@@UAE@XZ
    ~asParticles() override;

    // 0x461490 | ?Blast@asParticles@@QAEXHPAVasBirthRule@@@Z
    void Blast(i32 arg1, class asBirthRule* arg2);

    // 0x4615A0 | ?Cull@asParticles@@UAEXXZ
    void Cull() override;

    // 0x460FB0 | ?Init@asParticles@@QAEXHHHHPAUasMeshCardVertex@@@Z
    void Init(i32 arg1, i32 arg2, i32 arg3, i32 arg4, struct asMeshCardVertex* arg5);

    // 0x461040 | ?Reset@asParticles@@QAEXXZ
    void Reset();

    // 0x461090 | ?SetTexture@asParticles@@QAEXPBD@Z
    void SetTexture(char const* arg1);

    // 0x461050 | ?SetTexture@asParticles@@QAEXPAVgfxTexture@@@Z
    void SetTexture(class gfxTexture* arg1);

    // 0x4610F0 | ?Update@asParticles@@QAEXXZ
    void Update();
};

check_size(asParticles, 0x54);

// 0x461580 | ?cmpPtx@@YAHPBX0@Z
i32 cmpPtx(void const* arg1, void const* arg2);

struct asMeshCardInfo
{
public:
    // 0x461770 | ?Draw@asMeshCardInfo@@QAEXPBUasSparkPos@@H@Z
    void Draw(struct asSparkPos const* arg1, i32 arg2);

    // 0x461890 | ?DrawShadows@asMeshCardInfo@@QAEXPBUasSparkPos@@H@Z
    void DrawShadows(struct asSparkPos const* arg1, i32 arg2);

    // 0x461600 | ?Init@asMeshCardInfo@@QAEXHPAUasMeshCardVertex@@HHH@Z
    void Init(i32 arg1, struct asMeshCardVertex* arg2, i32 arg3, i32 arg4, i32 arg5);

    // 0x5C6520 | ?sQuad@asMeshCardInfo@@2PAUasMeshCardVertex@@A
    static inline extern_var(0x5C6520, struct asMeshCardVertex*, sQuad);
};

check_size(asMeshCardInfo, 0x0);
