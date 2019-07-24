/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
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
    level:multiroom

    0x467AE0 | public: virtual class Vector3 const & __thiscall lvlMultiRoomInstance::GetPosition(void) | ?GetPosition@lvlMultiRoomInstance@@UAEABVVector3@@XZ
    0x467AF0 | public: virtual class Matrix34 const & __thiscall lvlMultiRoomInstance::GetMatrix(class Matrix34 &) | ?GetMatrix@lvlMultiRoomInstance@@UAEABVMatrix34@@AAV2@@Z
    0x467B10 | public: virtual void __thiscall lvlMultiRoomInstance::SetMatrix(class Matrix34 const &) | ?SetMatrix@lvlMultiRoomInstance@@UAEXABVMatrix34@@@Z
    0x467B30 | public: virtual class dgPhysEntity * __thiscall lvlMultiRoomInstance::GetEntity(void) | ?GetEntity@lvlMultiRoomInstance@@UAEPAVdgPhysEntity@@XZ
    0x467B40 | public: virtual class dgPhysEntity * __thiscall lvlMultiRoomInstance::AttachEntity(void) | ?AttachEntity@lvlMultiRoomInstance@@UAEPAVdgPhysEntity@@XZ
    0x467B50 | public: virtual class Vector3 const & __thiscall lvlMultiRoomInstance::GetVelocity(void) | ?GetVelocity@lvlMultiRoomInstance@@UAEABVVector3@@XZ
    0x467B60 | public: virtual bool __thiscall lvlMultiRoomInstance::IsLandmark(void) | ?IsLandmark@lvlMultiRoomInstance@@UAE_NXZ
    0x467B70 | public: virtual bool __thiscall lvlMultiRoomInstance::IsCollidable(void) | ?IsCollidable@lvlMultiRoomInstance@@UAE_NXZ
    0x467B80 | public: virtual bool __thiscall lvlMultiRoomInstance::IsTerrainCollidable(void) | ?IsTerrainCollidable@lvlMultiRoomInstance@@UAE_NXZ
    0x467BA0 | public: virtual void __thiscall lvlMultiRoomInstance::Draw(int) | ?Draw@lvlMultiRoomInstance@@UAEXH@Z
    0x467C20 | public: virtual class phBound const * __thiscall lvlMultiRoomInstance::GetBound(int) | ?GetBound@lvlMultiRoomInstance@@UAEPBVphBound@@H@Z
    0x467C30 | public: virtual unsigned int __thiscall lvlMultiRoomInstance::SizeOf(void) | ?SizeOf@lvlMultiRoomInstance@@UAEIXZ
    0x467C40 | public: static void __cdecl lvlMultiRoomInstance::Create(class lvlInstance *,int) | ?Create@lvlMultiRoomInstance@@SAXPAVlvlInstance@@H@Z
    0x467F70 | private: __thiscall lvlMultiRoomInstance::lvlMultiRoomInstance(class lvlInstance *,struct lvlMultiRoomState *,int) | ??0lvlMultiRoomInstance@@AAE@PAVlvlInstance@@PAUlvlMultiRoomState@@H@Z
    0x5B1C48 | const lvlMultiRoomInstance::`vftable' | ??_7lvlMultiRoomInstance@@6B@
    protected: static int lvlMultiRoomInstance::sm_Sample | ?sm_Sample@lvlMultiRoomInstance@@1HA
*/

struct lvlMultiRoomInstance : lvlInstance
{
public:
    // lvlMultiRoomInstance::`vftable' @ 0x5B1C48

    // 0x467C40 | ?Create@lvlMultiRoomInstance@@SAXPAVlvlInstance@@H@Z
    static inline void Create(class lvlInstance* arg1, int32_t arg2)
    {
        return stub<cdecl_t<void, class lvlInstance*, int32_t>>(0x467C40, arg1, arg2);
    }

    // 0x467F70 | ??0lvlMultiRoomInstance@@AAE@PAVlvlInstance@@PAUlvlMultiRoomState@@H@Z
    inline lvlMultiRoomInstance(class lvlInstance* arg1, struct lvlMultiRoomState* arg2, int32_t arg3)
    {
        stub<member_func_t<void, lvlMultiRoomInstance, class lvlInstance*, struct lvlMultiRoomState*, int32_t>>(
            0x467F70, this, arg1, arg2, arg3);
    }

    // 0x467AE0 | ?GetPosition@lvlMultiRoomInstance@@UAEABVVector3@@XZ
    inline class Vector3 const& GetPosition() override
    {
        return stub<member_func_t<class Vector3 const&, lvlMultiRoomInstance>>(0x467AE0, this);
    }

    // 0x467AF0 | ?GetMatrix@lvlMultiRoomInstance@@UAEABVMatrix34@@AAV2@@Z
    inline class Matrix34 const& GetMatrix(class Matrix34& arg1) override
    {
        return stub<member_func_t<class Matrix34 const&, lvlMultiRoomInstance, class Matrix34&>>(0x467AF0, this, arg1);
    }

    // 0x467B10 | ?SetMatrix@lvlMultiRoomInstance@@UAEXABVMatrix34@@@Z
    inline void SetMatrix(class Matrix34 const& arg1) override
    {
        return stub<member_func_t<void, lvlMultiRoomInstance, class Matrix34 const&>>(0x467B10, this, arg1);
    }

    // 0x467B30 | ?GetEntity@lvlMultiRoomInstance@@UAEPAVdgPhysEntity@@XZ
    inline class dgPhysEntity* GetEntity() override
    {
        return stub<member_func_t<class dgPhysEntity*, lvlMultiRoomInstance>>(0x467B30, this);
    }

    // 0x467B40 | ?AttachEntity@lvlMultiRoomInstance@@UAEPAVdgPhysEntity@@XZ
    inline class dgPhysEntity* AttachEntity() override
    {
        return stub<member_func_t<class dgPhysEntity*, lvlMultiRoomInstance>>(0x467B40, this);
    }

    // 0x467B50 | ?GetVelocity@lvlMultiRoomInstance@@UAEABVVector3@@XZ
    inline class Vector3 const& GetVelocity() override
    {
        return stub<member_func_t<class Vector3 const&, lvlMultiRoomInstance>>(0x467B50, this);
    }

    // 0x467BA0 | ?Draw@lvlMultiRoomInstance@@UAEXH@Z
    inline void Draw(int32_t arg1) override
    {
        return stub<member_func_t<void, lvlMultiRoomInstance, int32_t>>(0x467BA0, this, arg1);
    }

    // 0x467C30 | ?SizeOf@lvlMultiRoomInstance@@UAEIXZ
    inline uint32_t SizeOf() override
    {
        return stub<member_func_t<uint32_t, lvlMultiRoomInstance>>(0x467C30, this);
    }

    // 0x467B60 | ?IsLandmark@lvlMultiRoomInstance@@UAE_NXZ
    inline bool IsLandmark() override
    {
        return stub<member_func_t<bool, lvlMultiRoomInstance>>(0x467B60, this);
    }

    // 0x467B70 | ?IsCollidable@lvlMultiRoomInstance@@UAE_NXZ
    inline bool IsCollidable() override
    {
        return stub<member_func_t<bool, lvlMultiRoomInstance>>(0x467B70, this);
    }

    // 0x467B80 | ?IsTerrainCollidable@lvlMultiRoomInstance@@UAE_NXZ
    inline bool IsTerrainCollidable() override
    {
        return stub<member_func_t<bool, lvlMultiRoomInstance>>(0x467B80, this);
    }

    // 0x467C20 | ?GetBound@lvlMultiRoomInstance@@UAEPBVphBound@@H@Z
    inline class phBound const* GetBound(int32_t arg1) override
    {
        return stub<member_func_t<class phBound const*, lvlMultiRoomInstance, int32_t>>(0x467C20, this, arg1);
    }
};
