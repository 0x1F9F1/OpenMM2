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
    data:refcount

    0x59AAD0 | protected: __thiscall datRefCount::datRefCount(void) | ??0datRefCount@@IAE@XZ
    0x59AAE0 | protected: virtual __thiscall datRefCount::~datRefCount(void) | ??1datRefCount@@MAE@XZ
    0x59AAF0 | public: int __thiscall datRefCount::IncRef(void) const | ?IncRef@datRefCount@@QBEHXZ
    0x59AB00 | public: int __thiscall datRefCount::DecRef(void) const | ?DecRef@datRefCount@@QBEHXZ
    protected: virtual void * __thiscall datRefCount::`vector deleting destructor'(unsigned int) | ??_EdatRefCount@@MAEPAXI@Z
    0x59AB20 | protected: virtual void * __thiscall datRefCount::`scalar deleting destructor'(unsigned int) | ??_GdatRefCount@@MAEPAXI@Z
    0x5B8740 | const datRefCount::`vftable' | ??_7datRefCount@@6B@
*/

struct datRefCount
{
public:
    // datRefCount::`vftable' @ 0x5B8740

    // 0x59AAD0 | ??0datRefCount@@IAE@XZ
    datRefCount()
    {
        stub<member_func_t<void, datRefCount>>(0x59AAD0, this);
    }

    // 0x59AAF0 | ?IncRef@datRefCount@@QBEHXZ
    i32 IncRef()
    {
        return stub<member_func_t<i32, datRefCount>>(0x59AAF0, this);
    }

    // 0x59AB00 | ?DecRef@datRefCount@@QBEHXZ
    i32 DecRef()
    {
        return stub<member_func_t<i32, datRefCount>>(0x59AB00, this);
    }

    // 0x59AAE0 | ??1datRefCount@@MAE@XZ
    virtual ~datRefCount()
    {
        stub<member_func_t<void, datRefCount>>(0x59AAE0, this);
    }
};
