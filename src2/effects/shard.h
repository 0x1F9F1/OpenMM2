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

// 0x45FC30 | ?draw_textured_tri@@YAXPAVgfxTexture@@ABVMatrix34@@MMM@Z
inline void draw_textured_tri(class gfxTexture* arg1, class Matrix34 const& arg2, f32 arg3, f32 arg4, f32 arg5)
{
    return stub<cdecl_t<void, class gfxTexture*, class Matrix34 const&, f32, f32, f32>>(
        0x45FC30, arg1, arg2, arg3, arg4, arg5);
}

class fxShardManager : asNode
{
public:
    // fxShardManager::`vftable' @ 0x5B1930

    // 0x45FE70 | ??0fxShardManager@@QAE@XZ
    inline fxShardManager()
    {
        stub<member_func_t<void, fxShardManager>>(0x45FE70, this);
    }

    // 0x45FF60 | ?GetInstance@fxShardManager@@SAPAV1@H@Z
    static inline class fxShardManager* GetInstance(i32 arg1)
    {
        return stub<cdecl_t<class fxShardManager*, i32>>(0x45FF60, arg1);
    }

    // 0x45FF80 | ?Init@fxShardManager@@QAEXHPAVmodShader@@H@Z
    inline void Init(i32 arg1, class modShader* arg2, i32 arg3)
    {
        return stub<member_func_t<void, fxShardManager, i32, class modShader*, i32>>(0x45FF80, this, arg1, arg2, arg3);
    }

    // 0x460010 | ?SetShader@fxShardManager@@QAEXPAVmodShader@@H@Z
    inline void SetShader(class modShader* arg1, i32 arg2)
    {
        return stub<member_func_t<void, fxShardManager, class modShader*, i32>>(0x460010, this, arg1, arg2);
    }

    // 0x460030 | ?EmitShards@fxShardManager@@QAEXVVector3@@MMABVMatrix34@@@Z
    inline void EmitShards(class Vector3 arg1, f32 arg2, f32 arg3, class Matrix34 const& arg4)
    {
        return stub<member_func_t<void, fxShardManager, class Vector3, f32, f32, class Matrix34 const&>>(
            0x460030, this, arg1, arg2, arg3, arg4);
    }

    // 0x4600B0 | ?EmitAllShards@fxShardManager@@QAEXVVector3@@MABVMatrix34@@@Z
    inline void EmitAllShards(class Vector3 arg1, f32 arg2, class Matrix34 const& arg3)
    {
        return stub<member_func_t<void, fxShardManager, class Vector3, f32, class Matrix34 const&>>(
            0x4600B0, this, arg1, arg2, arg3);
    }

    // 0x460100 | ?EmitShard@fxShardManager@@QAEXVVector3@@MABVMatrix34@@@Z
    inline void EmitShard(class Vector3 arg1, f32 arg2, class Matrix34 const& arg3)
    {
        return stub<member_func_t<void, fxShardManager, class Vector3, f32, class Matrix34 const&>>(
            0x460100, this, arg1, arg2, arg3);
    }

    // 0x4602D0 | ?Draw@fxShardManager@@QAEXXZ
    inline void Draw()
    {
        return stub<member_func_t<void, fxShardManager>>(0x4602D0, this);
    }

    // 0x45FEE0 | ??1fxShardManager@@UAE@XZ
    inline ~fxShardManager() override
    {
        stub<member_func_t<void, fxShardManager>>(0x45FEE0, this);
    }

    // 0x4602A0 | ?Update@fxShardManager@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, fxShardManager>>(0x4602A0, this);
    }
};

struct fxShard
{
public:
    // 0x45FCE0 | ??0fxShard@@QAE@XZ
    inline fxShard()
    {
        stub<member_func_t<void, fxShard>>(0x45FCE0, this);
    }

    // 0x45FD20 | ??1fxShard@@QAE@XZ
    inline ~fxShard()
    {
        stub<member_func_t<void, fxShard>>(0x45FD20, this);
    }

    // 0x45FD30 | ?AddShard@fxShard@@QAEXVVector3@@00M@Z
    inline void AddShard(class Vector3 arg1, class Vector3 arg2, class Vector3 arg3, f32 arg4)
    {
        return stub<member_func_t<void, fxShard, class Vector3, class Vector3, class Vector3, f32>>(
            0x45FD30, this, arg1, arg2, arg3, arg4);
    }

    // 0x45FDA0 | ?Update@fxShard@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, fxShard>>(0x45FDA0, this);
    }

    // 0x45FE30 | ?Draw@fxShard@@QAEXPAVmodShader@@@Z
    inline void Draw(class modShader* arg1)
    {
        return stub<member_func_t<void, fxShard, class modShader*>>(0x45FE30, this, arg1);
    }

    // 0x4603C0 | ??_EfxShard@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)
};
