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
    banger:data

    0x4405D0 | public: int __thiscall dgBangerData::LoadEntry(char *) | ?LoadEntry@dgBangerData@@QAEHPAD@Z
    0x440600 | public: virtual char const * __thiscall dgBangerData::GetDirName(void) | ?GetDirName@dgBangerData@@UAEPBDXZ
    0x440610 | public: void __thiscall dgBangerData::AdjustPrim(void) | ?AdjustPrim@dgBangerData@@QAEXXZ
    public: virtual void __thiscall dgBangerData::AddWidgets(class bkBank &) | ?AddWidgets@dgBangerData@@UAEXAAVbkBank@@@Z
    public: void __thiscall dgBangerData::SetFricElas(void) | ?SetFricElas@dgBangerData@@QAEXXZ
    0x4406E0 | public: __thiscall dgBangerDataManager::dgBangerDataManager(void) | ??0dgBangerDataManager@@QAE@XZ
    0x440860 | public: virtual __thiscall dgBangerDataManager::~dgBangerDataManager(void) | ??1dgBangerDataManager@@UAE@XZ
    0x440940 | public: int __thiscall dgBangerDataManager::AddBangerDataEntry(char const *,char const *) | ?AddBangerDataEntry@dgBangerDataManager@@QAEHPBD0@Z
    public: void __thiscall dgBangerDataManager::SaveEntry(void) | ?SaveEntry@dgBangerDataManager@@QAEXXZ
    public: virtual void __thiscall dgBangerDataManager::AddWidgets(class bkBank &) | ?AddWidgets@dgBangerDataManager@@UAEXAAVbkBank@@@Z
    0x440A60 | public: void __thiscall dgBangerDataManager::ChangeData(void) | ?ChangeData@dgBangerDataManager@@QAEXXZ
    0x440A90 | public: virtual bool __thiscall dgBangerData::Load(void) | ?Load@dgBangerData@@UAE_NXZ
    0x440DB0 | public: virtual bool __thiscall dgBangerData::Save(void) | ?Save@dgBangerData@@UAE_NXZ
    0x441170 | public: void __thiscall dgBangerData::AdjustBound(void) | ?AdjustBound@dgBangerData@@QAEXXZ
    0x4411C0 | public: void __thiscall dgBangerData::InitBound(void) | ?InitBound@dgBangerData@@QAEXXZ
    public: virtual void * __thiscall dgBangerDataManager::`vector deleting destructor'(unsigned int) | ??_EdgBangerDataManager@@UAEPAXI@Z
    0x4413D0 | public: virtual void * __thiscall dgBangerDataManager::`scalar deleting destructor'(unsigned int) | ??_GdgBangerDataManager@@UAEPAXI@Z
    0x441400 | public: virtual __thiscall ptxGlassBirthRules::~ptxGlassBirthRules(void) | ??1ptxGlassBirthRules@@UAE@XZ
    public: virtual void * __thiscall ptxGlassBirthRules::`vector deleting destructor'(unsigned int) | ??_EptxGlassBirthRules@@UAEPAXI@Z
    0x441410 | public: virtual void * __thiscall ptxGlassBirthRules::`scalar deleting destructor'(unsigned int) | ??_GptxGlassBirthRules@@UAEPAXI@Z
    0x441440 | public: virtual char * __thiscall ptxGlassBirthRules::GetClassName(void) | ?GetClassName@ptxGlassBirthRules@@UAEPADXZ
    0x441450 | public: __thiscall dgBangerData::dgBangerData(void) | ??0dgBangerData@@QAE@XZ
    0x441520 | public: virtual char * __thiscall dgBangerData::GetClassName(void) | ?GetClassName@dgBangerData@@UAEPADXZ
    0x441530 | public: virtual void * __thiscall dgBangerData::`scalar deleting destructor'(unsigned int) | ??_GdgBangerData@@UAEPAXI@Z
    public: virtual void * __thiscall dgBangerData::`vector deleting destructor'(unsigned int) | ??_EdgBangerData@@UAEPAXI@Z
    0x441560 | public: virtual __thiscall dgBangerData::~dgBangerData(void) | ??1dgBangerData@@UAE@XZ
    0x4415B0 | public: virtual char * __thiscall dgBangerDataManager::GetClassName(void) | ?GetClassName@dgBangerDataManager@@UAEPADXZ
    0x5B13F8 | const dgBangerDataManager::`vftable' | ??_7dgBangerDataManager@@6B@
    0x5B142C | const ptxGlassBirthRules::`vftable' | ??_7ptxGlassBirthRules@@6B@
    0x5B1460 | const dgBangerData::`vftable' | ??_7dgBangerData@@6B@
    public: static float dgBangerDataManager::FloatClock | ?FloatClock@dgBangerDataManager@@2MA
    public: static int dgBangerDataManager::SignalClock | ?SignalClock@dgBangerDataManager@@2HA
    int tempPrim | ?tempPrim@@3HA
    0x627670 | protected: static class dgBangerDataManager * dgBangerDataManager::Instance | ?Instance@dgBangerDataManager@@1PAV1@A
*/

class dgBangerData : asNode
{
public:
    // dgBangerData::`vftable' @ 0x5B1460

    // 0x4405D0 | ?LoadEntry@dgBangerData@@QAEHPAD@Z
    inline i32 LoadEntry(char* arg1)
    {
        return stub<member_func_t<i32, dgBangerData, char*>>(0x4405D0, this, arg1);
    }

    // 0x440610 | ?AdjustPrim@dgBangerData@@QAEXXZ
    inline void AdjustPrim()
    {
        return stub<member_func_t<void, dgBangerData>>(0x440610, this);
    }

    // 0x441170 | ?AdjustBound@dgBangerData@@QAEXXZ
    inline void AdjustBound()
    {
        return stub<member_func_t<void, dgBangerData>>(0x441170, this);
    }

    // 0x4411C0 | ?InitBound@dgBangerData@@QAEXXZ
    inline void InitBound()
    {
        return stub<member_func_t<void, dgBangerData>>(0x4411C0, this);
    }

    // 0x441450 | ??0dgBangerData@@QAE@XZ
    inline dgBangerData()
    {
        stub<member_func_t<void, dgBangerData>>(0x441450, this);
    }

    // 0x441560 | ??1dgBangerData@@UAE@XZ
    inline ~dgBangerData() override
    {
        stub<member_func_t<void, dgBangerData>>(0x441560, this);
    }

    // 0x440DB0 | ?Save@dgBangerData@@UAE_NXZ
    inline bool Save() override
    {
        return stub<member_func_t<bool, dgBangerData>>(0x440DB0, this);
    }

    // 0x440A90 | ?Load@dgBangerData@@UAE_NXZ
    inline bool Load() override
    {
        return stub<member_func_t<bool, dgBangerData>>(0x440A90, this);
    }

    // 0x441520 | ?GetClassName@dgBangerData@@UAEPADXZ
    inline char* GetClassName() override
    {
        return stub<member_func_t<char*, dgBangerData>>(0x441520, this);
    }

    // 0x440600 | ?GetDirName@dgBangerData@@UAEPBDXZ
    inline char const* GetDirName() override
    {
        return stub<member_func_t<char const*, dgBangerData>>(0x440600, this);
    }
};

class dgBangerDataManager : asNode
{
public:
    // dgBangerDataManager::`vftable' @ 0x5B13F8

    // 0x4406E0 | ??0dgBangerDataManager@@QAE@XZ
    inline dgBangerDataManager()
    {
        stub<member_func_t<void, dgBangerDataManager>>(0x4406E0, this);
    }

    // 0x440940 | ?AddBangerDataEntry@dgBangerDataManager@@QAEHPBD0@Z
    inline i32 AddBangerDataEntry(char const* arg1, char const* arg2)
    {
        return stub<member_func_t<i32, dgBangerDataManager, char const*, char const*>>(0x440940, this, arg1, arg2);
    }

    // 0x440A60 | ?ChangeData@dgBangerDataManager@@QAEXXZ
    inline void ChangeData()
    {
        return stub<member_func_t<void, dgBangerDataManager>>(0x440A60, this);
    }

    // 0x627670 | ?Instance@dgBangerDataManager@@1PAV1@A
    inline extern_var(0x627670, class dgBangerDataManager*, Instance);

    // 0x440860 | ??1dgBangerDataManager@@UAE@XZ
    inline ~dgBangerDataManager() override
    {
        stub<member_func_t<void, dgBangerDataManager>>(0x440860, this);
    }

    // 0x4415B0 | ?GetClassName@dgBangerDataManager@@UAEPADXZ
    inline char* GetClassName() override
    {
        return stub<member_func_t<char*, dgBangerDataManager>>(0x4415B0, this);
    }
};

struct ptxGlassBirthRules : asNode
{
public:
    // ptxGlassBirthRules::`vftable' @ 0x5B142C

    // 0x441400 | ??1ptxGlassBirthRules@@UAE@XZ
    inline ~ptxGlassBirthRules() override
    {
        stub<member_func_t<void, ptxGlassBirthRules>>(0x441400, this);
    }

    // 0x462D90 | ?FileIO@ptxGlassBirthRules@@UAEXAAVdatParser@@@Z
    inline void FileIO(class datParser& arg1) override
    {
        return stub<member_func_t<void, ptxGlassBirthRules, class datParser&>>(0x462D90, this, arg1);
    }

    // 0x441440 | ?GetClassName@ptxGlassBirthRules@@UAEPADXZ
    inline char* GetClassName() override
    {
        return stub<member_func_t<char*, ptxGlassBirthRules>>(0x441440, this);
    }
};
