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
    phcore:material

    0x492FF0 | public: __thiscall phMaterial::phMaterial(void) | ??0phMaterial@@QAE@XZ
    0x493050 | public: void __thiscall phMaterial::SetName(char const *) | ?SetName@phMaterial@@QAEXPBD@Z
    0x493070 | public: void __thiscall phMaterial::Load(class datAsciiTokenizer &) | ?Load@phMaterial@@QAEXAAVdatAsciiTokenizer@@@Z
    0x493160 | public: virtual void __thiscall phMaterial::Save(class datAsciiTokenizer &) | ?Save@phMaterial@@UAEXAAVdatAsciiTokenizer@@@Z
    0x493270 | public: virtual void __thiscall phMaterial::Copy(class phMaterial const &) | ?Copy@phMaterial@@UAEXABV1@@Z
    0x4932A0 | public: void __thiscall phMaterial::LoadBinary(class Stream *) | ?LoadBinary@phMaterial@@QAEXPAVStream@@@Z
    0x493340 | public: virtual void __thiscall phMaterial::SaveBinary(class Stream *) | ?SaveBinary@phMaterial@@UAEXPAVStream@@@Z
    0x493420 | public: static class phMaterialMgr & __cdecl phMaterialMgr::CreateInstance(int) | ?CreateInstance@phMaterialMgr@@SAAAV1@H@Z
    0x4934A0 | protected: __thiscall phMaterialMgr::phMaterialMgr(void) | ??0phMaterialMgr@@IAE@XZ
    0x4934E0 | protected: __thiscall phMaterialMgr::phMaterialMgr(class phMaterial *,int) | ??0phMaterialMgr@@IAE@PAVphMaterial@@H@Z
    0x4935C0 | public: __thiscall phMaterialMgr::~phMaterialMgr(void) | ??1phMaterialMgr@@QAE@XZ
    0x493640 | public: class phMaterial * __thiscall phMaterialMgr::Find(char const *) | ?Find@phMaterialMgr@@QAEPAVphMaterial@@PBD@Z
    0x493660 | public: void __thiscall phMaterialMgr::AddToTable(class phMaterial *) | ?AddToTable@phMaterialMgr@@QAEXPAVphMaterial@@@Z
    0x493680 | public: bool __thiscall phMaterialMgr::LoadTable(char const *) | ?LoadTable@phMaterialMgr@@QAE_NPBD@Z
    0x493700 | public: virtual class phMaterial * __thiscall phMaterialMgr::Load(class datAsciiTokenizer *) | ?Load@phMaterialMgr@@UAEPAVphMaterial@@PAVdatAsciiTokenizer@@@Z
    0x493780 | public: virtual class phMaterial * __thiscall phMaterialMgr::Load(class Stream *) | ?Load@phMaterialMgr@@UAEPAVphMaterial@@PAVStream@@@Z
    0x493800 | public: void __thiscall phMaterialMgr::Save(class phMaterial *,class datAsciiTokenizer *) | ?Save@phMaterialMgr@@QAEXPAVphMaterial@@PAVdatAsciiTokenizer@@@Z
    0x493840 | public: char const * __thiscall phMaterialMgr::FindNameOfIndex(int) | ?FindNameOfIndex@phMaterialMgr@@QAEPBDH@Z
    0x493870 | public: int __thiscall phMaterialMgr::FindIndexOfName(char const *) | ?FindIndexOfName@phMaterialMgr@@QAEHPBD@Z
    0x5B2404 | const phMaterial::`vftable' | ??_7phMaterial@@6B@
    0x5B2410 | const phMaterialMgr::`vftable' | ??_7phMaterialMgr@@6B@
    0x66134C | protected: static int phMaterialMgr::RefCount | ?RefCount@phMaterialMgr@@1HA
    0x661350 | protected: static class phMaterialMgr * phMaterialMgr::Instance | ?Instance@phMaterialMgr@@1PAV1@A
    0x661354 | protected: static class phMaterial * phMaterialMgr::DefaultPhysMaterial | ?DefaultPhysMaterial@phMaterialMgr@@1PAVphMaterial@@A
*/

class phMaterial
{
public:
    // phMaterial::`vftable' @ 0x5B2404

    // 0x492FF0 | ??0phMaterial@@QAE@XZ
    inline phMaterial()
    {
        stub<member_func_t<void, phMaterial>>(0x492FF0, this);
    }

    // 0x493050 | ?SetName@phMaterial@@QAEXPBD@Z
    inline void SetName(char const* arg1)
    {
        return stub<member_func_t<void, phMaterial, char const*>>(0x493050, this, arg1);
    }

    // 0x493070 | ?Load@phMaterial@@QAEXAAVdatAsciiTokenizer@@@Z
    inline void Load(class datAsciiTokenizer& arg1)
    {
        return stub<member_func_t<void, phMaterial, class datAsciiTokenizer&>>(0x493070, this, arg1);
    }

    // 0x4932A0 | ?LoadBinary@phMaterial@@QAEXPAVStream@@@Z
    inline void LoadBinary(class Stream* arg1)
    {
        return stub<member_func_t<void, phMaterial, class Stream*>>(0x4932A0, this, arg1);
    }

    // 0x493270 | ?Copy@phMaterial@@UAEXABV1@@Z
    virtual inline void Copy(class phMaterial const& arg1)
    {
        return stub<member_func_t<void, phMaterial, class phMaterial const&>>(0x493270, this, arg1);
    }

    // 0x493160 | ?Save@phMaterial@@UAEXAAVdatAsciiTokenizer@@@Z
    virtual inline void Save(class datAsciiTokenizer& arg1)
    {
        return stub<member_func_t<void, phMaterial, class datAsciiTokenizer&>>(0x493160, this, arg1);
    }

    // 0x493340 | ?SaveBinary@phMaterial@@UAEXPAVStream@@@Z
    virtual inline void SaveBinary(class Stream* arg1)
    {
        return stub<member_func_t<void, phMaterial, class Stream*>>(0x493340, this, arg1);
    }
};

class phMaterialMgr
{
public:
    // phMaterialMgr::`vftable' @ 0x5B2410

    // 0x493420 | ?CreateInstance@phMaterialMgr@@SAAAV1@H@Z
    static inline class phMaterialMgr& CreateInstance(int32_t arg1)
    {
        return stub<cdecl_t<class phMaterialMgr&, int32_t>>(0x493420, arg1);
    }

    // 0x4934A0 | ??0phMaterialMgr@@IAE@XZ
    inline phMaterialMgr()
    {
        stub<member_func_t<void, phMaterialMgr>>(0x4934A0, this);
    }

    // 0x4934E0 | ??0phMaterialMgr@@IAE@PAVphMaterial@@H@Z
    inline phMaterialMgr(class phMaterial* arg1, int32_t arg2)
    {
        stub<member_func_t<void, phMaterialMgr, class phMaterial*, int32_t>>(0x4934E0, this, arg1, arg2);
    }

    // 0x4935C0 | ??1phMaterialMgr@@QAE@XZ
    inline ~phMaterialMgr()
    {
        stub<member_func_t<void, phMaterialMgr>>(0x4935C0, this);
    }

    // 0x493640 | ?Find@phMaterialMgr@@QAEPAVphMaterial@@PBD@Z
    inline class phMaterial* Find(char const* arg1)
    {
        return stub<member_func_t<class phMaterial*, phMaterialMgr, char const*>>(0x493640, this, arg1);
    }

    // 0x493660 | ?AddToTable@phMaterialMgr@@QAEXPAVphMaterial@@@Z
    inline void AddToTable(class phMaterial* arg1)
    {
        return stub<member_func_t<void, phMaterialMgr, class phMaterial*>>(0x493660, this, arg1);
    }

    // 0x493680 | ?LoadTable@phMaterialMgr@@QAE_NPBD@Z
    inline bool LoadTable(char const* arg1)
    {
        return stub<member_func_t<bool, phMaterialMgr, char const*>>(0x493680, this, arg1);
    }

    // 0x493800 | ?Save@phMaterialMgr@@QAEXPAVphMaterial@@PAVdatAsciiTokenizer@@@Z
    inline void Save(class phMaterial* arg1, class datAsciiTokenizer* arg2)
    {
        return stub<member_func_t<void, phMaterialMgr, class phMaterial*, class datAsciiTokenizer*>>(
            0x493800, this, arg1, arg2);
    }

    // 0x493840 | ?FindNameOfIndex@phMaterialMgr@@QAEPBDH@Z
    inline char const* FindNameOfIndex(int32_t arg1)
    {
        return stub<member_func_t<char const*, phMaterialMgr, int32_t>>(0x493840, this, arg1);
    }

    // 0x493870 | ?FindIndexOfName@phMaterialMgr@@QAEHPBD@Z
    inline int32_t FindIndexOfName(char const* arg1)
    {
        return stub<member_func_t<int32_t, phMaterialMgr, char const*>>(0x493870, this, arg1);
    }

    // 0x66134C | ?RefCount@phMaterialMgr@@1HA
    inline extern_var(0x66134C, int32_t, RefCount);

    // 0x661350 | ?Instance@phMaterialMgr@@1PAV1@A
    inline extern_var(0x661350, class phMaterialMgr*, Instance);

    // 0x661354 | ?DefaultPhysMaterial@phMaterialMgr@@1PAVphMaterial@@A
    inline extern_var(0x661354, class phMaterial*, DefaultPhysMaterial);

    // 0x493780 | ?Load@phMaterialMgr@@UAEPAVphMaterial@@PAVStream@@@Z
    virtual inline class phMaterial* Load(class Stream* arg1)
    {
        return stub<member_func_t<class phMaterial*, phMaterialMgr, class Stream*>>(0x493780, this, arg1);
    }

    // 0x493700 | ?Load@phMaterialMgr@@UAEPAVphMaterial@@PAVdatAsciiTokenizer@@@Z
    virtual inline class phMaterial* Load(class datAsciiTokenizer* arg1)
    {
        return stub<member_func_t<class phMaterial*, phMaterialMgr, class datAsciiTokenizer*>>(0x493700, this, arg1);
    }
};
