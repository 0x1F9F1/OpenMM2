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

struct vehGyro : asNode
{
public:
    // vehGyro::`vftable' @ 0x5B2E84

    // 0x4D5B80 | ??0vehGyro@@QAE@XZ
    inline vehGyro()
    {
        stub<member_func_t<void, vehGyro>>(0x4D5B80, this);
    }

    // 0x4D5BD0 | ?Init@vehGyro@@QAEXPAVvehCarSim@@PBD@Z
    inline void Init(class vehCarSim* arg1, char const* arg2)
    {
        return stub<member_func_t<void, vehGyro, class vehCarSim*, char const*>>(0x4D5BD0, this, arg1, arg2);
    }

    // 0x4D5F90 | ??1vehGyro@@UAE@XZ
    inline ~vehGyro() override
    {
        stub<member_func_t<void, vehGyro>>(0x4D5F90, this);
    }

    // 0x4D5C00 | ?Update@vehGyro@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, vehGyro>>(0x4D5C00, this);
    }

    // 0x4D5EE0 | ?FileIO@vehGyro@@UAEXAAVdatParser@@@Z
    inline void FileIO(class datParser& arg1) override
    {
        return stub<member_func_t<void, vehGyro, class datParser&>>(0x4D5EE0, this, arg1);
    }

    // 0x4D5FA0 | ?GetClassName@vehGyro@@UAEPADXZ
    inline char* GetClassName() override
    {
        return stub<member_func_t<char*, vehGyro>>(0x4D5FA0, this);
    }

    // 0x4D5BC0 | ?GetDirName@vehGyro@@UAEPBDXZ
    inline char const* GetDirName() override
    {
        return stub<member_func_t<char const*, vehGyro>>(0x4D5BC0, this);
    }
};
