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

#include "camera.h"

#include "gfx/rstate.h"

void asCamera::Update()
{
    return stub<member_func_t<void, asCamera>>(0x4A24A0, this);
}

void asCamera::DrawBegin()
{
    gfxRenderState::SetCamera(matrix34D4);
}

void asCamera::DrawEnd()
{
    if (dword14C != 0.0 || dword154 != 0.0 || dword148 == 1 || dword168 > 0)
    {
        dword148 = 0;

        if (dword168)
        {
            dword168 -= 1;
        }
    }
}
