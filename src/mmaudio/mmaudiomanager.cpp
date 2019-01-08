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

#include "mmaudiomanager.h"

#include "core/output.h"
#include "aud/dirsnd.h"

AudManager::AudManager()
{
    MMAUDMGRPTR = this;

    dword38 = 0;
    SpeechContainer = 0;
    Num3DHalBuffers = 0;
    pManager = 0;
    pDirSound = 0;
    SampleRate = 22050;

    bool4A = false;
    bool4B = true;

    dword50 = 1.0f;

    MMAUDMGRPTR = this;
}

#pragma warning (suppress: 4722)
AudManager::~AudManager()
{
    unimplemented;
}

bool AudManager::EnableCD(void)
{
    return stub<member_func_t<bool, AudManager>>(0x5198C0, this);
}

int AudManager::PlayCDTrack(int a1, int a2)
{
    return stub<member_func_t<int, AudManager, int, int>>(0x519960, this, a1, a2);
}

void InitAudioManager(bool enableSound)
{
    return stub<cdecl_t<void, bool>>(0x401E70, enableSound);
}
