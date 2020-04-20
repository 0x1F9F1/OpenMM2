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
    model:loader

    0x597A20 | public: static bool __cdecl modModel::ModelAlreadyLoaded(char const *) | ?ModelAlreadyLoaded@modModel@@SA_NPBD@Z
    0x597A40 | public: static void __cdecl modModel::DeleteModelHash(char const *) | ?DeleteModelHash@modModel@@SAXPBD@Z
    0x597A70 | class modModel * __cdecl modGetModel(char const *,unsigned int,bool,bool) | ?modGetModel@@YAPAVmodModel@@PBDI_N1@Z
    0x597BD0 | void __cdecl modConvertModel(char const *,char const *,bool) | ?modConvertModel@@YAXPBD0_N@Z
*/

// 0x597A70 | ?modGetModel@@YAPAVmodModel@@PBDI_N1@Z
inline class modModel* modGetModel(char const* arg1, uint32_t arg2, bool arg3, bool arg4)
{
    return stub<cdecl_t<class modModel*, char const*, uint32_t, bool, bool>>(0x597A70, arg1, arg2, arg3, arg4);
}

// 0x597BD0 | ?modConvertModel@@YAXPBD0_N@Z
inline void modConvertModel(char const* arg1, char const* arg2, bool arg3)
{
    return stub<cdecl_t<void, char const*, char const*, bool>>(0x597BD0, arg1, arg2, arg3);
}
