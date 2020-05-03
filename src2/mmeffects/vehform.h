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

#include "node/node.h"

/*
    mmeffects:vehform

    0x5339E0 | public: __thiscall mmVehicleForm::mmVehicleForm(void) | ??0mmVehicleForm@@QAE@XZ
    0x533AA0 | public: virtual __thiscall mmVehicleForm::~mmVehicleForm(void) | ??1mmVehicleForm@@UAE@XZ
    0x533B50 | private: void __thiscall mmVehicleForm::LoadAllModLOD(char *) | ?LoadAllModLOD@mmVehicleForm@@AAEXPAD@Z
    0x533BF0 | public: void __thiscall mmVehicleForm::SetShape(char *,char *,char *,class Vector3 *) | ?SetShape@mmVehicleForm@@QAEXPAD00PAVVector3@@@Z
    0x534040 | public: virtual void __thiscall mmVehicleForm::Update(void) | ?Update@mmVehicleForm@@UAEXXZ
    0x534070 | public: virtual void __thiscall mmVehicleForm::Cull(void) | ?Cull@mmVehicleForm@@UAEXXZ
    0x5343F0 | public: virtual void * __thiscall mmVehicleForm::`scalar deleting destructor'(unsigned int) | ??_GmmVehicleForm@@UAEPAXI@Z
    0x5B538C | const mmVehicleForm::`vftable' | ??_7mmVehicleForm@@6B@
    0x5D71AC | char * * MiscMeshNames | ?MiscMeshNames@@3PAPADA
    0x6B1D7C | private: static class gfxTexture * mmVehicleForm::SphMapTex | ?SphMapTex@mmVehicleForm@@0PAVgfxTexture@@A
*/

class mmVehicleForm : public asNode
{
    // const mmVehicleForm::`vftable' @ 0x5B538C

public:
    // 0x5339E0 | ??0mmVehicleForm@@QAE@XZ
    mmVehicleForm();

    // 0x4F7A00 | ??_EmmVehicleForm@@UAEPAXI@Z
    // 0x533AA0 | ??1mmVehicleForm@@UAE@XZ
    // 0x5343F0 | ??_GmmVehicleForm@@UAEPAXI@Z
    ~mmVehicleForm() override;

    // 0x534070 | ?Cull@mmVehicleForm@@UAEXXZ
    void Cull() override;

    // 0x533BF0 | ?SetShape@mmVehicleForm@@QAEXPAD00PAVVector3@@@Z
    void SetShape(char* arg1, char* arg2, char* arg3, class Vector3* arg4);

    // 0x534040 | ?Update@mmVehicleForm@@UAEXXZ
    void Update() override;

private:
    // 0x533B50 | ?LoadAllModLOD@mmVehicleForm@@AAEXPAD@Z
    void LoadAllModLOD(char* arg1);

    // 0x6B1D7C | ?SphMapTex@mmVehicleForm@@0PAVgfxTexture@@A
    static inline extern_var(0x6B1D7C, class gfxTexture*, SphMapTex);
};

check_size(mmVehicleForm, 0x68);

// 0x5D71AC | ?MiscMeshNames@@3PAPADA
inline extern_var(0x5D71AC, char**, MiscMeshNames);
