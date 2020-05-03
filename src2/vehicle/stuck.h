/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 Brick

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

#include "node/node.h"

/*
    vehicle:stuck

    0x4D5FB0 | public: __thiscall vehStuck::vehStuck(void) | ??0vehStuck@@QAE@XZ
    0x4D6060 | public: virtual void __thiscall vehStuck::Reset(void) | ?Reset@vehStuck@@UAEXXZ
    0x4D6080 | public: virtual char const * __thiscall vehStuck::GetDirName(void) | ?GetDirName@vehStuck@@UAEPBDXZ
    0x4D6090 | public: void __thiscall vehStuck::Init(class vehCarSim *,char const *) | ?Init@vehStuck@@QAEXPAVvehCarSim@@PBD@Z
    0x4D60C0 | public: void __thiscall vehStuck::Impact(void) | ?Impact@vehStuck@@QAEXXZ
    0x4D6100 | public: int __thiscall vehStuck::Pegged(void) | ?Pegged@vehStuck@@QAEHXZ
    0x4D6140 | public: virtual void __thiscall vehStuck::Update(void) | ?Update@vehStuck@@UAEXXZ
    0x4D6510 | public: virtual void __thiscall vehStuck::FileIO(class datParser &) | ?FileIO@vehStuck@@UAEXAAVdatParser@@@Z
    public: virtual void __thiscall vehStuck::AddWidgets(class bkBank &) | ?AddWidgets@vehStuck@@UAEXAAVbkBank@@@Z
    0x4D65B0 | public: virtual void * __thiscall vehStuck::`scalar deleting destructor'(unsigned int) | ??_GvehStuck@@UAEPAXI@Z
    public: virtual void * __thiscall vehStuck::`vector deleting destructor'(unsigned int) | ??_EvehStuck@@UAEPAXI@Z
    0x4D65E0 | public: virtual __thiscall vehStuck::~vehStuck(void) | ??1vehStuck@@UAE@XZ
    0x4D65F0 | public: virtual char * __thiscall vehStuck::GetClassName(void) | ?GetClassName@vehStuck@@UAEPADXZ
    0x5B2EB8 | const vehStuck::`vftable' | ??_7vehStuck@@6B@
*/

class vehStuck : public asNode
{
    // const vehStuck::`vftable' @ 0x5B2EB8

public:
    // 0x4D5FB0 | ??0vehStuck@@QAE@XZ
    vehStuck();

    // 0x4D65B0 | ??_GvehStuck@@UAEPAXI@Z
    // 0x4D65E0 | ??1vehStuck@@UAE@XZ
    ~vehStuck() override;

    // 0x4D6510 | ?FileIO@vehStuck@@UAEXAAVdatParser@@@Z
    void FileIO(class datParser& arg1) override;

    // 0x4D65F0 | ?GetClassName@vehStuck@@UAEPADXZ
    char* GetClassName() override;

    // 0x4D6080 | ?GetDirName@vehStuck@@UAEPBDXZ
    char const* GetDirName() override;

    // 0x4D60C0 | ?Impact@vehStuck@@QAEXXZ
    void Impact();

    // 0x4D6090 | ?Init@vehStuck@@QAEXPAVvehCarSim@@PBD@Z
    void Init(class vehCarSim* arg1, char const* arg2);

    // 0x4D6100 | ?Pegged@vehStuck@@QAEHXZ
    i32 Pegged();

    // 0x4D6060 | ?Reset@vehStuck@@UAEXXZ
    void Reset() override;

    // 0x4D6140 | ?Update@vehStuck@@UAEXXZ
    void Update() override;
};

check_size(vehStuck, 0x54);
