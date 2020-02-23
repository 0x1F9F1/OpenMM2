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
    aud:soundbank

    0x5A7430 | public: void __thiscall audSoundBankHdr::Init(void) | ?Init@audSoundBankHdr@@QAEXXZ
    0x5A7460 | public: void __thiscall audSoundBankHdr::Destroy(void) | ?Destroy@audSoundBankHdr@@QAEXXZ
    0x5A7470 | public: class audSoundBankHdr * __thiscall audSoundBankHdr::CreateEmptyBank(void * *) | ?CreateEmptyBank@audSoundBankHdr@@QAEPAV1@PAPAX@Z
    0x5A7480 | public: int __thiscall audSoundBankHdr::AddFromMemory(void *,class audSoundBankHdr *) | ?AddFromMemory@audSoundBankHdr@@QAEHPAXPAV1@@Z
    0x5A7490 | public: class audSoundBankHdr * __thiscall audSoundBankHdr::CreateFromFile(char *,void * *,void * *) | ?CreateFromFile@audSoundBankHdr@@QAEPAV1@PADPAPAX1@Z
    0x5A74A0 | public: class audSoundBankHdr * __thiscall audSoundBankHdr::CreateFromMemory(void *,int,void *,int,struct _bank_attrib *,int,void * *) | ?CreateFromMemory@audSoundBankHdr@@QAEPAV1@PAXH0HPAU_bank_attrib@@HPAPAX@Z
    0x5A74B0 | public: int __thiscall audSoundBankHdr::GetNumberOfAttribs(void) | ?GetNumberOfAttribs@audSoundBankHdr@@QAEHXZ
    0x5A74C0 | public: int __thiscall audSoundBankHdr::GetBankHandle(void) | ?GetBankHandle@audSoundBankHdr@@QAEHXZ
    0x5A74D0 | public: int __thiscall audSoundBankHdr::GetSoundIndex(char *) | ?GetSoundIndex@audSoundBankHdr@@QAEHPAD@Z
*/

class audSoundBankHdr
{
public:
    // 0x5A7430 | ?Init@audSoundBankHdr@@QAEXXZ
    inline void Init()
    {
        return stub<member_func_t<void, audSoundBankHdr>>(0x5A7430, this);
    }

    // 0x5A7460 | ?Destroy@audSoundBankHdr@@QAEXXZ
    inline void Destroy()
    {
        return stub<member_func_t<void, audSoundBankHdr>>(0x5A7460, this);
    }

    // 0x5A7470 | ?CreateEmptyBank@audSoundBankHdr@@QAEPAV1@PAPAX@Z
    inline class audSoundBankHdr* CreateEmptyBank(void** arg1)
    {
        return stub<member_func_t<class audSoundBankHdr*, audSoundBankHdr, void**>>(0x5A7470, this, arg1);
    }

    // 0x5A7480 | ?AddFromMemory@audSoundBankHdr@@QAEHPAXPAV1@@Z
    inline i32 AddFromMemory(void* arg1, class audSoundBankHdr* arg2)
    {
        return stub<member_func_t<i32, audSoundBankHdr, void*, class audSoundBankHdr*>>(0x5A7480, this, arg1, arg2);
    }

    // 0x5A7490 | ?CreateFromFile@audSoundBankHdr@@QAEPAV1@PADPAPAX1@Z
    inline class audSoundBankHdr* CreateFromFile(char* arg1, void** arg2, void** arg3)
    {
        return stub<member_func_t<class audSoundBankHdr*, audSoundBankHdr, char*, void**, void**>>(
            0x5A7490, this, arg1, arg2, arg3);
    }

    // 0x5A74A0 | ?CreateFromMemory@audSoundBankHdr@@QAEPAV1@PAXH0HPAU_bank_attrib@@HPAPAX@Z
    inline class audSoundBankHdr* CreateFromMemory(
        void* arg1, i32 arg2, void* arg3, i32 arg4, struct _bank_attrib* arg5, i32 arg6, void** arg7)
    {
        return stub<member_func_t<class audSoundBankHdr*, audSoundBankHdr, void*, i32, void*, i32, struct _bank_attrib*,
            i32, void**>>(0x5A74A0, this, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    }

    // 0x5A74B0 | ?GetNumberOfAttribs@audSoundBankHdr@@QAEHXZ
    inline i32 GetNumberOfAttribs()
    {
        return stub<member_func_t<i32, audSoundBankHdr>>(0x5A74B0, this);
    }

    // 0x5A74C0 | ?GetBankHandle@audSoundBankHdr@@QAEHXZ
    inline i32 GetBankHandle()
    {
        return stub<member_func_t<i32, audSoundBankHdr>>(0x5A74C0, this);
    }

    // 0x5A74D0 | ?GetSoundIndex@audSoundBankHdr@@QAEHPAD@Z
    inline i32 GetSoundIndex(char* arg1)
    {
        return stub<member_func_t<i32, audSoundBankHdr, char*>>(0x5A74D0, this, arg1);
    }
};
