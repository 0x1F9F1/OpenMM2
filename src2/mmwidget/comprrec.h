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
    mmwidget:comprrec

    0x59EE90 | public: __thiscall mmCompRaceRecord::mmCompRaceRecord(void) | ??0mmCompRaceRecord@@QAE@XZ
    0x59EED0 | public: virtual __thiscall mmCompRaceRecord::~mmCompRaceRecord(void) | ??1mmCompRaceRecord@@UAE@XZ
    0x59EF70 | public: void __thiscall mmCompRaceRecord::Init(int,char *,char *,char *,char *,char *,int,int) | ?Init@mmCompRaceRecord@@QAEXHPAD0000HH@Z
    0x59EFF0 | public: void __thiscall mmCompRaceRecord::InitTitle(float,float,float,float,struct LocString *,struct LocString *,struct LocString *,struct LocString *,struct LocString *,struct LocString *,int) | ?InitTitle@mmCompRaceRecord@@QAEXMMMMPAULocString@@00000H@Z
    0x59F060 | public: void __thiscall mmCompRaceRecord::LoadBitmap(char *) | ?LoadBitmap@mmCompRaceRecord@@QAEXPAD@Z
    0x59F0B0 | public: virtual void __thiscall mmCompRaceRecord::Reset(void) | ?Reset@mmCompRaceRecord@@UAEXXZ
    0x59F0C0 | public: virtual void __thiscall mmCompRaceRecord::Update(void) | ?Update@mmCompRaceRecord@@UAEXXZ
    0x59F0D0 | public: void __thiscall mmCompRaceRecord::SetSubwidgetGeometry(void) | ?SetSubwidgetGeometry@mmCompRaceRecord@@QAEXXZ
    0x59F1B0 | public: virtual void __thiscall mmCompRaceRecord::SetGeometry(float,float,float,float) | ?SetGeometry@mmCompRaceRecord@@UAEXMMMM@Z
    0x59F1E0 | public: void __thiscall mmCompRaceRecord::SelectIfRaceType(int,int) | ?SelectIfRaceType@mmCompRaceRecord@@QAEXHH@Z
    0x59F220 | public: virtual void __thiscall mmCompRaceRecord::SetPosition(class mmTextNode *,int,float) | ?SetPosition@mmCompRaceRecord@@UAEXPAVmmTextNode@@HM@Z
    0x59F2C0 | public: virtual void __thiscall mmCompRaceRecord::Cull(void) | ?Cull@mmCompRaceRecord@@UAEXXZ
    public: virtual void * __thiscall mmCompRaceRecord::`vector deleting destructor'(unsigned int) | ??_EmmCompRaceRecord@@UAEPAXI@Z
    0x59F300 | public: virtual void * __thiscall mmCompRaceRecord::`scalar deleting destructor'(unsigned int) | ??_GmmCompRaceRecord@@UAEPAXI@Z
    0x5B88F4 | const mmCompRaceRecord::`vftable' | ??_7mmCompRaceRecord@@6B@
*/

struct mmCompRaceRecord : mmCompBase
{
public:
    // mmCompRaceRecord::`vftable' @ 0x5B88F4

    // 0x59EE90 | ??0mmCompRaceRecord@@QAE@XZ
    mmCompRaceRecord()
    {
        stub<member_func_t<void, mmCompRaceRecord>>(0x59EE90, this);
    }

    // 0x59EF70 | ?Init@mmCompRaceRecord@@QAEXHPAD0000HH@Z
    void Init(i32 arg1, char* arg2, char* arg3, char* arg4, char* arg5, char* arg6, i32 arg7, i32 arg8)
    {
        return stub<member_func_t<void, mmCompRaceRecord, i32, char*, char*, char*, char*, char*, i32, i32>>(
            0x59EF70, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x59EFF0 | ?InitTitle@mmCompRaceRecord@@QAEXMMMMPAULocString@@00000H@Z
    void InitTitle(f32 arg1, f32 arg2, f32 arg3, f32 arg4, struct LocString* arg5, struct LocString* arg6,
        struct LocString* arg7, struct LocString* arg8, struct LocString* arg9, struct LocString* arg10, i32 arg11)
    {
        return stub<member_func_t<void, mmCompRaceRecord, f32, f32, f32, f32, struct LocString*, struct LocString*,
            struct LocString*, struct LocString*, struct LocString*, struct LocString*, i32>>(
            0x59EFF0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }

    // 0x59F060 | ?LoadBitmap@mmCompRaceRecord@@QAEXPAD@Z
    void LoadBitmap(char* arg1)
    {
        return stub<member_func_t<void, mmCompRaceRecord, char*>>(0x59F060, this, arg1);
    }

    // 0x59F0D0 | ?SetSubwidgetGeometry@mmCompRaceRecord@@QAEXXZ
    void SetSubwidgetGeometry()
    {
        return stub<member_func_t<void, mmCompRaceRecord>>(0x59F0D0, this);
    }

    // 0x59F1E0 | ?SelectIfRaceType@mmCompRaceRecord@@QAEXHH@Z
    void SelectIfRaceType(i32 arg1, i32 arg2)
    {
        return stub<member_func_t<void, mmCompRaceRecord, i32, i32>>(0x59F1E0, this, arg1, arg2);
    }

    // 0x59EED0 | ??1mmCompRaceRecord@@UAE@XZ
    ~mmCompRaceRecord() override
    {
        stub<member_func_t<void, mmCompRaceRecord>>(0x59EED0, this);
    }

    // 0x59F2C0 | ?Cull@mmCompRaceRecord@@UAEXXZ
    void Cull() override
    {
        return stub<member_func_t<void, mmCompRaceRecord>>(0x59F2C0, this);
    }

    // 0x59F0C0 | ?Update@mmCompRaceRecord@@UAEXXZ
    void Update() override
    {
        return stub<member_func_t<void, mmCompRaceRecord>>(0x59F0C0, this);
    }

    // 0x59F0B0 | ?Reset@mmCompRaceRecord@@UAEXXZ
    void Reset() override
    {
        return stub<member_func_t<void, mmCompRaceRecord>>(0x59F0B0, this);
    }

    // 0x59F1B0 | ?SetGeometry@mmCompRaceRecord@@UAEXMMMM@Z
    void SetGeometry(f32 arg1, f32 arg2, f32 arg3, f32 arg4) override
    {
        return stub<member_func_t<void, mmCompRaceRecord, f32, f32, f32, f32>>(0x59F1B0, this, arg1, arg2, arg3, arg4);
    }

    // 0x59F220 | ?SetPosition@mmCompRaceRecord@@UAEXPAVmmTextNode@@HM@Z
    void SetPosition(class mmTextNode* arg1, i32 arg2, f32 arg3) override
    {
        return stub<member_func_t<void, mmCompRaceRecord, class mmTextNode*, i32, f32>>(
            0x59F220, this, arg1, arg2, arg3);
    }
};
