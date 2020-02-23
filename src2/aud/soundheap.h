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
    aud:soundheap

    0x5A5E90 | public: class audSoundHeap * __thiscall audSoundHeap::Create(class audSoundHeap *,int) | ?Create@audSoundHeap@@QAEPAV1@PAV1@H@Z
    0x5A5EB0 | public: class audSoundHeap * __thiscall audSoundHeap::CreateNodeList(class audSoundHeap *,int,int) | ?CreateNodeList@audSoundHeap@@QAEPAV1@PAV1@HH@Z
    0x5A5F90 | public: class audSoundBuffer * __thiscall audSoundHeap::ReserveBuffer(int) | ?ReserveBuffer@audSoundHeap@@QAEPAVaudSoundBuffer@@H@Z
    0x5A6010 | public: bool __thiscall audSoundHeap::ReleaseBuffer(class audSoundBuffer *) | ?ReleaseBuffer@audSoundHeap@@QAE_NPAVaudSoundBuffer@@@Z
    0x5A6080 | public: void __thiscall audSoundHeap::Destroy(void) | ?Destroy@audSoundHeap@@QAEXXZ
    0x5A6090 | public: bool __thiscall audSoundHeap::SetBottomOfTopStack(void *) | ?SetBottomOfTopStack@audSoundHeap@@QAE_NPAX@Z
    0x5A60D0 | public: bool __thiscall audSoundHeap::SetTopOfBottomStack(void *) | ?SetTopOfBottomStack@audSoundHeap@@QAE_NPAX@Z
    0x5A6110 | public: class audSoundBuffer * __thiscall audSoundHeap::GetSoundBufferList(void) | ?GetSoundBufferList@audSoundHeap@@QAEPAVaudSoundBuffer@@XZ
    0x5A6120 | public: void * __thiscall audSoundHeap::GetTop(void) | ?GetTop@audSoundHeap@@QAEPAXXZ
    0x5A6130 | public: void * __thiscall audSoundHeap::GetBotttomOfTopStack(void) | ?GetBotttomOfTopStack@audSoundHeap@@QAEPAXXZ
    0x5A6140 | public: void * __thiscall audSoundHeap::GetTopOfBottomStack(void) | ?GetTopOfBottomStack@audSoundHeap@@QAEPAXXZ
    0x5A6150 | public: void * __thiscall audSoundHeap::GetBottom(void) | ?GetBottom@audSoundHeap@@QAEPAXXZ
*/

class audSoundHeap
{
public:
    // 0x5A5E90 | ?Create@audSoundHeap@@QAEPAV1@PAV1@H@Z
    inline class audSoundHeap* Create(class audSoundHeap* arg1, i32 arg2)
    {
        return stub<member_func_t<class audSoundHeap*, audSoundHeap, class audSoundHeap*, i32>>(
            0x5A5E90, this, arg1, arg2);
    }

    // 0x5A5EB0 | ?CreateNodeList@audSoundHeap@@QAEPAV1@PAV1@HH@Z
    inline class audSoundHeap* CreateNodeList(class audSoundHeap* arg1, i32 arg2, i32 arg3)
    {
        return stub<member_func_t<class audSoundHeap*, audSoundHeap, class audSoundHeap*, i32, i32>>(
            0x5A5EB0, this, arg1, arg2, arg3);
    }

    // 0x5A5F90 | ?ReserveBuffer@audSoundHeap@@QAEPAVaudSoundBuffer@@H@Z
    inline class audSoundBuffer* ReserveBuffer(i32 arg1)
    {
        return stub<member_func_t<class audSoundBuffer*, audSoundHeap, i32>>(0x5A5F90, this, arg1);
    }

    // 0x5A6010 | ?ReleaseBuffer@audSoundHeap@@QAE_NPAVaudSoundBuffer@@@Z
    inline bool ReleaseBuffer(class audSoundBuffer* arg1)
    {
        return stub<member_func_t<bool, audSoundHeap, class audSoundBuffer*>>(0x5A6010, this, arg1);
    }

    // 0x5A6080 | ?Destroy@audSoundHeap@@QAEXXZ
    inline void Destroy()
    {
        return stub<member_func_t<void, audSoundHeap>>(0x5A6080, this);
    }

    // 0x5A6090 | ?SetBottomOfTopStack@audSoundHeap@@QAE_NPAX@Z
    inline bool SetBottomOfTopStack(void* arg1)
    {
        return stub<member_func_t<bool, audSoundHeap, void*>>(0x5A6090, this, arg1);
    }

    // 0x5A60D0 | ?SetTopOfBottomStack@audSoundHeap@@QAE_NPAX@Z
    inline bool SetTopOfBottomStack(void* arg1)
    {
        return stub<member_func_t<bool, audSoundHeap, void*>>(0x5A60D0, this, arg1);
    }

    // 0x5A6110 | ?GetSoundBufferList@audSoundHeap@@QAEPAVaudSoundBuffer@@XZ
    inline class audSoundBuffer* GetSoundBufferList()
    {
        return stub<member_func_t<class audSoundBuffer*, audSoundHeap>>(0x5A6110, this);
    }

    // 0x5A6120 | ?GetTop@audSoundHeap@@QAEPAXXZ
    inline void* GetTop()
    {
        return stub<member_func_t<void*, audSoundHeap>>(0x5A6120, this);
    }

    // 0x5A6130 | ?GetBotttomOfTopStack@audSoundHeap@@QAEPAXXZ
    inline void* GetBotttomOfTopStack()
    {
        return stub<member_func_t<void*, audSoundHeap>>(0x5A6130, this);
    }

    // 0x5A6140 | ?GetTopOfBottomStack@audSoundHeap@@QAEPAXXZ
    inline void* GetTopOfBottomStack()
    {
        return stub<member_func_t<void*, audSoundHeap>>(0x5A6140, this);
    }

    // 0x5A6150 | ?GetBottom@audSoundHeap@@QAEPAXXZ
    inline void* GetBottom()
    {
        return stub<member_func_t<void*, audSoundHeap>>(0x5A6150, this);
    }
};
