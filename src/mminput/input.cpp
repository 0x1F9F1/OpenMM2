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

#include "input.h"

mmInput::mmInput()
{
    stub<member_func_t<void, mmInput>>(0x52A990, this);
}

mmInput::~mmInput()
{
    stub<member_func_t<void, mmInput>>(0x52AB90, this);
}

int mmInput::AttachToPipe(void)
{
    return stub<member_func_t<int, mmInput>>(0x52ACB0, this);
}

void mmInput::Init(int inputDevice)
{
    stub<member_func_t<void, mmInput, int>>(0x52C380, this, inputDevice);
}

void mmInput::Update()
{
    stub<member_func_t<void, mmInput>>(0x52C9B0, this);
}

void mmInput::Reset()
{
    stub<member_func_t<void, mmInput>>(0x52B170, this);
}
