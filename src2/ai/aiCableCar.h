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
    ai:aiCableCar

    0x53F700 | public: __thiscall aiCableCar::aiCableCar(void) | ??0aiCableCar@@QAE@XZ
    0x53F780 | public: __thiscall aiCableCar::~aiCableCar(void) | ??1aiCableCar@@QAE@XZ
    0x53F7E0 | public: void __thiscall aiCableCar::Init(char *,int,int,short) | ?Init@aiCableCar@@QAEXPADHHF@Z
    0x53F990 | public: virtual void __thiscall aiCableCar::Reset(void) | ?Reset@aiCableCar@@UAEXXZ
    0x53FBD0 | public: virtual void __thiscall aiCableCar::Update(void) | ?Update@aiCableCar@@UAEXXZ
    0x53FCD0 | private: bool __thiscall aiCableCar::DetermineNextLink(class aiPath *,class aiPath * *,short,short *) | ?DetermineNextLink@aiCableCar@@AAE_NPAVaiPath@@PAPAV2@FPAF@Z
    0x53FF50 | private: void __thiscall aiCableCar::SolvePositionAndOrientation(void) | ?SolvePositionAndOrientation@aiCableCar@@AAEXXZ
    0x540580 | private: void __thiscall aiCableCar::SolveVelocity(void) | ?SolveVelocity@aiCableCar@@AAEXXZ
    0x5407B0 | private: bool __thiscall aiCableCar::CheckForObstacles(float *) | ?CheckForObstacles@aiCableCar@@AAE_NPAM@Z
    0x540A20 | private: bool __thiscall aiCableCar::OkayToEnterIntersection(float) | ?OkayToEnterIntersection@aiCableCar@@AAE_NM@Z
    0x540B90 | private: float __thiscall aiCableCar::DistanceToIntersection(void) | ?DistanceToIntersection@aiCableCar@@AAEMXZ
    0x540BF0 | private: void __thiscall aiCableCar::SolveRailType(void) | ?SolveRailType@aiCableCar@@AAEXXZ
    0x5410E0 | public: virtual int __thiscall aiCableCar::CurrentRoadIdx(class aiPath * *,bool * const,int *) | ?CurrentRoadIdx@aiCableCar@@UAEHPAPAVaiPath@@QA_NPAH@Z
    0x5411F0 | public: virtual int __thiscall aiCableCar::CurrentRdVert(void) | ?CurrentRdVert@aiCableCar@@UAEHXZ
    0x541210 | private: void __thiscall aiCableCar::UpdateObstacleMap(void) | ?UpdateObstacleMap@aiCableCar@@AAEXXZ
    0x5414D0 | public: void __thiscall aiCableCar::DetermineSister(void) | ?DetermineSister@aiCableCar@@QAEXXZ
    0x5415A0 | public: virtual void __thiscall aiCableCar::DrawId(void) | ?DrawId@aiCableCar@@UAEXXZ
    0x5415B0 | public: virtual class Matrix34 const & __thiscall aiCableCarInstance::GetMatrix(class Matrix34 &) | ?GetMatrix@aiCableCarInstance@@UAEABVMatrix34@@AAV2@@Z
    0x5415C0 | public: virtual void __thiscall aiCableCarInstance::SetMatrix(class Matrix34 const &) | ?SetMatrix@aiCableCarInstance@@UAEXABVMatrix34@@@Z
    0x5415E0 | public: virtual class Vector3 const & __thiscall aiCableCarInstance::GetVelocity(void) | ?GetVelocity@aiCableCarInstance@@UAEABVVector3@@XZ
    0x541650 | public: virtual class Vector3 const & __thiscall aiCableCarInstance::GetPosition(void) | ?GetPosition@aiCableCarInstance@@UAEABVVector3@@XZ
    0x541660 | public: virtual unsigned int __thiscall aiCableCarInstance::SizeOf(void) | ?SizeOf@aiCableCarInstance@@UAEIXZ
    0x541670 | public: virtual void __thiscall aiCableCarInstance::ImpactCB(class dgHitBangerInstance *) | ?ImpactCB@aiCableCarInstance@@UAEXPAVdgHitBangerInstance@@@Z
    0x541680 | public: virtual void __thiscall aiCableCarInstance::Draw(int) | ?Draw@aiCableCarInstance@@UAEXH@Z
    0x541770 | public: class Vector3 __thiscall Vector3::operator%(class Vector3 const &) const | ??LVector3@@QBE?AV0@ABV0@@Z
    0x5417D0 | public: virtual int __thiscall aiCableCar::Type(void) | ?Type@aiCableCar@@UAEHXZ
    0x5417E0 | public: virtual float __thiscall aiCableCar::Speed(void) | ?Speed@aiCableCar@@UAEMXZ
    0x5417F0 | public: virtual int __thiscall aiCableCar::CurrentLane(void) | ?CurrentLane@aiCableCar@@UAEHXZ
    0x541800 | public: virtual float __thiscall aiCableCar::FrontBumperDistance(void) | ?FrontBumperDistance@aiCableCar@@UAEMXZ
    0x541810 | public: virtual float __thiscall aiCableCar::BackBumperDistance(void) | ?BackBumperDistance@aiCableCar@@UAEMXZ
    0x541820 | public: virtual float __thiscall aiCableCar::LSideDistance(void) | ?LSideDistance@aiCableCar@@UAEMXZ
    0x541830 | public: virtual float __thiscall aiCableCar::RSideDistance(void) | ?RSideDistance@aiCableCar@@UAEMXZ
    0x541840 | public: virtual void __thiscall aiCableCar::Position(class Vector3 &) | ?Position@aiCableCar@@UAEXAAVVector3@@@Z
    0x541860 | public: virtual class Matrix34 & __thiscall aiCableCar::GetMatrix(void) | ?GetMatrix@aiCableCar@@UAEAAVMatrix34@@XZ
    0x541870 | public: virtual int __thiscall aiCableCar::CurrentRoadId(void) | ?CurrentRoadId@aiCableCar@@UAEHXZ
    0x541880 | public: __thiscall dgUnhitBangerInstance::dgUnhitBangerInstance(void) | ??0dgUnhitBangerInstance@@QAE@XZ
    public: virtual unsigned int __thiscall dgUnhitBangerInstance::SizeOf(void) | ?SizeOf@dgUnhitBangerInstance@@UAEIXZ
    0x5418A0 | public: __thiscall dgUnhitYBangerInstance::~dgUnhitYBangerInstance(void) | ??1dgUnhitYBangerInstance@@QAE@XZ
    public: __thiscall dgUnhitBangerInstance::~dgUnhitBangerInstance(void) | ??1dgUnhitBangerInstance@@QAE@XZ
    0x5B5604 | const aiCableCar::`vftable' | ??_7aiCableCar@@6B@
    0x5B5658 | const aiCableCarInstance::`vftable' | ??_7aiCableCarInstance@@6B@
    0x5B56D4 | const dgUnhitBangerInstance::`vftable' | ??_7dgUnhitBangerInstance@@6B@
*/

class aiCableCar : aiVehicle
{
public:
    // aiCableCar::`vftable' @ 0x5B5604

    // 0x53BF40 | ??_EaiCableCar@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)

    // 0x53F700 | ??0aiCableCar@@QAE@XZ
    inline aiCableCar()
    {
        stub<member_func_t<void, aiCableCar>>(0x53F700, this);
    }

    // 0x53F780 | ??1aiCableCar@@QAE@XZ
    inline ~aiCableCar()
    {
        stub<member_func_t<void, aiCableCar>>(0x53F780, this);
    }

    // 0x53F7E0 | ?Init@aiCableCar@@QAEXPADHHF@Z
    inline void Init(char* arg1, int32_t arg2, int32_t arg3, int16_t arg4)
    {
        return stub<member_func_t<void, aiCableCar, char*, int32_t, int32_t, int16_t>>(
            0x53F7E0, this, arg1, arg2, arg3, arg4);
    }

    // 0x53FCD0 | ?DetermineNextLink@aiCableCar@@AAE_NPAVaiPath@@PAPAV2@FPAF@Z
    inline bool DetermineNextLink(class aiPath* arg1, class aiPath** arg2, int16_t arg3, int16_t* arg4)
    {
        return stub<member_func_t<bool, aiCableCar, class aiPath*, class aiPath**, int16_t, int16_t*>>(
            0x53FCD0, this, arg1, arg2, arg3, arg4);
    }

    // 0x53FF50 | ?SolvePositionAndOrientation@aiCableCar@@AAEXXZ
    inline void SolvePositionAndOrientation()
    {
        return stub<member_func_t<void, aiCableCar>>(0x53FF50, this);
    }

    // 0x540580 | ?SolveVelocity@aiCableCar@@AAEXXZ
    inline void SolveVelocity()
    {
        return stub<member_func_t<void, aiCableCar>>(0x540580, this);
    }

    // 0x5407B0 | ?CheckForObstacles@aiCableCar@@AAE_NPAM@Z
    inline bool CheckForObstacles(float* arg1)
    {
        return stub<member_func_t<bool, aiCableCar, float*>>(0x5407B0, this, arg1);
    }

    // 0x540A20 | ?OkayToEnterIntersection@aiCableCar@@AAE_NM@Z
    inline bool OkayToEnterIntersection(float arg1)
    {
        return stub<member_func_t<bool, aiCableCar, float>>(0x540A20, this, arg1);
    }

    // 0x540B90 | ?DistanceToIntersection@aiCableCar@@AAEMXZ
    inline float DistanceToIntersection()
    {
        return stub<member_func_t<float, aiCableCar>>(0x540B90, this);
    }

    // 0x540BF0 | ?SolveRailType@aiCableCar@@AAEXXZ
    inline void SolveRailType()
    {
        return stub<member_func_t<void, aiCableCar>>(0x540BF0, this);
    }

    // 0x541210 | ?UpdateObstacleMap@aiCableCar@@AAEXXZ
    inline void UpdateObstacleMap()
    {
        return stub<member_func_t<void, aiCableCar>>(0x541210, this);
    }

    // 0x5414D0 | ?DetermineSister@aiCableCar@@QAEXXZ
    inline void DetermineSister()
    {
        return stub<member_func_t<void, aiCableCar>>(0x5414D0, this);
    }

    // 0x541840 | ?Position@aiCableCar@@UAEXAAVVector3@@@Z
    inline void Position(class Vector3& arg1) override
    {
        return stub<member_func_t<void, aiCableCar, class Vector3&>>(0x541840, this, arg1);
    }

    // 0x5417E0 | ?Speed@aiCableCar@@UAEMXZ
    inline float Speed() override
    {
        return stub<member_func_t<float, aiCableCar>>(0x5417E0, this);
    }

    // 0x5410E0 | ?CurrentRoadIdx@aiCableCar@@UAEHPAPAVaiPath@@QA_NPAH@Z
    inline int32_t CurrentRoadIdx(class aiPath** arg1, bool* const arg2, int32_t* arg3) override
    {
        return stub<member_func_t<int32_t, aiCableCar, class aiPath**, bool* const, int32_t*>>(
            0x5410E0, this, arg1, arg2, arg3);
    }

    // 0x5411F0 | ?CurrentRdVert@aiCableCar@@UAEHXZ
    inline int32_t CurrentRdVert() override
    {
        return stub<member_func_t<int32_t, aiCableCar>>(0x5411F0, this);
    }

    // 0x53FBD0 | ?Update@aiCableCar@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiCableCar>>(0x53FBD0, this);
    }

    // 0x53F990 | ?Reset@aiCableCar@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, aiCableCar>>(0x53F990, this);
    }

    // 0x5417D0 | ?Type@aiCableCar@@UAEHXZ
    inline int32_t Type() override
    {
        return stub<member_func_t<int32_t, aiCableCar>>(0x5417D0, this);
    }

    // 0x541860 | ?GetMatrix@aiCableCar@@UAEAAVMatrix34@@XZ
    inline class Matrix34& GetMatrix() override
    {
        return stub<member_func_t<class Matrix34&, aiCableCar>>(0x541860, this);
    }

    // 0x541800 | ?FrontBumperDistance@aiCableCar@@UAEMXZ
    inline float FrontBumperDistance() override
    {
        return stub<member_func_t<float, aiCableCar>>(0x541800, this);
    }

    // 0x541810 | ?BackBumperDistance@aiCableCar@@UAEMXZ
    inline float BackBumperDistance() override
    {
        return stub<member_func_t<float, aiCableCar>>(0x541810, this);
    }

    // 0x541820 | ?LSideDistance@aiCableCar@@UAEMXZ
    inline float LSideDistance() override
    {
        return stub<member_func_t<float, aiCableCar>>(0x541820, this);
    }

    // 0x541830 | ?RSideDistance@aiCableCar@@UAEMXZ
    inline float RSideDistance() override
    {
        return stub<member_func_t<float, aiCableCar>>(0x541830, this);
    }

    // 0x5417F0 | ?CurrentLane@aiCableCar@@UAEHXZ
    inline int32_t CurrentLane() override
    {
        return stub<member_func_t<int32_t, aiCableCar>>(0x5417F0, this);
    }

    // 0x541870 | ?CurrentRoadId@aiCableCar@@UAEHXZ
    inline int32_t CurrentRoadId() override
    {
        return stub<member_func_t<int32_t, aiCableCar>>(0x541870, this);
    }

    // 0x5415A0 | ?DrawId@aiCableCar@@UAEXXZ
    inline void DrawId() override
    {
        return stub<member_func_t<void, aiCableCar>>(0x5415A0, this);
    }
};

struct aiCableCarInstance : dgUnhitBangerInstance
{
public:
    // aiCableCarInstance::`vftable' @ 0x5B5658

    // 0x541650 | ?GetPosition@aiCableCarInstance@@UAEABVVector3@@XZ
    inline class Vector3 const& GetPosition() override
    {
        return stub<member_func_t<class Vector3 const&, aiCableCarInstance>>(0x541650, this);
    }

    // 0x5415B0 | ?GetMatrix@aiCableCarInstance@@UAEABVMatrix34@@AAV2@@Z
    inline class Matrix34 const& GetMatrix(class Matrix34& arg1) override
    {
        return stub<member_func_t<class Matrix34 const&, aiCableCarInstance, class Matrix34&>>(0x5415B0, this, arg1);
    }

    // 0x5415C0 | ?SetMatrix@aiCableCarInstance@@UAEXABVMatrix34@@@Z
    inline void SetMatrix(class Matrix34 const& arg1) override
    {
        return stub<member_func_t<void, aiCableCarInstance, class Matrix34 const&>>(0x5415C0, this, arg1);
    }

    // 0x5415E0 | ?GetVelocity@aiCableCarInstance@@UAEABVVector3@@XZ
    inline class Vector3 const& GetVelocity() override
    {
        return stub<member_func_t<class Vector3 const&, aiCableCarInstance>>(0x5415E0, this);
    }

    // 0x541680 | ?Draw@aiCableCarInstance@@UAEXH@Z
    inline void Draw(int32_t arg1) override
    {
        return stub<member_func_t<void, aiCableCarInstance, int32_t>>(0x541680, this, arg1);
    }

    // 0x541660 | ?SizeOf@aiCableCarInstance@@UAEIXZ
    inline uint32_t SizeOf() override
    {
        return stub<member_func_t<uint32_t, aiCableCarInstance>>(0x541660, this);
    }

    // 0x541670 | ?ImpactCB@aiCableCarInstance@@UAEXPAVdgHitBangerInstance@@@Z
    virtual inline void ImpactCB(class dgHitBangerInstance* arg1)
    {
        return stub<member_func_t<void, aiCableCarInstance, class dgHitBangerInstance*>>(0x541670, this, arg1);
    }
};
