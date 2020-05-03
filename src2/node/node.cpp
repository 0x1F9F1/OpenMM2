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

#include "node.h"

asNode::asNode()
{
    unimplemented();
}

asNode::~asNode()
{
    unimplemented();
}

i32 asNode::AddChild(class asNode* arg1)
{
    return stub<thiscall_t<i32, asNode*, class asNode*>>(0x4A0E60, this, arg1);
}

class asNode* asNode::GetChild(i32 arg1)
{
    return stub<thiscall_t<class asNode*, asNode*, i32>>(0x4A1030, this, arg1);
}

char* asNode::GetClassNameA()
{
    return stub<thiscall_t<char*, asNode*>>(0x403360, this);
}

class asNode* asNode::GetLastChild()
{
    return stub<thiscall_t<class asNode*, asNode*>>(0x4A1070, this);
}

class asNode* asNode::GetNext()
{
    return stub<thiscall_t<class asNode*, asNode*>>(0x4A1060, this);
}

i32 asNode::InsertChild(i32 arg1, class asNode* arg2)
{
    return stub<thiscall_t<i32, asNode*, i32, class asNode*>>(0x4A0EE0, this, arg1, arg2);
}

i32 asNode::NumChildren()
{
    return stub<thiscall_t<i32, asNode*>>(0x4A10A0, this);
}

void asNode::RemoveAllChildren()
{
    return stub<thiscall_t<void, asNode*>>(0x4A1010, this);
}

i32 asNode::RemoveChild(class asNode* arg1)
{
    return stub<thiscall_t<i32, asNode*, class asNode*>>(0x4A0FD0, this, arg1);
}

i32 asNode::RemoveChild(i32 arg1)
{
    return stub<thiscall_t<i32, asNode*, i32>>(0x4A0F50, this, arg1);
}

void asNode::SetName(char const* arg1)
{
    return stub<thiscall_t<void, asNode*, char const*>>(0x4A0D70, this, arg1);
}

void asNode::SwitchTo(i32 arg1)
{
    return stub<thiscall_t<void, asNode*, i32>>(0x4A10C0, this, arg1);
}

void asNode::Update()
{
    return stub<thiscall_t<void, asNode*>>(0x4A0DB0, this);
}

void asNode::Reset()
{
    return stub<thiscall_t<void, asNode*>>(0x4A0E10, this);
}

void asNode::ResChange(i32 arg1, i32 arg2)
{
    return stub<thiscall_t<void, asNode*, i32, i32>>(0x4A0E30, this, arg1, arg2);
}

void asNode::UpdatePaused()
{
    return stub<thiscall_t<void, asNode*>>(0x4A0DD0, this);
}

void asNode::FileIO(class datParser& arg1)
{
    return stub<thiscall_t<void, asNode*, class datParser&>>(0x403330, this, arg1);
}

void asNode::AfterLoad()
{
    return stub<thiscall_t<void, asNode*>>(0x403340, this);
}

void asNode::BeforeSave()
{
    return stub<thiscall_t<void, asNode*>>(0x403350, this);
}

bool asNode::Save()
{
    return stub<thiscall_t<bool, asNode*>>(0x4A11D0, this);
}

bool asNode::Load()
{
    return stub<thiscall_t<bool, asNode*>>(0x4A1120, this);
}

char* asNode::GetClassName()
{
    return stub<thiscall_t<char*, asNode*>>(0x407B40, this);
}

char const* asNode::GetDirName()
{
    return stub<thiscall_t<char const*, asNode*>>(0x4A0DA0, this);
}

define_dummy_symbol(node_node);
