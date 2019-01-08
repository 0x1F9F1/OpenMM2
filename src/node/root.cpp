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

#include "root.h"

#include "linear.h"

void EnableNanSignal(bool enabled)
{
    return stub<cdecl_t<void, bool>>(0x4C51F0, enabled);
}

asRoot::asRoot()
{
    Matrix.Identity();

    asLinearCS::CurrentMatrix = &Matrix;

    Reset();
}

void asRoot::Init(bool nanSignal)
{
    Reset();

    EnableNan = nanSignal;

    EnableNanSignal(nanSignal);
}

bool asRoot::IsPaused()
{
    return Paused;
}

void asRoot::SetPause(bool paused)
{
    Paused = paused;
}

void asRoot::TogglePause()
{
    Paused = !Paused;
}

void asRoot::Update(void)
{
    if (EnableNan)
    {
        EnableNanSignal(true);
    }

    asLinearCS::CurrentMatrix = &Matrix;

    asNode::Update();

    if (ShouldPause)
    {
        ShouldPause = false;
        Paused = true;
    }
}

void asRoot::Reset(void)
{
    Paused = false;
    ShouldPause = false;
}

char* asRoot::GetClassName(void)
{
    return "asRoot";
}
