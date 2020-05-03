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

#include "level/inst.h"

/*
    ped:pedinst

    0x57B580 | public: __thiscall aiPedestrianInstance::aiPedestrianInstance(class aiPedestrian *) | ??0aiPedestrianInstance@@QAE@PAVaiPedestrian@@@Z
    0x57B5A0 | public: virtual class Matrix34 const & __thiscall aiPedestrianInstance::GetMatrix(class Matrix34 &) | ?GetMatrix@aiPedestrianInstance@@UAEABVMatrix34@@AAV2@@Z
    0x57B5B0 | public: virtual void __thiscall aiPedestrianInstance::SetMatrix(class Matrix34 const &) | ?SetMatrix@aiPedestrianInstance@@UAEXABVMatrix34@@@Z
    0x57B5C0 | public: virtual class Vector3 const & __thiscall aiPedestrianInstance::GetPosition(void) | ?GetPosition@aiPedestrianInstance@@UAEABVVector3@@XZ
    0x57B5D0 | public: virtual int __thiscall aiPedestrianInstance::ComputeLod(float,float) | ?ComputeLod@aiPedestrianInstance@@UAEHMM@Z
    0x57B5E0 | public: virtual unsigned int __thiscall aiPedestrianInstance::SizeOf(void) | ?SizeOf@aiPedestrianInstance@@UAEIXZ
    0x57B5F0 | public: virtual void __thiscall aiPedestrianInstance::Draw(int) | ?Draw@aiPedestrianInstance@@UAEXH@Z
    0x57B700 | public: virtual void __thiscall aiPedestrianInstance::DrawShadow(void) | ?DrawShadow@aiPedestrianInstance@@UAEXXZ
    0x57B710 | public: virtual void __thiscall aiPedestrianInstance::DrawShadowMap(void) | ?DrawShadowMap@aiPedestrianInstance@@UAEXXZ
    0x57B720 | public: virtual class dgPhysEntity * __thiscall aiPedestrianInstance::GetEntity(void) | ?GetEntity@aiPedestrianInstance@@UAEPAVdgPhysEntity@@XZ
    0x57B730 | public: virtual class dgPhysEntity * __thiscall aiPedestrianInstance::AttachEntity(void) | ?AttachEntity@aiPedestrianInstance@@UAEPAVdgPhysEntity@@XZ
    0x57B750 | public: virtual class Vector3 const & __thiscall aiPedestrianInstance::GetVelocity(void) | ?GetVelocity@aiPedestrianInstance@@UAEABVVector3@@XZ
    0x57B760 | public: virtual void __thiscall aiPedestrianInstance::Detach(void) | ?Detach@aiPedestrianInstance@@UAEXXZ
    0x57B770 | public: virtual class phBound const * __thiscall aiPedestrianInstance::GetBound(int) | ?GetBound@aiPedestrianInstance@@UAEPBVphBound@@H@Z
    0x57B780 | public: virtual bool __thiscall aiPedestrianInstance::IsCollidable(void) | ?IsCollidable@aiPedestrianInstance@@UAE_NXZ
    0x5B62F0 | const aiPedestrianInstance::`vftable' | ??_7aiPedestrianInstance@@6B@
*/

class aiPedestrianInstance : public lvlInstance
{
    // const aiPedestrianInstance::`vftable' @ 0x5B62F0

public:
    // 0x57B580 | ??0aiPedestrianInstance@@QAE@PAVaiPedestrian@@@Z
    aiPedestrianInstance(class aiPedestrian* arg1);

    // 0x57B730 | ?AttachEntity@aiPedestrianInstance@@UAEPAVdgPhysEntity@@XZ
    class dgPhysEntity* AttachEntity() override;

    // 0x57B760 | ?Detach@aiPedestrianInstance@@UAEXXZ
    void Detach() override;

    // 0x57B5F0 | ?Draw@aiPedestrianInstance@@UAEXH@Z
    void Draw(i32 arg1) override;

    // 0x57B700 | ?DrawShadow@aiPedestrianInstance@@UAEXXZ
    void DrawShadow() override;

    // 0x57B710 | ?DrawShadowMap@aiPedestrianInstance@@UAEXXZ
    void DrawShadowMap() override;

    // 0x57B770 | ?GetBound@aiPedestrianInstance@@UAEPBVphBound@@H@Z
    class phBound const* GetBound(i32 arg1) override;

    // 0x57B720 | ?GetEntity@aiPedestrianInstance@@UAEPAVdgPhysEntity@@XZ
    class dgPhysEntity* GetEntity() override;

    // 0x57B5A0 | ?GetMatrix@aiPedestrianInstance@@UAEABVMatrix34@@AAV2@@Z
    class Matrix34 const& GetMatrix(class Matrix34& arg1) override;

    // 0x57B5C0 | ?GetPosition@aiPedestrianInstance@@UAEABVVector3@@XZ
    class Vector3 const& GetPosition() override;

    // 0x57B750 | ?GetVelocity@aiPedestrianInstance@@UAEABVVector3@@XZ
    class Vector3 const& GetVelocity() override;

    // 0x57B780 | ?IsCollidable@aiPedestrianInstance@@UAE_NXZ
    bool IsCollidable() override;

    // 0x57B5B0 | ?SetMatrix@aiPedestrianInstance@@UAEXABVMatrix34@@@Z
    void SetMatrix(class Matrix34 const& arg1) override;

    // 0x57B5E0 | ?SizeOf@aiPedestrianInstance@@UAEIXZ
    u32 SizeOf() override;

    // 0x57B5D0 | ?ComputeLod@aiPedestrianInstance@@UAEHMM@Z
    virtual i32 ComputeLod(f32 arg1, f32 arg2);
};

check_size(aiPedestrianInstance, 0x0);
