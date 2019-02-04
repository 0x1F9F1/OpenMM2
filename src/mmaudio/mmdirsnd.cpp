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

#include "mmdirsnd.h"

#include "data/args.h"

#include "mmcityinfo/state.h"

int mmDirSnd::InitPrimarySoundBuffer(uint32_t sampleRate, bool enableStero, const char * deviceName)
{
    return stub<member_func_t<int, mmDirSnd, uint32_t, bool, const char*>>(0x51CD90, this, sampleRate, enableStero, deviceName);
}

mmDirSnd* mmDirSnd::Init(int sampleRate, bool enableStero, int a4, float volume, const char* deviceName, bool enable3D)
{
    sampleRate = 48000;

    datArgParser::Get("samplerate", 0, sampleRate);

    return stub<cdecl_t<mmDirSnd*, int, bool, int, float, const char*, bool>>(0x51CC50, sampleRate, enableStero, a4, volume, deviceName, enable3D);
}

run_once([ ]
{
    create_hook("mmDirSnd::Init", "Fixes no sound issue on startup.", 0x51941D, &mmDirSnd::Init, hook_type::call);
});