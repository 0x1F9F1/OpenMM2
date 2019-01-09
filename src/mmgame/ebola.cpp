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

#include "ebola.h"

#include "minwin.h"

bool FirstRunEula()
{
    bool result = false;

    HMODULE hEbuEula = LoadLibraryA("EBUEula.dll");

    if (hEbuEula)
    {
        auto EBUEula = (int(*)(const char *, const char *, const char *, int)) GetProcAddress(hEbuEula, "EBUEula");

        if (EBUEula)
        {
            char eula[MAX_PATH];
            char warranty[MAX_PATH];

            strcpy_s(eula, "eula.rtf");
            strcpy_s(warranty, "warranty.rtf");

            int response = EBUEula(
                "Software\\Microsoft\\Microsoft Games\\Midtown Madness\\2.0",
                eula,
                (GetFileAttributesA(warranty) != -1 ? warranty : 0),
                1);

            result = response != 0;
        }

        FreeLibrary(hEbuEula);
    }

    return result;
}

void ebolaPlayMovie(char * name)
{
    return stub<cdecl_t<void, char*>>(0x402780, name);
}
