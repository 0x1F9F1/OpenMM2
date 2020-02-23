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
    aud:stream

    0x5A4C80 | public: class audStream * __thiscall audStream::Create(class audObject *) | ?Create@audStream@@QAEPAV1@PAVaudObject@@@Z
    0x5A4CC0 | public: void __thiscall audStream::Init(void) | ?Init@audStream@@QAEXXZ
    0x5A4CD0 | public: void __thiscall audStream::Destroy(void) | ?Destroy@audStream@@QAEXXZ
    0x5A4CF0 | public: bool __thiscall audStream::Update(int) | ?Update@audStream@@QAE_NH@Z
    0x5A4E00 | public: bool __thiscall audStream::CloseStream(void) | ?CloseStream@audStream@@QAE_NXZ
    0x5A4E60 | public: int __thiscall audStream::GetCurrentCursor(void) | ?GetCurrentCursor@audStream@@QAEHXZ
    0x5A4E70 | public: void __thiscall audStream::SetBufferSize(int) | ?SetBufferSize@audStream@@QAEXH@Z
    0x5A4E80 | public: int __thiscall audStream::GetBufferSize(void) | ?GetBufferSize@audStream@@QAEHXZ
    0x5A4E90 | public: void __thiscall audStream::SetFileInfo(void *) | ?SetFileInfo@audStream@@QAEXPAX@Z
    0x5A4EA0 | public: bool __thiscall audStream::IsFinished(void) | ?IsFinished@audStream@@QAE_NXZ
    0x5A4EB0 | public: void __thiscall audStream::SetVolume(float) | ?SetVolume@audStream@@QAEXM@Z
    0x5A4EC0 | public: void __thiscall audStream::SetLooping(bool) | ?SetLooping@audStream@@QAEX_N@Z
*/

class audStream
{
public:
    // 0x5A4C80 | ?Create@audStream@@QAEPAV1@PAVaudObject@@@Z
    inline class audStream* Create(class audObject* arg1)
    {
        return stub<member_func_t<class audStream*, audStream, class audObject*>>(0x5A4C80, this, arg1);
    }

    // 0x5A4CC0 | ?Init@audStream@@QAEXXZ
    inline void Init()
    {
        return stub<member_func_t<void, audStream>>(0x5A4CC0, this);
    }

    // 0x5A4CD0 | ?Destroy@audStream@@QAEXXZ
    inline void Destroy()
    {
        return stub<member_func_t<void, audStream>>(0x5A4CD0, this);
    }

    // 0x5A4CF0 | ?Update@audStream@@QAE_NH@Z
    inline bool Update(i32 arg1)
    {
        return stub<member_func_t<bool, audStream, i32>>(0x5A4CF0, this, arg1);
    }

    // 0x5A4E00 | ?CloseStream@audStream@@QAE_NXZ
    inline bool CloseStream()
    {
        return stub<member_func_t<bool, audStream>>(0x5A4E00, this);
    }

    // 0x5A4E60 | ?GetCurrentCursor@audStream@@QAEHXZ
    inline i32 GetCurrentCursor()
    {
        return stub<member_func_t<i32, audStream>>(0x5A4E60, this);
    }

    // 0x5A4E70 | ?SetBufferSize@audStream@@QAEXH@Z
    inline void SetBufferSize(i32 arg1)
    {
        return stub<member_func_t<void, audStream, i32>>(0x5A4E70, this, arg1);
    }

    // 0x5A4E80 | ?GetBufferSize@audStream@@QAEHXZ
    inline i32 GetBufferSize()
    {
        return stub<member_func_t<i32, audStream>>(0x5A4E80, this);
    }

    // 0x5A4E90 | ?SetFileInfo@audStream@@QAEXPAX@Z
    inline void SetFileInfo(void* arg1)
    {
        return stub<member_func_t<void, audStream, void*>>(0x5A4E90, this, arg1);
    }

    // 0x5A4EA0 | ?IsFinished@audStream@@QAE_NXZ
    inline bool IsFinished()
    {
        return stub<member_func_t<bool, audStream>>(0x5A4EA0, this);
    }

    // 0x5A4EB0 | ?SetVolume@audStream@@QAEXM@Z
    inline void SetVolume(f32 arg1)
    {
        return stub<member_func_t<void, audStream, f32>>(0x5A4EB0, this, arg1);
    }

    // 0x5A4EC0 | ?SetLooping@audStream@@QAEX_N@Z
    inline void SetLooping(bool arg1)
    {
        return stub<member_func_t<void, audStream, bool>>(0x5A4EC0, this, arg1);
    }
};
