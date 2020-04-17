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
    camera:postcs

    0x520110 | public: __thiscall camPostCS::camPostCS(void) | ??0camPostCS@@QAE@XZ
    0x520160 | public: void __thiscall camPostCS::Init(class vehCar *) | ?Init@camPostCS@@QAEXPAVvehCar@@@Z
    0x5201A0 | public: virtual void __thiscall camPostCS::Reset(void) | ?Reset@camPostCS@@UAEXXZ
    0x5201B0 | public: virtual void __thiscall camPostCS::MakeActive(void) | ?MakeActive@camPostCS@@UAEXXZ
    0x520210 | public: virtual void __thiscall camPostCS::Update(void) | ?Update@camPostCS@@UAEXXZ
    public: virtual void __thiscall camPostCS::AddWidgets(class bkBank &) | ?AddWidgets@camPostCS@@UAEXAAVbkBank@@@Z
    0x520340 | public: virtual void __thiscall camPostCS::FileIO(class datParser &) | ?FileIO@camPostCS@@UAEXAAVdatParser@@@Z
    public: virtual void * __thiscall camPostCS::`vector deleting destructor'(unsigned int) | ??_EcamPostCS@@UAEPAXI@Z
    0x5203E0 | public: virtual void * __thiscall camPostCS::`scalar deleting destructor'(unsigned int) | ??_GcamPostCS@@UAEPAXI@Z
    0x520410 | public: virtual void __thiscall camBaseCS::UpdateInput(void) | ?UpdateInput@camBaseCS@@UAEXXZ
    0x520420 | public: virtual char * __thiscall camPostCS::GetClassName(void) | ?GetClassName@camPostCS@@UAEPADXZ
    0x5B4F4C | const camPostCS::`vftable' | ??_7camPostCS@@6B@
*/

struct camPostCS : camCarCS
{
public:
    // camPostCS::`vftable' @ 0x5B4F4C

    // 0x520110 | ??0camPostCS@@QAE@XZ
    camPostCS()
    {
        stub<member_func_t<void, camPostCS>>(0x520110, this);
    }

    // 0x520160 | ?Init@camPostCS@@QAEXPAVvehCar@@@Z
    void Init(class vehCar* arg1)
    {
        return stub<member_func_t<void, camPostCS, class vehCar*>>(0x520160, this, arg1);
    }

    // 0x406840 | ??1camPostCS@@UAE@XZ
    ~camPostCS() override
    {
        stub<member_func_t<void, camPostCS>>(0x406840, this);
    }

    // 0x520210 | ?Update@camPostCS@@UAEXXZ
    void Update() override
    {
        return stub<member_func_t<void, camPostCS>>(0x520210, this);
    }

    // 0x5201A0 | ?Reset@camPostCS@@UAEXXZ
    void Reset() override
    {
        return stub<member_func_t<void, camPostCS>>(0x5201A0, this);
    }

    // 0x520340 | ?FileIO@camPostCS@@UAEXAAVdatParser@@@Z
    void FileIO(class datParser& arg1) override
    {
        return stub<member_func_t<void, camPostCS, class datParser&>>(0x520340, this, arg1);
    }

    // 0x520420 | ?GetClassName@camPostCS@@UAEPADXZ
    char* GetClassName() override
    {
        return stub<member_func_t<char*, camPostCS>>(0x520420, this);
    }

    // 0x5201B0 | ?MakeActive@camPostCS@@UAEXXZ
    void MakeActive() override
    {
        return stub<member_func_t<void, camPostCS>>(0x5201B0, this);
    }
};
