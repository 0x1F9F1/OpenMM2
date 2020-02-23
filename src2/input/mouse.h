/*
    OpenMM1 - An Open Source Re-Implementation of Midtown Madness 2
    Copyright (C) 2020 0x1F9F1

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

#pragma once

/*
    input:mouse

    0x4BB220 | public: static void __cdecl ioMouse::Begin(bool) | ?Begin@ioMouse@@SAX_N@Z
    0x4BB360 | public: static void __cdecl ioMouse::End(void) | ?End@ioMouse@@SAXXZ
    0x4BB3A0 | public: static void __cdecl ioMouse::Update(void) | ?Update@ioMouse@@SAXXZ
    0x6A38B0 | private: static int ioMouse::m_dX | ?m_dX@ioMouse@@0HA
    0x6A38B4 | private: static bool ioMouse::m_HasWheel | ?m_HasWheel@ioMouse@@0_NA
    0x6A38D0 | private: static bool ioMouse::m_UseWindow | ?m_UseWindow@ioMouse@@0_NA
    0x6A38D4 | private: static float ioMouse::m_InvHeight | ?m_InvHeight@ioMouse@@0MA
    0x6A38D8 | private: static int ioMouse::m_Y | ?m_Y@ioMouse@@0HA
    0x6A38DC | private: static int ioMouse::m_X | ?m_X@ioMouse@@0HA
    0x6A38E0 | private: static unsigned int ioMouse::m_Buttons | ?m_Buttons@ioMouse@@0IA
    0x6A38E4 | private: static unsigned int ioMouse::m_LastButtons | ?m_LastButtons@ioMouse@@0IA
    0x6A38E8 | private: static int ioMouse::m_dZ | ?m_dZ@ioMouse@@0HA
    0x6A38EC | private: static float ioMouse::m_InvWidth | ?m_InvWidth@ioMouse@@0MA
    0x6A38F0 | private: static int ioMouse::m_dY | ?m_dY@ioMouse@@0HA
    0x6A38F4 | private: static unsigned int ioMouse::m_WindowButtons | ?m_WindowButtons@ioMouse@@0IA
*/
