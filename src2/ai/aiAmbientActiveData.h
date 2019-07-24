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

class aiVehicleData : asNode
{
public:
    // aiVehicleData::`vftable' @ 0x5B5C20

    // 0x56F770 | ??0aiVehicleData@@QAE@XZ
    inline aiVehicleData()
    {
        stub<member_func_t<void, aiVehicleData>>(0x56F770, this);
    }

    // 0x56F790 | ?SetFricElas@aiVehicleData@@QAEXXZ
    inline void SetFricElas()
    {
        return stub<member_func_t<void, aiVehicleData>>(0x56F790, this);
    }

    // 0x5543A0 | ??1aiVehicleData@@UAE@XZ
    inline ~aiVehicleData() override
    {
        stub<member_func_t<void, aiVehicleData>>(0x5543A0, this);
    }

    // 0x56F7C0 | ?FileIO@aiVehicleData@@UAEXAAVdatParser@@@Z
    inline void FileIO(class datParser& arg1) override
    {
        return stub<member_func_t<void, aiVehicleData, class datParser&>>(0x56F7C0, this, arg1);
    }

    // 0x56F940 | ?GetClassName@aiVehicleData@@UAEPADXZ
    inline char* GetClassName() override
    {
        return stub<member_func_t<char*, aiVehicleData>>(0x56F940, this);
    }

    // 0x56F950 | ?GetDirName@aiVehicleData@@UAEPBDXZ
    inline char const* GetDirName() override
    {
        return stub<member_func_t<char const*, aiVehicleData>>(0x56F950, this);
    }
};
