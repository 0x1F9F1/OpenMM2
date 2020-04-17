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
    vehicle:axle

    0x4D9990 | public: __thiscall vehAxle::vehAxle(void) | ??0vehAxle@@QAE@XZ
    0x4D9A20 | public: void __thiscall vehAxle::ComputeConstants(void) | ?ComputeConstants@vehAxle@@QAEXXZ
    0x4D9A50 | public: void __thiscall vehAxle::Init(class vehCarSim *,char const *,char const *,class vehWheel *,class vehWheel *) | ?Init@vehAxle@@QAEXPAVvehCarSim@@PBD1PAVvehWheel@@2@Z
    0x4D9B20 | public: virtual void __thiscall vehAxle::Update(void) | ?Update@vehAxle@@UAEXXZ
    public: virtual void __thiscall vehAxle::AddWidgets(class bkBank &) | ?AddWidgets@vehAxle@@UAEXAAVbkBank@@@Z
    0x4D9CA0 | public: virtual void __thiscall vehAxle::FileIO(class datParser &) | ?FileIO@vehAxle@@UAEXAAVdatParser@@@Z
    public: virtual void * __thiscall vehAxle::`vector deleting destructor'(unsigned int) | ??_EvehAxle@@UAEPAXI@Z
    0x4D9CF0 | public: virtual void * __thiscall vehAxle::`scalar deleting destructor'(unsigned int) | ??_GvehAxle@@UAEPAXI@Z
    0x4D9D20 | public: virtual char * __thiscall vehAxle::GetClassName(void) | ?GetClassName@vehAxle@@UAEPADXZ
    0x5B309C | const vehAxle::`vftable' | ??_7vehAxle@@6B@
*/

struct vehAxle : asNode
{
public:
    // vehAxle::`vftable' @ 0x5B309C

    // 0x4D9990 | ??0vehAxle@@QAE@XZ
    vehAxle()
    {
        stub<member_func_t<void, vehAxle>>(0x4D9990, this);
    }

    // 0x4D9A20 | ?ComputeConstants@vehAxle@@QAEXXZ
    void ComputeConstants()
    {
        return stub<member_func_t<void, vehAxle>>(0x4D9A20, this);
    }

    // 0x4D9A50 | ?Init@vehAxle@@QAEXPAVvehCarSim@@PBD1PAVvehWheel@@2@Z
    void Init(class vehCarSim* arg1, char const* arg2, char const* arg3, class vehWheel* arg4, class vehWheel* arg5)
    {
        return stub<
            member_func_t<void, vehAxle, class vehCarSim*, char const*, char const*, class vehWheel*, class vehWheel*>>(
            0x4D9A50, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x4CCEE0 | ??1vehAxle@@UAE@XZ
    ~vehAxle() override
    {
        stub<member_func_t<void, vehAxle>>(0x4CCEE0, this);
    }

    // 0x4D9B20 | ?Update@vehAxle@@UAEXXZ
    void Update() override
    {
        return stub<member_func_t<void, vehAxle>>(0x4D9B20, this);
    }

    // 0x4D9CA0 | ?FileIO@vehAxle@@UAEXAAVdatParser@@@Z
    void FileIO(class datParser& arg1) override
    {
        return stub<member_func_t<void, vehAxle, class datParser&>>(0x4D9CA0, this, arg1);
    }

    // 0x4D9D20 | ?GetClassName@vehAxle@@UAEPADXZ
    char* GetClassName() override
    {
        return stub<member_func_t<char*, vehAxle>>(0x4D9D20, this);
    }
};
