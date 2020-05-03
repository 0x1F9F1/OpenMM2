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
    vehicle:gyro

    0x4D5B80 | public: __thiscall vehGyro::vehGyro(void) | ??0vehGyro@@QAE@XZ
    0x4D5BC0 | public: virtual char const * __thiscall vehGyro::GetDirName(void) | ?GetDirName@vehGyro@@UAEPBDXZ
    0x4D5BD0 | public: void __thiscall vehGyro::Init(class vehCarSim *,char const *) | ?Init@vehGyro@@QAEXPAVvehCarSim@@PBD@Z
    0x4D5C00 | public: virtual void __thiscall vehGyro::Update(void) | ?Update@vehGyro@@UAEXXZ
    public: virtual void __thiscall vehGyro::AddWidgets(class bkBank &) | ?AddWidgets@vehGyro@@UAEXAAVbkBank@@@Z
    0x4D5EE0 | public: virtual void __thiscall vehGyro::FileIO(class datParser &) | ?FileIO@vehGyro@@UAEXAAVdatParser@@@Z
    public: virtual void * __thiscall vehGyro::`vector deleting destructor'(unsigned int) | ??_EvehGyro@@UAEPAXI@Z
    0x4D5F60 | public: virtual void * __thiscall vehGyro::`scalar deleting destructor'(unsigned int) | ??_GvehGyro@@UAEPAXI@Z
    0x4D5F90 | public: virtual __thiscall vehGyro::~vehGyro(void) | ??1vehGyro@@UAE@XZ
    0x4D5FA0 | public: virtual char * __thiscall vehGyro::GetClassName(void) | ?GetClassName@vehGyro@@UAEPADXZ
    0x5B2E84 | const vehGyro::`vftable' | ??_7vehGyro@@6B@
*/

class vehGyro : public asNode
{
    // const vehGyro::`vftable' @ 0x5B2E84

public:
    // 0x4D5B80 | ??0vehGyro@@QAE@XZ
    vehGyro();

    // 0x4D5F60 | ??_GvehGyro@@UAEPAXI@Z
    // 0x4D5F90 | ??1vehGyro@@UAE@XZ
    ~vehGyro() override;

    // 0x4D5EE0 | ?FileIO@vehGyro@@UAEXAAVdatParser@@@Z
    void FileIO(class datParser& arg1) override;

    // 0x4D5FA0 | ?GetClassName@vehGyro@@UAEPADXZ
    char* GetClassName() override;

    // 0x4D5BC0 | ?GetDirName@vehGyro@@UAEPBDXZ
    char const* GetDirName() override;

    // 0x4D5BD0 | ?Init@vehGyro@@QAEXPAVvehCarSim@@PBD@Z
    void Init(class vehCarSim* arg1, char const* arg2);

    // 0x4D5C00 | ?Update@vehGyro@@UAEXXZ
    void Update() override;
};

check_size(vehGyro, 0x30);
