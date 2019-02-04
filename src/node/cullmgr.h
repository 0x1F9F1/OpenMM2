/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
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

#include "hooking.h"

#include "node/node.h"
#include "data/timer.h"

class asCamera;
class Matrix34;

#define MAX_CULLABLE_CAMERAS 16

class asCullManager
    : public asNode
{
public:
    uint32_t dword18 {0};
    uint32_t CameraCount {0};
    asCamera *CameraArray[MAX_CULLABLE_CAMERAS] {nullptr};
    asCamera *CurrentCamera {nullptr};
    int CurrentCullables {0};
    int MaxCullables {0};
    int CurrentCullables2D {0};
    int MaxCullables2D {0};
    int CurrentCullables2DFG {0};
    int MaxCullables2DFG {0};
    asCullable **CullableArray {nullptr};
    asCullable **Cullables2D {nullptr};
    asCullable **Cullables2DFG {nullptr};
    Matrix34 **CullablsMatrices {nullptr};
    uint32_t BaseColor {0xFF001E3C};
    int field_90 {0};
    int field_94 {0};
    Timer Timer1 {};
    Timer Timer2 {};
    int field_A0 {0};
    bool ShouldReset {false};
    char field_A5 {0};
    char field_A6 {0};
    char field_A7 {0};

    asCullManager(int maxCullables, int maxCullables2D);
    ~asCullManager();

    virtual void Update() override;
    virtual void Reset() override;

    virtual void DeclareCamera(asCamera * camera);
    virtual void DeclareCullable(asCullable * cullable);
    virtual void DeclareCullable2D(asCullable * cullable);
    virtual void DeclareCullable2DFG(asCullable * cullable);

    static inline extern_var(0x661784, asCullManager*, Instance);
};

check_size(asCullManager, 0xA8);
