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

#include "matrix34.h"

void Matrix34::Identity()
{
    m00 = 1.0f;
    m01 = 0.0f;
    m02 = 0.0f;

    m10 = 0.0f;
    m11 = 1.0f;
    m12 = 0.0f;

    m20 = 0.0f;
    m21 = 0.0f;
    m22 = 1.0f;

    m30 = 0.0f;
    m31 = 0.0f;
    m32 = 0.0f;
}
