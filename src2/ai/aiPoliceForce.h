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
    ai:aiPoliceForce

    0x550EC0 | public: __thiscall aiPoliceForce::aiPoliceForce(void) | ??0aiPoliceForce@@QAE@XZ
    0x550EE0 | public: __thiscall aiPoliceForce::~aiPoliceForce(void) | ??1aiPoliceForce@@QAE@XZ
    0x550EF0 | public: void __thiscall aiPoliceForce::Reset(void) | ?Reset@aiPoliceForce@@QAEXXZ
    0x550F30 | public: void __thiscall aiPoliceForce::Update(void) | ?Update@aiPoliceForce@@QAEXXZ
    0x550F40 | public: int __thiscall aiPoliceForce::Find(class vehCar *,class vehCar *) | ?Find@aiPoliceForce@@QAEHPAVvehCar@@0@Z
    0x550FA0 | public: int __thiscall aiPoliceForce::RegisterPerp(class vehCar *,class vehCar *) | ?RegisterPerp@aiPoliceForce@@QAEHPAVvehCar@@0@Z
    0x551040 | public: int __thiscall aiPoliceForce::UnRegisterCop(class vehCar *,class vehCar *) | ?UnRegisterCop@aiPoliceForce@@QAEHPAVvehCar@@0@Z
    0x551120 | public: int __thiscall aiPoliceForce::State(class vehCar *,class vehCar *,float) | ?State@aiPoliceForce@@QAEHPAVvehCar@@0M@Z
*/

struct aiPoliceForce
{
public:
    // 0x550EC0 | ??0aiPoliceForce@@QAE@XZ
    aiPoliceForce()
    {
        stub<member_func_t<void, aiPoliceForce>>(0x550EC0, this);
    }

    // 0x550EE0 | ??1aiPoliceForce@@QAE@XZ
    ~aiPoliceForce()
    {
        stub<member_func_t<void, aiPoliceForce>>(0x550EE0, this);
    }

    // 0x550EF0 | ?Reset@aiPoliceForce@@QAEXXZ
    void Reset()
    {
        return stub<member_func_t<void, aiPoliceForce>>(0x550EF0, this);
    }

    // 0x550F30 | ?Update@aiPoliceForce@@QAEXXZ
    void Update()
    {
        return stub<member_func_t<void, aiPoliceForce>>(0x550F30, this);
    }

    // 0x550F40 | ?Find@aiPoliceForce@@QAEHPAVvehCar@@0@Z
    i32 Find(class vehCar* arg1, class vehCar* arg2)
    {
        return stub<member_func_t<i32, aiPoliceForce, class vehCar*, class vehCar*>>(0x550F40, this, arg1, arg2);
    }

    // 0x550FA0 | ?RegisterPerp@aiPoliceForce@@QAEHPAVvehCar@@0@Z
    i32 RegisterPerp(class vehCar* arg1, class vehCar* arg2)
    {
        return stub<member_func_t<i32, aiPoliceForce, class vehCar*, class vehCar*>>(0x550FA0, this, arg1, arg2);
    }

    // 0x551040 | ?UnRegisterCop@aiPoliceForce@@QAEHPAVvehCar@@0@Z
    i32 UnRegisterCop(class vehCar* arg1, class vehCar* arg2)
    {
        return stub<member_func_t<i32, aiPoliceForce, class vehCar*, class vehCar*>>(0x551040, this, arg1, arg2);
    }

    // 0x551120 | ?State@aiPoliceForce@@QAEHPAVvehCar@@0M@Z
    i32 State(class vehCar* arg1, class vehCar* arg2, f32 arg3)
    {
        return stub<member_func_t<i32, aiPoliceForce, class vehCar*, class vehCar*, f32>>(
            0x551120, this, arg1, arg2, arg3);
    }
};
