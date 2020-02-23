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
    mmwidget:comprpl

    0x59EC50 | public: __thiscall mmCompReplay::mmCompReplay(void) | ??0mmCompReplay@@QAE@XZ
    0x59EC70 | public: virtual __thiscall mmCompReplay::~mmCompReplay(void) | ??1mmCompReplay@@UAE@XZ
    0x59ECD0 | public: void __thiscall mmCompReplay::Init(char *) | ?Init@mmCompReplay@@QAEXPAD@Z
    0x59ECF0 | public: void __thiscall mmCompReplay::InitTitle(float,float,float,float,struct LocString *) | ?InitTitle@mmCompReplay@@QAEXMMMMPAULocString@@@Z
    0x59ED30 | public: virtual void __thiscall mmCompReplay::Reset(void) | ?Reset@mmCompReplay@@UAEXXZ
    0x59ED40 | public: virtual void __thiscall mmCompReplay::Update(void) | ?Update@mmCompReplay@@UAEXXZ
    0x59ED50 | public: void __thiscall mmCompReplay::SetSubwidgetGeometry(void) | ?SetSubwidgetGeometry@mmCompReplay@@QAEXXZ
    0x59ED70 | public: void __thiscall mmCompReplay::SetTitleGeometry(void) | ?SetTitleGeometry@mmCompReplay@@QAEXXZ
    0x59ED90 | public: virtual void __thiscall mmCompReplay::SetPosition(class mmTextNode *,int,float) | ?SetPosition@mmCompReplay@@UAEXPAVmmTextNode@@HM@Z
    0x59EDD0 | public: virtual void __thiscall mmCompReplay::Highlight(class mmTextNode *,int) | ?Highlight@mmCompReplay@@UAEXPAVmmTextNode@@H@Z
    0x59EDF0 | public: virtual void __thiscall mmCompReplay::Box(int,class mmTextNode *,int) | ?Box@mmCompReplay@@UAEXHPAVmmTextNode@@H@Z
    0x59EE20 | public: virtual void __thiscall mmCompReplay::SetGeometry(float,float,float,float) | ?SetGeometry@mmCompReplay@@UAEXMMMM@Z
    0x59EE50 | public: virtual void __thiscall mmCompReplay::Cull(void) | ?Cull@mmCompReplay@@UAEXXZ
    0x59EE60 | public: virtual void * __thiscall mmCompReplay::`scalar deleting destructor'(unsigned int) | ??_GmmCompReplay@@UAEPAXI@Z
    0x5B8894 | const mmCompReplay::`vftable' | ??_7mmCompReplay@@6B@
*/

struct mmCompReplay : mmCompBase
{
public:
    // mmCompReplay::`vftable' @ 0x5B8894

    // 0x59EC50 | ??0mmCompReplay@@QAE@XZ
    inline mmCompReplay()
    {
        stub<member_func_t<void, mmCompReplay>>(0x59EC50, this);
    }

    // 0x59ECD0 | ?Init@mmCompReplay@@QAEXPAD@Z
    inline void Init(char* arg1)
    {
        return stub<member_func_t<void, mmCompReplay, char*>>(0x59ECD0, this, arg1);
    }

    // 0x59ECF0 | ?InitTitle@mmCompReplay@@QAEXMMMMPAULocString@@@Z
    inline void InitTitle(f32 arg1, f32 arg2, f32 arg3, f32 arg4, struct LocString* arg5)
    {
        return stub<member_func_t<void, mmCompReplay, f32, f32, f32, f32, struct LocString*>>(
            0x59ECF0, this, arg1, arg2, arg3, arg4, arg5);
    }

    // 0x59ED50 | ?SetSubwidgetGeometry@mmCompReplay@@QAEXXZ
    inline void SetSubwidgetGeometry()
    {
        return stub<member_func_t<void, mmCompReplay>>(0x59ED50, this);
    }

    // 0x59ED70 | ?SetTitleGeometry@mmCompReplay@@QAEXXZ
    inline void SetTitleGeometry()
    {
        return stub<member_func_t<void, mmCompReplay>>(0x59ED70, this);
    }

    // 0x59EC70 | ??1mmCompReplay@@UAE@XZ
    inline ~mmCompReplay() override
    {
        stub<member_func_t<void, mmCompReplay>>(0x59EC70, this);
    }

    // 0x59EE50 | ?Cull@mmCompReplay@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmCompReplay>>(0x59EE50, this);
    }

    // 0x59ED40 | ?Update@mmCompReplay@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmCompReplay>>(0x59ED40, this);
    }

    // 0x59ED30 | ?Reset@mmCompReplay@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmCompReplay>>(0x59ED30, this);
    }

    // 0x59EDD0 | ?Highlight@mmCompReplay@@UAEXPAVmmTextNode@@H@Z
    inline void Highlight(class mmTextNode* arg1, i32 arg2) override
    {
        return stub<member_func_t<void, mmCompReplay, class mmTextNode*, i32>>(0x59EDD0, this, arg1, arg2);
    }

    // 0x59EDF0 | ?Box@mmCompReplay@@UAEXHPAVmmTextNode@@H@Z
    inline void Box(i32 arg1, class mmTextNode* arg2, i32 arg3) override
    {
        return stub<member_func_t<void, mmCompReplay, i32, class mmTextNode*, i32>>(0x59EDF0, this, arg1, arg2, arg3);
    }

    // 0x59EE20 | ?SetGeometry@mmCompReplay@@UAEXMMMM@Z
    inline void SetGeometry(f32 arg1, f32 arg2, f32 arg3, f32 arg4) override
    {
        return stub<member_func_t<void, mmCompReplay, f32, f32, f32, f32>>(0x59EE20, this, arg1, arg2, arg3, arg4);
    }

    // 0x59ED90 | ?SetPosition@mmCompReplay@@UAEXPAVmmTextNode@@HM@Z
    inline void SetPosition(class mmTextNode* arg1, i32 arg2, f32 arg3) override
    {
        return stub<member_func_t<void, mmCompReplay, class mmTextNode*, i32, f32>>(0x59ED90, this, arg1, arg2, arg3);
    }
};
