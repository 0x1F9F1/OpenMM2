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
    aud:filesystem

    0x5A6930 | public: class audFileSystem * __thiscall audFileSystem::Create(class audManager *) | ?Create@audFileSystem@@QAEPAV1@PAVaudManager@@@Z
    0x5A6960 | public: void __thiscall audFileSystem::Init(void) | ?Init@audFileSystem@@QAEXXZ
    0x5A6980 | public: void __thiscall audFileSystem::Destroy(void) | ?Destroy@audFileSystem@@QAEXXZ
    0x5A69A0 | public: bool __thiscall audFileSystem::FileOpenRead(char *,char *,bool) | ?FileOpenRead@audFileSystem@@QAE_NPAD0_N@Z
    0x5A6B10 | public: void * __thiscall audFileSystem::GetFileHandle(void) | ?GetFileHandle@audFileSystem@@QAEPAXXZ
    0x5A6B20 | public: void __thiscall audFileSystem::FileClose(void) | ?FileClose@audFileSystem@@QAEXXZ
    0x5A6B40 | public: void __thiscall audFileSystem::FileSeek(int,int) | ?FileSeek@audFileSystem@@QAEXHH@Z
    0x5A6B90 | public: int __thiscall audFileSystem::GetFileSize(void) | ?GetFileSize@audFileSystem@@QAEHXZ
    0x5A6BB0 | public: int __thiscall audFileSystem::FileRead(void *,int) | ?FileRead@audFileSystem@@QAEHPAXH@Z
    0x5A6BE0 | public: bool __thiscall audFileSystem::IsOpen(void) | ?IsOpen@audFileSystem@@QAE_NXZ
    0x5A6BF0 | public: bool __thiscall audFileSystem::IsPersistent(void) | ?IsPersistent@audFileSystem@@QAE_NXZ
    0x5A6C00 | public: char * __thiscall audFileSystem::GetName(void) | ?GetName@audFileSystem@@QAEPADXZ
    0x5A6C10 | public: char * __thiscall audFileSystem::GetPath(void) | ?GetPath@audFileSystem@@QAEPADXZ
*/

class audFileSystem
{
public:
    // 0x5A6930 | ?Create@audFileSystem@@QAEPAV1@PAVaudManager@@@Z
    inline class audFileSystem* Create(class audManager* arg1)
    {
        return stub<member_func_t<class audFileSystem*, audFileSystem, class audManager*>>(0x5A6930, this, arg1);
    }

    // 0x5A6960 | ?Init@audFileSystem@@QAEXXZ
    inline void Init()
    {
        return stub<member_func_t<void, audFileSystem>>(0x5A6960, this);
    }

    // 0x5A6980 | ?Destroy@audFileSystem@@QAEXXZ
    inline void Destroy()
    {
        return stub<member_func_t<void, audFileSystem>>(0x5A6980, this);
    }

    // 0x5A69A0 | ?FileOpenRead@audFileSystem@@QAE_NPAD0_N@Z
    inline bool FileOpenRead(char* arg1, char* arg2, bool arg3)
    {
        return stub<member_func_t<bool, audFileSystem, char*, char*, bool>>(0x5A69A0, this, arg1, arg2, arg3);
    }

    // 0x5A6B10 | ?GetFileHandle@audFileSystem@@QAEPAXXZ
    inline void* GetFileHandle()
    {
        return stub<member_func_t<void*, audFileSystem>>(0x5A6B10, this);
    }

    // 0x5A6B20 | ?FileClose@audFileSystem@@QAEXXZ
    inline void FileClose()
    {
        return stub<member_func_t<void, audFileSystem>>(0x5A6B20, this);
    }

    // 0x5A6B40 | ?FileSeek@audFileSystem@@QAEXHH@Z
    inline void FileSeek(i32 arg1, i32 arg2)
    {
        return stub<member_func_t<void, audFileSystem, i32, i32>>(0x5A6B40, this, arg1, arg2);
    }

    // 0x5A6B90 | ?GetFileSize@audFileSystem@@QAEHXZ
    inline i32 GetFileSize()
    {
        return stub<member_func_t<i32, audFileSystem>>(0x5A6B90, this);
    }

    // 0x5A6BB0 | ?FileRead@audFileSystem@@QAEHPAXH@Z
    inline i32 FileRead(void* arg1, i32 arg2)
    {
        return stub<member_func_t<i32, audFileSystem, void*, i32>>(0x5A6BB0, this, arg1, arg2);
    }

    // 0x5A6BE0 | ?IsOpen@audFileSystem@@QAE_NXZ
    inline bool IsOpen()
    {
        return stub<member_func_t<bool, audFileSystem>>(0x5A6BE0, this);
    }

    // 0x5A6BF0 | ?IsPersistent@audFileSystem@@QAE_NXZ
    inline bool IsPersistent()
    {
        return stub<member_func_t<bool, audFileSystem>>(0x5A6BF0, this);
    }

    // 0x5A6C00 | ?GetName@audFileSystem@@QAEPADXZ
    inline char* GetName()
    {
        return stub<member_func_t<char*, audFileSystem>>(0x5A6C00, this);
    }

    // 0x5A6C10 | ?GetPath@audFileSystem@@QAEPADXZ
    inline char* GetPath()
    {
        return stub<member_func_t<char*, audFileSystem>>(0x5A6C10, this);
    }
};
