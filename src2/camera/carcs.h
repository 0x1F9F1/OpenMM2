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
    camera:carcs

    0x521470 | public: __thiscall camCarCS::camCarCS(void) | ??0camCarCS@@QAE@XZ
    0x521490 | public: virtual __thiscall camCarCS::~camCarCS(void) | ??1camCarCS@@UAE@XZ
    0x5214A0 | public: void __thiscall camCarCS::Init(class vehCar *,char *) | ?Init@camCarCS@@QAEXPAVvehCar@@PAD@Z
    public: virtual void __thiscall camCarCS::AddWidgets(class bkBank &) | ?AddWidgets@camCarCS@@UAEXAAVbkBank@@@Z
    0x5214E0 | public: virtual void __thiscall camCarCS::FileIO(class datParser &) | ?FileIO@camCarCS@@UAEXAAVdatParser@@@Z
    public: virtual void * __thiscall camCarCS::`vector deleting destructor'(unsigned int) | ??_EcamCarCS@@UAEPAXI@Z
    0x5214F0 | public: virtual void * __thiscall camCarCS::`scalar deleting destructor'(unsigned int) | ??_GcamCarCS@@UAEPAXI@Z
    0x521520 | public: virtual void __thiscall camBaseCS::MakeActive(void) | ?MakeActive@camBaseCS@@UAEXXZ
    0x5B50A8 | const camCarCS::`vftable' | ??_7camCarCS@@6B@
*/

class camCarCS : camAppCS
{
public:
    // camCarCS::`vftable' @ 0x5B50A8

    // 0x521470 | ??0camCarCS@@QAE@XZ
    inline camCarCS()
    {
        stub<member_func_t<void, camCarCS>>(0x521470, this);
    }

    // 0x5214A0 | ?Init@camCarCS@@QAEXPAVvehCar@@PAD@Z
    inline void Init(class vehCar* arg1, char* arg2)
    {
        return stub<member_func_t<void, camCarCS, class vehCar*, char*>>(0x5214A0, this, arg1, arg2);
    }

    // 0x521490 | ??1camCarCS@@UAE@XZ
    inline ~camCarCS() override
    {
        stub<member_func_t<void, camCarCS>>(0x521490, this);
    }

    // 0x5214E0 | ?FileIO@camCarCS@@UAEXAAVdatParser@@@Z
    inline void FileIO(class datParser& arg1) override
    {
        return stub<member_func_t<void, camCarCS, class datParser&>>(0x5214E0, this, arg1);
    }
};
