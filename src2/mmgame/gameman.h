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

// 0x5E0CC8 | ?pShadowMem@@3PAVmemMemoryAllocator@@A
inline extern_var(0x5E0CC8, class memMemoryAllocator*, pShadowMem);

class mmGameManager : asNode
{
public:
    // mmGameManager::`vftable' @ 0x5B0368

    // 0x4029E0 | ??0mmGameManager@@QAE@XZ
    inline mmGameManager()
    {
        stub<member_func_t<void, mmGameManager>>(0x4029E0, this);
    }

    // 0x402FA0 | ?BeDone@mmGameManager@@QAEXXZ
    inline void BeDone()
    {
        return stub<member_func_t<void, mmGameManager>>(0x402FA0, this);
    }

    // 0x402FB0 | ?ForcePopupUI@mmGameManager@@QAEXXZ
    inline void ForcePopupUI()
    {
        return stub<member_func_t<void, mmGameManager>>(0x402FB0, this);
    }

    // 0x402FE0 | ?ForceReplayUI@mmGameManager@@QAEXXZ
    inline void ForceReplayUI()
    {
        return stub<member_func_t<void, mmGameManager>>(0x402FE0, this);
    }

    // 0x5E0D08 | ?Instance@mmGameManager@@0PAV1@A
    static inline extern_var(0x5E0D08, class mmGameManager*, Instance);

    // 0x402E40 | ??1mmGameManager@@UAE@XZ
    inline ~mmGameManager() override
    {
        stub<member_func_t<void, mmGameManager>>(0x402E40, this);
    }

    // 0x4031D0 | ?Cull@mmGameManager@@UAEXXZ
    inline void Cull() override
    {
        return stub<member_func_t<void, mmGameManager>>(0x4031D0, this);
    }

    // 0x403000 | ?Update@mmGameManager@@UAEXXZ
    inline void Update() override
    {
        return stub<member_func_t<void, mmGameManager>>(0x403000, this);
    }

    // 0x402E30 | ?Reset@mmGameManager@@UAEXXZ
    inline void Reset() override
    {
        return stub<member_func_t<void, mmGameManager>>(0x402E30, this);
    }
};
