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
    mmcityinfo:playerdir

    0x526520 | public: __thiscall mmPlayerDirectory::mmPlayerDirectory(void) | ??0mmPlayerDirectory@@QAE@XZ
    0x526560 | public: virtual __thiscall mmPlayerDirectory::~mmPlayerDirectory(void) | ??1mmPlayerDirectory@@UAE@XZ
    0x5265D0 | public: void __thiscall mmPlayerDirectory::NewDirectory(int) | ?NewDirectory@mmPlayerDirectory@@QAEXH@Z
    0x526610 | public: void __thiscall mmPlayerDirectory::SetPlayer(int,char *,char *) | ?SetPlayer@mmPlayerDirectory@@QAEXHPAD0@Z
    0x526640 | public: void __thiscall mmPlayerDirectory::SetLastPlayer(char *) | ?SetLastPlayer@mmPlayerDirectory@@QAEXPAD@Z
    0x526690 | public: char * __thiscall mmPlayerDirectory::GetPlayer(int) | ?GetPlayer@mmPlayerDirectory@@QAEPADH@Z
    0x5266C0 | public: int __thiscall mmPlayerDirectory::GetNumPlayers(void) | ?GetNumPlayers@mmPlayerDirectory@@QAEHXZ
    0x5266D0 | public: char * __thiscall mmPlayerDirectory::GetLastPlayer(void) | ?GetLastPlayer@mmPlayerDirectory@@QAEPADXZ
    0x526700 | public: int __thiscall mmPlayerDirectory::AddPlayer(char *) | ?AddPlayer@mmPlayerDirectory@@QAEHPAD@Z
    0x526830 | private: void __thiscall mmPlayerDirectory::CreatePlayer(char *,char *) | ?CreatePlayer@mmPlayerDirectory@@AAEXPAD0@Z
    0x526930 | public: int __thiscall mmPlayerDirectory::FindPlayer(char *) | ?FindPlayer@mmPlayerDirectory@@QAEHPAD@Z
    0x5269A0 | public: char * __thiscall mmPlayerDirectory::GetFileName(char *) | ?GetFileName@mmPlayerDirectory@@QAEPADPAD@Z
    0x526A30 | public: char * __thiscall mmPlayerDirectory::GetPlayerName(char *) | ?GetPlayerName@mmPlayerDirectory@@QAEPADPAD@Z
    0x526AC0 | public: char * __thiscall mmPlayerDirectory::GetFileName(int) | ?GetFileName@mmPlayerDirectory@@QAEPADH@Z
    0x526AF0 | private: char * __thiscall mmPlayerDirectory::MakeFileName(void) | ?MakeFileName@mmPlayerDirectory@@AAEPADXZ
    0x526BB0 | public: int __thiscall mmPlayerDirectory::RemovePlayer(char *) | ?RemovePlayer@mmPlayerDirectory@@QAEHPAD@Z
    0x526CA0 | public: int __thiscall mmPlayerDirectory::Load(char *) | ?Load@mmPlayerDirectory@@QAEHPAD@Z
    0x526CD0 | public: int __thiscall mmPlayerDirectory::Save(char *,int) | ?Save@mmPlayerDirectory@@QAEHPADH@Z
    0x526D70 | public: int __thiscall mmPlayerDirectory::SaveBinary(char *) | ?SaveBinary@mmPlayerDirectory@@QAEHPAD@Z
    0x526E70 | public: int __thiscall mmPlayerDirectory::LoadBinary(char *) | ?LoadBinary@mmPlayerDirectory@@QAEHPAD@Z
    public: virtual void * __thiscall mmPlayerDirectory::`vector deleting destructor'(unsigned int) | ??_EmmPlayerDirectory@@UAEPAXI@Z
    0x526FB0 | public: virtual void * __thiscall mmPlayerDirectory::`scalar deleting destructor'(unsigned int) | ??_GmmPlayerDirectory@@UAEPAXI@Z
    0x5B522C | const mmPlayerDirectory::`vftable' | ??_7mmPlayerDirectory@@6B@
*/

struct mmPlayerDirectory
    : Base
    , mmInfoBase
{
public:
    // mmPlayerDirectory::`vftable' @ 0x5B522C

    // 0x526520 | ??0mmPlayerDirectory@@QAE@XZ
    mmPlayerDirectory()
    {
        stub<member_func_t<void, mmPlayerDirectory>>(0x526520, this);
    }

    // 0x5265D0 | ?NewDirectory@mmPlayerDirectory@@QAEXH@Z
    void NewDirectory(i32 arg1)
    {
        return stub<member_func_t<void, mmPlayerDirectory, i32>>(0x5265D0, this, arg1);
    }

    // 0x526610 | ?SetPlayer@mmPlayerDirectory@@QAEXHPAD0@Z
    void SetPlayer(i32 arg1, char* arg2, char* arg3)
    {
        return stub<member_func_t<void, mmPlayerDirectory, i32, char*, char*>>(0x526610, this, arg1, arg2, arg3);
    }

    // 0x526640 | ?SetLastPlayer@mmPlayerDirectory@@QAEXPAD@Z
    void SetLastPlayer(char* arg1)
    {
        return stub<member_func_t<void, mmPlayerDirectory, char*>>(0x526640, this, arg1);
    }

    // 0x526690 | ?GetPlayer@mmPlayerDirectory@@QAEPADH@Z
    char* GetPlayer(i32 arg1)
    {
        return stub<member_func_t<char*, mmPlayerDirectory, i32>>(0x526690, this, arg1);
    }

    // 0x5266C0 | ?GetNumPlayers@mmPlayerDirectory@@QAEHXZ
    i32 GetNumPlayers()
    {
        return stub<member_func_t<i32, mmPlayerDirectory>>(0x5266C0, this);
    }

    // 0x5266D0 | ?GetLastPlayer@mmPlayerDirectory@@QAEPADXZ
    char* GetLastPlayer()
    {
        return stub<member_func_t<char*, mmPlayerDirectory>>(0x5266D0, this);
    }

    // 0x526700 | ?AddPlayer@mmPlayerDirectory@@QAEHPAD@Z
    i32 AddPlayer(char* arg1)
    {
        return stub<member_func_t<i32, mmPlayerDirectory, char*>>(0x526700, this, arg1);
    }

    // 0x526830 | ?CreatePlayer@mmPlayerDirectory@@AAEXPAD0@Z
    void CreatePlayer(char* arg1, char* arg2)
    {
        return stub<member_func_t<void, mmPlayerDirectory, char*, char*>>(0x526830, this, arg1, arg2);
    }

    // 0x526930 | ?FindPlayer@mmPlayerDirectory@@QAEHPAD@Z
    i32 FindPlayer(char* arg1)
    {
        return stub<member_func_t<i32, mmPlayerDirectory, char*>>(0x526930, this, arg1);
    }

    // 0x5269A0 | ?GetFileName@mmPlayerDirectory@@QAEPADPAD@Z
    char* GetFileName(char* arg1)
    {
        return stub<member_func_t<char*, mmPlayerDirectory, char*>>(0x5269A0, this, arg1);
    }

    // 0x526A30 | ?GetPlayerName@mmPlayerDirectory@@QAEPADPAD@Z
    char* GetPlayerName(char* arg1)
    {
        return stub<member_func_t<char*, mmPlayerDirectory, char*>>(0x526A30, this, arg1);
    }

    // 0x526AC0 | ?GetFileName@mmPlayerDirectory@@QAEPADH@Z
    char* GetFileName(i32 arg1)
    {
        return stub<member_func_t<char*, mmPlayerDirectory, i32>>(0x526AC0, this, arg1);
    }

    // 0x526AF0 | ?MakeFileName@mmPlayerDirectory@@AAEPADXZ
    char* MakeFileName()
    {
        return stub<member_func_t<char*, mmPlayerDirectory>>(0x526AF0, this);
    }

    // 0x526BB0 | ?RemovePlayer@mmPlayerDirectory@@QAEHPAD@Z
    i32 RemovePlayer(char* arg1)
    {
        return stub<member_func_t<i32, mmPlayerDirectory, char*>>(0x526BB0, this, arg1);
    }

    // 0x526CA0 | ?Load@mmPlayerDirectory@@QAEHPAD@Z
    i32 Load(char* arg1)
    {
        return stub<member_func_t<i32, mmPlayerDirectory, char*>>(0x526CA0, this, arg1);
    }

    // 0x526CD0 | ?Save@mmPlayerDirectory@@QAEHPADH@Z
    i32 Save(char* arg1, i32 arg2)
    {
        return stub<member_func_t<i32, mmPlayerDirectory, char*, i32>>(0x526CD0, this, arg1, arg2);
    }

    // 0x526D70 | ?SaveBinary@mmPlayerDirectory@@QAEHPAD@Z
    i32 SaveBinary(char* arg1)
    {
        return stub<member_func_t<i32, mmPlayerDirectory, char*>>(0x526D70, this, arg1);
    }

    // 0x526E70 | ?LoadBinary@mmPlayerDirectory@@QAEHPAD@Z
    i32 LoadBinary(char* arg1)
    {
        return stub<member_func_t<i32, mmPlayerDirectory, char*>>(0x526E70, this, arg1);
    }

    // 0x526560 | ??1mmPlayerDirectory@@UAE@XZ
    virtual ~mmPlayerDirectory()
    {
        stub<member_func_t<void, mmPlayerDirectory>>(0x526560, this);
    }
};
