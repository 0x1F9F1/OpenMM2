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
    level:level

    0x4653A0 | public: __thiscall lvlLevel::lvlLevel(void) | ??0lvlLevel@@QAE@XZ
    0x465400 | public: virtual __thiscall lvlLevel::~lvlLevel(void) | ??1lvlLevel@@UAE@XZ
    0x465460 | public: virtual void __thiscall lvlLevel::Update(void) | ?Update@lvlLevel@@UAEXXZ
    0x465470 | public: virtual void __thiscall lvlLevel::SetObjectDetail(int) | ?SetObjectDetail@lvlLevel@@UAEXH@Z
    0x465480 | public: void __thiscall lvlLevel::MoveToRoom(class lvlInstance *,int) | ?MoveToRoom@lvlLevel@@QAEXPAVlvlInstance@@H@Z
    0x4655B0 | public: virtual bool __thiscall lvlLevel::Collide(int,class lvlSegment &,class lvlIntersection *) | ?Collide@lvlLevel@@UAE_NHAAVlvlSegment@@PAVlvlIntersection@@@Z
    0x4655C0 | public: virtual bool __thiscall lvlLevel::GetBoundSphere(class Vector4 &,int) | ?GetBoundSphere@lvlLevel@@UAE_NAAVVector4@@H@Z
    0x4655D0 | public: virtual int __thiscall lvlLevel::GetVisitList(int *,int,class Vector3 const &,class Vector3 const &,int,int) | ?GetVisitList@lvlLevel@@UAEHPAHHABVVector3@@1HH@Z
    0x4655E0 | public: void __thiscall lvlLevel::RegisterDrawable(int,class datCallback) | ?RegisterDrawable@lvlLevel@@QAEXHVdatCallback@@@Z
    0x465630 | protected: void __thiscall lvlLevel::CallCallbacks(int) | ?CallCallbacks@lvlLevel@@IAEXH@Z
    0x465680 | public: void __thiscall lvlLevel::ResetCallbacks(void) | ?ResetCallbacks@lvlLevel@@QAEXXZ
    0x465690 | public: virtual class gfxTexture * __thiscall lvlLevel::GetEnvMap(int,class Vector3 const &,float &) | ?GetEnvMap@lvlLevel@@UAEPAVgfxTexture@@HABVVector3@@AAM@Z
    public: void __thiscall lvlLevel::LabelInstances(int) | ?LabelInstances@lvlLevel@@QAEXH@Z
    public: virtual void __thiscall lvlLevel::AddLabels(class bkBank &) | ?AddLabels@lvlLevel@@UAEXAAVbkBank@@@Z
    0x4656A0 | public: virtual void * __thiscall lvlLevel::`scalar deleting destructor'(unsigned int) | ??_GlvlLevel@@UAEPAXI@Z
    public: virtual void * __thiscall lvlLevel::`vector deleting destructor'(unsigned int) | ??_ElvlLevel@@UAEPAXI@Z
    0x5B1A1C | const lvlLevel::`vftable' | ??_7lvlLevel@@6B@
    0x655790 | protected: static class datCallback (* lvlLevel::m_Callbacks)[64] | ?m_Callbacks@lvlLevel@@1PAY0EA@VdatCallback@@A
    0x655D90 | protected: static int * lvlLevel::m_DrawableCounts | ?m_DrawableCounts@lvlLevel@@1PAHA
    protected: static bool lvlLevel::sm_PhysicsMode | ?sm_PhysicsMode@lvlLevel@@1_NA
    0x655D9C | protected: static class lvlLevel * lvlLevel::sm_Singleton | ?sm_Singleton@lvlLevel@@1PAV1@A
*/

class lvlLevel : public asCullable
{
    // const lvlLevel::`vftable' @ 0x5B1A1C

public:
    // 0x4653A0 | ??0lvlLevel@@QAE@XZ
    lvlLevel();

    // 0x4656A0 | ??_GlvlLevel@@UAEPAXI@Z
    // 0x465400 | ??1lvlLevel@@UAE@XZ
    ~lvlLevel() override;

    // 0x465480 | ?MoveToRoom@lvlLevel@@QAEXPAVlvlInstance@@H@Z
    void MoveToRoom(class lvlInstance* arg1, i32 arg2);

    // 0x4655E0 | ?RegisterDrawable@lvlLevel@@QAEXHVdatCallback@@@Z
    void RegisterDrawable(i32 arg1, class datCallback arg2);

    // 0x465680 | ?ResetCallbacks@lvlLevel@@QAEXXZ
    void ResetCallbacks();

    // 0x465E50 | ?ResetInstances@lvlLevel@@QAEXXZ
    void ResetInstances();

    virtual void Load(char const* arg1) = 0;

    // 0x465460 | ?Update@lvlLevel@@UAEXXZ
    virtual void Update();

    virtual void PreDraw() = 0;

    virtual void PostDraw() = 0;

    virtual void Draw(class gfxViewport const& arg1, u32 arg2) = 0;

    virtual i32 FindRoomId(class Vector3 const& arg1, i32 arg2) = 0;

    virtual i32 GetNeighborCount(i32 arg1) = 0;

    virtual i32 GetNeighbors(i32* arg1, i32 arg2) = 0;

    virtual i32 GetTouchedNeighbors(i32* arg1, i32 arg2, i32 arg3, class Vector4 const& arg4) = 0;

    virtual i32 GetRoomPerimeter(i32 arg1, class Vector3* const arg2, i32 arg3) = 0;

    // 0x4655D0 | ?GetVisitList@lvlLevel@@UAEHPAHHABVVector3@@1HH@Z
    virtual i32 GetVisitList(
        i32* arg1, i32 arg2, class Vector3 const& arg3, class Vector3 const& arg4, i32 arg5, i32 arg6);

    // 0x4655B0 | ?Collide@lvlLevel@@UAE_NHAAVlvlSegment@@PAVlvlIntersection@@@Z
    virtual bool Collide(i32 arg1, class lvlSegment& arg2, class lvlIntersection* arg3);

    // 0x4655C0 | ?GetBoundSphere@lvlLevel@@UAE_NAAVVector4@@H@Z
    virtual bool GetBoundSphere(class Vector4& arg1, i32 arg2);

    virtual class lvlLevelBound const* GetBound() = 0;

    // 0x465470 | ?SetObjectDetail@lvlLevel@@UAEXH@Z
    virtual void SetObjectDetail(i32 arg1);

    virtual f32 GetWaterLevel(i32 arg1) = 0;

    virtual f32 GetLightingIntensity(class Vector3 const& arg1) = 0;

    virtual void SetPtxHeight(class asParticles& arg1) = 0;

    // 0x4472F0 | ?ClampToWorld@lvlLevel@@UAE_NAAVVector3@@@Z
    virtual bool ClampToWorld(class Vector3& arg1);

    // 0x4656F0 | ?LoadInstances@lvlLevel@@UAE_NPBD0@Z
    virtual bool LoadInstances(char const* arg1, char const* arg2);

    // 0x465690 | ?GetEnvMap@lvlLevel@@UAEPAVgfxTexture@@HABVVector3@@AAM@Z
    virtual class gfxTexture* GetEnvMap(i32 arg1, class Vector3 const& arg2, f32& arg3);

protected:
    // 0x465630 | ?CallCallbacks@lvlLevel@@IAEXH@Z
    void CallCallbacks(i32 arg1);

    // 0x655790 | ?m_Callbacks@lvlLevel@@1PAY0EA@VdatCallback@@A
    static inline extern_var(0x655790, class datCallback (*)[64], m_Callbacks);

    // 0x655D90 | ?m_DrawableCounts@lvlLevel@@1PAHA
    static inline extern_var(0x655D90, i32*, m_DrawableCounts);

    // 0x655D9C | ?sm_Singleton@lvlLevel@@1PAV1@A
    static inline extern_var(0x655D9C, class lvlLevel*, sm_Singleton);
};

check_size(lvlLevel, 0x0);
