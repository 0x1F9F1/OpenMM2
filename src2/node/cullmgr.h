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
    node:cullmgr

    0x4A1290 | public: __thiscall asCullManager::asCullManager(int,int) | ??0asCullManager@@QAE@HH@Z
    0x4A1370 | public: virtual __thiscall asCullManager::~asCullManager(void) | ??1asCullManager@@UAE@XZ
    0x4A13F0 | public: virtual void __thiscall asCullManager::Reset(void) | ?Reset@asCullManager@@UAEXXZ
    0x4A1440 | protected: void __thiscall asCullManager::DisplayVersionString(void) | ?DisplayVersionString@asCullManager@@IAEXXZ
    0x4A1450 | public: virtual void __thiscall asCullManager::Update(void) | ?Update@asCullManager@@UAEXXZ
    0x4A1580 | public: virtual void __thiscall asCullManager::DeclareCamera(class asCamera *) | ?DeclareCamera@asCullManager@@UAEXPAVasCamera@@@Z
    0x4A15B0 | public: virtual void __thiscall asCullManager::DeclareCullable(class asCullable *) | ?DeclareCullable@asCullManager@@UAEXPAVasCullable@@@Z
    0x4A1600 | public: virtual void __thiscall asCullManager::DeclareCullable2D(class asCullable *) | ?DeclareCullable2D@asCullManager@@UAEXPAVasCullable@@@Z
    0x4A1640 | public: virtual void __thiscall asCullManager::DeclareCullable2DFG(class asCullable *) | ?DeclareCullable2DFG@asCullManager@@UAEXPAVasCullable@@@Z
    0x4A1680 | public: void __thiscall asCullManager::DeclareBitmap(class asCullable *,class gfxBitmap *) | ?DeclareBitmap@asCullManager@@QAEXPAVasCullable@@PAVgfxBitmap@@@Z
    public: virtual void * __thiscall asCullManager::`scalar deleting destructor'(unsigned int) | ??_GasCullManager@@UAEPAXI@Z
    0x4A1690 | public: virtual void * __thiscall asCullManager::`vector deleting destructor'(unsigned int) | ??_EasCullManager@@UAEPAXI@Z
    0x5B291C | const asCullManager::`vftable' | ??_7asCullManager@@6B@
    0x661784 | protected: static class asCullManager * asCullManager::Instance | ?Instance@asCullManager@@1PAV1@A
*/

class asCullManager : asNode
{
public:
    // asCullManager::`vftable' @ 0x5B291C

    // 0x4A1290 | ??0asCullManager@@QAE@HH@Z
    inline asCullManager(int32_t arg1, int32_t arg2)
    {
        stub<member_func_t<void, asCullManager, int32_t, int32_t>>(0x4A1290, this, arg1, arg2);
    }

    // 0x4A1440 | ?DisplayVersionString@asCullManager@@IAEXXZ
    inline void DisplayVersionString()
    {
        return stub<member_func_t<void, asCullManager>>(0x4A1440, this);
    }

    // 0x4A1680 | ?DeclareBitmap@asCullManager@@QAEXPAVasCullable@@PAVgfxBitmap@@@Z
    inline void DeclareBitmap(class asCullable* arg1, class gfxBitmap* arg2)
    {
        return stub<member_func_t<void, asCullManager, class asCullable*, class gfxBitmap*>>(
            0x4A1680, this, arg1, arg2);
    }

    // 0x661784 | ?Instance@asCullManager@@1PAV1@A
    static inline extern_var(0x661784, class asCullManager*, Instance);

    // 0x4A1370 | ??1asCullManager@@UAE@XZ
    inline ~asCullManager() override
    {
        stub<member_func_t<void, asCullManager>>(0x4A1370, this);
    }

    // 0x4A1450 | ?Update@asCullManager@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, asCullManager>>(0x4A1450, this);
    }

    // 0x4A13F0 | ?Reset@asCullManager@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, asCullManager>>(0x4A13F0, this);
    }

    // 0x4A1580 | ?DeclareCamera@asCullManager@@UAEXPAVasCamera@@@Z
    virtual inline void DeclareCamera(class asCamera* arg1)
    {
        return stub<member_func_t<void, asCullManager, class asCamera*>>(0x4A1580, this, arg1);
    }

    // 0x4A15B0 | ?DeclareCullable@asCullManager@@UAEXPAVasCullable@@@Z
    virtual inline void DeclareCullable(class asCullable* arg1)
    {
        return stub<member_func_t<void, asCullManager, class asCullable*>>(0x4A15B0, this, arg1);
    }

    // 0x4A1600 | ?DeclareCullable2D@asCullManager@@UAEXPAVasCullable@@@Z
    virtual inline void DeclareCullable2D(class asCullable* arg1)
    {
        return stub<member_func_t<void, asCullManager, class asCullable*>>(0x4A1600, this, arg1);
    }

    // 0x4A1640 | ?DeclareCullable2DFG@asCullManager@@UAEXPAVasCullable@@@Z
    virtual inline void DeclareCullable2DFG(class asCullable* arg1)
    {
        return stub<member_func_t<void, asCullManager, class asCullable*>>(0x4A1640, this, arg1);
    }
};
