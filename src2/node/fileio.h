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
    node:fileio

    0x597790 | public: __thiscall asFileIO::asFileIO(void) | ??0asFileIO@@QAE@XZ
    0x5977A0 | public: virtual __thiscall asFileIO::~asFileIO(void) | ??1asFileIO@@UAE@XZ
    0x597800 | protected: virtual bool __thiscall asFileIO::Save(void) | ?Save@asFileIO@@MAE_NXZ
    0x597890 | protected: virtual bool __thiscall asFileIO::Load(void) | ?Load@asFileIO@@MAE_NXZ
    0x597940 | public: void __thiscall asFileIO::SetName(char const *) | ?SetName@asFileIO@@QAEXPBD@Z
    0x597970 | protected: virtual char const * __thiscall asFileIO::GetDirName(void) | ?GetDirName@asFileIO@@MAEPBDXZ
    public: virtual void __thiscall asFileIO::AddWidgets(class bkBank &) | ?AddWidgets@asFileIO@@UAEXAAVbkBank@@@Z
    public: virtual void * __thiscall asFileIO::`vector deleting destructor'(unsigned int) | ??_EasFileIO@@UAEPAXI@Z
    0x597980 | public: virtual void * __thiscall asFileIO::`scalar deleting destructor'(unsigned int) | ??_GasFileIO@@UAEPAXI@Z
    0x5979B0 | protected: virtual void __thiscall asFileIO::FileIO(class datParser &) | ?FileIO@asFileIO@@MAEXAAVdatParser@@@Z
    0x5979C0 | protected: virtual char const * __thiscall asFileIO::GetClassName(void) | ?GetClassName@asFileIO@@MAEPBDXZ
    [thunk]: __thiscall `vcall'{20,{flat}}' }' | ??_9@$BBE@AE
    [thunk]: __thiscall `vcall'{24,{flat}}' }' | ??_9@$BBI@AE
    0x5B871C | const asFileIO::`vftable' | ??_7asFileIO@@6B@
*/

struct asFileIO : Base
{
public:
    // asFileIO::`vftable' @ 0x5B871C

    // 0x597790 | ??0asFileIO@@QAE@XZ
    asFileIO()
    {
        stub<member_func_t<void, asFileIO>>(0x597790, this);
    }

    // 0x597940 | ?SetName@asFileIO@@QAEXPBD@Z
    void SetName(char const* arg1)
    {
        return stub<member_func_t<void, asFileIO, char const*>>(0x597940, this, arg1);
    }

    // 0x5977A0 | ??1asFileIO@@UAE@XZ
    ~asFileIO() override
    {
        stub<member_func_t<void, asFileIO>>(0x5977A0, this);
    }

    // 0x5979B0 | ?FileIO@asFileIO@@MAEXAAVdatParser@@@Z
    virtual void FileIO(class datParser& arg1)
    {
        return stub<member_func_t<void, asFileIO, class datParser&>>(0x5979B0, this, arg1);
    }

    // 0x595AE0 | ?AfterLoad@asFileIO@@MAEXXZ
    virtual void AfterLoad()
    {
        return stub<member_func_t<void, asFileIO>>(0x595AE0, this);
    }

    // 0x595AF0 | ?BeforeSave@asFileIO@@MAEXXZ
    virtual void BeforeSave()
    {
        return stub<member_func_t<void, asFileIO>>(0x595AF0, this);
    }

    // 0x597800 | ?Save@asFileIO@@MAE_NXZ
    virtual bool Save()
    {
        return stub<member_func_t<bool, asFileIO>>(0x597800, this);
    }

    // 0x597890 | ?Load@asFileIO@@MAE_NXZ
    virtual bool Load()
    {
        return stub<member_func_t<bool, asFileIO>>(0x597890, this);
    }

    // 0x597970 | ?GetDirName@asFileIO@@MAEPBDXZ
    virtual char const* GetDirName()
    {
        return stub<member_func_t<char const*, asFileIO>>(0x597970, this);
    }

    // 0x5979C0 | ?GetClassName@asFileIO@@MAEPBDXZ
    virtual char const* GetClassName()
    {
        return stub<member_func_t<char const*, asFileIO>>(0x5979C0, this);
    }
};
