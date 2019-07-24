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
    ai:aiVehicleAmbient

    0x551340 | public: __thiscall aiVehicleAmbient::aiVehicleAmbient(void) | ??0aiVehicleAmbient@@QAE@XZ
    0x551370 | public: __thiscall aiVehicleAmbient::~aiVehicleAmbient(void) | ??1aiVehicleAmbient@@QAE@XZ
    0x551380 | public: void __thiscall aiVehicleAmbient::Init(char *,int) | ?Init@aiVehicleAmbient@@QAEXPADH@Z
    0x551520 | public: virtual void __thiscall aiVehicleAmbient::Reset(void) | ?Reset@aiVehicleAmbient@@UAEXXZ
    0x551600 | public: virtual void __thiscall aiVehicleAmbient::Update(void) | ?Update@aiVehicleAmbient@@UAEXXZ
    0x551950 | public: virtual void __thiscall aiVehicleAmbient::ReplayDebug(void) | ?ReplayDebug@aiVehicleAmbient@@UAEXXZ
    0x5519C0 | public: virtual void __thiscall aiVehicleAmbient::Impact(int) | ?Impact@aiVehicleAmbient@@UAEXH@Z
    0x551A60 | public: virtual void __thiscall aiVehicleAmbient::DrawId(void) | ?DrawId@aiVehicleAmbient@@UAEXXZ
    0x551A70 | public: void __thiscall aiVehicleAmbient::DrawBBox(short) | ?DrawBBox@aiVehicleAmbient@@QAEXF@Z
    0x551A80 | public: void __thiscall aiVehicleAmbient::Dump(void) | ?Dump@aiVehicleAmbient@@QAEXXZ
    0x551BE0 | public: virtual int __thiscall aiVehicleSpline::CurrentLane(void) | ?CurrentLane@aiVehicleSpline@@UAEHXZ
    0x551BF0 | public: virtual int __thiscall aiVehicleSpline::CurrentRoadId(void) | ?CurrentRoadId@aiVehicleSpline@@UAEHXZ
    0x551C00 | public: virtual float __thiscall aiVehicleSpline::FrontBumperDistance(void) | ?FrontBumperDistance@aiVehicleSpline@@UAEMXZ
    0x551C10 | public: virtual float __thiscall aiVehicleSpline::BackBumperDistance(void) | ?BackBumperDistance@aiVehicleSpline@@UAEMXZ
    0x551C20 | public: virtual float __thiscall aiVehicleSpline::LSideDistance(void) | ?LSideDistance@aiVehicleSpline@@UAEMXZ
    0x551C30 | public: virtual float __thiscall aiVehicleSpline::RSideDistance(void) | ?RSideDistance@aiVehicleSpline@@UAEMXZ
    0x551C40 | public: virtual void __thiscall aiVehicleSpline::Position(class Vector3 &) | ?Position@aiVehicleSpline@@UAEXAAVVector3@@@Z
    0x551C70 | public: virtual float __thiscall aiVehicleSpline::Speed(void) | ?Speed@aiVehicleSpline@@UAEMXZ
    0x551C80 | public: virtual class Matrix34 & __thiscall aiVehicleSpline::GetMatrix(void) | ?GetMatrix@aiVehicleSpline@@UAEAAVMatrix34@@XZ
    0x551C90 | public: virtual class AudImpact * __thiscall aiVehicleSpline::GetAudImpactPtr(void) | ?GetAudImpactPtr@aiVehicleSpline@@UAEPAVAudImpact@@XZ
    0x551CA0 | public: virtual void __thiscall aiVehicleSpline::PlayHorn(float,float) | ?PlayHorn@aiVehicleSpline@@UAEXMM@Z
    0x551CB0 | public: virtual void __thiscall aiVehicleSpline::StopVoice(void) | ?StopVoice@aiVehicleSpline@@UAEXXZ
    0x551CC0 | public: virtual int __thiscall aiVehicleAmbient::Type(void) | ?Type@aiVehicleAmbient@@UAEHXZ
    0x5B589C | const aiVehicleAmbient::`vftable' | ??_7aiVehicleAmbient@@6B@
*/

class aiVehicleAmbient : aiVehicleSpline
{
public:
    // aiVehicleAmbient::`vftable' @ 0x5B589C

    // 0x53BCA0 | ??_EaiVehicleAmbient@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)

    // 0x551340 | ??0aiVehicleAmbient@@QAE@XZ
    inline aiVehicleAmbient()
    {
        stub<member_func_t<void, aiVehicleAmbient>>(0x551340, this);
    }

    // 0x551370 | ??1aiVehicleAmbient@@QAE@XZ
    inline ~aiVehicleAmbient()
    {
        stub<member_func_t<void, aiVehicleAmbient>>(0x551370, this);
    }

    // 0x551380 | ?Init@aiVehicleAmbient@@QAEXPADH@Z
    inline void Init(char* arg1, int32_t arg2)
    {
        return stub<member_func_t<void, aiVehicleAmbient, char*, int32_t>>(0x551380, this, arg1, arg2);
    }

    // 0x551A70 | ?DrawBBox@aiVehicleAmbient@@QAEXF@Z
    inline void DrawBBox(int16_t arg1)
    {
        return stub<member_func_t<void, aiVehicleAmbient, int16_t>>(0x551A70, this, arg1);
    }

    // 0x551A80 | ?Dump@aiVehicleAmbient@@QAEXXZ
    inline void Dump()
    {
        return stub<member_func_t<void, aiVehicleAmbient>>(0x551A80, this);
    }

    // 0x551600 | ?Update@aiVehicleAmbient@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, aiVehicleAmbient>>(0x551600, this);
    }

    // 0x551520 | ?Reset@aiVehicleAmbient@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, aiVehicleAmbient>>(0x551520, this);
    }

    // 0x551CC0 | ?Type@aiVehicleAmbient@@UAEHXZ
    inline int32_t Type() override
    {
        return stub<member_func_t<int32_t, aiVehicleAmbient>>(0x551CC0, this);
    }

    // 0x551A60 | ?DrawId@aiVehicleAmbient@@UAEXXZ
    inline void DrawId() override
    {
        return stub<member_func_t<void, aiVehicleAmbient>>(0x551A60, this);
    }

    // 0x551950 | ?ReplayDebug@aiVehicleAmbient@@UAEXXZ
    inline void ReplayDebug() override
    {
        return stub<member_func_t<void, aiVehicleAmbient>>(0x551950, this);
    }

    // 0x5519C0 | ?Impact@aiVehicleAmbient@@UAEXH@Z
    inline void Impact(int32_t arg1) override
    {
        return stub<member_func_t<void, aiVehicleAmbient, int32_t>>(0x5519C0, this, arg1);
    }
};
