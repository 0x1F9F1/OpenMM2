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
    effects:shard

    0x45FC30 | void __cdecl draw_textured_tri(class gfxTexture *,class Matrix34 const &,float,float,float) | ?draw_textured_tri@@YAXPAVgfxTexture@@ABVMatrix34@@MMM@Z
    0x45FCE0 | public: __thiscall fxShard::fxShard(void) | ??0fxShard@@QAE@XZ
    0x45FD20 | public: __thiscall fxShard::~fxShard(void) | ??1fxShard@@QAE@XZ
    0x45FD30 | public: void __thiscall fxShard::AddShard(class Vector3,class Vector3,class Vector3,float) | ?AddShard@fxShard@@QAEXVVector3@@00M@Z
    0x45FDA0 | public: void __thiscall fxShard::Update(void) | ?Update@fxShard@@QAEXXZ
    0x45FE30 | public: void __thiscall fxShard::Draw(class modShader *) | ?Draw@fxShard@@QAEXPAVmodShader@@@Z
    0x45FE70 | public: __thiscall fxShardManager::fxShardManager(void) | ??0fxShardManager@@QAE@XZ
    0x45FEE0 | public: virtual __thiscall fxShardManager::~fxShardManager(void) | ??1fxShardManager@@UAE@XZ
    0x45FF60 | public: static class fxShardManager * __cdecl fxShardManager::GetInstance(int) | ?GetInstance@fxShardManager@@SAPAV1@H@Z
    0x45FF80 | public: void __thiscall fxShardManager::Init(int,class modShader *,int) | ?Init@fxShardManager@@QAEXHPAVmodShader@@H@Z
    0x460010 | public: void __thiscall fxShardManager::SetShader(class modShader *,int) | ?SetShader@fxShardManager@@QAEXPAVmodShader@@H@Z
    0x460030 | public: void __thiscall fxShardManager::EmitShards(class Vector3,float,float,class Matrix34 const &) | ?EmitShards@fxShardManager@@QAEXVVector3@@MMABVMatrix34@@@Z
    0x4600B0 | public: void __thiscall fxShardManager::EmitAllShards(class Vector3,float,class Matrix34 const &) | ?EmitAllShards@fxShardManager@@QAEXVVector3@@MABVMatrix34@@@Z
    0x460100 | public: void __thiscall fxShardManager::EmitShard(class Vector3,float,class Matrix34 const &) | ?EmitShard@fxShardManager@@QAEXVVector3@@MABVMatrix34@@@Z
    0x4602A0 | public: virtual void __thiscall fxShardManager::Update(void) | ?Update@fxShardManager@@UAEXXZ
    0x4602D0 | public: void __thiscall fxShardManager::Draw(void) | ?Draw@fxShardManager@@QAEXXZ
    public: void __thiscall fxShardManager::AddWidgets(class bkBank *) | ?AddWidgets@fxShardManager@@QAEXPAVbkBank@@@Z
    0x460390 | public: virtual void * __thiscall fxShardManager::`scalar deleting destructor'(unsigned int) | ??_GfxShardManager@@UAEPAXI@Z
    public: virtual void * __thiscall fxShardManager::`vector deleting destructor'(unsigned int) | ??_EfxShardManager@@UAEPAXI@Z
    0x4603C0 | public: void * __thiscall fxShard::`vector deleting destructor'(unsigned int) | ??_EfxShard@@QAEPAXI@Z
    0x5B1930 | const fxShardManager::`vftable' | ??_7fxShardManager@@6B@
    protected: static class fxShardManager * * fxShardManager::Instances | ?Instances@fxShardManager@@1PAPAV1@A
    protected: static int fxShardManager::NumInstances | ?NumInstances@fxShardManager@@1HA
*/

#include "hooking.h"
