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
    phcollide:sleep

    public: static void __cdecl phSleep::InitArray(class phSleep * const,int) | ?InitArray@phSleep@@SAXQAV1@H@Z
    0x46C490 | public: __thiscall phSleep::phSleep(void) | ??0phSleep@@QAE@XZ
    0x46C4B0 | public: __thiscall phSleep::phSleep(class phInertialCS *,class phColliderBase *) | ??0phSleep@@QAE@PAVphInertialCS@@PAVphColliderBase@@@Z
    0x46C4E0 | public: __thiscall phSleep::~phSleep(void) | ??1phSleep@@QAE@XZ
    0x46C4F0 | public: void __thiscall phSleep::Init(class phInertialCS *,class phColliderBase *) | ?Init@phSleep@@QAEXPAVphInertialCS@@PAVphColliderBase@@@Z
    0x46C550 | public: void __thiscall phSleep::WakeUp(void) | ?WakeUp@phSleep@@QAEXXZ
    0x46C580 | public: void __thiscall phSleep::WakeUpNextTime(void) | ?WakeUpNextTime@phSleep@@QAEXXZ
    0x46C590 | public: void __thiscall phSleep::Reset(void) | ?Reset@phSleep@@QAEXXZ
    0x46C5A0 | public: void __thiscall phSleep::SendToSleep(void) | ?SendToSleep@phSleep@@QAEXXZ
    0x46C5E0 | public: void __thiscall phSleep::Update(void) | ?Update@phSleep@@QAEXXZ
    0x46C8D0 | public: void __thiscall phSleep::SetAsleepCB(class datCallback *) | ?SetAsleepCB@phSleep@@QAEXPAVdatCallback@@@Z
    0x46C8E0 | public: static void __cdecl phSleep::SmoothAngInertia(class phInertialCS &,float) | ?SmoothAngInertia@phSleep@@SAXAAVphInertialCS@@M@Z
    public: void __thiscall phSleep::AddWidgets(class bkBank *) | ?AddWidgets@phSleep@@QAEXPAVbkBank@@@Z
    0x46C990 | public: float __thiscall Vector3::Mag2(void) const | ?Mag2@Vector3@@QBEMXZ
    private: static float const phSleep::FadeFactor | ?FadeFactor@phSleep@@0MB
*/

class phSleep
{
public:
    // 0x403370 | ??_EphSleep@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)

    // 0x46C490 | ??0phSleep@@QAE@XZ
    inline phSleep()
    {
        stub<member_func_t<void, phSleep>>(0x46C490, this);
    }

    // 0x46C4B0 | ??0phSleep@@QAE@PAVphInertialCS@@PAVphColliderBase@@@Z
    inline phSleep(class phInertialCS* arg1, class phColliderBase* arg2)
    {
        stub<member_func_t<void, phSleep, class phInertialCS*, class phColliderBase*>>(0x46C4B0, this, arg1, arg2);
    }

    // 0x46C4E0 | ??1phSleep@@QAE@XZ
    inline ~phSleep()
    {
        stub<member_func_t<void, phSleep>>(0x46C4E0, this);
    }

    // 0x46C4F0 | ?Init@phSleep@@QAEXPAVphInertialCS@@PAVphColliderBase@@@Z
    inline void Init(class phInertialCS* arg1, class phColliderBase* arg2)
    {
        return stub<member_func_t<void, phSleep, class phInertialCS*, class phColliderBase*>>(
            0x46C4F0, this, arg1, arg2);
    }

    // 0x46C550 | ?WakeUp@phSleep@@QAEXXZ
    inline void WakeUp()
    {
        return stub<member_func_t<void, phSleep>>(0x46C550, this);
    }

    // 0x46C580 | ?WakeUpNextTime@phSleep@@QAEXXZ
    inline void WakeUpNextTime()
    {
        return stub<member_func_t<void, phSleep>>(0x46C580, this);
    }

    // 0x46C590 | ?Reset@phSleep@@QAEXXZ
    inline void Reset()
    {
        return stub<member_func_t<void, phSleep>>(0x46C590, this);
    }

    // 0x46C5A0 | ?SendToSleep@phSleep@@QAEXXZ
    inline void SendToSleep()
    {
        return stub<member_func_t<void, phSleep>>(0x46C5A0, this);
    }

    // 0x46C5E0 | ?Update@phSleep@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, phSleep>>(0x46C5E0, this);
    }

    // 0x46C8D0 | ?SetAsleepCB@phSleep@@QAEXPAVdatCallback@@@Z
    inline void SetAsleepCB(class datCallback* arg1)
    {
        return stub<member_func_t<void, phSleep, class datCallback*>>(0x46C8D0, this, arg1);
    }

    // 0x46C8E0 | ?SmoothAngInertia@phSleep@@SAXAAVphInertialCS@@M@Z
    static inline void SmoothAngInertia(class phInertialCS& arg1, f32 arg2)
    {
        return stub<cdecl_t<void, class phInertialCS&, f32>>(0x46C8E0, arg1, arg2);
    }
};
