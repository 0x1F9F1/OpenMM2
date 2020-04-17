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
    level:material

    0x4664C0 | public: __thiscall lvlMaterial::lvlMaterial(void) | ??0lvlMaterial@@QAE@XZ
    0x466510 | public: void __thiscall lvlMaterial::Load(class datAsciiTokenizer &) | ?Load@lvlMaterial@@QAEXAAVdatAsciiTokenizer@@@Z
    0x4666F0 | public: virtual void __thiscall lvlMaterial::Save(class datAsciiTokenizer &) | ?Save@lvlMaterial@@UAEXAAVdatAsciiTokenizer@@@Z
    0x4668E0 | public: void __thiscall lvlMaterial::Copy(class lvlMaterial const &) | ?Copy@lvlMaterial@@QAEXABV1@@Z
    public: void __thiscall lvlMaterial::AddWidgets(class bkBank &) | ?AddWidgets@lvlMaterial@@QAEXAAVbkBank@@@Z
    0x466930 | public: static class lvlMaterialMgr & __cdecl lvlMaterialMgr::CreateInstance(void) | ?CreateInstance@lvlMaterialMgr@@SAAAV1@XZ
    0x466990 | protected: __thiscall lvlMaterialMgr::lvlMaterialMgr(void) | ??0lvlMaterialMgr@@IAE@XZ
    0x466A00 | public: static void __cdecl lvlMaterialMgr::DeleteInstance(void) | ?DeleteInstance@lvlMaterialMgr@@SAXXZ
    0x466A30 | public: class lvlMaterial * __thiscall lvlMaterialMgr::Find(char const *) | ?Find@lvlMaterialMgr@@QAEPAVlvlMaterial@@PBD@Z
    0x466A40 | public: class lvlMaterial * __thiscall lvlMaterialMgr::Lookup(int) | ?Lookup@lvlMaterialMgr@@QAEPAVlvlMaterial@@H@Z
    0x466A50 | public: virtual class phMaterial * __thiscall lvlMaterialMgr::Load(class datAsciiTokenizer *) | ?Load@lvlMaterialMgr@@UAEPAVphMaterial@@PAVdatAsciiTokenizer@@@Z
    public: void __thiscall lvlMaterialMgr::AddWidgets(class bkBank &) | ?AddWidgets@lvlMaterialMgr@@QAEXAAVbkBank@@@Z
    0x5B1AF8 | const lvlMaterial::`vftable' | ??_7lvlMaterial@@6B@
    0x5B1B04 | const lvlMaterialMgr::`vftable' | ??_7lvlMaterialMgr@@6B@
*/

class lvlMaterial : phMaterial
{
public:
    // lvlMaterial::`vftable' @ 0x5B1AF8

    // 0x4664C0 | ??0lvlMaterial@@QAE@XZ
    lvlMaterial()
    {
        stub<member_func_t<void, lvlMaterial>>(0x4664C0, this);
    }

    // 0x466510 | ?Load@lvlMaterial@@QAEXAAVdatAsciiTokenizer@@@Z
    void Load(class datAsciiTokenizer& arg1)
    {
        return stub<member_func_t<void, lvlMaterial, class datAsciiTokenizer&>>(0x466510, this, arg1);
    }

    // 0x4668E0 | ?Copy@lvlMaterial@@QAEXABV1@@Z
    void Copy(class lvlMaterial const& arg1)
    {
        return stub<member_func_t<void, lvlMaterial, class lvlMaterial const&>>(0x4668E0, this, arg1);
    }

    // 0x4666F0 | ?Save@lvlMaterial@@UAEXAAVdatAsciiTokenizer@@@Z
    void Save(class datAsciiTokenizer& arg1) override
    {
        return stub<member_func_t<void, lvlMaterial, class datAsciiTokenizer&>>(0x4666F0, this, arg1);
    }
};

class lvlMaterialMgr : phMaterialMgr
{
public:
    // lvlMaterialMgr::`vftable' @ 0x5B1B04

    // 0x42CCA0 | ?GetInstance@lvlMaterialMgr@@SAAAV1@XZ
    static inline class lvlMaterialMgr& GetInstance()
    {
        return stub<cdecl_t<class lvlMaterialMgr&>>(0x42CCA0);
    }

    // 0x466930 | ?CreateInstance@lvlMaterialMgr@@SAAAV1@XZ
    static inline class lvlMaterialMgr& CreateInstance()
    {
        return stub<cdecl_t<class lvlMaterialMgr&>>(0x466930);
    }

    // 0x466990 | ??0lvlMaterialMgr@@IAE@XZ
    lvlMaterialMgr()
    {
        stub<member_func_t<void, lvlMaterialMgr>>(0x466990, this);
    }

    // 0x466A00 | ?DeleteInstance@lvlMaterialMgr@@SAXXZ
    static inline void DeleteInstance()
    {
        return stub<cdecl_t<void>>(0x466A00);
    }

    // 0x466A30 | ?Find@lvlMaterialMgr@@QAEPAVlvlMaterial@@PBD@Z
    class lvlMaterial* Find(char const* arg1)
    {
        return stub<member_func_t<class lvlMaterial*, lvlMaterialMgr, char const*>>(0x466A30, this, arg1);
    }

    // 0x466A40 | ?Lookup@lvlMaterialMgr@@QAEPAVlvlMaterial@@H@Z
    class lvlMaterial* Lookup(i32 arg1)
    {
        return stub<member_func_t<class lvlMaterial*, lvlMaterialMgr, i32>>(0x466A40, this, arg1);
    }

    // 0x466A50 | ?Load@lvlMaterialMgr@@UAEPAVphMaterial@@PAVdatAsciiTokenizer@@@Z
    class phMaterial* Load(class datAsciiTokenizer* arg1) override
    {
        return stub<member_func_t<class phMaterial*, lvlMaterialMgr, class datAsciiTokenizer*>>(0x466A50, this, arg1);
    }
};
