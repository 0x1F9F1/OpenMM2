#include "stdafx.h"
#include "asNode.h"

asNode::asNode()
{
    this->Flags = 3;
    this->Parent = 0;
    this->Children = 0;
    this->Next = 0;
    this->Name = 0;
}

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
    return stub<thiscall_t<bool, asNode>>(0x4A11D0, this);
}

bool asNode::Load(void)
{
    return stub<thiscall_t<bool, asNode>>(0x4A1120, this);
}

char* asNode::GetClassName(void)
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

void asNode::SetName(const char * name)
{
    if (Name)
    {
        free(Name);
    }

    Name = _strdup(name);
}
