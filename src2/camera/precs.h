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
    camera:precs

    0x520430 | public: __thiscall camPreCS::camPreCS(void) | ??0camPreCS@@QAE@XZ
    0x520480 | public: void __thiscall camPreCS::Init(class vehCar *) | ?Init@camPreCS@@QAEXPAVvehCar@@@Z
    0x5204C0 | public: virtual void __thiscall camPreCS::Reset(void) | ?Reset@camPreCS@@UAEXXZ
    0x5204D0 | public: virtual void __thiscall camPreCS::MakeActive(void) | ?MakeActive@camPreCS@@UAEXXZ
    0x5204F0 | public: virtual void __thiscall camPreCS::Update(void) | ?Update@camPreCS@@UAEXXZ
    public: virtual void __thiscall camPreCS::AddWidgets(class bkBank &) | ?AddWidgets@camPreCS@@UAEXAAVbkBank@@@Z
    0x520550 | public: virtual void __thiscall camPreCS::FileIO(class datParser &) | ?FileIO@camPreCS@@UAEXAAVdatParser@@@Z
    public: virtual void * __thiscall camPreCS::`vector deleting destructor'(unsigned int) | ??_EcamPreCS@@UAEPAXI@Z
    0x5205D0 | public: virtual void * __thiscall camPreCS::`scalar deleting destructor'(unsigned int) | ??_GcamPreCS@@UAEPAXI@Z
    0x520600 | public: virtual char * __thiscall camPreCS::GetClassName(void) | ?GetClassName@camPreCS@@UAEPADXZ
    0x5B4F94 | const camPreCS::`vftable' | ??_7camPreCS@@6B@
*/

struct camPreCS : camCarCS
{
public:
    // camPreCS::`vftable' @ 0x5B4F94

    // 0x520430 | ??0camPreCS@@QAE@XZ
    inline camPreCS()
    {
        stub<member_func_t<void, camPreCS>>(0x520430, this);
    }

    // 0x520480 | ?Init@camPreCS@@QAEXPAVvehCar@@@Z
    inline void Init(class vehCar* arg1)
    {
        return stub<member_func_t<void, camPreCS, class vehCar*>>(0x520480, this, arg1);
    }

    // 0x406830 | ??1camPreCS@@UAE@XZ
    inline ~camPreCS() override
    {
        stub<member_func_t<void, camPreCS>>(0x406830, this);
    }

    // 0x5204F0 | ?Update@camPreCS@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, camPreCS>>(0x5204F0, this);
    }

    // 0x5204C0 | ?Reset@camPreCS@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, camPreCS>>(0x5204C0, this);
    }

    // 0x520550 | ?FileIO@camPreCS@@UAEXAAVdatParser@@@Z
    inline void FileIO(class datParser& arg1) override
    {
        return stub<member_func_t<void, camPreCS, class datParser&>>(0x520550, this, arg1);
    }

    // 0x520600 | ?GetClassName@camPreCS@@UAEPADXZ
    inline char* GetClassName() override
    {
        return stub<member_func_t<char*, camPreCS>>(0x520600, this);
    }

    // 0x5204D0 | ?MakeActive@camPreCS@@UAEXXZ
    inline void MakeActive() override
    {
        return stub<member_func_t<void, camPreCS>>(0x5204D0, this);
    }
};
