/*
    OpenMM2 - An Open Source Re-Implementation of Midtown Madness 2
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

#include "network.h"

inline extern_var(0x6B39E0, uint8_t[1024], NetworkBuffer);

asNetwork::asNetwork()
{
    memset(NetworkBuffer, 0, sizeof(NetworkBuffer));
}

asNetwork::~asNetwork()
{
    Logout();
}

void asNetwork::Logout(void)
{
    return stub<member_func_t<void, asNetwork>>(0x5701C0, this);
}
