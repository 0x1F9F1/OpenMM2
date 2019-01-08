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

#include "ageaudio.h"

#include "aud/dirsnd.h"

AudManagerBase::AudManagerBase()
{
    AUDMGRPTR = this;
}

AudManagerBase::~AudManagerBase()
{
    if (pManager)
    {
        ShutDownAudio();
    }

    delete DSGlobalPtr;

    DSGlobalPtr = nullptr;

    AUDMGRPTR = nullptr;
}

void AudManagerBase::ShutDownAudio(void)
{
    return stub<member_func_t<void, AudManagerBase>>(0x50F000, this);
}

void AudManagerBase::Update(void)
{
    return stub<member_func_t<void, AudManagerBase>>(0x50F130, this);
}

void AudManagerBase::UpdatePaused(void)
{
    return stub<member_func_t<void, AudManagerBase>>(0x50F1A0, this);
}
