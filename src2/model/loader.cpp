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

#include "loader.h"

void modConvertModel(char const* arg1, char const* arg2, bool arg3)
{
    return stub<cdecl_t<void, char const*, char const*, bool>>(0x597BD0, arg1, arg2, arg3);
}

class modModel* modGetModel(char const* arg1, u32 arg2, bool arg3, bool arg4)
{
    return stub<cdecl_t<class modModel*, char const*, u32, bool, bool>>(0x597A70, arg1, arg2, arg3, arg4);
}

define_dummy_symbol(model_loader);
