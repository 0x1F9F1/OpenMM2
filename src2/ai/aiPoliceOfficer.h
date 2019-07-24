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
    ai:aiPoliceOfficer

    0x53D910 | public: __thiscall aiPoliceOfficer::aiPoliceOfficer(void) | ??0aiPoliceOfficer@@QAE@XZ
    0x53D920 | public: __thiscall aiPoliceOfficer::~aiPoliceOfficer(void) | ??1aiPoliceOfficer@@QAE@XZ
    0x53D930 | public: void __thiscall aiPoliceOfficer::Init(int) | ?Init@aiPoliceOfficer@@QAEXH@Z
    0x53DAA0 | public: void __thiscall aiPoliceOfficer::Reset(void) | ?Reset@aiPoliceOfficer@@QAEXXZ
    0x53DBF0 | public: void __thiscall aiPoliceOfficer::StartSiren(void) | ?StartSiren@aiPoliceOfficer@@QAEXXZ
    0x53DC40 | public: void __thiscall aiPoliceOfficer::StopSiren(void) | ?StopSiren@aiPoliceOfficer@@QAEXXZ
    0x53DC70 | public: void __thiscall aiPoliceOfficer::Update(void) | ?Update@aiPoliceOfficer@@QAEXXZ
    0x53DFD0 | private: void __thiscall aiPoliceOfficer::DetectPerpetrator(void) | ?DetectPerpetrator@aiPoliceOfficer@@AAEXXZ
    0x53E2A0 | private: int __thiscall aiPoliceOfficer::Fov(class vehCar *) | ?Fov@aiPoliceOfficer@@AAEHPAVvehCar@@@Z
    0x53E360 | private: int __thiscall aiPoliceOfficer::Speeding(class vehCar *) | ?Speeding@aiPoliceOfficer@@AAEHPAVvehCar@@@Z
    0x53E370 | private: int __thiscall aiPoliceOfficer::Collision(class vehCar *) | ?Collision@aiPoliceOfficer@@AAEHPAVvehCar@@@Z
    0x53E390 | private: int __thiscall aiPoliceOfficer::HitMe(class vehCar *) | ?HitMe@aiPoliceOfficer@@AAEHPAVvehCar@@@Z
    0x53E3B0 | private: int __thiscall aiPoliceOfficer::Stopped(class vehCar *) | ?Stopped@aiPoliceOfficer@@AAEHPAVvehCar@@@Z
    0x53E3E0 | private: int __thiscall aiPoliceOfficer::IsPerpACop(class vehCar *) | ?IsPerpACop@aiPoliceOfficer@@AAEHPAVvehCar@@@Z
    0x53E3F0 | private: int __thiscall aiPoliceOfficer::OffRoad(class vehCar *) | ?OffRoad@aiPoliceOfficer@@AAEHPAVvehCar@@@Z
    0x53E400 | public: int __thiscall aiPoliceOfficer::InPersuit(void) | ?InPersuit@aiPoliceOfficer@@QAEHXZ
    0x53E410 | private: void __thiscall aiPoliceOfficer::FollowPerpetrator(void) | ?FollowPerpetrator@aiPoliceOfficer@@AAEXXZ
    0x53E580 | private: void __thiscall aiPoliceOfficer::ApprehendPerpetrator(void) | ?ApprehendPerpetrator@aiPoliceOfficer@@AAEXXZ
    0x53E700 | private: void __thiscall aiPoliceOfficer::Barricade(void) | ?Barricade@aiPoliceOfficer@@AAEXXZ
    0x53E710 | private: void __thiscall aiPoliceOfficer::Push(void) | ?Push@aiPoliceOfficer@@AAEXXZ
    0x53EA60 | private: void __thiscall aiPoliceOfficer::Block(void) | ?Block@aiPoliceOfficer@@AAEXXZ
    0x53F170 | public: void __thiscall aiPoliceOfficer::PerpEscapes(bool) | ?PerpEscapes@aiPoliceOfficer@@QAEX_N@Z
    0x53F1E0 | public: void __thiscall aiPoliceOfficer::DrawId(void) | ?DrawId@aiPoliceOfficer@@QAEXXZ
    0x53F1F0 | public: void __thiscall aiPoliceOfficer::DrawRouteThroughTraffic(void) | ?DrawRouteThroughTraffic@aiPoliceOfficer@@QAEXXZ
    public: void __thiscall aiPoliceOfficer::AddWidgets(class bkBank *) | ?AddWidgets@aiPoliceOfficer@@QAEXPAVbkBank@@@Z
*/

class aiPoliceOfficer
{
public:
    // 0x53BD00 | ??_EaiPoliceOfficer@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)

    // 0x53D910 | ??0aiPoliceOfficer@@QAE@XZ
    inline aiPoliceOfficer()
    {
        stub<member_func_t<void, aiPoliceOfficer>>(0x53D910, this);
    }

    // 0x53D920 | ??1aiPoliceOfficer@@QAE@XZ
    inline ~aiPoliceOfficer()
    {
        stub<member_func_t<void, aiPoliceOfficer>>(0x53D920, this);
    }

    // 0x53D930 | ?Init@aiPoliceOfficer@@QAEXH@Z
    inline void Init(int32_t arg1)
    {
        return stub<member_func_t<void, aiPoliceOfficer, int32_t>>(0x53D930, this, arg1);
    }

    // 0x53DAA0 | ?Reset@aiPoliceOfficer@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, aiPoliceOfficer>>(0x53DAA0, this);
    }

    // 0x53DBF0 | ?StartSiren@aiPoliceOfficer@@QAEXXZ
    inline void StartSiren()
    {
        return stub<member_func_t<void, aiPoliceOfficer>>(0x53DBF0, this);
    }

    // 0x53DC40 | ?StopSiren@aiPoliceOfficer@@QAEXXZ
    inline void StopSiren()
    {
        return stub<member_func_t<void, aiPoliceOfficer>>(0x53DC40, this);
    }

    // 0x53DC70 | ?Update@aiPoliceOfficer@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, aiPoliceOfficer>>(0x53DC70, this);
    }

    // 0x53DFD0 | ?DetectPerpetrator@aiPoliceOfficer@@AAEXXZ
    inline void DetectPerpetrator()
    {
        return stub<member_func_t<void, aiPoliceOfficer>>(0x53DFD0, this);
    }

    // 0x53E2A0 | ?Fov@aiPoliceOfficer@@AAEHPAVvehCar@@@Z
    inline int32_t Fov(class vehCar* arg1)
    {
        return stub<member_func_t<int32_t, aiPoliceOfficer, class vehCar*>>(0x53E2A0, this, arg1);
    }

    // 0x53E360 | ?Speeding@aiPoliceOfficer@@AAEHPAVvehCar@@@Z
    inline int32_t Speeding(class vehCar* arg1)
    {
        return stub<member_func_t<int32_t, aiPoliceOfficer, class vehCar*>>(0x53E360, this, arg1);
    }

    // 0x53E370 | ?Collision@aiPoliceOfficer@@AAEHPAVvehCar@@@Z
    inline int32_t Collision(class vehCar* arg1)
    {
        return stub<member_func_t<int32_t, aiPoliceOfficer, class vehCar*>>(0x53E370, this, arg1);
    }

    // 0x53E390 | ?HitMe@aiPoliceOfficer@@AAEHPAVvehCar@@@Z
    inline int32_t HitMe(class vehCar* arg1)
    {
        return stub<member_func_t<int32_t, aiPoliceOfficer, class vehCar*>>(0x53E390, this, arg1);
    }

    // 0x53E3B0 | ?Stopped@aiPoliceOfficer@@AAEHPAVvehCar@@@Z
    inline int32_t Stopped(class vehCar* arg1)
    {
        return stub<member_func_t<int32_t, aiPoliceOfficer, class vehCar*>>(0x53E3B0, this, arg1);
    }

    // 0x53E3E0 | ?IsPerpACop@aiPoliceOfficer@@AAEHPAVvehCar@@@Z
    inline int32_t IsPerpACop(class vehCar* arg1)
    {
        return stub<member_func_t<int32_t, aiPoliceOfficer, class vehCar*>>(0x53E3E0, this, arg1);
    }

    // 0x53E3F0 | ?OffRoad@aiPoliceOfficer@@AAEHPAVvehCar@@@Z
    inline int32_t OffRoad(class vehCar* arg1)
    {
        return stub<member_func_t<int32_t, aiPoliceOfficer, class vehCar*>>(0x53E3F0, this, arg1);
    }

    // 0x53E400 | ?InPersuit@aiPoliceOfficer@@QAEHXZ
    inline int32_t InPersuit()
    {
        return stub<member_func_t<int32_t, aiPoliceOfficer>>(0x53E400, this);
    }

    // 0x53E410 | ?FollowPerpetrator@aiPoliceOfficer@@AAEXXZ
    inline void FollowPerpetrator()
    {
        return stub<member_func_t<void, aiPoliceOfficer>>(0x53E410, this);
    }

    // 0x53E580 | ?ApprehendPerpetrator@aiPoliceOfficer@@AAEXXZ
    inline void ApprehendPerpetrator()
    {
        return stub<member_func_t<void, aiPoliceOfficer>>(0x53E580, this);
    }

    // 0x53E700 | ?Barricade@aiPoliceOfficer@@AAEXXZ
    inline void Barricade()
    {
        return stub<member_func_t<void, aiPoliceOfficer>>(0x53E700, this);
    }

    // 0x53E710 | ?Push@aiPoliceOfficer@@AAEXXZ
    inline void Push()
    {
        return stub<member_func_t<void, aiPoliceOfficer>>(0x53E710, this);
    }

    // 0x53EA60 | ?Block@aiPoliceOfficer@@AAEXXZ
    inline void Block()
    {
        return stub<member_func_t<void, aiPoliceOfficer>>(0x53EA60, this);
    }

    // 0x53F170 | ?PerpEscapes@aiPoliceOfficer@@QAEX_N@Z
    inline void PerpEscapes(bool arg1)
    {
        return stub<member_func_t<void, aiPoliceOfficer, bool>>(0x53F170, this, arg1);
    }

    // 0x53F1E0 | ?DrawId@aiPoliceOfficer@@QAEXXZ
    inline void DrawId()
    {
        return stub<member_func_t<void, aiPoliceOfficer>>(0x53F1E0, this);
    }

    // 0x53F1F0 | ?DrawRouteThroughTraffic@aiPoliceOfficer@@QAEXXZ
    inline void DrawRouteThroughTraffic()
    {
        return stub<member_func_t<void, aiPoliceOfficer>>(0x53F1F0, this);
    }
};
