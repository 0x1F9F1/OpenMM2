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
    node:node

    0x4A0CE0 | public: __thiscall asNode::asNode(void) | ??0asNode@@QAE@XZ
    0x4A0D00 | public: virtual __thiscall asNode::~asNode(void) | ??1asNode@@UAE@XZ
    0x4A0D70 | public: void __thiscall asNode::SetName(char const *) | ?SetName@asNode@@QAEXPBD@Z
    0x4A0DA0 | public: virtual char const * __thiscall asNode::GetDirName(void) | ?GetDirName@asNode@@UAEPBDXZ
    0x4A0DB0 | public: virtual void __thiscall asNode::Update(void) | ?Update@asNode@@UAEXXZ
    0x4A0DD0 | public: virtual void __thiscall asNode::UpdatePaused(void) | ?UpdatePaused@asNode@@UAEXXZ
    0x4A0E10 | public: virtual void __thiscall asNode::Reset(void) | ?Reset@asNode@@UAEXXZ
    0x4A0E30 | public: virtual void __thiscall asNode::ResChange(int,int) | ?ResChange@asNode@@UAEXHH@Z
    0x4A0E60 | public: int __thiscall asNode::AddChild(class asNode *) | ?AddChild@asNode@@QAEHPAV1@@Z
    0x4A0EE0 | public: int __thiscall asNode::InsertChild(int,class asNode *) | ?InsertChild@asNode@@QAEHHPAV1@@Z
    0x4A0F50 | public: int __thiscall asNode::RemoveChild(int) | ?RemoveChild@asNode@@QAEHH@Z
    0x4A0FD0 | public: int __thiscall asNode::RemoveChild(class asNode *) | ?RemoveChild@asNode@@QAEHPAV1@@Z
    0x4A1010 | public: void __thiscall asNode::RemoveAllChildren(void) | ?RemoveAllChildren@asNode@@QAEXXZ
    0x4A1030 | public: class asNode * __thiscall asNode::GetChild(int) | ?GetChild@asNode@@QAEPAV1@H@Z
    0x4A1060 | public: class asNode * __thiscall asNode::GetNext(void) | ?GetNext@asNode@@QAEPAV1@XZ
    0x4A1070 | public: class asNode * __thiscall asNode::GetLastChild(void) | ?GetLastChild@asNode@@QAEPAV1@XZ
    0x4A10A0 | public: int __thiscall asNode::NumChildren(void) | ?NumChildren@asNode@@QAEHXZ
    0x4A10C0 | public: void __thiscall asNode::SwitchTo(int) | ?SwitchTo@asNode@@QAEXH@Z
    0x4A1120 | public: virtual bool __thiscall asNode::Load(void) | ?Load@asNode@@UAE_NXZ
    0x4A11D0 | public: virtual bool __thiscall asNode::Save(void) | ?Save@asNode@@UAE_NXZ
    public: virtual void __thiscall asNode::AddWidgets(class bkBank &) | ?AddWidgets@asNode@@UAEXAAVbkBank@@@Z
    public: void __thiscall asNode::OpenBrowser(void) | ?OpenBrowser@asNode@@QAEXXZ
    public: virtual void * __thiscall asNode::`scalar deleting destructor'(unsigned int) | ??_GasNode@@UAEPAXI@Z
    0x4A1260 | public: virtual void * __thiscall asNode::`vector deleting destructor'(unsigned int) | ??_EasNode@@UAEPAXI@Z
    [thunk]: __thiscall `vcall'{40,{flat}}' }' | ??_9@$BCI@AE
    [thunk]: __thiscall `vcall'{44,{flat}}' }' | ??_9@$BCM@AE
    0x5B28E8 | const asNode::`vftable' | ??_7asNode@@6B@
*/

#include "cullable.h"
#include "hooking.h"

#undef GetClassName

class datParser;

class asNode
    : public asCullable
{
public:
    asNode* Next {nullptr};
    asNode* Children {nullptr};
    asNode* Parent {nullptr};

    // 0x1 | Enabled
    // 0x400 | Update while paused
    uint32_t Flags {0x3};
    char* Name {nullptr};

    asNode() = default;

    virtual ~asNode() override;

    virtual void Update(void);
    virtual void Reset(void);
    virtual void ResChange(int width, int height);
    virtual void UpdatePaused(void);
    virtual void FileIO(datParser& parser);
    virtual void AfterLoad(void);
    virtual void BeforeSave(void);
    virtual bool Save(void);
    virtual bool Load(void);
    virtual const char* GetClassName(void);
    virtual const char* GetDirName(void);

    int RemoveChild(asNode* child);
    int RemoveChild(int index);
    asNode* GetChild(int index);
    int NumChildren(void);
    void RemoveAllChildren(void);
    int InsertChild(int index, asNode* child);

    int AddChild(asNode* child);

    void SetName(const char* name);
};

check_size(asNode, 0x18);
