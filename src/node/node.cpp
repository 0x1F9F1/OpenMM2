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

#include "node.h"
#include "core/output.h"

asNode::~asNode()
{
    if (Parent)
    {
        Parent->RemoveChild(this);
    }

    RemoveAllChildren();

    if (Name)
    {
        free(Name);
    }
}

void asNode::Update(void)
{
    for (asNode* i = Children; i; i = i->Next)
    {
        if (i->Flags & 1)
        {
            i->Update();
        }
    }
}

void asNode::Reset(void)
{
    for (asNode* i = Children; i; i = i->Next)
    {
        i->Reset();
    }
}

void asNode::ResChange(int width, int height)
{
    for (asNode* i = Children; i; i = i->Next)
    {
        i->ResChange(width, height);
    }
}

void asNode::UpdatePaused(void)
{
    for (asNode* i = Children; i; i = i->Next)
    {
        if (i->Flags & 1)
        {
            if (i->Flags & 0x400)
            {
                i->Update();
            }
            else
            {
                i->UpdatePaused();
            }
        }
    }
}

void asNode::FileIO(datParser& parser)
{
    (void)(parser);
}

void asNode::AfterLoad(void)
{
}

void asNode::BeforeSave(void)
{
}

bool asNode::Save(void)
{
    return stub<member_func_t<bool, asNode>>(0x4A11D0, this);
}

bool asNode::Load(void)
{
    return stub<member_func_t<bool, asNode>>(0x4A1120, this);
}

const char* asNode::GetClassName(void)
{
    return "asNode";
}

const char* asNode::GetDirName(void)
{
    return "tune";
}

int asNode::RemoveChild(asNode * child)
{
    int index = 1;

    for (asNode* i = Children; i; i = i->Next)
    {
        if (i == child)
        {
            return RemoveChild(index);
        }

        ++index;
    }

    return 0;
}

int asNode::RemoveChild(int index)
{
    if (Children && index >= 1 && index <= NumChildren())
    {
        asNode* child = GetChild(index);

        if (index == 1)
        {
            Children = Children->Next;

            child->Next = 0;
            child->Parent = 0;
        }
        else
        {
            GetChild(index - 1)->Next = child->Next;

            child->Next = 0;
            child->Parent = 0;
        }

        return 1;
    }

    return 0;
}

asNode * asNode::GetChild(int index)
{
    int count = 1;

    for (asNode* i = Children; i; i = i->Next)
    {
        if (count == index)
        {
            return i;
        }

        ++count;
    }

    return nullptr;
}

int asNode::NumChildren(void)
{
    int result = 0;

    for (asNode* i = Children; i; i = i->Next)
    {
        ++result;
    }

    return result;
}

void asNode::RemoveAllChildren(void)
{
    while (Children)
    {
        RemoveChild(1);
    }
}

int asNode::InsertChild(int index, asNode * child)
{
    if (child && index >= 1 && index <= NumChildren() + 1)
    {
        if (index == 1)
        {
            child->Next = Children;
            Children = child;
            child->Parent = this;
        }
        else
        {
            asNode* oldChild = GetChild(index - 1);

            child->Next = oldChild->Next;
            oldChild->Next = child;
            child->Parent = this;
        }

        return 1;
    }

    return 0;
}

int asNode::AddChild(asNode * child)
{
    if (!child)
    {
        Errorf("asNode::AddChild()- N=0");

        return 0;
    }

    if (child->Parent)
    {
        Errorf("asNode::AddChild()- Node already parented");

        return 0;
    }

    child->Parent = this;
    child->Next = 0;

    if (Children)
    {
        asNode* last = this->Children;

        while (last->Next)
        {
            last = last->Next;
        }

        last->Next = child;
    }
    else
    {
        Children = child;
    }

    return 1;
}

void asNode::SetName(const char * name)
{
    if (Name)
    {
        free(Name);
    }

    Name = _strdup(name);
}
