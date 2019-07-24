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
    camera:appcs

    0x521F70 | public: __thiscall camAppCS::camAppCS(void) | ??0camAppCS@@QAE@XZ
    0x522050 | public: virtual __thiscall camAppCS::~camAppCS(void) | ??1camAppCS@@UAE@XZ
    0x522060 | protected: void __thiscall camAppCS::ApproachIt(void) | ?ApproachIt@camAppCS@@IAEXXZ
    0x522090 | private: void __thiscall camAppCS::UpdateApproach(void) | ?UpdateApproach@camAppCS@@AAEXXZ
    0x522650 | private: void __thiscall camAppCS::UpdateMaxDist(void) | ?UpdateMaxDist@camAppCS@@AAEXXZ
    0x522880 | private: int __thiscall camAppCS::DApproach(float &,float,float,float,float &,float) | ?DApproach@camAppCS@@AAEHAAMMMM0M@Z
    public: virtual void __thiscall camAppCS::AddWidgets(class bkBank &) | ?AddWidgets@camAppCS@@UAEXAAVbkBank@@@Z
    0x5229D0 | public: virtual void __thiscall camAppCS::FileIO(class datParser &) | ?FileIO@camAppCS@@UAEXAAVdatParser@@@Z
    0x522B50 | public: virtual void * __thiscall camAppCS::`scalar deleting destructor'(unsigned int) | ??_GcamAppCS@@UAEPAXI@Z
    public: virtual void * __thiscall camAppCS::`vector deleting destructor'(unsigned int) | ??_EcamAppCS@@UAEPAXI@Z
    0x522B80 | public: bool __thiscall Vector3::IsEqual(class Vector3 const &) const | ?IsEqual@Vector3@@QBE_NABV1@@Z
    0x5B5174 | const camAppCS::`vftable' | ??_7camAppCS@@6B@
*/

struct camAppCS : camBaseCS
{
public:
    // camAppCS::`vftable' @ 0x5B5174

    // 0x521F70 | ??0camAppCS@@QAE@XZ
    inline camAppCS()
    {
        stub<member_func_t<void, camAppCS>>(0x521F70, this);
    }

    // 0x522060 | ?ApproachIt@camAppCS@@IAEXXZ
    inline void ApproachIt()
    {
        return stub<member_func_t<void, camAppCS>>(0x522060, this);
    }

    // 0x522090 | ?UpdateApproach@camAppCS@@AAEXXZ
    inline void UpdateApproach()
    {
        return stub<member_func_t<void, camAppCS>>(0x522090, this);
    }

    // 0x522650 | ?UpdateMaxDist@camAppCS@@AAEXXZ
    inline void UpdateMaxDist()
    {
        return stub<member_func_t<void, camAppCS>>(0x522650, this);
    }

    // 0x522880 | ?DApproach@camAppCS@@AAEHAAMMMM0M@Z
    inline int32_t DApproach(float& arg1, float arg2, float arg3, float arg4, float& arg5, float arg6)
    {
        return stub<member_func_t<int32_t, camAppCS, float&, float, float, float, float&, float>>(
            0x522880, this, arg1, arg2, arg3, arg4, arg5, arg6);
    }

    // 0x522050 | ??1camAppCS@@UAE@XZ
    inline ~camAppCS() override
    {
        stub<member_func_t<void, camAppCS>>(0x522050, this);
    }

    // 0x5229D0 | ?FileIO@camAppCS@@UAEXAAVdatParser@@@Z
    inline void FileIO(class datParser& arg1) override
    {
        return stub<member_func_t<void, camAppCS, class datParser&>>(0x5229D0, this, arg1);
    }
};
