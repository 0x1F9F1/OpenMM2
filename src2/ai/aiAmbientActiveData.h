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
    ai:aiAmbientActiveData

    0x56F770 | public: __thiscall aiVehicleData::aiVehicleData(void) | ??0aiVehicleData@@QAE@XZ
    public: void __thiscall aiVehicleData::AddWidgets(class bkBank *) | ?AddWidgets@aiVehicleData@@QAEXPAVbkBank@@@Z
    0x56F790 | public: void __thiscall aiVehicleData::SetFricElas(void) | ?SetFricElas@aiVehicleData@@QAEXXZ
    0x56F7C0 | public: virtual void __thiscall aiVehicleData::FileIO(class datParser &) | ?FileIO@aiVehicleData@@UAEXAAVdatParser@@@Z
    public: virtual void * __thiscall aiVehicleData::`vector deleting destructor'(unsigned int) | ??_EaiVehicleData@@UAEPAXI@Z
    0x56F910 | public: virtual void * __thiscall aiVehicleData::`scalar deleting destructor'(unsigned int) | ??_GaiVehicleData@@UAEPAXI@Z
    0x56F940 | public: virtual char * __thiscall aiVehicleData::GetClassName(void) | ?GetClassName@aiVehicleData@@UAEPADXZ
    0x56F950 | public: virtual char const * __thiscall aiVehicleData::GetDirName(void) | ?GetDirName@aiVehicleData@@UAEPBDXZ
    0x5B5C20 | const aiVehicleData::`vftable' | ??_7aiVehicleData@@6B@
*/

class aiVehicleData : public asNode
{
    // const aiVehicleData::`vftable' @ 0x5B5C20

public:
    // 0x56F770 | ??0aiVehicleData@@QAE@XZ
    aiVehicleData();

    // 0x56F910 | ??_GaiVehicleData@@UAEPAXI@Z
    // 0x5543A0 | ??1aiVehicleData@@UAE@XZ
    ~aiVehicleData() override;

    // 0x56F7C0 | ?FileIO@aiVehicleData@@UAEXAAVdatParser@@@Z
    void FileIO(class datParser& arg1) override;

    // 0x56F940 | ?GetClassName@aiVehicleData@@UAEPADXZ
    char* GetClassName() override;

    // 0x56F950 | ?GetDirName@aiVehicleData@@UAEPBDXZ
    char const* GetDirName() override;

    // 0x56F790 | ?SetFricElas@aiVehicleData@@QAEXXZ
    void SetFricElas();
};

check_size(aiVehicleData, 0xBC);
