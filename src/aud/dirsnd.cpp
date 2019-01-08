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

#include "dirsnd.h"

#include "core/output.h"

DirSnd::DirSnd()
{
    if (DSGlobalPtr)
    {
        Errorf("DirectSound object has already been created!");
    }

    DSGlobalPtr = this;
}

DirSnd::~DirSnd()
{
    if (field_1C)
    {
        field_1C->Release();
    }

    if (lpDSBuffer)
    {
        lpDSBuffer->Release();
    }

    if (lpDS)
    {
        lpDS->Release();
    }

    if (SoundDevices)
    {
        for (int i = 0; i < DeviceCount; ++i)
        {
            mmSoundDriver* device = SoundDevices[i];

            if (device)
            {
                if (device->Name)
                {
                    delete device->Name;
                }

                delete device;
            }
        }

        delete SoundDevices;
    }

    DSGlobalPtr = 0;
}

int DirSnd::InitPrimarySoundBuffer(uint32_t sampleRate, bool enableStero, const char * deviceName)
{
    return stub<member_func_t<int, DirSnd, uint32_t, bool, const char*>>(0x5A5530, this, sampleRate, enableStero, deviceName);
}
