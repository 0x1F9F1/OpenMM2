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
    ai:aiVehicleSpline

    0x567DF0 | public: __thiscall aiVehicleSpline::aiVehicleSpline(void) | ??0aiVehicleSpline@@QAE@XZ
    0x567EB0 | public: __thiscall aiVehicleSpline::~aiVehicleSpline(void) | ??1aiVehicleSpline@@QAE@XZ
    0x567F30 | public: void __thiscall aiVehicleSpline::Init(char *,int) | ?Init@aiVehicleSpline@@QAEXPADH@Z
    0x568050 | public: virtual void __thiscall aiVehicleSpline::Reset(void) | ?Reset@aiVehicleSpline@@UAEXXZ
    0x568100 | public: virtual void __thiscall aiVehicleSpline::Update(void) | ?Update@aiVehicleSpline@@UAEXXZ
    0x568180 | public: void __thiscall aiVehicleSpline::ResetReactTicks(void) | ?ResetReactTicks@aiVehicleSpline@@QAEXXZ
    0x5681C0 | public: virtual int __thiscall aiVehicleSpline::CurrentRoadIdx(class aiPath * *,bool * const,int *) | ?CurrentRoadIdx@aiVehicleSpline@@UAEHPAPAVaiPath@@QA_NPAH@Z
    0x5683F0 | public: virtual int __thiscall aiVehicleSpline::CurrentRdVert(void) | ?CurrentRdVert@aiVehicleSpline@@UAEHXZ
    0x568410 | public: void __thiscall aiVehicleSpline::UpdateObstacleMap(void) | ?UpdateObstacleMap@aiVehicleSpline@@QAEXXZ
    protected: int __thiscall aiVehicleSpline::CheckData(void) | ?CheckData@aiVehicleSpline@@IAEHXZ
    protected: void __thiscall aiVehicleSpline::CheckPosition(void) | ?CheckPosition@aiVehicleSpline@@IAEXXZ
    public: void __thiscall aiVehicleSpline::SolvePositionAndOrientation(void) | ?SolvePositionAndOrientation@aiVehicleSpline@@QAEXXZ
    public: void __thiscall aiVehicleSpline::SolveYPositionAndOrientation(void) | ?SolveYPositionAndOrientation@aiVehicleSpline@@QAEXXZ
    0x5696B0 | public: int __thiscall aiVehicleSpline::DetectPlayerForwardCollision(int) | ?DetectPlayerForwardCollision@aiVehicleSpline@@QAEHH@Z
    0x5697B0 | public: int __thiscall aiVehicleSpline::DetectPlayerTargetPtCollision(int) | ?DetectPlayerTargetPtCollision@aiVehicleSpline@@QAEHH@Z
    0x569930 | public: int __thiscall aiVehicleSpline::DetectPlayerCollision(int) | ?DetectPlayerCollision@aiVehicleSpline@@QAEHH@Z
    0x569AC0 | public: int __thiscall aiVehicleSpline::DetectPlayerZoneCollision(int) | ?DetectPlayerZoneCollision@aiVehicleSpline@@QAEHH@Z
    0x569CB0 | public: int __thiscall aiVehicleSpline::IsThePlayerInFrontOfMe(int) | ?IsThePlayerInFrontOfMe@aiVehicleSpline@@QAEHH@Z
    0x569DD0 | public: int __thiscall aiVehicleSpline::IsAmbientBlockingPlayer(int) | ?IsAmbientBlockingPlayer@aiVehicleSpline@@QAEHH@Z
    0x569EC0 | public: void __thiscall aiVehicleSpline::AvoidPlayerCollision(int) | ?AvoidPlayerCollision@aiVehicleSpline@@QAEXH@Z
    0x569F70 | public: virtual int __thiscall aiVehicleSpline::InAccident(void) | ?InAccident@aiVehicleSpline@@UAEHXZ
    0x569F80 | public: int __thiscall aiVehicleSpline::WaitTime(void) | ?WaitTime@aiVehicleSpline@@QAEHXZ
    0x569FA0 | public: float __thiscall aiVehicleSpline::TotLength(void) | ?TotLength@aiVehicleSpline@@QAEMXZ
    0x569FB0 | public: virtual void __thiscall aiVehicleSpline::Impact(int) | ?Impact@aiVehicleSpline@@UAEXH@Z
    0x569FC0 | public: float __thiscall aiVehicleSpline::DistanceToVehicle(class aiVehicleSpline *) | ?DistanceToVehicle@aiVehicleSpline@@QAEMPAV1@@Z
    0x56A2C0 | public: float __thiscall aiVehicleSpline::DistanceToIntersection(void) | ?DistanceToIntersection@aiVehicleSpline@@QAEMXZ
    0x56A360 | public: void __thiscall aiVehicleSpline::Dump(void) | ?Dump@aiVehicleSpline@@QAEXXZ
    public: void __thiscall aiVehicleSpline::AddWidgets(class bkBank *) | ?AddWidgets@aiVehicleSpline@@QAEXPAVbkBank@@@Z
    0x56A4F0 | public: virtual void __thiscall aiVehicleSpline::DrawId(void) | ?DrawId@aiVehicleSpline@@UAEXXZ
    0x56A500 | public: virtual void __thiscall aiVehicleSpline::ReplayDebug(void) | ?ReplayDebug@aiVehicleSpline@@UAEXXZ
    0x56A700 | public: virtual int __thiscall aiVehicleSpline::Type(void) | ?Type@aiVehicleSpline@@UAEHXZ
    0x5B5B1C | const aiVehicleSpline::`vftable' | ??_7aiVehicleSpline@@6B@
*/

class aiVehicleSpline : aiVehicle
{
public:
    // aiVehicleSpline::`vftable' @ 0x5B5B1C

    // 0x567DF0 | ??0aiVehicleSpline@@QAE@XZ
    inline aiVehicleSpline()
    {
        stub<member_func_t<void, aiVehicleSpline>>(0x567DF0, this);
    }

    // 0x567EB0 | ??1aiVehicleSpline@@QAE@XZ
    inline ~aiVehicleSpline()
    {
        stub<member_func_t<void, aiVehicleSpline>>(0x567EB0, this);
    }

    // 0x567F30 | ?Init@aiVehicleSpline@@QAEXPADH@Z
    inline void Init(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, aiVehicleSpline, char*, int32_t>>(0x567F30, this, arg1, arg2);
    }

    // 0x568180 | ?ResetReactTicks@aiVehicleSpline@@QAEXXZ
    inline void ResetReactTicks()
    {
        return stub<member_func_t<void, aiVehicleSpline>>(0x568180, this);
    }

    // 0x568410 | ?UpdateObstacleMap@aiVehicleSpline@@QAEXXZ
    inline void UpdateObstacleMap()
    {
        return stub<member_func_t<void, aiVehicleSpline>>(0x568410, this);
    }

    // 0x5696B0 | ?DetectPlayerForwardCollision@aiVehicleSpline@@QAEHH@Z
    inline int32_t DetectPlayerForwardCollision(int32_t arg1)
    {
        return stub<member_func_t<int32_t, aiVehicleSpline, int32_t>>(0x5696B0, this, arg1);
    }

    // 0x5697B0 | ?DetectPlayerTargetPtCollision@aiVehicleSpline@@QAEHH@Z
    inline int32_t DetectPlayerTargetPtCollision(int32_t arg1)
    {
        return stub<member_func_t<int32_t, aiVehicleSpline, int32_t>>(0x5697B0, this, arg1);
    }

    // 0x569930 | ?DetectPlayerCollision@aiVehicleSpline@@QAEHH@Z
    inline int32_t DetectPlayerCollision(int32_t arg1)
    {
        return stub<member_func_t<int32_t, aiVehicleSpline, int32_t>>(0x569930, this, arg1);
    }

    // 0x569AC0 | ?DetectPlayerZoneCollision@aiVehicleSpline@@QAEHH@Z
    inline int32_t DetectPlayerZoneCollision(int32_t arg1)
    {
        return stub<member_func_t<int32_t, aiVehicleSpline, int32_t>>(0x569AC0, this, arg1);
    }

    // 0x569CB0 | ?IsThePlayerInFrontOfMe@aiVehicleSpline@@QAEHH@Z
    inline int32_t IsThePlayerInFrontOfMe(int32_t arg1)
    {
        return stub<member_func_t<int32_t, aiVehicleSpline, int32_t>>(0x569CB0, this, arg1);
    }

    // 0x569DD0 | ?IsAmbientBlockingPlayer@aiVehicleSpline@@QAEHH@Z
    inline int32_t IsAmbientBlockingPlayer(int32_t arg1)
    {
        return stub<member_func_t<int32_t, aiVehicleSpline, int32_t>>(0x569DD0, this, arg1);
    }

    // 0x569EC0 | ?AvoidPlayerCollision@aiVehicleSpline@@QAEXH@Z
    inline void AvoidPlayerCollision(int32_t arg1)
    {
        return stub<member_func_t<void, aiVehicleSpline, int32_t>>(0x569EC0, this, arg1);
    }

    // 0x569F80 | ?WaitTime@aiVehicleSpline@@QAEHXZ
    inline int32_t WaitTime()
    {
        return stub<member_func_t<int32_t, aiVehicleSpline>>(0x569F80, this);
    }

    // 0x569FA0 | ?TotLength@aiVehicleSpline@@QAEMXZ
    inline float TotLength()
    {
        return stub<member_func_t<float, aiVehicleSpline>>(0x569FA0, this);
    }

    // 0x569FC0 | ?DistanceToVehicle@aiVehicleSpline@@QAEMPAV1@@Z
    inline float DistanceToVehicle(class aiVehicleSpline* arg1)
    {
        return stub<member_func_t<float, aiVehicleSpline, class aiVehicleSpline*>>(0x569FC0, this, arg1);
    }

    // 0x56A2C0 | ?DistanceToIntersection@aiVehicleSpline@@QAEMXZ
    inline float DistanceToIntersection()
    {
        return stub<member_func_t<float, aiVehicleSpline>>(0x56A2C0, this);
    }

    // 0x56A360 | ?Dump@aiVehicleSpline@@QAEXXZ
    inline void Dump()
    {
        return stub<member_func_t<void, aiVehicleSpline>>(0x56A360, this);
    }

    // 0x569F70 | ?InAccident@aiVehicleSpline@@UAEHXZ
    inline int32_t InAccident() override
    {
        return stub<member_func_t<int32_t, aiVehicleSpline>>(0x569F70, this);
    }

    // 0x551C40 | ?Position@aiVehicleSpline@@UAEXAAVVector3@@@Z
    inline void Position(class Vector3& arg1) override
    {
        return stub<member_func_t<void, aiVehicleSpline, class Vector3&>>(0x551C40, this, arg1);
    }

    // 0x551C70 | ?Speed@aiVehicleSpline@@UAEMXZ
    inline float Speed() override
    {
        return stub<member_func_t<float, aiVehicleSpline>>(0x551C70, this);
    }

    // 0x5681C0 | ?CurrentRoadIdx@aiVehicleSpline@@UAEHPAPAVaiPath@@QA_NPAH@Z
    inline int32_t CurrentRoadIdx(class aiPath** arg1, bool* const arg2, int32_t* arg3) override
    {
        return stub<member_func_t<int32_t, aiVehicleSpline, class aiPath**, bool* const, int32_t*>>(
            0x5681C0, this, arg1, arg2, arg3);
    }

    // 0x5683F0 | ?CurrentRdVert@aiVehicleSpline@@UAEHXZ
    inline int32_t CurrentRdVert() override
    {
        return stub<member_func_t<int32_t, aiVehicleSpline>>(0x5683F0, this);
    }

    // 0x568100 | ?Update@aiVehicleSpline@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiVehicleSpline>>(0x568100, this);
    }

    // 0x568050 | ?Reset@aiVehicleSpline@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, aiVehicleSpline>>(0x568050, this);
    }

    // 0x56A700 | ?Type@aiVehicleSpline@@UAEHXZ
    inline int32_t Type() override
    {
        return stub<member_func_t<int32_t, aiVehicleSpline>>(0x56A700, this);
    }

    // 0x551C80 | ?GetMatrix@aiVehicleSpline@@UAEAAVMatrix34@@XZ
    inline class Matrix34& GetMatrix() override
    {
        return stub<member_func_t<class Matrix34&, aiVehicleSpline>>(0x551C80, this);
    }

    // 0x551C00 | ?FrontBumperDistance@aiVehicleSpline@@UAEMXZ
    inline float FrontBumperDistance() override
    {
        return stub<member_func_t<float, aiVehicleSpline>>(0x551C00, this);
    }

    // 0x551C10 | ?BackBumperDistance@aiVehicleSpline@@UAEMXZ
    inline float BackBumperDistance() override
    {
        return stub<member_func_t<float, aiVehicleSpline>>(0x551C10, this);
    }

    // 0x551C20 | ?LSideDistance@aiVehicleSpline@@UAEMXZ
    inline float LSideDistance() override
    {
        return stub<member_func_t<float, aiVehicleSpline>>(0x551C20, this);
    }

    // 0x551C30 | ?RSideDistance@aiVehicleSpline@@UAEMXZ
    inline float RSideDistance() override
    {
        return stub<member_func_t<float, aiVehicleSpline>>(0x551C30, this);
    }

    // 0x551BE0 | ?CurrentLane@aiVehicleSpline@@UAEHXZ
    inline int32_t CurrentLane() override
    {
        return stub<member_func_t<int32_t, aiVehicleSpline>>(0x551BE0, this);
    }

    // 0x551BF0 | ?CurrentRoadId@aiVehicleSpline@@UAEHXZ
    inline int32_t CurrentRoadId() override
    {
        return stub<member_func_t<int32_t, aiVehicleSpline>>(0x551BF0, this);
    }

    // 0x56A4F0 | ?DrawId@aiVehicleSpline@@UAEXXZ
    inline void DrawId() override
    {
        return stub<member_func_t<void, aiVehicleSpline>>(0x56A4F0, this);
    }

    // 0x56A500 | ?ReplayDebug@aiVehicleSpline@@UAEXXZ
    inline void ReplayDebug() override
    {
        return stub<member_func_t<void, aiVehicleSpline>>(0x56A500, this);
    }

    // 0x569FB0 | ?Impact@aiVehicleSpline@@UAEXH@Z
    virtual inline void Impact(int32_t arg1)
    {
        return stub<member_func_t<void, aiVehicleSpline, int32_t>>(0x569FB0, this, arg1);
    }

    // 0x551C90 | ?GetAudImpactPtr@aiVehicleSpline@@UAEPAVAudImpact@@XZ
    virtual inline class AudImpact* GetAudImpactPtr()
    {
        return stub<member_func_t<class AudImpact*, aiVehicleSpline>>(0x551C90, this);
    }

    // 0x551CA0 | ?PlayHorn@aiVehicleSpline@@UAEXMM@Z
    virtual inline void PlayHorn(float arg1, float arg2)
    {
        return stub<member_func_t<void, aiVehicleSpline, float, float>>(0x551CA0, this, arg1, arg2);
    }

    // 0x551CB0 | ?StopVoice@aiVehicleSpline@@UAEXXZ
    virtual inline void StopVoice()
    {
        return stub<member_func_t<void, aiVehicleSpline>>(0x551CB0, this);
    }
};
