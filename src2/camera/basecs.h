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
    camera:basecs

    0x521D60 | public: __thiscall camBaseCS::camBaseCS(void) | ??0camBaseCS@@QAE@XZ
    0x521DF0 | public: virtual __thiscall camBaseCS::~camBaseCS(void) | ??1camBaseCS@@UAE@XZ
    0x521E00 | public: virtual char const * __thiscall camBaseCS::GetDirName(void) | ?GetDirName@camBaseCS@@UAEPBDXZ
    0x521E10 | public: int __thiscall camBaseCS::IsViewCSInTransition(void) | ?IsViewCSInTransition@camBaseCS@@QAEHXZ
    0x521E30 | public: void __thiscall camBaseCS::UpdateView(void) | ?UpdateView@camBaseCS@@QAEXXZ
    public: virtual void __thiscall camBaseCS::AddWidgets(class bkBank &) | ?AddWidgets@camBaseCS@@UAEXAAVbkBank@@@Z
    0x521E60 | public: virtual void __thiscall camBaseCS::ForceMatrixDelta(class Vector3 const &) | ?ForceMatrixDelta@camBaseCS@@UAEXABVVector3@@@Z
    0x521EA0 | public: virtual void __thiscall camBaseCS::FileIO(class datParser &) | ?FileIO@camBaseCS@@UAEXAAVdatParser@@@Z
    0x521F30 | public: virtual void __thiscall camBaseCS::AfterLoad(void) | ?AfterLoad@camBaseCS@@UAEXXZ
    0x521F40 | public: virtual void * __thiscall camBaseCS::`scalar deleting destructor'(unsigned int) | ??_GcamBaseCS@@UAEPAXI@Z
    public: virtual void * __thiscall camBaseCS::`vector deleting destructor'(unsigned int) | ??_EcamBaseCS@@UAEPAXI@Z
    0x5B5130 | const camBaseCS::`vftable' | ??_7camBaseCS@@6B@
    public: static float camBaseCS::sm_cameraFar | ?sm_cameraFar@camBaseCS@@2MA
*/

struct camBaseCS : asNode
{
public:
    // camBaseCS::`vftable' @ 0x5B5130

    // 0x521D60 | ??0camBaseCS@@QAE@XZ
    camBaseCS()
    {
        stub<member_func_t<void, camBaseCS>>(0x521D60, this);
    }

    // 0x521E10 | ?IsViewCSInTransition@camBaseCS@@QAEHXZ
    i32 IsViewCSInTransition()
    {
        return stub<member_func_t<i32, camBaseCS>>(0x521E10, this);
    }

    // 0x521E30 | ?UpdateView@camBaseCS@@QAEXXZ
    void UpdateView()
    {
        return stub<member_func_t<void, camBaseCS>>(0x521E30, this);
    }

    // 0x521DF0 | ??1camBaseCS@@UAE@XZ
    ~camBaseCS() override
    {
        stub<member_func_t<void, camBaseCS>>(0x521DF0, this);
    }

    // 0x521EA0 | ?FileIO@camBaseCS@@UAEXAAVdatParser@@@Z
    void FileIO(class datParser& arg1) override
    {
        return stub<member_func_t<void, camBaseCS, class datParser&>>(0x521EA0, this, arg1);
    }

    // 0x521F30 | ?AfterLoad@camBaseCS@@UAEXXZ
    void AfterLoad() override
    {
        return stub<member_func_t<void, camBaseCS>>(0x521F30, this);
    }

    // 0x521E00 | ?GetDirName@camBaseCS@@UAEPBDXZ
    char const* GetDirName() override
    {
        return stub<member_func_t<char const*, camBaseCS>>(0x521E00, this);
    }

    // 0x521520 | ?MakeActive@camBaseCS@@UAEXXZ
    virtual void MakeActive()
    {
        return stub<member_func_t<void, camBaseCS>>(0x521520, this);
    }

    // 0x520410 | ?UpdateInput@camBaseCS@@UAEXXZ
    virtual void UpdateInput()
    {
        return stub<member_func_t<void, camBaseCS>>(0x520410, this);
    }

    // 0x521E60 | ?ForceMatrixDelta@camBaseCS@@UAEXABVVector3@@@Z
    virtual void ForceMatrixDelta(class Vector3 const& arg1)
    {
        return stub<member_func_t<void, camBaseCS, class Vector3 const&>>(0x521E60, this, arg1);
    }

    // 0x51D750 | ?SetST@camBaseCS@@UAEXPAM@Z
    virtual void SetST(f32* arg1)
    {
        return stub<member_func_t<void, camBaseCS, f32*>>(0x51D750, this, arg1);
    }
};
