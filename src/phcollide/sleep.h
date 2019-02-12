/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
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

// #include "hooking.h"
