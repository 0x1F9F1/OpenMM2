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
    zipfile:zutil

    0x574550 | _zlibVersion
    0x574560 | _zError
    0x574580 | void * __cdecl zcalloc(void *,unsigned int,unsigned int) | ?zcalloc@@YAPAXPAXII@Z
    0x5745A0 | void __cdecl zcfree(void *,void *) | ?zcfree@@YAXPAX0@Z
    char const * * z_errmsg | ?z_errmsg@@3PAPBDA
*/

// 0x574550 | _zlibVersion

// 0x574560 | _zError

// 0x574580 | ?zcalloc@@YAPAXPAXII@Z
inline void* zcalloc(void* arg1, uint32_t arg2, uint32_t arg3)
{
    return stub<cdecl_t<void*, void*, uint32_t, uint32_t>>(0x574580, arg1, arg2, arg3);
}

// 0x5745A0 | ?zcfree@@YAXPAX0@Z
inline void zcfree(void* arg1, void* arg2)
{
    return stub<cdecl_t<void, void*, void*>>(0x5745A0, arg1, arg2);
}
