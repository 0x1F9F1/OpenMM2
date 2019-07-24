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
    camera:povcs

    0x51D410 | public: __thiscall camPovCS::camPovCS(void) | ??0camPovCS@@QAE@XZ
    0x51D520 | public: virtual __thiscall camPovCS::~camPovCS(void) | ??1camPovCS@@UAE@XZ
    0x51D530 | public: virtual void __thiscall camPovCS::MakeActive(void) | ?MakeActive@camPovCS@@UAEXXZ
    0x51D540 | public: virtual void __thiscall camPovCS::Reset(void) | ?Reset@camPovCS@@UAEXXZ
    0x51D570 | public: virtual void __thiscall camPovCS::Update(void) | ?Update@camPovCS@@UAEXXZ
    0x51D590 | public: virtual void __thiscall camPovCS::UpdateInput(void) | ?UpdateInput@camPovCS@@UAEXXZ
    0x51D5A0 | private: void __thiscall camPovCS::UpdatePOV(void) | ?UpdatePOV@camPovCS@@AAEXXZ
    public: virtual void __thiscall camPovCS::AddWidgets(class bkBank &) | ?AddWidgets@camPovCS@@UAEXAAVbkBank@@@Z
    0x51D690 | public: virtual void __thiscall camPovCS::FileIO(class datParser &) | ?FileIO@camPovCS@@UAEXAAVdatParser@@@Z
    0x51D710 | public: virtual void __thiscall camPovCS::AfterLoad(void) | ?AfterLoad@camPovCS@@UAEXXZ
    public: virtual void * __thiscall camPovCS::`vector deleting destructor'(unsigned int) | ??_EcamPovCS@@UAEPAXI@Z
    0x51D720 | public: virtual void * __thiscall camPovCS::`scalar deleting destructor'(unsigned int) | ??_GcamPovCS@@UAEPAXI@Z
    0x51D750 | public: virtual void __thiscall camBaseCS::SetST(float *) | ?SetST@camBaseCS@@UAEXPAM@Z
    0x51D760 | public: virtual char * __thiscall camPovCS::GetClassName(void) | ?GetClassName@camPovCS@@UAEPADXZ
    0x5B4E80 | const camPovCS::`vftable' | ??_7camPovCS@@6B@
*/

struct camPovCS : camCarCS
{
public:
    // camPovCS::`vftable' @ 0x5B4E80

    // 0x51D410 | ??0camPovCS@@QAE@XZ
    inline camPovCS()
    {
        stub<member_func_t<void, camPovCS>>(0x51D410, this);
    }

    // 0x51D5A0 | ?UpdatePOV@camPovCS@@AAEXXZ
    inline void UpdatePOV()
    {
        return stub<member_func_t<void, camPovCS>>(0x51D5A0, this);
    }

    // 0x51D520 | ??1camPovCS@@UAE@XZ
    inline ~camPovCS() override
    {
        stub<member_func_t<void, camPovCS>>(0x51D520, this);
    }

    // 0x51D570 | ?Update@camPovCS@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, camPovCS>>(0x51D570, this);
    }

    // 0x51D540 | ?Reset@camPovCS@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, camPovCS>>(0x51D540, this);
    }

    // 0x51D690 | ?FileIO@camPovCS@@UAEXAAVdatParser@@@Z
    inline void FileIO(class datParser& arg1) override
    {
        return stub<member_func_t<void, camPovCS, class datParser&>>(0x51D690, this, arg1);
    }

    // 0x51D710 | ?AfterLoad@camPovCS@@UAEXXZ
    inline void AfterLoad() override
    {
        return stub<member_func_t<void, camPovCS>>(0x51D710, this);
    }

    // 0x51D760 | ?GetClassName@camPovCS@@UAEPADXZ
    inline char* GetClassName() override
    {
        return stub<member_func_t<char*, camPovCS>>(0x51D760, this);
    }

    // 0x51D530 | ?MakeActive@camPovCS@@UAEXXZ
    inline void MakeActive() override
    {
        return stub<member_func_t<void, camPovCS>>(0x51D530, this);
    }

    // 0x51D590 | ?UpdateInput@camPovCS@@UAEXXZ
    inline void UpdateInput() override
    {
        return stub<member_func_t<void, camPovCS>>(0x51D590, this);
    }
};
