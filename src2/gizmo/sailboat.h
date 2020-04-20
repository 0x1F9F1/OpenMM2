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
    gizmo:sailboat

    0x578260 | public: __thiscall gizSailboat::gizSailboat(void) | ??0gizSailboat@@QAE@XZ
    0x5782B0 | public: __thiscall gizSailboat::~gizSailboat(void) | ??1gizSailboat@@QAE@XZ
    0x578320 | public: virtual void __thiscall gizSailboat::Reset(void) | ?Reset@gizSailboat@@UAEXXZ
    0x578330 | public: void __thiscall gizSailboat::Init(char *,class dgPath *) | ?Init@gizSailboat@@QAEXPADPAVdgPath@@@Z
    0x578410 | public: void __thiscall gizSailboat::Update(void) | ?Update@gizSailboat@@QAEXXZ
    0x578490 | public: void __thiscall gizSailboat::SetSpeed(float) | ?SetSpeed@gizSailboat@@QAEXM@Z
    0x5784B0 | public: __thiscall gizSailboatMgr::gizSailboatMgr(void) | ??0gizSailboatMgr@@QAE@XZ
    0x578520 | public: virtual __thiscall gizSailboatMgr::~gizSailboatMgr(void) | ??1gizSailboatMgr@@UAE@XZ
    0x5785C0 | public: virtual void __thiscall gizSailboatMgr::Reset(void) | ?Reset@gizSailboatMgr@@UAEXXZ
    0x5785F0 | public: bool __thiscall gizSailboatMgr::Init(char *,char *,char *) | ?Init@gizSailboatMgr@@QAE_NPAD00@Z
    0x578770 | public: virtual void __thiscall gizSailboatMgr::Update(void) | ?Update@gizSailboatMgr@@UAEXXZ
    0x5787A0 | private: void __thiscall gizSailboatMgr::ApplyTuning(void) | ?ApplyTuning@gizSailboatMgr@@AAEXXZ
    public: void __thiscall gizSailboatMgr::AddWidgets(class bkBank *) | ?AddWidgets@gizSailboatMgr@@QAEXPAVbkBank@@@Z
    public: virtual void * __thiscall gizSailboatMgr::`vector deleting destructor'(unsigned int) | ??_EgizSailboatMgr@@UAEPAXI@Z
    0x578800 | public: virtual void * __thiscall gizSailboatMgr::`scalar deleting destructor'(unsigned int) | ??_GgizSailboatMgr@@UAEPAXI@Z
    0x578830 | public: void * __thiscall gizSailboat::`vector deleting destructor'(unsigned int) | ??_EgizSailboat@@QAEPAXI@Z
    0x578890 | public: virtual unsigned int __thiscall gizSailboat::SizeOf(void) | ?SizeOf@gizSailboat@@UAEIXZ
    0x5B6038 | const gizSailboat::`vftable' | ??_7gizSailboat@@6B@
    0x5B60A0 | const gizSailboatMgr::`vftable' | ??_7gizSailboatMgr@@6B@
    0x6B46BC | class gizSailboatMgr * SAILBOAT | ?SAILBOAT@@3PAVgizSailboatMgr@@A
*/

// 0x6B46BC | ?SAILBOAT@@3PAVgizSailboatMgr@@A
inline extern_var(0x6B46BC, class gizSailboatMgr*, SAILBOAT);

class gizSailboatMgr : asNode
{
public:
    // gizSailboatMgr::`vftable' @ 0x5B60A0

    // 0x5784B0 | ??0gizSailboatMgr@@QAE@XZ
    inline gizSailboatMgr()
    {
        stub<member_func_t<void, gizSailboatMgr>>(0x5784B0, this);
    }

    // 0x5785F0 | ?Init@gizSailboatMgr@@QAE_NPAD00@Z
    inline bool Init(char* arg1, char* arg2, char* arg3)
    {
        return stub<member_func_t<bool, gizSailboatMgr, char*, char*, char*>>(0x5785F0, this, arg1, arg2, arg3);
    }

    // 0x5787A0 | ?ApplyTuning@gizSailboatMgr@@AAEXXZ
    inline void ApplyTuning()
    {
        return stub<member_func_t<void, gizSailboatMgr>>(0x5787A0, this);
    }

    // 0x578520 | ??1gizSailboatMgr@@UAE@XZ
    inline ~gizSailboatMgr() override
    {
        stub<member_func_t<void, gizSailboatMgr>>(0x578520, this);
    }

    // 0x578770 | ?Update@gizSailboatMgr@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, gizSailboatMgr>>(0x578770, this);
    }

    // 0x5785C0 | ?Reset@gizSailboatMgr@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, gizSailboatMgr>>(0x5785C0, this);
    }
};

struct gizSailboat : gizInstance
{
public:
    // gizSailboat::`vftable' @ 0x5B6038

    // 0x578260 | ??0gizSailboat@@QAE@XZ
    inline gizSailboat()
    {
        stub<member_func_t<void, gizSailboat>>(0x578260, this);
    }

    // 0x5782B0 | ??1gizSailboat@@QAE@XZ
    inline ~gizSailboat()
    {
        stub<member_func_t<void, gizSailboat>>(0x5782B0, this);
    }

    // 0x578330 | ?Init@gizSailboat@@QAEXPADPAVdgPath@@@Z
    inline void Init(char* arg1, class dgPath* arg2)
    {
        return stub<member_func_t<void, gizSailboat, char*, class dgPath*>>(0x578330, this, arg1, arg2);
    }

    // 0x578410 | ?Update@gizSailboat@@QAEXXZ
    inline void Update()
    {
        return stub<member_func_t<void, gizSailboat>>(0x578410, this);
    }

    // 0x578490 | ?SetSpeed@gizSailboat@@QAEXM@Z
    inline void SetSpeed(float arg1)
    {
        return stub<member_func_t<void, gizSailboat, float>>(0x578490, this, arg1);
    }

    // 0x578830 | ??_EgizSailboat@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)

    // 0x578320 | ?Reset@gizSailboat@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, gizSailboat>>(0x578320, this);
    }

    // 0x578890 | ?SizeOf@gizSailboat@@UAEIXZ
    inline uint32_t SizeOf() override
    {
        return stub<member_func_t<uint32_t, gizSailboat>>(0x578890, this);
    }
};
