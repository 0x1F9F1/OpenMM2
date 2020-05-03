/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 Brick

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

#include "node.h"

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

class asCullManager : public asNode
{
    // const asCullManager::`vftable' @ 0x5B291C

public:
    // 0x4A1290 | ??0asCullManager@@QAE@HH@Z
    asCullManager(i32 arg1, i32 arg2);

    // 0x4A1690 | ??_EasCullManager@@UAEPAXI@Z
    // 0x4A1370 | ??1asCullManager@@UAE@XZ
    ~asCullManager() override;

    // 0x4A1680 | ?DeclareBitmap@asCullManager@@QAEXPAVasCullable@@PAVgfxBitmap@@@Z
    void DeclareBitmap(class asCullable* arg1, class gfxBitmap* arg2);

    // 0x4A13F0 | ?Reset@asCullManager@@UAEXXZ
    void Reset() override;

    // 0x4A1450 | ?Update@asCullManager@@UAEXXZ
    void Update() override;

    // 0x4A1580 | ?DeclareCamera@asCullManager@@UAEXPAVasCamera@@@Z
    virtual void DeclareCamera(class asCamera* arg1);

    // 0x4A15B0 | ?DeclareCullable@asCullManager@@UAEXPAVasCullable@@@Z
    virtual void DeclareCullable(class asCullable* arg1);

    // 0x4A1600 | ?DeclareCullable2D@asCullManager@@UAEXPAVasCullable@@@Z
    virtual void DeclareCullable2D(class asCullable* arg1);

    // 0x4A1640 | ?DeclareCullable2DFG@asCullManager@@UAEXPAVasCullable@@@Z
    virtual void DeclareCullable2DFG(class asCullable* arg1);

protected:
    // 0x4A1440 | ?DisplayVersionString@asCullManager@@IAEXXZ
    void DisplayVersionString();

    // 0x661784 | ?Instance@asCullManager@@1PAV1@A
    static inline extern_var(0x661784, class asCullManager*, Instance);
};

check_size(asCullManager, 0x0);
