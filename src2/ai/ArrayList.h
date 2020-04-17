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
    ai:ArrayList

    0x543D40 | public: __thiscall CArrayList::~CArrayList(void) | ??1CArrayList@@QAE@XZ
    0x543D50 | public: void __thiscall CArrayList::Append(int) | ?Append@CArrayList@@QAEXH@Z
    0x543DB0 | public: void __thiscall CArrayList::SaveBinary(class Stream *) | ?SaveBinary@CArrayList@@QAEXPAVStream@@@Z
    0x543DE0 | public: void __thiscall CArrayList::ReadBinary(class Stream *) | ?ReadBinary@CArrayList@@QAEXPAVStream@@@Z
*/

class CArrayList
{
public:
    // 0x53BE80 | ??_ECArrayList@@QAEPAXI@Z
    // Skipped (scalar/vector destructor)

    // 0x53C030 | ??0CArrayList@@QAE@XZ
    CArrayList()
    {
        stub<member_func_t<void, CArrayList>>(0x53C030, this);
    }

    // 0x543D40 | ??1CArrayList@@QAE@XZ
    ~CArrayList()
    {
        stub<member_func_t<void, CArrayList>>(0x543D40, this);
    }

    // 0x543D50 | ?Append@CArrayList@@QAEXH@Z
    void Append(i32 arg1)
    {
        return stub<member_func_t<void, CArrayList, i32>>(0x543D50, this, arg1);
    }

    // 0x543DB0 | ?SaveBinary@CArrayList@@QAEXPAVStream@@@Z
    void SaveBinary(class Stream* arg1)
    {
        return stub<member_func_t<void, CArrayList, class Stream*>>(0x543DB0, this, arg1);
    }

    // 0x543DE0 | ?ReadBinary@CArrayList@@QAEXPAVStream@@@Z
    void ReadBinary(class Stream* arg1)
    {
        return stub<member_func_t<void, CArrayList, class Stream*>>(0x543DE0, this, arg1);
    }
};
