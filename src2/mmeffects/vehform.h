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
    mmeffects:vehform

    0x5339E0 | public: __thiscall mmVehicleForm::mmVehicleForm(void) | ??0mmVehicleForm@@QAE@XZ
    0x533AA0 | public: virtual __thiscall mmVehicleForm::~mmVehicleForm(void) | ??1mmVehicleForm@@UAE@XZ
    0x533B50 | private: void __thiscall mmVehicleForm::LoadAllModLOD(char *) | ?LoadAllModLOD@mmVehicleForm@@AAEXPAD@Z
    0x533BF0 | public: void __thiscall mmVehicleForm::SetShape(char *,char *,char *,class Vector3 *) | ?SetShape@mmVehicleForm@@QAEXPAD00PAVVector3@@@Z
    0x534040 | public: virtual void __thiscall mmVehicleForm::Update(void) | ?Update@mmVehicleForm@@UAEXXZ
    0x534070 | public: virtual void __thiscall mmVehicleForm::Cull(void) | ?Cull@mmVehicleForm@@UAEXXZ
    0x5343F0 | public: virtual void * __thiscall mmVehicleForm::`scalar deleting destructor'(unsigned int) | ??_GmmVehicleForm@@UAEPAXI@Z
    0x5B538C | const mmVehicleForm::`vftable' | ??_7mmVehicleForm@@6B@
    char * * MiscMeshNames | ?MiscMeshNames@@3PAPADA
    private: static class gfxTexture * mmVehicleForm::SphMapTex | ?SphMapTex@mmVehicleForm@@0PAVgfxTexture@@A
*/

struct mmVehicleForm : asNode
{
public:
    // mmVehicleForm::`vftable' @ 0x5B538C

    // 0x5339E0 | ??0mmVehicleForm@@QAE@XZ
    inline mmVehicleForm()
    {
        stub<member_func_t<void, mmVehicleForm>>(0x5339E0, this);
    }

    // 0x533B50 | ?LoadAllModLOD@mmVehicleForm@@AAEXPAD@Z
    inline void LoadAllModLOD(char* arg1)
    {
        return stub<member_func_t<void, mmVehicleForm, char*>>(0x533B50, this, arg1);
    }

    // 0x533BF0 | ?SetShape@mmVehicleForm@@QAEXPAD00PAVVector3@@@Z
    inline void SetShape(char* arg1, char* arg2, char* arg3, class Vector3* arg4)
    {
        return stub<member_func_t<void, mmVehicleForm, char*, char*, char*, class Vector3*>>(
            0x533BF0, this, arg1, arg2, arg3, arg4);
    }

    // 0x533AA0 | ??1mmVehicleForm@@UAE@XZ
    inline ~mmVehicleForm() override
    {
        stub<member_func_t<void, mmVehicleForm>>(0x533AA0, this);
    }

    // 0x534070 | ?Cull@mmVehicleForm@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmVehicleForm>>(0x534070, this);
    }

    // 0x534040 | ?Update@mmVehicleForm@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmVehicleForm>>(0x534040, this);
    }
};
