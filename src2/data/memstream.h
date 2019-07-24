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
    data:memstream

    0x4C9280 | public: int __thiscall datMemStream::Read(void *,int) | ?Read@datMemStream@@QAEHPAXH@Z
    0x4C92D0 | public: int __thiscall datMemStream::Write(void const *,int) | ?Write@datMemStream@@QAEHPBXH@Z
    0x4C9330 | public: int __thiscall datMemStream::GetCh(void) | ?GetCh@datMemStream@@QAEHXZ
    0x4C9360 | public: int __thiscall datMemStream::PutCh(unsigned char) | ?PutCh@datMemStream@@QAEHE@Z
    0x4C9390 | public: int __thiscall datMemStream::Close(void) | ?Close@datMemStream@@QAEHXZ
    0x4C93A0 | public: int __thiscall datMemStream::Size(void) | ?Size@datMemStream@@QAEHXZ
*/

class datMemStream
{
public:
    // 0x4C9280 | ?Read@datMemStream@@QAEHPAXH@Z
    inline int32_t Read(void* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, datMemStream, void*, int32_t>>(0x4C9280, this, arg1, arg2);
    }

    // 0x4C92D0 | ?Write@datMemStream@@QAEHPBXH@Z
    inline int32_t Write(void const* arg1, int32_t arg2)
    {
        return stub<member_func_t<int32_t, datMemStream, void const*, int32_t>>(0x4C92D0, this, arg1, arg2);
    }

    // 0x4C9330 | ?GetCh@datMemStream@@QAEHXZ
    inline int32_t GetCh()
    {
        return stub<member_func_t<int32_t, datMemStream>>(0x4C9330, this);
    }

    // 0x4C9360 | ?PutCh@datMemStream@@QAEHE@Z
    inline int32_t PutCh(uint8_t arg1)
    {
        return stub<member_func_t<int32_t, datMemStream, uint8_t>>(0x4C9360, this, arg1);
    }

    // 0x4C9390 | ?Close@datMemStream@@QAEHXZ
    inline int32_t Close()
    {
        return stub<member_func_t<int32_t, datMemStream>>(0x4C9390, this);
    }

    // 0x4C93A0 | ?Size@datMemStream@@QAEHXZ
    inline int32_t Size()
    {
        return stub<member_func_t<int32_t, datMemStream>>(0x4C93A0, this);
    }
};
