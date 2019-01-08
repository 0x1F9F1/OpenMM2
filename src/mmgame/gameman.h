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
    mmgame:gameman

    0x4029E0 | public: __thiscall mmGameManager::mmGameManager(void) | ??0mmGameManager@@QAE@XZ
    0x402E30 | public: virtual void __thiscall mmGameManager::Reset(void) | ?Reset@mmGameManager@@UAEXXZ
    0x402E40 | public: virtual __thiscall mmGameManager::~mmGameManager(void) | ??1mmGameManager@@UAE@XZ
    0x402FA0 | public: void __thiscall mmGameManager::BeDone(void) | ?BeDone@mmGameManager@@QAEXXZ
    0x402FB0 | public: void __thiscall mmGameManager::ForcePopupUI(void) | ?ForcePopupUI@mmGameManager@@QAEXXZ
    0x402FE0 | public: void __thiscall mmGameManager::ForceReplayUI(void) | ?ForceReplayUI@mmGameManager@@QAEXXZ
    0x403000 | public: virtual void __thiscall mmGameManager::Update(void) | ?Update@mmGameManager@@UAEXXZ
    public: virtual void __thiscall mmGameManager::Stats(void) | ?Stats@mmGameManager@@UAEXXZ
    0x4031D0 | public: virtual void __thiscall mmGameManager::Cull(void) | ?Cull@mmGameManager@@UAEXXZ
    public: void __thiscall mmGameManager::AddWidgets(class bkBank *) | ?AddWidgets@mmGameManager@@QAEXPAVbkBank@@@Z
    0x403300 | public: virtual void * __thiscall mmGameManager::`scalar deleting destructor'(unsigned int) | ??_GmmGameManager@@UAEPAXI@Z
    public: virtual void * __thiscall mmGameManager::`vector deleting destructor'(unsigned int) | ??_EmmGameManager@@UAEPAXI@Z
    0x45CCA0 | public: __thiscall Vector3::Vector3(void) | ??0Vector3@@QAE@XZ
    0x403330 | public: virtual void __thiscall asNode::FileIO(class datParser &) | ?FileIO@asNode@@UAEXAAVdatParser@@@Z
    0x403340 | public: virtual void __thiscall asNode::AfterLoad(void) | ?AfterLoad@asNode@@UAEXXZ
    0x403350 | public: virtual void __thiscall asNode::BeforeSave(void) | ?BeforeSave@asNode@@UAEXXZ
    0x403360 | public: virtual char * __thiscall asNode::GetClassNameA(void) | ?GetClassNameA@asNode@@UAEPADXZ
    0x403370 | public: void * __thiscall phSleep::`vector deleting destructor'(unsigned int) | ??_EphSleep@@QAEPAXI@Z
    0x5B0368 | const mmGameManager::`vftable' | ??_7mmGameManager@@6B@
    0x5E0D08 | private: static class mmGameManager * mmGameManager::Instance | ?Instance@mmGameManager@@0PAV1@A
    0x5E0CC8 | class memMemoryAllocator * pShadowMem | ?pShadowMem@@3PAVmemMemoryAllocator@@A
*/

#include "hooking.h"

#include "node/node.h"

class mmGameManager
    : public asNode
{
public:
    char gap18[0x1B8 - sizeof(asNode)];

    mmGameManager();
    ~mmGameManager();

    void ForceReplayUI(void);
    void ForcePopupUI(void);

    inline_var(0x5E0D08, mmGameManager*, Instance);
};

check_size(mmGameManager, 0x1B8);
