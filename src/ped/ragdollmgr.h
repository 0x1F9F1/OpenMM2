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
    ped:ragdollmgr

    0x57B8B0 | public: __thiscall pedRagdollMgr::pedRagdollMgr(void) | ??0pedRagdollMgr@@QAE@XZ
    0x57B910 | public: virtual __thiscall pedRagdollMgr::~pedRagdollMgr(void) | ??1pedRagdollMgr@@UAE@XZ
    0x57B9B0 | public: void __thiscall pedRagdollMgr::Init(int,char * *) | ?Init@pedRagdollMgr@@QAEXHPAPAD@Z
    0x57BAF0 | public: class pedActive * __thiscall pedRagdollMgr::Attach(class aiPedestrianInstance *) | ?Attach@pedRagdollMgr@@QAEPAVpedActive@@PAVaiPedestrianInstance@@@Z
    0x57BB80 | public: void __thiscall pedRagdollMgr::Detach(class aiPedestrianInstance *) | ?Detach@pedRagdollMgr@@QAEXPAVaiPedestrianInstance@@@Z
    0x57BBB0 | public: bool __thiscall pedRagdollMgr::UnusedActive(void) | ?UnusedActive@pedRagdollMgr@@QAE_NXZ
    0x57BBD0 | public: virtual void __thiscall pedRagdollMgr::Reset(void) | ?Reset@pedRagdollMgr@@UAEXXZ
    0x57BC10 | public: virtual void __thiscall pedRagdollMgr::Update(void) | ?Update@pedRagdollMgr@@UAEXXZ
    public: virtual void * __thiscall pedRagdollMgr::`scalar deleting destructor'(unsigned int) | ??_GpedRagdollMgr@@UAEPAXI@Z
    0x57BC80 | public: virtual void * __thiscall pedRagdollMgr::`vector deleting destructor'(unsigned int) | ??_EpedRagdollMgr@@UAEPAXI@Z
    0x57BCB0 | public: void * __thiscall pedActiveData::`vector deleting destructor'(unsigned int) | ??_EpedActiveData@@QAEPAXI@Z
    0x57BD10 | public: virtual void * __thiscall pedActive::`vector deleting destructor'(unsigned int) | ??_EpedActive@@UAEPAXI@Z
    0x5B635C | const pedRagdollMgr::`vftable' | ??_7pedRagdollMgr@@6B@
    0x6B4740 | public: static class pedRagdollMgr * pedRagdollMgr::Instance | ?Instance@pedRagdollMgr@@2PAV1@A
*/

// #include "hooking.h"
