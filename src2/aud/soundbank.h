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
    // 0x5A7480 | ?AddFromMemory@audSoundBankHdr@@QAEHPAXPAV1@@Z
    i32 AddFromMemory(void* arg1, class audSoundBankHdr* arg2);

    // 0x5A7470 | ?CreateEmptyBank@audSoundBankHdr@@QAEPAV1@PAPAX@Z
    class audSoundBankHdr* CreateEmptyBank(void** arg1);

    // 0x5A7490 | ?CreateFromFile@audSoundBankHdr@@QAEPAV1@PADPAPAX1@Z
    class audSoundBankHdr* CreateFromFile(char* arg1, void** arg2, void** arg3);

    // 0x5A74A0 | ?CreateFromMemory@audSoundBankHdr@@QAEPAV1@PAXH0HPAU_bank_attrib@@HPAPAX@Z
    class audSoundBankHdr* CreateFromMemory(
        void* arg1, i32 arg2, void* arg3, i32 arg4, struct _bank_attrib* arg5, i32 arg6, void** arg7);

    // 0x5A7460 | ?Destroy@audSoundBankHdr@@QAEXXZ
    void Destroy();

    // 0x5A74C0 | ?GetBankHandle@audSoundBankHdr@@QAEHXZ
    i32 GetBankHandle();

    // 0x5A74B0 | ?GetNumberOfAttribs@audSoundBankHdr@@QAEHXZ
    i32 GetNumberOfAttribs();

    // 0x5A74D0 | ?GetSoundIndex@audSoundBankHdr@@QAEHPAD@Z
    i32 GetSoundIndex(char* arg1);

    // 0x5A7430 | ?Init@audSoundBankHdr@@QAEXXZ
    void Init();
};

check_size(audSoundBankHdr, 0x0);
