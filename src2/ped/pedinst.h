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

class aiPedestrianInstance : lvlInstance
{
public:
    // aiPedestrianInstance::`vftable' @ 0x5B62F0

    // 0x57B580 | ??0aiPedestrianInstance@@QAE@PAVaiPedestrian@@@Z
    inline aiPedestrianInstance(class aiPedestrian* arg1)
    {
        stub<member_func_t<void, aiPedestrianInstance, class aiPedestrian*>>(0x57B580, this, arg1);
    }

    // 0x57B5C0 | ?GetPosition@aiPedestrianInstance@@UAEABVVector3@@XZ
    inline class Vector3 const& GetPosition() override
    {
        return stub<member_func_t<class Vector3 const&, aiPedestrianInstance>>(0x57B5C0, this);
    }

    // 0x57B5A0 | ?GetMatrix@aiPedestrianInstance@@UAEABVMatrix34@@AAV2@@Z
    inline class Matrix34 const& GetMatrix(class Matrix34& arg1) override
    {
        return stub<member_func_t<class Matrix34 const&, aiPedestrianInstance, class Matrix34&>>(0x57B5A0, this, arg1);
    }

    // 0x57B5B0 | ?SetMatrix@aiPedestrianInstance@@UAEXABVMatrix34@@@Z
    inline void SetMatrix(class Matrix34 const& arg1) override
    {
        return stub<member_func_t<void, aiPedestrianInstance, class Matrix34 const&>>(0x57B5B0, this, arg1);
    }

    // 0x57B720 | ?GetEntity@aiPedestrianInstance@@UAEPAVdgPhysEntity@@XZ
    inline class dgPhysEntity* GetEntity() override
    {
        return stub<member_func_t<class dgPhysEntity*, aiPedestrianInstance>>(0x57B720, this);
    }

    // 0x57B730 | ?AttachEntity@aiPedestrianInstance@@UAEPAVdgPhysEntity@@XZ
    inline class dgPhysEntity* AttachEntity() override
    {
        return stub<member_func_t<class dgPhysEntity*, aiPedestrianInstance>>(0x57B730, this);
    }

    // 0x57B750 | ?GetVelocity@aiPedestrianInstance@@UAEABVVector3@@XZ
    inline class Vector3 const& GetVelocity() override
    {
        return stub<member_func_t<class Vector3 const&, aiPedestrianInstance>>(0x57B750, this);
    }

    // 0x57B760 | ?Detach@aiPedestrianInstance@@UAEXXZ
    inline void Detach() override
    {
        return stub<member_func_t<void, aiPedestrianInstance>>(0x57B760, this);
    }

    // 0x57B5F0 | ?Draw@aiPedestrianInstance@@UAEXH@Z
    inline void Draw(i32 arg1) override
    {
        return stub<member_func_t<void, aiPedestrianInstance, i32>>(0x57B5F0, this, arg1);
    }

    // 0x57B700 | ?DrawShadow@aiPedestrianInstance@@UAEXXZ
    inline void DrawShadow() override
    {
        return stub<member_func_t<void, aiPedestrianInstance>>(0x57B700, this);
    }

    // 0x57B710 | ?DrawShadowMap@aiPedestrianInstance@@UAEXXZ
    inline void DrawShadowMap() override
    {
        return stub<member_func_t<void, aiPedestrianInstance>>(0x57B710, this);
    }

    // 0x57B5E0 | ?SizeOf@aiPedestrianInstance@@UAEIXZ
    inline u32 SizeOf() override
    {
        return stub<member_func_t<u32, aiPedestrianInstance>>(0x57B5E0, this);
    }

    // 0x57B780 | ?IsCollidable@aiPedestrianInstance@@UAE_NXZ
    inline bool IsCollidable() override
    {
        return stub<member_func_t<bool, aiPedestrianInstance>>(0x57B780, this);
    }

    // 0x57B770 | ?GetBound@aiPedestrianInstance@@UAEPBVphBound@@H@Z
    inline class phBound const* GetBound(i32 arg1) override
    {
        return stub<member_func_t<class phBound const*, aiPedestrianInstance, i32>>(0x57B770, this, arg1);
    }

    // 0x57B5D0 | ?ComputeLod@aiPedestrianInstance@@UAEHMM@Z
    virtual inline i32 ComputeLod(f32 arg1, f32 arg2)
    {
        return stub<member_func_t<i32, aiPedestrianInstance, f32, f32>>(0x57B5D0, this, arg1, arg2);
    }
};
