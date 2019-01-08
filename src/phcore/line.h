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

#pragma once

/*
    phcore:line

    public: static void __cdecl phLine::AddLine(class Vector3 const &,class Vector3 const &,unsigned int) | ?AddLine@phLine@@SAXABVVector3@@0I@Z
    public: static void __cdecl phLine::AddBox(class Vector3 const &,class Matrix34 const &,unsigned int) | ?AddBox@phLine@@SAXABVVector3@@ABVMatrix34@@I@Z
    public: static void __cdecl phLine::DrawLines(bool) | ?DrawLines@phLine@@SAX_N@Z
    public: static void __cdecl phLine::AddSphere(class Vector3 const &,float,unsigned int,int) | ?AddSphere@phLine@@SAXABVVector3@@MIH@Z
    public: static struct phLine::LineInfo * phLine::LineVerts | ?LineVerts@phLine@@2PAULineInfo@1@A
    public: static int phLine::NumLineVerts | ?NumLineVerts@phLine@@2HA
    public: static class Matrix34 const * const phLine::WorldMatrix | ?WorldMatrix@phLine@@2PBVMatrix34@@B
*/

#include "hooking.h"
