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
    inline mmCompRaceRecord()
    {
        stub<member_func_t<void, mmCompRaceRecord>>(0x59EE90, this);
    }

    // 0x59EF70 | ?Init@mmCompRaceRecord@@QAEXHPAD0000HH@Z
    inline void Init(
        int32_t arg1, char* arg2, char* arg3, char* arg4, char* arg5, char* arg6, int32_t arg7, int32_t arg8)
    {
        return stub<
            member_func_t<void, mmCompRaceRecord, int32_t, char*, char*, char*, char*, char*, int32_t, int32_t>>(
            0x59EF70, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    }

    // 0x59EFF0 | ?InitTitle@mmCompRaceRecord@@QAEXMMMMPAULocString@@00000H@Z
    inline void InitTitle(float arg1, float arg2, float arg3, float arg4, struct LocString* arg5,
        struct LocString* arg6, struct LocString* arg7, struct LocString* arg8, struct LocString* arg9,
        struct LocString* arg10, int32_t arg11)
    {
        return stub<member_func_t<void, mmCompRaceRecord, float, float, float, float, struct LocString*,
            struct LocString*, struct LocString*, struct LocString*, struct LocString*, struct LocString*, int32_t>>(
            0x59EFF0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    }

    // 0x59F060 | ?LoadBitmap@mmCompRaceRecord@@QAEXPAD@Z
    inline void LoadBitmap(char* arg1)
    {
        return stub<member_func_t<void, mmCompRaceRecord, char*>>(0x59F060, this, arg1);
    }

    // 0x59F0D0 | ?SetSubwidgetGeometry@mmCompRaceRecord@@QAEXXZ
    inline void SetSubwidgetGeometry()
    {
        return stub<member_func_t<void, mmCompRaceRecord>>(0x59F0D0, this);
    }

    // 0x59F1E0 | ?SelectIfRaceType@mmCompRaceRecord@@QAEXHH@Z
    inline void SelectIfRaceType(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, mmCompRaceRecord, int32_t, int32_t>>(0x59F1E0, this, arg1, arg2);
    }

    // 0x59EED0 | ??1mmCompRaceRecord@@UAE@XZ
    inline ~mmCompRaceRecord() override
    {
        stub<member_func_t<void, mmCompRaceRecord>>(0x59EED0, this);
    }

    // 0x59F2C0 | ?Cull@mmCompRaceRecord@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmCompRaceRecord>>(0x59F2C0, this);
    }

    // 0x59F0C0 | ?Update@mmCompRaceRecord@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmCompRaceRecord>>(0x59F0C0, this);
    }

    // 0x59F0B0 | ?Reset@mmCompRaceRecord@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmCompRaceRecord>>(0x59F0B0, this);
    }

    // 0x59F1B0 | ?SetGeometry@mmCompRaceRecord@@UAEXMMMM@Z
    inline void SetGeometry(float arg1, float arg2, float arg3, float arg4) override
    {
        return stub<member_func_t<void, mmCompRaceRecord, float, float, float, float>>(
            0x59F1B0, this, arg1, arg2, arg3, arg4);
    }

    // 0x59F220 | ?SetPosition@mmCompRaceRecord@@UAEXPAVmmTextNode@@HM@Z
    inline void SetPosition(class mmTextNode* arg1, int32_t arg2, float arg3) override
    {
        return stub<member_func_t<void, mmCompRaceRecord, class mmTextNode*, int32_t, float>>(
            0x59F220, this, arg1, arg2, arg3);
    }
};
