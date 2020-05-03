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

#include "meshform.h"

asMeshSetForm::asMeshSetForm()
{
    unimplemented();
}

asMeshSetForm::~asMeshSetForm()
{
    unimplemented();
}

void asMeshSetForm::Cull()
{
    return stub<thiscall_t<void, asMeshSetForm*>>(0x533810, this);
}

void asMeshSetForm::EnableAlpha(bool arg1)
{
    return stub<thiscall_t<void, asMeshSetForm*, bool>>(0x5337D0, this, arg1);
}

void asMeshSetForm::EnableLighting(bool arg1)
{
    return stub<thiscall_t<void, asMeshSetForm*, bool>>(0x5337B0, this, arg1);
}

void asMeshSetForm::SetShape(char* arg1, char* arg2, bool arg3, class Vector3* arg4)
{
    return stub<thiscall_t<void, asMeshSetForm*, char*, char*, bool, class Vector3*>>(
        0x533660, this, arg1, arg2, arg3, arg4);
}

void asMeshSetForm::SetZRead(bool arg1)
{
    return stub<thiscall_t<void, asMeshSetForm*, bool>>(0x533770, this, arg1);
}

void asMeshSetForm::SetZWrite(bool arg1)
{
    return stub<thiscall_t<void, asMeshSetForm*, bool>>(0x533790, this, arg1);
}

void asMeshSetForm::Update()
{
    return stub<thiscall_t<void, asMeshSetForm*>>(0x5337F0, this);
}

define_dummy_symbol(mmeffects_meshform);
