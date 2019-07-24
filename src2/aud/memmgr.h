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
    aud:memmgr

    0x5A5E20 | public: void __thiscall audMemObj::audMemObjFree(void) | ?audMemObjFree@audMemObj@@QAEXXZ
    0x5A5E30 | public: static class audMemObj * __cdecl audMemMgr::audAlloc(int) | ?audAlloc@audMemMgr@@SAPAVaudMemObj@@H@Z
    0x5A5E70 | public: static bool __cdecl audMemMgr::audFree(class audMemObj *) | ?audFree@audMemMgr@@SA_NPAVaudMemObj@@@Z
*/

class audMemObj
{
public:
    // 0x5A5E20 | ?audMemObjFree@audMemObj@@QAEXXZ
    inline void audMemObjFree()
    {
        return stub<member_func_t<void, audMemObj>>(0x5A5E20, this);
    }
};
