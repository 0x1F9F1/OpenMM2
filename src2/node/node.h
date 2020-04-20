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

class asNode : asCullable
{
public:
    // asNode::`vftable' @ 0x5B28E8

    // 0x4A0CE0 | ??0asNode@@QAE@XZ
    inline asNode()
    {
        stub<member_func_t<void, asNode>>(0x4A0CE0, this);
    }

    // 0x4A0D70 | ?SetName@asNode@@QAEXPBD@Z
    inline void SetName(char const* arg1)
    {
        return stub<member_func_t<void, asNode, char const*>>(0x4A0D70, this, arg1);
    }

    // 0x4A0E60 | ?AddChild@asNode@@QAEHPAV1@@Z
    inline int32_t AddChild(class asNode* arg1)
    {
        return stub<member_func_t<int32_t, asNode, class asNode*>>(0x4A0E60, this, arg1);
    }

    // 0x4A0EE0 | ?InsertChild@asNode@@QAEHHPAV1@@Z
    inline int32_t InsertChild(int32_t arg1, class asNode* arg2)
    {
        return stub<member_func_t<int32_t, asNode, int32_t, class asNode*>>(0x4A0EE0, this, arg1, arg2);
    }

    // 0x4A0F50 | ?RemoveChild@asNode@@QAEHH@Z
    inline int32_t RemoveChild(int32_t arg1)
    {
        return stub<member_func_t<int32_t, asNode, int32_t>>(0x4A0F50, this, arg1);
    }

    // 0x4A0FD0 | ?RemoveChild@asNode@@QAEHPAV1@@Z
    inline int32_t RemoveChild(class asNode* arg1)
    {
        return stub<member_func_t<int32_t, asNode, class asNode*>>(0x4A0FD0, this, arg1);
    }

    // 0x4A1010 | ?RemoveAllChildren@asNode@@QAEXXZ
    inline void RemoveAllChildren()
    {
        return stub<member_func_t<void, asNode>>(0x4A1010, this);
    }

    // 0x4A1030 | ?GetChild@asNode@@QAEPAV1@H@Z
    inline class asNode* GetChild(int32_t arg1)
    {
        return stub<member_func_t<class asNode*, asNode, int32_t>>(0x4A1030, this, arg1);
    }

    // 0x4A1060 | ?GetNext@asNode@@QAEPAV1@XZ
    inline class asNode* GetNext()
    {
        return stub<member_func_t<class asNode*, asNode>>(0x4A1060, this);
    }

    // 0x4A1070 | ?GetLastChild@asNode@@QAEPAV1@XZ
    inline class asNode* GetLastChild()
    {
        return stub<member_func_t<class asNode*, asNode>>(0x4A1070, this);
    }

    // 0x4A10A0 | ?NumChildren@asNode@@QAEHXZ
    inline int32_t NumChildren()
    {
        return stub<member_func_t<int32_t, asNode>>(0x4A10A0, this);
    }

    // 0x4A10C0 | ?SwitchTo@asNode@@QAEXH@Z
    inline void SwitchTo(int32_t arg1)
    {
        return stub<member_func_t<void, asNode, int32_t>>(0x4A10C0, this, arg1);
    }

    // 0x4A0D00 | ??1asNode@@UAE@XZ
    virtual inline ~asNode()
    {
        stub<member_func_t<void, asNode>>(0x4A0D00, this);
    }

    // 0x4A0DB0 | ?Update@asNode@@UAEXXZ
    virtual inline void Update()
    {
        return stub<member_func_t<void, asNode>>(0x4A0DB0, this);
    }

    // 0x4A0E10 | ?Reset@asNode@@UAEXXZ
    virtual inline void Reset()
    {
        return stub<member_func_t<void, asNode>>(0x4A0E10, this);
    }

    // 0x4A0E30 | ?ResChange@asNode@@UAEXHH@Z
    virtual inline void ResChange(int32_t arg1, int32_t arg2)
    {
        return stub<member_func_t<void, asNode, int32_t, int32_t>>(0x4A0E30, this, arg1, arg2);
    }

    // 0x4A0DD0 | ?UpdatePaused@asNode@@UAEXXZ
    virtual inline void UpdatePaused()
    {
        return stub<member_func_t<void, asNode>>(0x4A0DD0, this);
    }

    // 0x403330 | ?FileIO@asNode@@UAEXAAVdatParser@@@Z
    virtual inline void FileIO(class datParser& arg1)
    {
        return stub<member_func_t<void, asNode, class datParser&>>(0x403330, this, arg1);
    }

    // 0x403340 | ?AfterLoad@asNode@@UAEXXZ
    virtual inline void AfterLoad()
    {
        return stub<member_func_t<void, asNode>>(0x403340, this);
    }

    // 0x403350 | ?BeforeSave@asNode@@UAEXXZ
    virtual inline void BeforeSave()
    {
        return stub<member_func_t<void, asNode>>(0x403350, this);
    }

    // 0x4A11D0 | ?Save@asNode@@UAE_NXZ
    virtual inline bool Save()
    {
        return stub<member_func_t<bool, asNode>>(0x4A11D0, this);
    }

    // 0x4A1120 | ?Load@asNode@@UAE_NXZ
    virtual inline bool Load()
    {
        return stub<member_func_t<bool, asNode>>(0x4A1120, this);
    }

    // 0x407B40 | ?GetClassName@asNode@@UAEPADXZ
    virtual inline char* GetClassName()
    {
        return stub<member_func_t<char*, asNode>>(0x407B40, this);
    }

    // 0x4A0DA0 | ?GetDirName@asNode@@UAEPBDXZ
    virtual inline char const* GetDirName()
    {
        return stub<member_func_t<char const*, asNode>>(0x4A0DA0, this);
    }
};
