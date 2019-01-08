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
    vehicle:surfaceaudio

    0x4DDE50 | public: __thiscall vehSurfaceAudio::vehSurfaceAudio(void) | ??0vehSurfaceAudio@@QAE@XZ
    0x4DDEF0 | public: virtual __thiscall vehSurfaceAudio::~vehSurfaceAudio(void) | ??1vehSurfaceAudio@@UAE@XZ
    0x4DDF50 | public: void __thiscall vehSurfaceAudio::SetDamagePtr(class vehCarDamage *) | ?SetDamagePtr@vehSurfaceAudio@@QAEXPAVvehCarDamage@@@Z
    0x4DDF60 | public: void __thiscall vehSurfaceAudio::SetWheelPointers(class vehWheel *,class vehWheel *,class vehWheel *,class vehWheel *) | ?SetWheelPointers@vehSurfaceAudio@@QAEXPAVvehWheel@@000@Z
    0x4DDFA0 | public: bool __thiscall vehSurfaceAudio::IsBrakeing(void) | ?IsBrakeing@vehSurfaceAudio@@QAE_NXZ
    0x4DDFD0 | public: void __thiscall vehSurfaceAudio::Update(class vehCarSim *,float,float) | ?Update@vehSurfaceAudio@@QAEXPAVvehCarSim@@MM@Z
    0x4DE030 | public: void __thiscall vehSurfaceAudio::Update(class vehCarSim *) | ?Update@vehSurfaceAudio@@QAEXPAVvehCarSim@@@Z
    0x4DE080 | public: void __thiscall vehSurfaceAudio::UpdateSurface(float) | ?UpdateSurface@vehSurfaceAudio@@QAEXM@Z
    0x4DE1A0 | public: void __thiscall vehSurfaceAudio::UpdateSurface(float,float,float) | ?UpdateSurface@vehSurfaceAudio@@QAEXMMM@Z
    0x4DE2C0 | public: void __thiscall vehSurfaceAudio::UpdateSkid(float) | ?UpdateSkid@vehSurfaceAudio@@QAEXM@Z
    0x4DE3F0 | public: void __thiscall vehSurfaceAudio::UpdateSkid(float,float,float) | ?UpdateSkid@vehSurfaceAudio@@QAEXMMM@Z
    0x4DE530 | public: int __thiscall vehSurfaceAudio::SurfaceChanged(void) | ?SurfaceChanged@vehSurfaceAudio@@QAEHXZ
    0x4DE560 | public: bool __thiscall vehSurfaceAudio::LoadCSV(char *,char *) | ?LoadCSV@vehSurfaceAudio@@QAE_NPAD0@Z
    public: void __thiscall vehSurfaceAudio::SaveCSV(void) | ?SaveCSV@vehSurfaceAudio@@QAEXXZ
    0x4DE730 | public: int __thiscall vehSurfaceAudio::LoadSuspension(char *,char *) | ?LoadSuspension@vehSurfaceAudio@@QAEHPAD0@Z
    0x4DE8C0 | public: void __thiscall vehSurfaceAudio::EchoOn(float) | ?EchoOn@vehSurfaceAudio@@QAEXM@Z
    0x4DE8F0 | public: void __thiscall vehSurfaceAudio::EchoOff(void) | ?EchoOff@vehSurfaceAudio@@QAEXXZ
    0x4DE920 | public: void __thiscall vehSurfaceAudio::SetPan(float) | ?SetPan@vehSurfaceAudio@@QAEXM@Z
    0x4DE960 | public: void __thiscall vehSurfaceAudio::StopSkid(void) | ?StopSkid@vehSurfaceAudio@@QAEXXZ
    0x4DE970 | public: void __thiscall vehSurfaceAudio::StopSurface(void) | ?StopSurface@vehSurfaceAudio@@QAEXXZ
    0x4DE980 | public: void __thiscall vehSurfaceAudio::AssignSounds(int) | ?AssignSounds@vehSurfaceAudio@@QAEXH@Z
    0x4DE9F0 | public: void __thiscall vehSurfaceAudio::UnAssignSounds(void) | ?UnAssignSounds@vehSurfaceAudio@@QAEXXZ
    0x4DEA30 | public: void __thiscall vehSurfaceAudio::UpdateSuspension(void) | ?UpdateSuspension@vehSurfaceAudio@@QAEXXZ
    0x4DEB10 | public: void __thiscall vehSurfaceAudio::UpdateSuspension(float,float) | ?UpdateSuspension@vehSurfaceAudio@@QAEXMM@Z
    0x4DEC10 | public: int __thiscall vehSurfaceAudio::LoadTireWobble(char *,char *) | ?LoadTireWobble@vehSurfaceAudio@@QAEHPAD0@Z
    0x4DED90 | public: void __thiscall vehSurfaceAudio::UpdateTireWobble(class vehCarSim *) | ?UpdateTireWobble@vehSurfaceAudio@@QAEXPAVvehCarSim@@@Z
    0x4DF020 | public: void __thiscall vehSurfaceAudio::UpdateTireWobble(class vehCarSim *,float,float) | ?UpdateTireWobble@vehSurfaceAudio@@QAEXPAVvehCarSim@@MM@Z
    0x4DF170 | public: void __thiscall vehSurfaceAudio::UpdateEcho(void) | ?UpdateEcho@vehSurfaceAudio@@QAEXXZ
    0x4DF180 | public: void __thiscall vehSurfaceAudio::UpdateAir(void) | ?UpdateAir@vehSurfaceAudio@@QAEXXZ
    0x4DF250 | public: void __thiscall vehSurfaceAudio::SetPositionPtr(class Vector3 *) | ?SetPositionPtr@vehSurfaceAudio@@QAEXPAVVector3@@@Z
    public: void __thiscall vehSurfaceAudio::AddWidgets(class bkBank &) | ?AddWidgets@vehSurfaceAudio@@QAEXAAVbkBank@@@Z
    public: virtual void * __thiscall vehSurfaceAudio::`vector deleting destructor'(unsigned int) | ??_EvehSurfaceAudio@@UAEPAXI@Z
    public: virtual void * __thiscall vehSurfaceAudio::`scalar deleting destructor'(unsigned int) | ??_GvehSurfaceAudio@@UAEPAXI@Z
    const vehSurfaceAudio::`vftable' | ??_7vehSurfaceAudio@@6B@
*/

#include "hooking.h"
