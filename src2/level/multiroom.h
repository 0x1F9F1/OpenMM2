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

#include "inst.h"

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
    0x655DA4 | protected: static int lvlMultiRoomInstance::sm_Sample | ?sm_Sample@lvlMultiRoomInstance@@1HA
*/

class lvlMultiRoomInstance : public lvlInstance
{
    // const lvlMultiRoomInstance::`vftable' @ 0x5B1C48

public:
    // 0x467B40 | ?AttachEntity@lvlMultiRoomInstance@@UAEPAVdgPhysEntity@@XZ
    class dgPhysEntity* AttachEntity() override;

    // 0x467BA0 | ?Draw@lvlMultiRoomInstance@@UAEXH@Z
    void Draw(i32 arg1) override;

    // 0x467C20 | ?GetBound@lvlMultiRoomInstance@@UAEPBVphBound@@H@Z
    class phBound const* GetBound(i32 arg1) override;

    // 0x467B30 | ?GetEntity@lvlMultiRoomInstance@@UAEPAVdgPhysEntity@@XZ
    class dgPhysEntity* GetEntity() override;

    // 0x467AF0 | ?GetMatrix@lvlMultiRoomInstance@@UAEABVMatrix34@@AAV2@@Z
    class Matrix34 const& GetMatrix(class Matrix34& arg1) override;

    // 0x467AE0 | ?GetPosition@lvlMultiRoomInstance@@UAEABVVector3@@XZ
    class Vector3 const& GetPosition() override;

    // 0x467B50 | ?GetVelocity@lvlMultiRoomInstance@@UAEABVVector3@@XZ
    class Vector3 const& GetVelocity() override;

    // 0x467B70 | ?IsCollidable@lvlMultiRoomInstance@@UAE_NXZ
    bool IsCollidable() override;

    // 0x467B60 | ?IsLandmark@lvlMultiRoomInstance@@UAE_NXZ
    bool IsLandmark() override;

    // 0x467B80 | ?IsTerrainCollidable@lvlMultiRoomInstance@@UAE_NXZ
    bool IsTerrainCollidable() override;

    // 0x467B10 | ?SetMatrix@lvlMultiRoomInstance@@UAEXABVMatrix34@@@Z
    void SetMatrix(class Matrix34 const& arg1) override;

    // 0x467C30 | ?SizeOf@lvlMultiRoomInstance@@UAEIXZ
    u32 SizeOf() override;

    // 0x467C40 | ?Create@lvlMultiRoomInstance@@SAXPAVlvlInstance@@H@Z
    static void Create(class lvlInstance* arg1, i32 arg2);

protected:
    // 0x655DA4 | ?sm_Sample@lvlMultiRoomInstance@@1HA
    static inline extern_var(0x655DA4, i32, sm_Sample);

private:
    // 0x467F70 | ??0lvlMultiRoomInstance@@AAE@PAVlvlInstance@@PAUlvlMultiRoomState@@H@Z
    lvlMultiRoomInstance(class lvlInstance* arg1, struct lvlMultiRoomState* arg2, i32 arg3);
};

check_size(lvlMultiRoomInstance, 0x0);
