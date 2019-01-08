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

#include "hooking.h"
