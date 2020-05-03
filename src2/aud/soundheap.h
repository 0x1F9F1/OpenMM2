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
    class audSoundHeap* Create(class audSoundHeap* arg1, i32 arg2);

    // 0x5A5EB0 | ?CreateNodeList@audSoundHeap@@QAEPAV1@PAV1@HH@Z
    class audSoundHeap* CreateNodeList(class audSoundHeap* arg1, i32 arg2, i32 arg3);

    // 0x5A6080 | ?Destroy@audSoundHeap@@QAEXXZ
    void Destroy();

    // 0x5A6150 | ?GetBottom@audSoundHeap@@QAEPAXXZ
    void* GetBottom();

    // 0x5A6130 | ?GetBotttomOfTopStack@audSoundHeap@@QAEPAXXZ
    void* GetBotttomOfTopStack();

    // 0x5A6110 | ?GetSoundBufferList@audSoundHeap@@QAEPAVaudSoundBuffer@@XZ
    class audSoundBuffer* GetSoundBufferList();

    // 0x5A6120 | ?GetTop@audSoundHeap@@QAEPAXXZ
    void* GetTop();

    // 0x5A6140 | ?GetTopOfBottomStack@audSoundHeap@@QAEPAXXZ
    void* GetTopOfBottomStack();

    // 0x5A6010 | ?ReleaseBuffer@audSoundHeap@@QAE_NPAVaudSoundBuffer@@@Z
    bool ReleaseBuffer(class audSoundBuffer* arg1);

    // 0x5A5F90 | ?ReserveBuffer@audSoundHeap@@QAEPAVaudSoundBuffer@@H@Z
    class audSoundBuffer* ReserveBuffer(i32 arg1);

    // 0x5A6090 | ?SetBottomOfTopStack@audSoundHeap@@QAE_NPAX@Z
    bool SetBottomOfTopStack(void* arg1);

    // 0x5A60D0 | ?SetTopOfBottomStack@audSoundHeap@@QAE_NPAX@Z
    bool SetTopOfBottomStack(void* arg1);
};

check_size(audSoundHeap, 0x0);
