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
    aud:soundbuffer

    0x5A6160 | public: class audSoundBuffer * __thiscall audSoundBuffer::Create(enum audSoundBuffer::SOUNDBUFFERTYPE,int) | ?Create@audSoundBuffer@@QAEPAV1@W4SOUNDBUFFERTYPE@1@H@Z
    0x5A61F0 | public: void __thiscall audSoundBuffer::Init(enum audSoundBuffer::SOUNDBUFFERTYPE,int,void *) | ?Init@audSoundBuffer@@QAEXW4SOUNDBUFFERTYPE@1@HPAX@Z
    0x5A6240 | public: void __thiscall audSoundBuffer::Destroy(void) | ?Destroy@audSoundBuffer@@QAEXXZ
    0x5A6260 | public: int __thiscall audSoundBuffer::GetSize(void) | ?GetSize@audSoundBuffer@@QAEHXZ
    0x5A6270 | public: enum audSoundBuffer::SOUNDBUFFERTYPE __thiscall audSoundBuffer::GetType(void) | ?GetType@audSoundBuffer@@QAE?AW4SOUNDBUFFERTYPE@1@XZ
    0x5A6280 | public: bool __thiscall audSoundBuffer::BytesAdded(int) | ?BytesAdded@audSoundBuffer@@QAE_NH@Z
    0x5A6300 | public: bool __thiscall audSoundBuffer::BytesRemoved(int) | ?BytesRemoved@audSoundBuffer@@QAE_NH@Z
    0x5A6370 | public: void __thiscall audSoundBuffer::SetIndex1(int) | ?SetIndex1@audSoundBuffer@@QAEXH@Z
    0x5A63A0 | public: void __thiscall audSoundBuffer::SetIndex2(int) | ?SetIndex2@audSoundBuffer@@QAEXH@Z
    0x5A63D0 | public: void __thiscall audSoundBuffer::SetExtra(int) | ?SetExtra@audSoundBuffer@@QAEXH@Z
    0x5A63E0 | public: void __thiscall audSoundBuffer::SetSize(int) | ?SetSize@audSoundBuffer@@QAEXH@Z
    0x5A63F0 | public: void __thiscall audSoundBuffer::SetType(enum audSoundBuffer::SOUNDBUFFERTYPE) | ?SetType@audSoundBuffer@@QAEXW4SOUNDBUFFERTYPE@1@@Z
    0x5A6400 | public: int __thiscall audSoundBuffer::GetIndex1(void) | ?GetIndex1@audSoundBuffer@@QAEHXZ
    0x5A6410 | public: int __thiscall audSoundBuffer::GetIndex2(void) | ?GetIndex2@audSoundBuffer@@QAEHXZ
    0x5A6420 | public: int __thiscall audSoundBuffer::GetExtra(void) | ?GetExtra@audSoundBuffer@@QAEHXZ
    0x5A6430 | public: void * __thiscall audSoundBuffer::GetDataPtr(void) | ?GetDataPtr@audSoundBuffer@@QAEPAXXZ
    0x5A6440 | public: void __thiscall audSoundBuffer::SetDataPtr(void *) | ?SetDataPtr@audSoundBuffer@@QAEXPAX@Z
    0x5A6450 | public: struct adpcm_state * __thiscall audSoundBuffer::GetAdpcmState(void) | ?GetAdpcmState@audSoundBuffer@@QAEPAUadpcm_state@@XZ
    0x5A6460 | public: void __thiscall audSoundBuffer::SetAdpcmState(struct adpcm_state *) | ?SetAdpcmState@audSoundBuffer@@QAEXPAUadpcm_state@@@Z
    0x5A6470 | public: void __thiscall audSoundBuffer::SetIndexes(int,int) | ?SetIndexes@audSoundBuffer@@QAEXHH@Z
    0x5A64B0 | public: bool __thiscall audSoundBuffer::IsFull(void) | ?IsFull@audSoundBuffer@@QAE_NXZ
    0x5A64D0 | public: bool __thiscall audSoundBuffer::IsEmpty(void) | ?IsEmpty@audSoundBuffer@@QAE_NXZ
    0x5A64E0 | public: int __thiscall audSoundBuffer::Used(void) | ?Used@audSoundBuffer@@QAEHXZ
    0x5A64F0 | public: int __thiscall audSoundBuffer::Unused(void) | ?Unused@audSoundBuffer@@QAEHXZ
*/

class audSoundBuffer
{
public:
    // 0x5A6160 | ?Create@audSoundBuffer@@QAEPAV1@W4SOUNDBUFFERTYPE@1@H@Z
    class audSoundBuffer* Create(enum audSoundBuffer::SOUNDBUFFERTYPE arg1, i32 arg2)
    {
        return stub<member_func_t<class audSoundBuffer*, audSoundBuffer, enum audSoundBuffer::SOUNDBUFFERTYPE, i32>>(
            0x5A6160, this, arg1, arg2);
    }

    // 0x5A61F0 | ?Init@audSoundBuffer@@QAEXW4SOUNDBUFFERTYPE@1@HPAX@Z
    void Init(enum audSoundBuffer::SOUNDBUFFERTYPE arg1, i32 arg2, void* arg3)
    {
        return stub<member_func_t<void, audSoundBuffer, enum audSoundBuffer::SOUNDBUFFERTYPE, i32, void*>>(
            0x5A61F0, this, arg1, arg2, arg3);
    }

    // 0x5A6240 | ?Destroy@audSoundBuffer@@QAEXXZ
    void Destroy()
    {
        return stub<member_func_t<void, audSoundBuffer>>(0x5A6240, this);
    }

    // 0x5A6260 | ?GetSize@audSoundBuffer@@QAEHXZ
    i32 GetSize()
    {
        return stub<member_func_t<i32, audSoundBuffer>>(0x5A6260, this);
    }

    // 0x5A6270 | ?GetType@audSoundBuffer@@QAE?AW4SOUNDBUFFERTYPE@1@XZ
    enum audSoundBuffer::SOUNDBUFFERTYPE GetType()
    {
        return stub<member_func_t<enum audSoundBuffer::SOUNDBUFFERTYPE, audSoundBuffer>>(0x5A6270, this);
    }

    // 0x5A6280 | ?BytesAdded@audSoundBuffer@@QAE_NH@Z
    bool BytesAdded(i32 arg1)
    {
        return stub<member_func_t<bool, audSoundBuffer, i32>>(0x5A6280, this, arg1);
    }

    // 0x5A6300 | ?BytesRemoved@audSoundBuffer@@QAE_NH@Z
    bool BytesRemoved(i32 arg1)
    {
        return stub<member_func_t<bool, audSoundBuffer, i32>>(0x5A6300, this, arg1);
    }

    // 0x5A6370 | ?SetIndex1@audSoundBuffer@@QAEXH@Z
    void SetIndex1(i32 arg1)
    {
        return stub<member_func_t<void, audSoundBuffer, i32>>(0x5A6370, this, arg1);
    }

    // 0x5A63A0 | ?SetIndex2@audSoundBuffer@@QAEXH@Z
    void SetIndex2(i32 arg1)
    {
        return stub<member_func_t<void, audSoundBuffer, i32>>(0x5A63A0, this, arg1);
    }

    // 0x5A63D0 | ?SetExtra@audSoundBuffer@@QAEXH@Z
    void SetExtra(i32 arg1)
    {
        return stub<member_func_t<void, audSoundBuffer, i32>>(0x5A63D0, this, arg1);
    }

    // 0x5A63E0 | ?SetSize@audSoundBuffer@@QAEXH@Z
    void SetSize(i32 arg1)
    {
        return stub<member_func_t<void, audSoundBuffer, i32>>(0x5A63E0, this, arg1);
    }

    // 0x5A63F0 | ?SetType@audSoundBuffer@@QAEXW4SOUNDBUFFERTYPE@1@@Z
    void SetType(enum audSoundBuffer::SOUNDBUFFERTYPE arg1)
    {
        return stub<member_func_t<void, audSoundBuffer, enum audSoundBuffer::SOUNDBUFFERTYPE>>(0x5A63F0, this, arg1);
    }

    // 0x5A6400 | ?GetIndex1@audSoundBuffer@@QAEHXZ
    i32 GetIndex1()
    {
        return stub<member_func_t<i32, audSoundBuffer>>(0x5A6400, this);
    }

    // 0x5A6410 | ?GetIndex2@audSoundBuffer@@QAEHXZ
    i32 GetIndex2()
    {
        return stub<member_func_t<i32, audSoundBuffer>>(0x5A6410, this);
    }

    // 0x5A6420 | ?GetExtra@audSoundBuffer@@QAEHXZ
    i32 GetExtra()
    {
        return stub<member_func_t<i32, audSoundBuffer>>(0x5A6420, this);
    }

    // 0x5A6430 | ?GetDataPtr@audSoundBuffer@@QAEPAXXZ
    void* GetDataPtr()
    {
        return stub<member_func_t<void*, audSoundBuffer>>(0x5A6430, this);
    }

    // 0x5A6440 | ?SetDataPtr@audSoundBuffer@@QAEXPAX@Z
    void SetDataPtr(void* arg1)
    {
        return stub<member_func_t<void, audSoundBuffer, void*>>(0x5A6440, this, arg1);
    }

    // 0x5A6450 | ?GetAdpcmState@audSoundBuffer@@QAEPAUadpcm_state@@XZ
    struct adpcm_state* GetAdpcmState()
    {
        return stub<member_func_t<struct adpcm_state*, audSoundBuffer>>(0x5A6450, this);
    }

    // 0x5A6460 | ?SetAdpcmState@audSoundBuffer@@QAEXPAUadpcm_state@@@Z
    void SetAdpcmState(struct adpcm_state* arg1)
    {
        return stub<member_func_t<void, audSoundBuffer, struct adpcm_state*>>(0x5A6460, this, arg1);
    }

    // 0x5A6470 | ?SetIndexes@audSoundBuffer@@QAEXHH@Z
    void SetIndexes(i32 arg1, i32 arg2)
    {
        return stub<member_func_t<void, audSoundBuffer, i32, i32>>(0x5A6470, this, arg1, arg2);
    }

    // 0x5A64B0 | ?IsFull@audSoundBuffer@@QAE_NXZ
    bool IsFull()
    {
        return stub<member_func_t<bool, audSoundBuffer>>(0x5A64B0, this);
    }

    // 0x5A64D0 | ?IsEmpty@audSoundBuffer@@QAE_NXZ
    bool IsEmpty()
    {
        return stub<member_func_t<bool, audSoundBuffer>>(0x5A64D0, this);
    }

    // 0x5A64E0 | ?Used@audSoundBuffer@@QAEHXZ
    i32 Used()
    {
        return stub<member_func_t<i32, audSoundBuffer>>(0x5A64E0, this);
    }

    // 0x5A64F0 | ?Unused@audSoundBuffer@@QAEHXZ
    i32 Unused()
    {
        return stub<member_func_t<i32, audSoundBuffer>>(0x5A64F0, this);
    }
};
