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
    ai:aiTrafficLight

    0x53C040 | public: __thiscall aiTrafficLightSet::aiTrafficLightSet(class aiIntersection *) | ??0aiTrafficLightSet@@QAE@PAVaiIntersection@@@Z
    0x53C180 | public: void __thiscall aiTrafficLightSet::SetFourWay(void) | ?SetFourWay@aiTrafficLightSet@@QAEXXZ
    0x53C440 | public: virtual __thiscall aiTrafficLightSet::~aiTrafficLightSet(void) | ??1aiTrafficLightSet@@UAE@XZ
    0x53C460 | public: virtual void __thiscall aiTrafficLightSet::Reset(void) | ?Reset@aiTrafficLightSet@@UAEXXZ
    0x53C4B0 | public: virtual void __thiscall aiTrafficLightSet::Update(void) | ?Update@aiTrafficLightSet@@UAEXXZ
    0x53C6F0 | public: virtual int __thiscall aiTrafficLightInstance::Init(char *,class Vector3 &,class Vector3 &,int,char *) | ?Init@aiTrafficLightInstance@@UAEHPADAAVVector3@@1H0@Z
    0x53C960 | public: virtual void __thiscall aiTrafficLightInstance::Draw(int) | ?Draw@aiTrafficLightInstance@@UAEXH@Z
    0x53CA70 | public: virtual void __thiscall aiTrafficLightInstance::DrawGlow(void) | ?DrawGlow@aiTrafficLightInstance@@UAEXXZ
    0x53CD20 | public: virtual void * __thiscall aiTrafficLightSet::`scalar deleting destructor'(unsigned int) | ??_GaiTrafficLightSet@@UAEPAXI@Z
    public: virtual void * __thiscall aiTrafficLightSet::`vector deleting destructor'(unsigned int) | ??_EaiTrafficLightSet@@UAEPAXI@Z
    0x53CD50 | public: virtual unsigned int __thiscall aiTrafficLightInstance::SizeOf(void) | ?SizeOf@aiTrafficLightInstance@@UAEIXZ
    0x5B54AC | const aiTrafficLightInstance::`vftable' | ??_7aiTrafficLightInstance@@6B@
    0x5B5528 | const aiTrafficLightSet::`vftable' | ??_7aiTrafficLightSet@@6B@
    0x6B2FFC | private: static short aiTrafficLightSet::ObjCount | ?ObjCount@aiTrafficLightSet@@0FA
*/

struct aiTrafficLightSet : asNode
{
public:
    // aiTrafficLightSet::`vftable' @ 0x5B5528

    // 0x53C040 | ??0aiTrafficLightSet@@QAE@PAVaiIntersection@@@Z
    inline aiTrafficLightSet(class aiIntersection* arg1)
    {
        stub<member_func_t<void, aiTrafficLightSet, class aiIntersection*>>(0x53C040, this, arg1);
    }

    // 0x53C180 | ?SetFourWay@aiTrafficLightSet@@QAEXXZ
    inline void SetFourWay()
    {
        return stub<member_func_t<void, aiTrafficLightSet>>(0x53C180, this);
    }

    // 0x6B2FFC | ?ObjCount@aiTrafficLightSet@@0FA
    inline extern_var(0x6B2FFC, int16_t, ObjCount);

    // 0x53C440 | ??1aiTrafficLightSet@@UAE@XZ
    inline ~aiTrafficLightSet() override
    {
        stub<member_func_t<void, aiTrafficLightSet>>(0x53C440, this);
    }

    // 0x53C4B0 | ?Update@aiTrafficLightSet@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiTrafficLightSet>>(0x53C4B0, this);
    }

    // 0x53C460 | ?Reset@aiTrafficLightSet@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, aiTrafficLightSet>>(0x53C460, this);
    }
};

struct aiTrafficLightInstance : dgUnhitYBangerInstance
{
public:
    // aiTrafficLightInstance::`vftable' @ 0x5B54AC

    // 0x53C960 | ?Draw@aiTrafficLightInstance@@UAEXH@Z
    inline void Draw(int32_t arg1) override
    {
        return stub<member_func_t<void, aiTrafficLightInstance, int32_t>>(0x53C960, this, arg1);
    }

    // 0x53CA70 | ?DrawGlow@aiTrafficLightInstance@@UAEXXZ
    inline void DrawGlow() override
    {
        return stub<member_func_t<void, aiTrafficLightInstance>>(0x53CA70, this);
    }

    // 0x53CD50 | ?SizeOf@aiTrafficLightInstance@@UAEIXZ
    inline uint32_t SizeOf() override
    {
        return stub<member_func_t<uint32_t, aiTrafficLightInstance>>(0x53CD50, this);
    }

    // 0x53C6F0 | ?Init@aiTrafficLightInstance@@UAEHPADAAVVector3@@1H0@Z
    virtual inline int32_t Init(char* arg1, class Vector3& arg2, class Vector3& arg3, int32_t arg4, char* arg5)
    {
        return stub<
            member_func_t<int32_t, aiTrafficLightInstance, char*, class Vector3&, class Vector3&, int32_t, char*>>(
            0x53C6F0, this, arg1, arg2, arg3, arg4, arg5);
    }
};
